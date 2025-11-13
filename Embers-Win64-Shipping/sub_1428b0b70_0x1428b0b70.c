// 函数: sub_1428b0b70
// 地址: 0x1428b0b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rax = sub_142890ec0(arg1)
int128_t* rdi = rax
*(rax + 0x180) = 0
sub_1428fc900(arg2, rax)
sub_1428fc900(&arg2[8], &rdi[8])
int128_t zmm1 = rdi[1]
rdi[0x10] = *rdi
int128_t zmm0 = rdi[2]
rdi[0x11] = zmm1
zmm1 = rdi[3]
rdi[0x12] = zmm0
zmm0 = rdi[4]
rdi[0x13] = zmm1
zmm1 = rdi[5]
rdi[0x14] = zmm0
zmm0 = rdi[6]
rdi[0x15] = zmm1
zmm1 = rdi[7]
rdi[0x16] = zmm0
rdi[0x17] = zmm1
return 1
