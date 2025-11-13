// 函数: sub_142a92c80
// 地址: 0x142a92c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int32_t r8 = arg1[4]

if (*arg1 == r8)
    int32_t rdx = 2
    
    if (r8 == 8)
        rdx = 4
    
    int64_t* rax_1 = sub_142a5da90(&arg1[2], rdx * r8, r8)
    
    if (rax_1 == 0)
        return rax_1

int64_t* rax_2 = j_sub_142a7dd00(0x40)
int64_t* rbx_1 = rax_2
int64_t* arg_8 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    void var_20
    uint128_t zmm1 = *sub_142a85330(&var_20, *arg2)
    *rbx_1 = rbx_1 + 0xd
    rbx_1[1].d = 0x28
    *(rbx_1 + 0xc) = 0
    rbx_1[7].d = 0
    *(rbx_1 + 0xd) = 0
    sub_142a8cbd0(rbx_1, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg3)

int64_t rcx_3 = sx.q(*arg1)
*arg1 = rcx_3.d + 1
*(*(arg1 + 8) + (rcx_3 << 3)) = rbx_1
return rbx_1
