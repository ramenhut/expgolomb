
#include "golomb.h"
#include "stdio.h"
#include "stdlib.h"

void test_unsigned_codes() {
  for (uint32 i = 0; i < 65536; i++) {
    uint8 count = 0;
    uint32 encoded_value = encode_unsigned_golomb_value(i, &count);
    uint32 result = decode_unsigned_golomb_value(encoded_value, &count);

    if (result != i) {
      printf("Error coding unsigned value %i (coded: 0x%x)\n", i, encoded_value);
      return;
    }
  }
  printf("Unsigned values coded successfully.\n");
}

void test_signed_codes() {
  for (int32 i = -32768; i < 32768; i++) {
    uint8 count = 0;
    uint32 encoded_value = encode_signed_golomb_value(i, &count);
    int32 result = decode_signed_golomb_value(encoded_value, &count);

    if (result != i) {
      printf("Error coding value %i (coded: 0x%x)\n", i, encoded_value);
      return;
    }
  }
  printf("Signed values coded successfully.\n");
}

void main() {
  test_unsigned_codes();
  test_signed_codes();
}