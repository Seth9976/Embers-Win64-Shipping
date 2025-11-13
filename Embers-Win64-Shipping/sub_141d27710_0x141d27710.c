// 函数: sub_141d27710
// 地址: 0x141d27710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9528)
int64_t* rdx = arg2[1]
int32_t arg_10 = 1
int32_t* r8 = *rdx

if (&r8[1] u> rdx[1])
    int32_t* rdx_1 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_10 = *r8
    *rdx += 4

return sub_141d166b0(arg2, arg1 + 8, sub_140b4e7c0(arg2, &data_1439a9528))
