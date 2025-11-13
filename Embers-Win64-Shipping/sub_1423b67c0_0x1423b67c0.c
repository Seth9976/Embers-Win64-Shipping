// 函数: sub_1423b67c0
// 地址: 0x1423b67c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx

if (arg1[1].d == 0)
    rcx = nullptr
else
    rcx = *arg1

int64_t result = (*(*rcx + 0x48))(rcx, zx.q(arg1[3].d), zx.q(*(arg1 + 0x1c)))
int64_t* rcx_1 = arg1[2]
arg1[2] = 0

if (rcx_1 != 0)
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1)
        jump(**rcx_1)

return result
