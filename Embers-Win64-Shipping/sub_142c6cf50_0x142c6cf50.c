// 函数: sub_142c6cf50
// 地址: 0x142c6cf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
int32_t rsi = 0

if ((*(arg1 + 0x3f6) == 0 || *(arg1 + 0x3f9) == 0) && arg1[0x7f].b == 0)
    *(rbp + 0x4bac) = 1
    *(rbp + 0x4bbc) = 1
    return 0

int32_t rcx = *(rbp + 0x4ba0)

if (rcx != 0 && *(rbp + 0x4ba4) == 0)
    *(rbp + 0x4ba4) = rcx

int32_t rcx_1 = *(rbp + 0x4bb0)

if (rcx_1 != 0 && *(rbp + 0x4bb4) == 0)
    *(rbp + 0x4bb4) = rcx_1

int32_t rax_1

if (*(arg1 + 0x3f6) == 0 || *(arg1 + 0x401) != arg4)
    *(rbp + 0x4bbc) = 1
label_142c6d003:
    
    if (*(rbp + 0x4a98) != 0 && *(arg1 + 0x407) == 0)
        char* rcx_3 = *(rbp + 0x4aa0)
        
        if (rcx_3 != 0 && *(rbp + 0x5e4) == 0 && sub_142c70460(rcx_3, arg1[0x1a]) == 0)
            *(rbp + 0x4bac) = 1
            return rsi
    
    rax_1 = sub_142c6e650(arg1, rbp + 0x4ba0, arg2, arg3, arg5, arg6, 0)
else
    rax_1, arg5, arg6 = sub_142c6e650(arg1, rbp + 0x4bb0, arg2, arg3, arg5, arg6, 1)
    rsi = rax_1
    
    if (rax_1 == 0)
        goto label_142c6d003

return rax_1
