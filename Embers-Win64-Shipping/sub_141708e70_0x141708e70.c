// 函数: sub_141708e70
// 地址: 0x141708e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 8))(arg2, arg1)
sub_14090ad70(arg1, &arg2[0x39], arg3)
int512_t zmm1 = sub_1416f1dc0(arg1, &arg2[0x3b])
int64_t* rdx_3 = arg1[1]
int32_t* r8 = *rdx_3

if (&r8[1] u<= rdx_3[1])
    arg2[0x47].d = *r8
    int64_t* rax_3 = arg1[1]
    *rax_3 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x47], zmm1)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x47], 4)

int64_t* rax_5
int512_t zmm1_1
rax_5, zmm1_1 = sub_1417078f0(arg1, &arg2[0x48], zmm1)
sub_141707c80(rax_5, &arg2[0x4a], zmm1_1)
return arg1
