// 函数: sub_140ca3f80
// 地址: 0x140ca3f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ca4120(arg1, arg2)
int64_t* r8 = arg2[1]
int32_t* rcx = *r8
int64_t* result

if (&rcx[1] u<= r8[1])
    arg1[0x16].d = *rcx
    result = arg2[1]
    *result += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    result = sub_140b54070(arg2, &arg1[0x16], zmm1)
else
    result = (*(*arg2 + 0x150))(arg2, &arg1[0x16], 4)

if ((arg2[5].b & 1) == 0)
    return result

arg1[0x16].d &= 0xff8003bd
*(arg1 + 0xb4) = 0
arg1[0x17] = 0
return sub_140be3930(arg1)
