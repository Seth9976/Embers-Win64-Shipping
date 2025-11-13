// 函数: sub_140fd9330
// 地址: 0x140fd9330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = 0xffffffff
arg1[1].d = 0
arg1[2].b = 0
*arg1 = &data_142ef5880
arg1[4] = 0
arg1[5].d = 0
arg1[3] = arg2
arg1[6] = arg1
arg1[7] = arg3

if (arg3 != 0)
    (*(*arg3 + 8))(arg3)

arg1[8] = arg4

if (arg4 != 0)
    (*(*arg4 + 8))(arg4)

arg1[9] = 0
int32_t i_2 = arg7[1].d
int64_t* rbx_1 = *arg7
arg1[0xa].d = i_2

if (i_2 != 0)
    sub_1405c4a00(&arg1[9], i_2, 0)
    int64_t* rsi_1 = arg1[9]
    int32_t i
    
    do
        int64_t* rcx_3 = *rbx_1
        *rsi_1 = rcx_3
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 8))()
        
        rsi_1 = &rsi_1[1]
        rbx_1 = &rbx_1[1]
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    *(arg1 + 0x54) = 0

void* rbx_2 = &arg1[0xc]
arg1[0xb].b = arg6
*(arg1 + 0x5c) = arg5
__builtin_memset(rbx_2, 0, 0x20)
arg1[0x10].d = 0

if (arg8 != 0)
    int64_t i_3 = 4
    int64_t i_1
    
    do
        int64_t* rcx_4 = *(arg8 - arg1 - 0x60 + rbx_2)
        int64_t* rsi_2 = *rbx_2
        *rbx_2 = rcx_4
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 8))()
        
        if (rsi_2 != 0)
            (*(*rsi_2 + 0x10))(rsi_2)
        
        if (*rbx_2 != 0)
            arg1[0x10].d += 1
        
        rbx_2 += 8
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return arg1
