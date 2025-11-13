// 函数: sub_141e48310
// 地址: 0x141e48310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2[1]
int32_t i_2 = arg1[1].d
int32_t* rdx = *rcx
uint64_t result

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &i_2
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg2, rdx_1, arg4)
    else
        result = (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    result = zx.q(*rdx)
    i_2 = result.d
    *rcx += 4

int32_t rbx = 0

if ((arg2[5].b & 1) != 0)
    arg4 = sub_141e47af0(arg1, i_2)
    int64_t r14_1 = sx.q(arg1[1].d)
    int32_t i_1 = i_2
    result = zx.q(r14_1.d + i_1)
    arg1[1].d = result.d
    
    if (result.d s> *(arg1 + 0xc))
        result = sub_1405c4f50(arg1)
    
    int32_t* rcx_6 = r14_1 * 0x30 + *arg1
    
    if (i_1 != 0)
        result = &rcx_6[0xa]
        int32_t i
        
        do
            *rcx_6 = 0
            rcx_6 = &rcx_6[0xc]
            __builtin_memset(result - 0x24, 0, 0x14)
            *(result - 8) = 0
            *result = 0
            *(result + 4) = 0
            *(result - 0x10) = 0xffffffff
            result += 0x30
            i = i_1
            i_1 -= 1
        while (i != 1)

if (i_2 s> 0)
    do
        result, arg4 = sub_141e48000(sx.q(rbx) * 0x30 + *arg1, arg2, arg3, rbx, arg4)
        rbx += 1
    while (rbx s< i_2)

return result
