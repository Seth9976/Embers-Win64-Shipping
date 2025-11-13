// 函数: sub_142a6a060
// 地址: 0x142a6a060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _Count = sx.q(arg3)
int64_t* arg_20 = nullptr
int32_t* rsi = arg4
int32_t result = sub_142a66c20(arg1, &arg_20, arg4)

if (*rsi s<= 0)
    int64_t* rdi_1 = arg_20
    int64_t* rcx = rdi_1[3]
    strncpy(arg2, (*(*rcx + 0xb0))(rcx), _Count)
    sub_142aa6d70(rdi_1)
    result = (_Count - 1).d
    
    if (arg2[sx.q(result)] != 0)
        *rsi = 0xf

return result
