// 函数: sub_140e214e0
// 地址: 0x140e214e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg1[0x55]
int32_t result

if (arg2 == 0xffffffff)
    result = rdx(&arg1[0x55])
    
    if (result s> 0)
        sub_140e21010(&arg1[0x55], (*arg1[0x55])(&arg1[0x55]) - 1)
        return sub_140e19ef0(arg1, 1) __tailcall
else
    int32_t rdi_1 = 0
    result = rdx(&arg1[0x55])
    
    if (result s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            if (*(*(rsi_1 + arg1[0x57]) + 0x20) == arg2)
                sub_140e21010(&arg1[0x55], rdi_1)
                return sub_140e19ef0(arg1, 1)
            
            rdi_1 += 1
            rsi_1 = &rsi_1[1]
            result = (*arg1[0x55])(&arg1[0x55])
        while (rdi_1 s< result)

return result
