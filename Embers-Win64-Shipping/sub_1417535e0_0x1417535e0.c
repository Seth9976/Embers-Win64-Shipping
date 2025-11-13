// 函数: sub_1417535e0
// 地址: 0x1417535e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
(*(*arg1 + 0xa0))(arg1, &arg_8)
int512_t zmm1 = sub_141755af0(arg1, arg2)
(*(arg1[2] + 0x88))(&arg1[2], arg2)
(*(arg1[7] + 0x88))(&arg1[7], arg2)
int64_t* rcx_3 = arg2[1]
int32_t* r8 = *rcx_3

if (&r8[1] u<= rcx_3[1])
    arg1[0xc].d = *r8
    int64_t* rax_5 = arg2[1]
    *rax_5 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[0xc], zmm1)
else
    (*(*arg2 + 0x150))(arg2, &arg1[0xc], 4)

int64_t* rcx_5 = arg2[1]
int32_t* r8_1 = *rcx_5

if (&r8_1[1] u<= rcx_5[1])
    *(arg1 + 0x64) = *r8_1
    int64_t* rax_9 = arg2[1]
    *rax_9 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x64, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x64, 4)

return sub_1417558e0(arg2, &arg1[0xd]) __tailcall
