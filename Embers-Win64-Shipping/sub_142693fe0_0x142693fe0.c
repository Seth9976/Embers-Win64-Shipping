// 函数: sub_142693fe0
// 地址: 0x142693fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1[1]
int32_t* rcx = *rdx
int64_t* result

if (&rcx[1] u<= rdx[1])
    *arg4 = *rcx
    result = arg1[1]
    *result += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    result = sub_140b54070(arg1, arg4, arg2)
else
    result = (*(*arg1 + 0x150))(arg1, arg4, 4)

int32_t rcx_3 = *arg4

if (rcx_3 s<= 0)
    return result

if ((arg1[5].b & 1) != 0)
    int64_t rax_3 = j_sub_1426075c0(rcx_3, 0)
    *arg3 = rax_3
    memset(rax_3, 0, sx.q(*arg4))
    rcx_3 = *arg4

return (*(*arg1 + 0x150))(arg1, *arg3, sx.q(rcx_3))
