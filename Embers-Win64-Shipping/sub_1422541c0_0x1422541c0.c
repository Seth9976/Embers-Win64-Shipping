// 函数: sub_1422541c0
// 地址: 0x1422541c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xe8) != 0)
    *(arg1 + 0xe8) = 0
    void* rcx = *(arg1 + 0xb8)
    int64_t rax_1
    
    if (rcx == 0)
        rax_1 = 0
    else
        rax_1 = sub_141f64a80(rcx)
    
    int64_t arg_8 = rax_1
    
    if (rax_1 != 0 && *(*(arg1 + 0xb8) + 0x430) != 0)
        int32_t rsi_2 = *(arg1 + 0xd8) - *(arg1 + 0xc8)
        int64_t r14_1 = sx.q(*(arg1 + 0xc8))
        int32_t rax_3 = r14_1.d + rsi_2
        *(arg1 + 0xc8) = rax_3
        
        if (rax_3 s> *(arg1 + 0xcc))
            sub_1405a4f90(arg1 + 0xc0)
        
        memset((r14_1 << 4) + *(arg1 + 0xc0), 0, sx.q(rsi_2) << 4)
        void* rcx_5 = *(arg1 + 0xb8)
        int64_t* var_20_1 = &arg_8
        void* var_28 = arg1
        void* var_18_1 = ((sx.q(*(rcx_5 + 0x490)) + 0x45) << 4) + rcx_5
        void** var_30_1 = &var_28
        void* (* var_38)(int64_t* arg1) = j_sub_14223eaf0
        sub_14226a780(rcx_5, &var_38)

return sub_142256710(arg1, 0) __tailcall
