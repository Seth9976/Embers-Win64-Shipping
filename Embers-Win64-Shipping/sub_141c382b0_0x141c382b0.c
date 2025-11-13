// 函数: sub_141c382b0
// 地址: 0x141c382b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* rdi = *(arg1 + 0x10)
sub_141c37d40(*(arg1 + 0xa0), arg2, rdi)
int32_t* rdx = *(arg1 + 0x30)
float* r9 = *(arg1 + 0x20)
int32_t* r11 = *(arg1 + 0x40)
float* r10 = *(arg1 + 0x50)
float zmm3 = rdi[3]
float zmm6 = rdi[2]
int64_t rax = sx.q(*(arg1 + 8))
float zmm2 = (r10[1] f+ rdx[1]) * *rdi
float zmm4 = rdi[rax - 2]
float zmm0 = r11[1] f+ r9[1]
float zmm5 = rdi[rax - 1]
*arg3 = (*r11 + *r9) * *rdi + (*rdx + *r10) * rdi[1]
float zmm1 = zmm4 f* r11[2]
zmm4 = zmm4 * r10[3]
zmm2 = zmm2 + zmm0 * rdi[1]
zmm0 = zmm3 f* rdx[2]
zmm3 = zmm3 * r9[3]
arg3[1] = zmm2
zmm2 = zmm6 * r9[2] + zmm0
zmm6 = zmm6 f* rdx[3] + zmm3 + zmm4 + zmm5 f* r11[3]
arg3[2] = zmm2 + zmm1 + zmm5 * r10[2]
arg3[3] = zmm6
sub_141c35c90(arg1, arg1 + 0x20, rdi, 4, arg3)
arg3[sx.q(*(arg1 + 8))] = *rdi - rdi[1]
int64_t result = sx.q(*(arg1 + 8))
arg3[result + 1] = 0
return result
