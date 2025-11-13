// 函数: sub_141a2fdf0
// 地址: 0x141a2fdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t arg_c = 0
*arg1 = 2.q
void* r9 = arg2
int32_t arg_14 = 0
arg1[1] = 2.q
arg1[2].d = 0xffffffff
*(arg1 + 0x14) = 0
arg1[3] = arg2

while (true)
    int64_t rax_2 = sx.q(*(r9 + 0x18))
    int64_t var_28
    int32_t var_20
    int64_t* rcx_5
    
    if (rax_2.d == 0xffffffff)
        var_28 = 0
        rcx_5 = &var_28
        var_20 = 0
    else
        int64_t rcx = *(arg2 + 0x20)
        int64_t rdx = rax_2 * 3
        int64_t var_38 = (sx.q(*(rcx + (rdx << 2))) << 5) + *(arg2 + 0x30)
        int32_t var_30_1 = *(rcx + (rdx << 2) + 4)
        rcx_5 = &var_38
    
    uint128_t zmm0 = *rcx_5
    char* var_18_1 = zmm0.q
    int64_t rcx_10
    
    if (_mm_bsrli_si128(zmm0, 8).d == 0)
        rcx_10 = *(r9 + 8)
    label_141a2fefc:
        arg_c = 0
        var_28 = 2.q
        var_20.q = rcx_10
        *arg1 = var_28.o
        return arg1
    
    if (*var_18_1 != 2)
        rcx_10 = *var_18_1
        
        if (rcx_10.b == 0)
            arg_c = (rcx_10 u>> 0x20).d
            rcx_10 = 1.q
        else if (rcx_10.b == 1)
            arg_c = (rcx_10 u>> 0x20).d
            rcx_10 = 0.q
        
        goto label_141a2fefc
    
    char arg_8
    arg_8.d = rax_2.d
    arg_c = 0
    int64_t rcx_8 = arg_8.q
    arg1[2] = rcx_8
    
    if (rax_2.d == 0xffffffff)
        r9 = arg2
    else
        r9 = ((sx.q(*(*(arg2 + 0x20) + rax_2 * 0xc)) + sx.q((rcx_8 u>> 0x20).d)) << 5)
            + *(arg2 + 0x30)
