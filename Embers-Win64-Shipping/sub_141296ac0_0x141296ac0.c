// 函数: sub_141296ac0
// 地址: 0x141296ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141080ac0(arg1, arg2, *(arg2 + 0x1a0), *(arg3 + 0x10))
int64_t r12 = *(arg2 + 0x1a0)

if (*(arg1 + 0x11a) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142d5a070
    rcx_2[4] = arg5
    rcx_2[2] = r12
    rcx_2[3].d = rbp_1

if (*(arg1 + 0x11e) u> 0)
    uint32_t rbp_2 = zx.d(*(arg1 + 0x11c))
    
    if ((*(*arg4 + 8))(arg4) == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_7 = &rcx_9[5]
        
        if (rax_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_7 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_7
        void**** rax_8 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_8 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142d5a080
        rcx_9[2] = r12
        rcx_9[3].d = rbp_2
        rcx_9[4] = arg4

int32_t r8_1 = *(arg3 + 0x1548)
int64_t arg_10 = *(arg2 + 0x1a0)

if (*(arg1 + 0x120) == 0xffff)
    return 0xffff

int64_t arg_8
int64_t* rcx_13 = &arg_8

if (r8_1 s< 3)
    sub_14137b7f0(rcx_13, arg2)
else
    sub_14137baa0(rcx_13, arg2, 0xf, r8_1)

sub_141083500(arg2, &arg_10, arg1 + 0x120, arg_8)
return sub_1405d1550(&arg_8)
