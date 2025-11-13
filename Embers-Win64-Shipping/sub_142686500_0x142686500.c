// 函数: sub_142686500
// 地址: 0x142686500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x4a8)
uint64_t result

if (rdi == 0)
    result.b = 0
else
    void* rcx = *(rdi + 8)
    
    if (rcx == 0 || arg2 s< 0)
        result.b = 0
    else if (arg2 s>= sub_1405f8990(rcx).d)
        result.b = 0
    else
        result = sub_142610d00(*(rdi + 8), arg2)
        
        if (result == 0)
            result.b = 0
        else
            void* rcx_2 = *(result + 8)
            
            if (rcx_2 == 0)
                result.b = 0
            else
                *arg3 = *(rcx_2 + 8)
                *arg4 = *(rcx_2 + 0xc)
                *arg5 = *(rcx_2 + 0x10)
                result.b = 1

return result
