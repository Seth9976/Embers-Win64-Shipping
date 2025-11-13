// 函数: sub_1420bd180
// 地址: 0x1420bd180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140d3c6e0(arg1 + 8) == 0)
    int64_t rcx_9 = *arg2
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t rax
    rax.b = 0
    return rax

void var_28
int64_t* rax_1 = sub_140596d10(&var_28, arg2)
int64_t rax_2 = sub_140d3c6e0(arg1 + 8)
uint128_t zmm0 = *(arg1 + 0x10)
void var_18
int64_t* rax_3 = sub_140596d10(&var_18, rax_1)
zmm0.q(sx.q(_mm_bsrli_si128(zmm0, 8).d) + rax_2, rax_3)
int64_t rcx_7 = *rax_1

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = *arg2

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rax_5
rax_5.b = 1
return rax_5
