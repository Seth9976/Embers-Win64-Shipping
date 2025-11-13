// 函数: sub_141c59db0
// 地址: 0x141c59db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp_1

if ((*(arg3 + 0x16d) & 1) != 0)
    EnterCriticalSection(arg3 + 0x1a8)
    rbp_1 = *(arg3 + 0x1d8)
    
    if (arg3 != -0x1a8)
        LeaveCriticalSection(arg3 + 0x1a8)

if ((*(arg3 + 0x16d) & 1) == 0 || rbp_1 s<= 0)
    void*** rax_1 = j_sub_140a82f30(0xf0)
    void*** rbx_2
    
    if (rax_1 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = sub_141c4dd40(rax_1, arg2, arg3, arg4, arg5, arg6)
    
    void*** rax_3 = j_sub_140a82f30(0x18)
    
    if (rax_3 != 0)
        rax_3[1].d = 1
        *rax_3 = &data_142d42ea8
        *(rax_3 + 0xc) = 1
        rax_3[2] = rbx_2
    
    *arg1 = rbx_2
    arg1[1] = rax_3
else
    *(arg3 + 0x16b) &= 0xfe
    *arg1 = 0
    arg1[1] = 0

return arg1
