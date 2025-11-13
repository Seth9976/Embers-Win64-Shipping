// 函数: sub_142806db0
// 地址: 0x142806db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg6

if (rsi == 0 || arg4 == 0)
    return 

int32_t rdi_1 = 0

if (rsi != 0)
    do
        uint32_t temp1_1
        
        if (rdi_1 != 0)
            temp1_1 = modu.dp.d(0:rdi_1, arg3)
        
        char const* const rdx_1
        uint64_t r8
        
        if (rdi_1 == 0 || temp1_1 != 0)
            r8 = 1
            rdx_1 = &data_1434cf410
        else
            r8 = zx.q(temp1_1 + 4)
            rdx_1 = "\n\t\t\t"
        
        (**arg2)(arg2, rdx_1, r8)
        arg6 = arg5(arg4, zx.q(rdi_1))
        arg8(arg2, &arg6)
        rdi_1 += 1
    while (rdi_1 u< rsi)

arg6.b = 0
(**arg2)(arg2, &arg6, 1)
(*(*arg1 + 0x10))(arg1, arg7, arg2[4])
arg2[3] = 0
