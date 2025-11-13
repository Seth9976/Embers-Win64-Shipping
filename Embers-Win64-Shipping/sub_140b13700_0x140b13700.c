// 函数: sub_140b13700
// 地址: 0x140b13700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x2e0)
*(arg1 + 0x2d4) = arg2

if (arg2 == 0)
    int64_t* rdi_1 = *(arg1 + 0x2a0)
    int32_t i_1 = *(arg1 + 0x2a8)
    
    if (i_1 != 0)
        int32_t i
        
        do
            if (*(rdi_1 + 0x21) == 0)
                result = sub_140a74f90(*rdi_1)
            
            rdi_1 = &rdi_1[5]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    bool cond:0_1 = *(arg1 + 0x2ac) == 0
    *(arg1 + 0x2a8) = 0
    
    if (not(cond:0_1))
        result = sub_1405c5660(arg1 + 0x2a0, 0)

if (arg1 == -0x2e0)
    return result

return LeaveCriticalSection(arg1 + 0x2e0) __tailcall
