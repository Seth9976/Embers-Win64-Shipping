// 函数: sub_1429c2220
// 地址: 0x1429c2220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &IlmThread_2_3::Task::`vftable'

if (arg2 != 0)
    int32_t* rcx = *arg2
    int32_t rax_1 = *rcx
    *rcx += 1
    
    if (rax_1 == 0)
        sub_1429c3430(&rcx[2])

return arg1
