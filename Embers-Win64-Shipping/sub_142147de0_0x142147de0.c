// 函数: sub_142147de0
// 地址: 0x142147de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg3 + 0xe5) & 2) != 0)
    int64_t* rcx = arg3[1]
    int16_t arg_10 = 0
    int16_t* r8 = *rcx
    
    if (&r8[1] u> rcx[1])
        int16_t* rdx = &arg_10
        
        if ((*(arg3 + 0x29) & 0x20) != 0)
            sub_140b54000(arg3, rdx, arg4)
        else
            (*(*arg3 + 0x150))(arg3, rdx, 2)
    else
        arg_10 = *r8
        *rcx += 2
    
    int32_t i = 0
    
    if (0 u< arg_10)
        do
            int64_t rax_4 = *arg3
            int32_t arg_18 = 0
            (*(rax_4 + 0x168))(arg3, &arg_18)
            i += 1
        while (i s< zx.d(arg_10))

*arg2 = 0
(*(*arg3 + 0x168))(arg3, arg2)
return arg2
