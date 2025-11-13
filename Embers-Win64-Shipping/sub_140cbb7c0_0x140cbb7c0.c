// 函数: sub_140cbb7c0
// 地址: 0x140cbb7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18

if (arg3 s< 0 || arg3 s>= *(arg1 + 0x20))
    *arg2 = *sub_140b5e500(&arg_18, 0x69)
    *(arg2 + 4) = 0
else
    void* rdx_2 = (sx.q(arg3) << 7) + *(arg1 + 0x18)
    int64_t rax_1 = sx.q(*(rdx_2 + 0xc))
    int32_t temp0_1 = rax_1.d
    
    if (temp0_1 != 0)
        if (temp0_1 s>= 0)
            *arg2 = *(*(arg1 + 0x18) - 0x80 + (rax_1 << 7))
            return arg2
        
        *arg2 = *(sx.q(not.d(rax_1.d)) * 0x38 + *(arg1 + 8))
        return arg2
    
    if (*(rdx_2 + 0x52) != 1)
        *arg2 = *sub_140b5e500(&arg_18, 0x69)
        *(arg2 + 4) = 0
    else
        uint64_t var_18[0x2]
        uint64_t* rax_13 = sub_140cbbb90(arg1, &var_18, arg3, 0, 0)
        uint64_t rdx_4
        
        if (rax_13[1].d == 0)
            rdx_4 = &data_142d40450
        else
            rdx_4 = *rax_13
        
        void arg_20
        sub_140d21640(arg2, *sub_140b58260(&arg_20, rdx_4, 1))
        uint64_t rcx_4 = var_18[0]
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
return arg2
