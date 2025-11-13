// 函数: sub_1405e7e00
// 地址: 0x1405e7e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10
int32_t rax_1 = (*(*arg2 + 0x40))(arg2, &data_1434cbc10, &arg_10)

if (rax_1 s>= 0)
    int64_t r8_1 = arg_10
    *(arg1 + 0x4c) = r8_1.d
    *(arg1 + 0x48) = (r8_1 u>> 0x20).d

if (rax_1 s< 0)
    return zx.q(rax_1)

int32_t rax_5 = (*(*arg2 + 0x40))(arg2, &data_1434cbc20, &arg_10)

if (rax_5 s>= 0)
    int64_t rcx_3 = arg_10
    *(arg1 + 0x54) = rcx_3.d
    *(arg1 + 0x50) = (rcx_3 u>> 0x20).d

if (rax_5 s< 0)
    return zx.q(rax_5)

HRESULT result = MFFrameRateToAverageTimePerFrame(*(arg1 + 0x50), *(arg1 + 0x54), arg1 + 0x80)

if (result s< 0)
    return result

uint64_t rcx_6 = zx.q(*(arg1 + 0x4c) * *(arg1 + 0x48))
*(arg1 + 0x58) = (rcx_6 << 2).d
*(arg1 + 0x5c) = (rcx_6 * 3).d u>> 1
int64_t* rcx_7 = *(arg1 + 0x38)

if (rcx_7 != arg2)
    (*(*arg2 + 8))(arg2)
    int64_t* rcx_9 = *(arg1 + 0x38)
    
    if (rcx_9 != 0)
        (*(*rcx_9 + 0x10))(rcx_9)
    
    *(arg1 + 0x38) = arg2
    rcx_7 = arg2

(*(*rcx_7 + 8))(rcx_7)
(*(*arg2 + 0x50))(arg2, &data_1434cbb90, arg1 + 0xb0)
return result
