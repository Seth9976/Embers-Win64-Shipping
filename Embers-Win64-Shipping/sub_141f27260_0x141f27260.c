// 函数: sub_141f27260
// 地址: 0x141f27260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg2 == 0)
label_141f272af:
    sub_141f26de0(arg1, arg2, arg3)
    
    if (arg2 == 0)
        rax = 0
    else
        rax = *(arg2 + 0xa0)
    
    arg1[0x26] = rax
else
    void* rsi_1 = *(arg2 + 0xa0)
    
    if (rsi_1 != 0)
        void* rax_1 = sub_14255d000()
        void* rdx = *(rsi_1 + 0x10)
        arg3 = rax_1 + 0x30
        rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax << 3)) == arg3)
            goto label_141f272af
