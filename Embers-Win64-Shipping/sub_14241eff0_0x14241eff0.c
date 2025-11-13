// 函数: sub_14241eff0
// 地址: 0x14241eff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x130))(arg2, arg1 + 0x28)
int64_t* rax_1
int512_t zmm1_1
rax_1, zmm1_1 = sub_140a3cdd0(arg2, arg1 + 0x38, zmm1)
int512_t zmm1_2 = sub_140a3cdd0(rax_1, arg1 + 0x48, zmm1_1)
int64_t* rcx_3 = arg2[1]
int32_t* r8 = *rcx_3

if (&r8[1] u<= rcx_3[1])
    *(arg1 + 0x58) = *r8
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x58, zmm1_2) __tailcall

jump(*(*arg2 + 0x150))
