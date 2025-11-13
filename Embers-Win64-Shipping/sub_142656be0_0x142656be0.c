// 函数: sub_142656be0
// 地址: 0x142656be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi

if ((*(arg1 + 0xa8) & 1) != 0 || *(arg1 + 0x98) s> 0 || *(arg1 + 0x88) s> 0)
    rsi.b = 1
else
    rsi.b = 0

if (sub_140d23dc0(arg1, 0x30) == 0 && rsi.b != 0)
    char rax_1 = sub_14222c9e0(arg1 + 0xc0, arg2)
    int64_t* result = sub_142231830(arg1 + 0xc0, arg2)
    int64_t rcx_2
    int64_t rdi_1
    
    if (rax_1 == 0)
        rdi_1 = data_143f71470
        
        if (data_143de5480 == rax_1)
            rcx_2 = 0
        else
            rcx_2.b = GetCurrentThreadId() != data_143de5470
    
    if (rax_1 != 0 || *(rdi_1 + (rcx_2 << 2)) == 0)
        if (result != 0 && sub_140bc7f20(result) s> 0)
            return result
        
        return nullptr

return 0
