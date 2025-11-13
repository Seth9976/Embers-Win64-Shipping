// 函数: sub_141a705e0
// 地址: 0x141a705e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a93f8)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg1, &data_1439a93f8)

if (rax_1 s>= 0x13)
    int64_t* rcx_1 = arg1[1]
    int32_t* rdx = *rcx_1
    
    if (&rdx[1] u<= rcx_1[1])
        *arg2 = *rdx
        int64_t* rax_4 = arg1[1]
        *rax_4 += 4
        return arg1
    
    if ((*(arg1 + 0x29) & 0x20) == 0)
        (*(*arg1 + 0x150))(arg1, arg2, 4)
        return arg1
    
    sub_140b54070(arg1, arg2, zmm1)

return arg1
