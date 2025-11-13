// 函数: sub_142807030
// 地址: 0x142807030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg5

if (rsi == 0 || *arg4 == 0)
    return 

int32_t rbx_1 = 0

if (rsi != 0)
    do
        sub_142809fb0(arg2, zx.d(*(zx.q(arg4[1].d * rbx_1) + *arg4)), arg7)
        uint32_t temp1_1
        
        if (rbx_1 != 0)
            temp1_1 = modu.dp.d(0:rbx_1, arg3)
        
        char const* const rdx_2
        uint64_t r8_1
        
        if (rbx_1 == 0 || temp1_1 != 0)
            r8_1 = 1
            rdx_2 = &data_1434cf410
        else
            r8_1 = zx.q(temp1_1 + 4)
            rdx_2 = "\n\t\t\t"
        
        (**arg2)(arg2, rdx_2, r8_1)
        rbx_1 += 1
    while (rbx_1 u< rsi)

arg5.b = 0
(**arg2)(arg2, &arg5, 1)
(*(*arg1 + 0x10))(arg1, arg6, arg2[4])
arg2[3] = 0
