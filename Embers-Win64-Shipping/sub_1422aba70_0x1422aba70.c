// 函数: sub_1422aba70
// 地址: 0x1422aba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int32_t* r9 = *r8

if (&r9[1] u<= r8[1])
    *(arg1 + 0x30) = *r9
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x30, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x30, 4)

int64_t* rcx_1 = arg2[1]
int32_t* r8_1 = *rcx_1

if (&r8_1[1] u<= rcx_1[1])
    *(arg1 + 0x34) = *r8_1
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x34, arg3) __tailcall

jump(*(*arg2 + 0x150))
