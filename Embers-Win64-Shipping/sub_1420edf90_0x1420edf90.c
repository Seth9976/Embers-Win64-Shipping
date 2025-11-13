// 函数: sub_1420edf90
// 地址: 0x1420edf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_1423c8f10(arg1, arg2)
int64_t* rcx = arg2[1]
int32_t result_1 = arg1[0x1d].d
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &result_1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    result_1 = *rdx
    *rcx += 4

int32_t result = result_1
arg1[0x1d].d = result
return result
