// 函数: sub_140e3c5a0
// 地址: 0x140e3c5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x34b5) == 0
uint8_t arg_10 = (arg2 u>> 8).b
uint8_t result

if (not(cond:0))
    int64_t* rcx = *arg1
    result = (*(*rcx + 8))(rcx, &arg_10, 1)

if (cond:0 || result == 0)
    result = 0
else
    result = 1

*(arg1 + 0x34b5) = result
arg_10 = arg2.b

if (result != 0)
    int64_t* rcx_1 = *arg1
    result = (*(*rcx_1 + 8))(rcx_1, &arg_10, 1)
    
    if (result != 0)
        *(arg1 + 0x34b5) = 1
        return result

*(arg1 + 0x34b5) = 0
return result
