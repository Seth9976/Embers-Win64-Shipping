// 函数: sub_1423b66b0
// 地址: 0x1423b66b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx

if (arg1[1].d == 0)
    rcx = nullptr
else
    rcx = *arg1

int64_t result = (*(*rcx + 0x48))(rcx, arg1[2])
int64_t* rcx_1 = arg1[2]
arg1[2] = 0

if (rcx_1 != 0)
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1)
        result = (**rcx_1)(rcx_1, 1)

int64_t* rcx_2 = arg1[3]
arg1[3] = 0

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1)
        result = (**rcx_2)(rcx_2, 1)

int64_t* rcx_3 = arg1[4]
arg1[4] = 0

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        jump(**rcx_3)

return result
