// 函数: sub_141953450
// 地址: 0x141953450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = **arg1

if ((data_1439c74e9 == 0 || data_1439c74f0 == 0) && (*(rdi + 0x1c) & 0x800) != 0)
    return zx.q(*arg1[1]) + *(rdi + 0x20)

char temp0 = *(rdi + 0x1c) & 6
bool cond:1 = temp0 != 0

if (temp0 != 0)
    if (*arg1[2] == 1)
        int64_t result = sub_141954d10(rdi, *arg1[3], *arg1[1], 0x10)
        
        if (result != 0)
            return result
    
    cond:1 = (*(rdi + 0x1c) & 6) != 0

return sub_141910580(rdi, *arg1[1], *arg1[3], *arg1[2] == 0, cond:1)
