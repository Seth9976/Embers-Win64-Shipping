// 函数: sub_140a95580
// 地址: 0x140a95580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e63d28
arg1[1] = *arg2
arg1[2] = arg2[1]
arg2[1] = 0
*arg2 = 0
arg1[3] = &data_142e63698
int16_t rcx = *(sub_140aae970() + 0x120)
arg1[3] = &data_142e63708
arg1[4].w = rcx
arg1[5] = 0
arg1[6] = 0
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return arg1
