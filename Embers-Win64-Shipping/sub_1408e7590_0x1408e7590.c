// 函数: sub_1408e7590
// 地址: 0x1408e7590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a94b8)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg2, &data_1439a94b8)

if (rax_1 s>= 0x11)
    zmm1 = sub_140ce8e10(arg1, arg2)

sub_1408dcaf0(arg2, arg1 + 0x30, zmm1)
sub_1408dc390(arg2, arg1 + 0x40, zmm1)
int64_t* rcx_5 = arg2[1]
int32_t* r8 = *rcx_5

if (&r8[1] u<= rcx_5[1])
    *(arg1 + 0x50) = *r8
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x50, zmm1) __tailcall

jump(*(*arg2 + 0x150))
