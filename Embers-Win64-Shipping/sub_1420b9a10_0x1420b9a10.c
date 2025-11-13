// 函数: sub_1420b9a10
// 地址: 0x1420b9a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
float zmm0
int32_t i
zmm0, i = sub_141f5bc90(arg1 + 0x48, arg2, &arg_10)
int64_t rax = sx.q(*(arg1 + 0x50))
int32_t rbx = 0

if (rax.d s> 0)
    int64_t rcx_1 = 0
    int32_t* rax_1 = *(arg1 + 0x48)
    
    while (not(i f<= *rax_1))
        rbx += 1
        rcx_1 += 1
        rax_1 = &rax_1[5]
        
        if (rcx_1 s>= rax)
            break

sub_141fd3f30(arg1 + 0x48, rbx, 1)
int64_t r8_1 = *(arg1 + 0x48)
int64_t var_40 = 0
float var_48[0x4]
var_48[0] = i
float temp0[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
temp0[0] = zmm0
int64_t r9 = sx.q(rbx) * 5
*(r8_1 + (r9 << 2)) = _mm_shuffle_ps(temp0, temp0, 0xe1)
*(r8_1 + (r9 << 2) + 0x10) = 0.d
r8_1.b = 1
sub_141fdb4d0(arg1 + 0x48, *(arg1 + 0x60), r8_1.b)
return zx.q(rbx)
