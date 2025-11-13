// 函数: sub_1423b6740
// 地址: 0x1423b6740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx

if (arg1[1].d == 0)
    rcx = nullptr
else
    rcx = *arg1

int64_t result = (*(*rcx + 0x48))(rcx, zx.q(arg1[6].d), zx.q(*(arg1 + 0x34)), &arg1[3], arg1[2].d, 
    *(arg1 + 0x14))
int64_t* rcx_1 = arg1[5]
arg1[5] = 0

if (rcx_1 != 0)
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1)
        result = (**rcx_1)(rcx_1, 1)

arg1[4].d = 0

if (*(arg1 + 0x24) s> 0xffffffff)
    return result

return sub_1405dadb0(&arg1[3], 0)
