// 函数: sub_141a52d40
// 地址: 0x141a52d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_4 = -1
int32_t arg_8 = 0xffffffff
int32_t arg_c = 0

if (arg3 != 0)
    int64_t arg_18
    sub_140d3a3a0(&arg_18, arg3)
    arg_8.q = arg_18

int32_t i_2 = 0xffffffff
int32_t var_54 = 0xffffffff
sub_141a40900(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 0)

if (*(arg1 + 0x50) != 0)
    void* r8 = arg1 + 0x40
    void* rdx_3 = *(r8 + 8)
    int32_t r12_1 = arg_8
    int32_t r10_3 = (r12_1 - arg_c) ^ arg_c u>> 0xd
    int32_t r9_2 = (0x9e3779b9 - arg_c - r10_3) ^ r10_3 << 8
    int32_t rcx_5 = (arg_c - r9_2 - r10_3) ^ r9_2 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_2 - rcx_5) ^ rcx_5 u>> 0xc
    int32_t r9_5 = (r9_2 - r10_6 - rcx_5) ^ r10_6 << 0x10
    int32_t rcx_8 = (rcx_5 - r9_5 - r10_6) ^ r9_5 u>> 5
    int32_t r10_9 = (r10_6 - r9_5 - rcx_8) ^ rcx_8 u>> 3
    int32_t r9_8 = (r9_5 - r10_9 - rcx_8) ^ r10_9 << 0xa
    
    if (rdx_3 != 0)
        r8 = rdx_3
    
    i_4 = *(r8
        + (((sx.q(rcx_8 - r9_8 - r10_9) ^ zx.q(r9_8) u>> 0xf) & (sx.q(*(arg1 + 0x50)) - 1)) << 2))
    int32_t i_5 = i_4
    i_2 = i_4
    
    if (i_4 != 0xffffffff)
        int64_t rdx_4 = *(arg1 + 8)
        i_2 = i_4
        int32_t i
        
        do
            int64_t rcx_15 = sx.q(i_4) * 0x60
            i = *(rcx_15 + rdx_4 + 0x50)
            int32_t i_3 = i
            
            if (*(rcx_15 + rdx_4) == r12_1 && *(rcx_15 + rdx_4 + 4) == arg_c)
                break
            
            i_2 = i
            i_4 = i
        while (i != 0xffffffff)

int128_t zmm0 = (arg1 + 8).o
uint64_t var_40 = i_2.q

if (i_4 != 0xffffffff)
    int64_t r9_9 = *(arg1 + 8)
    int32_t* r10_10 = zmm0:8.q
    int32_t j = var_40:4.d
    int32_t i_1 = var_40.d
    
    do
        if (*(sx.q(i_1) * 0x60 + r9_9 + 0x40) == arg4)
            int64_t rcx_22 = sx.q(i_1) * 0x60
            *arg2 = *(rcx_22 + r9_9 + 0x10)
            arg2[1] = *(rcx_22 + r9_9 + 0x20)
            arg2[2] = *(rcx_22 + r9_9 + 0x30)
            return arg2
        
        i_1 = j
        
        if (j == 0xffffffff)
            break
        
        do
            int64_t rcx_19 = sx.q(i_1) * 0x60
            j = *(rcx_19 + r9_9 + 0x50)
            
            if (*(rcx_19 + r9_9) == *r10_10 && *(rcx_19 + r9_9 + 4) == r10_10[1])
                break
            
            i_1 = j
        while (j != 0xffffffff)
    while (i_1 != 0xffffffff)

(*(*arg3 + 0x408))(arg3, arg2, arg4, 2, arg1 + 8, &arg_8, i_2, zmm0, var_40)
return arg2
