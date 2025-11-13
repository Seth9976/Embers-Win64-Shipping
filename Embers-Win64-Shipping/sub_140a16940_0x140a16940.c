// 函数: sub_140a16940
// 地址: 0x140a16940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x70) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* rdx_1 = *(rsi_1 + *(arg1 + 0x68))
        int64_t* rcx = rdx_1 + 0x20
        
        if (rdx_1 == 0)
            rcx = nullptr
        
        sub_141997f50(rcx)
        i += 1
        rsi_1 = &rsi_1[2]
    while (i s< *(arg1 + 0x70))

return sub_1405d16e0(arg1 + 0x78, nullptr) __tailcall
