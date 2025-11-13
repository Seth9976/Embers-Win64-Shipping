// 函数: sub_1409db9b0
// 地址: 0x1409db9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 0xc) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xc, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xc, 4)

int512_t zmm1 = sub_1409ad190(arg2, arg1 + 0x18, arg3)
sub_1409ac7a0(arg2, arg1 + 0x28, zmm1)
int64_t* rcx_4 = arg2[1]
int32_t* r8_1 = *rcx_4

if (&r8_1[1] u<= rcx_4[1])
    *(arg1 + 0x10) = *r8_1
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x10, zmm1) __tailcall

jump(*(*arg2 + 0x150))
