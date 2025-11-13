// 函数: sub_140b0e310
// 地址: 0x140b0e310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* arg_10 = arg2
int64_t rsi
rsi.b = 0

while (true)
    EnterCriticalSection(arg1 + 0x330)
    bool z_1
    
    if (0 == *(arg1 + 0x358))
        *(arg1 + 0x358) = 0
        z_1 = true
    else
        *(arg1 + 0x358)
        z_1 = false
    
    if (z_1)
        int64_t* rcx_1 = arg_10
        void* const rcx_2 = 0x2b0
        
        if ((*(*rcx_1 + 0x40))(rcx_1) != 0)
            rcx_2 = 0x2c0
        
        sub_1405a7050(rcx_2 + arg1, &arg_10)
        rsi.b = 1
    
    if (arg1 != -0x330)
        LeaveCriticalSection(arg1 + 0x330)
    
    if (rsi.b != 0)
        break
    
    sub_140b73230(zx.o(0))
