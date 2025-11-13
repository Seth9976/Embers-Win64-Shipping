// 函数: sub_142380ea0
// 地址: 0x142380ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_14239a450(&arg1[1])
int64_t* rcx_1 = arg1[2]

if (rcx_1 != 0)
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1)
        result = (**rcx_1)(rcx_1, 1)

int64_t* rcx_2 = arg1[1]

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1)
        result = (**rcx_2)(rcx_2, 1)

int64_t* rcx_3 = *arg1

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        return (**rcx_3)(rcx_3, 1)

return result
