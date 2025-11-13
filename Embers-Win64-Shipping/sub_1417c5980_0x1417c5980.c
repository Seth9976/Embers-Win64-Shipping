// 函数: sub_1417c5980
// 地址: 0x1417c5980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x140))(arg2, arg1 + 8)
int64_t* r8 = arg2[1]
int32_t* rcx_1 = *r8

if (&rcx_1[1] u<= r8[1])
    *(arg1 + 0x10) = *rcx_1
    int64_t* rax_3 = arg2[1]
    *rax_3 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x10, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x10, 4)

return sub_1408d9160(arg2, arg1 + 0x14, arg3) __tailcall
