// 函数: sub_140ca4020
// 地址: 0x140ca4020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(*arg2 + 8)
int512_t zmm1 = sub_140ca4120(arg1, rbx)
int64_t* rdx_1 = rbx[1]
int32_t* rcx = *rdx_1
int64_t* result

if (&rcx[1] u<= rdx_1[1])
    arg1[0x16].d = *rcx
    result = rbx[1]
    *result += 4
else if ((*(rbx + 0x29) & 0x20) != 0)
    result = sub_140b54070(rbx, &arg1[0x16], zmm1)
else
    result = (*(*rbx + 0x150))(rbx, &arg1[0x16], 4)

if ((rbx[5].b & 1) == 0)
    return result

arg1[0x16].d &= 0xff8003bd
*(arg1 + 0xb4) = 0
arg1[0x17] = 0
return sub_140be3930(arg1)
