// 函数: sub_1420b9c80
// 地址: 0x1420b9c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
float zmm0
int32_t i
zmm0, i = sub_141f5bc90(arg1 + 0x48, arg2, &arg_10)
int64_t rax = sx.q(*(arg1 + 0x50))
int32_t rbx = 0
int32_t rdi = 0

if (rax.d s> 0)
    int64_t rcx_1 = 0
    int32_t* rax_1 = *(arg1 + 0x48)
    
    while (not(i f<= *rax_1))
        rdi += 1
        rcx_1 += 1
        rax_1 = &rax_1[5]
        
        if (rcx_1 s>= rax)
            break

sub_141fd3f30(arg1 + 0x48, rdi, 1)
int64_t rdx_3 = *(arg1 + 0x48)
int64_t var_50 = 0
float var_58[0x4]
var_58[0] = i
float temp0[0x4] = _mm_shuffle_ps(var_58, var_58, 0xe1)
temp0[0] = zmm0
int64_t r8_1 = sx.q(rdi) * 5
*(rdx_3 + (r8_1 << 2)) = _mm_shuffle_ps(temp0, temp0, 0xe1)
*(rdx_3 + (r8_1 << 2) + 0x10) = 0.d
r8_1.b = 1
int32_t i_1 = sub_141fdb4d0(arg1 + 0x48, *(arg1 + 0x60), r8_1.b)
int64_t rax_4 = sx.q(*(arg1 + 0x78))

if (rax_4.d s> 0)
    int64_t rcx_4 = 0
    int32_t* rax_6 = *(arg1 + 0x70) + 8
    
    while (not(i_1 f<= *rax_6))
        rbx += 1
        rcx_4 += 1
        rax_6 = &rax_6[3]
        
        if (rcx_4 s>= rax_4)
            break

sub_142075310(arg1 + 0x70, rbx, 1)
int64_t r8_2 = sx.q(rbx) * 3
*(*(arg1 + 0x70) + (r8_2 << 2) + 8) = i_1
*(*(arg1 + 0x70) + (r8_2 << 2)) = 0
return zx.q(rdi)
