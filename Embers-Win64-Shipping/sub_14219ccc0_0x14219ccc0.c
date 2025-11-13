// 函数: sub_14219ccc0
// 地址: 0x14219ccc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 0x28) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x28, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x28, 4)

return sub_142183620(arg2, arg1 + 0x30, zmm1) __tailcall
