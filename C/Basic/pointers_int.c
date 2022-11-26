#include <stdio.h>

int main(int argc, char *argv[])
{
  int nums1[5] = { 1, 2, 3, 4, 5 };

  int *nums2 = nums1;

  printf("nums1 --> %p\n", nums1);
  printf("nums2 --> %p\n\n", nums2);

  nums2 += 2;

  printf("nums1 --> %p\n", nums1);
  printf("nums2 --> %p\n\n", nums2);

  *nums2 = 100;

  for(int i=0; i<5; i++)
    printf("%d ", nums1[i]);
  
  return 0;
}
