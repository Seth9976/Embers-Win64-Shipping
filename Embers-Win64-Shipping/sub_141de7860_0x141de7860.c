// 函数: sub_141de7860
// 地址: 0x141de7860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg2 + 0x10)
int64_t* rcx = *(rsi + 0x48)
(*(*rcx + 0x18))(rcx, arg6, arg4, arg2)
int64_t* rcx_1 = *(rsi + 0x50)
int64_t result = (*(*rcx_1 + 0x10))(rcx_1, arg6, arg3, arg2)

if (*(rsi + 0x28) s<= 0)
    return result

int64_t* rcx_2 = *(rsi + 0x58)
return (*(*rcx_2 + 0x20))(rcx_2, arg6, arg5, arg2)
