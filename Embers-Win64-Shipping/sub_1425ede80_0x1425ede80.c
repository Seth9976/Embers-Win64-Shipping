// 函数: sub_1425ede80
// 地址: 0x1425ede80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi_1 = arg1 + 0x15a0 + zx.q(arg2) * 0x98

if (0 == *(rsi_1 + 4))
    *(rsi_1 + 4) = 0
else
    *(rsi_1 + 4)

*(rsi_1 + 0x38) = arg3
*(rsi_1 + 8) = arg4

if (rsi_1 + 0x68 != arg5)
    int64_t* rcx = *(rsi_1 + 0x68)
    *(rsi_1 + 0x68) = *arg5
    *arg5 = 0
    
    if (rcx != 0)
        (**rcx)(rcx, 1)

int64_t* result = j_sub_140a82f30(0x10)

if (result != 0)
    *result = 0
    result[1] = rsi_1
    void** rcx_1 = *(arg1 + 0x17b0)
    *(arg1 + 0x17b0) = result
    *rcx_1 = result

int64_t* rcx_2 = *arg5

if (rcx_2 == 0)
    return result

return (**rcx_2)(rcx_2, 1)
