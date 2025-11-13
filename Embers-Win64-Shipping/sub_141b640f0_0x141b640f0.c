// 函数: sub_141b640f0
// 地址: 0x141b640f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x210) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* rdx_1 = *(rsi_1 + *(arg1 + 0x208))
        void* rax_2 = *(rdx_1 + 0x40)
        *(rdx_1 + 0x38) = 0
        int64_t* rcx = rax_2 + 0x20
        
        if (rax_2 == 0)
            rcx = nullptr
        
        sub_141997f50(rcx)
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x210))

int32_t i_1 = 0

if (*(arg1 + 0x220) s> 0)
    int64_t* rsi_2 = nullptr
    
    do
        void* rdx_2 = *(rsi_2 + *(arg1 + 0x218))
        int64_t* rcx_1 = rdx_2 + 0x20
        
        if (rdx_2 == 0)
            rcx_1 = nullptr
        
        sub_141997f50(rcx_1)
        i_1 += 1
        rsi_2 = &rsi_2[1]
    while (i_1 s< *(arg1 + 0x220))

return sub_141b63de0(arg1 + 0x98) __tailcall
