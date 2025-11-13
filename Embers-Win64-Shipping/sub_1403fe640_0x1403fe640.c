// 函数: sub_1403fe640
// 地址: 0x1403fe640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg3 - 1)

if (temp0 + 1 s<= 8)
    int32_t rcx_8 = arg1[4].d
    uint32_t temp0_2 = divu.dp.d(0:rcx_8, arg3)
    
    if (arg2 == 0)
        arg1[4].d = rcx_8 - (arg3 - (arg2 + 1)) * temp0_2
    else
        *(arg1 + 0x24) += rcx_8 - (arg3 - arg2) * temp0_2
        arg1[4].d = temp0_2
    
    return sub_1403fe4a0(arg1) __tailcall

uint32_t r10_1 = arg2 u>> (temp0 - 7).b
int32_t rcx_1 = arg1[4].d
char rcx
uint32_t temp0_1 = divu.dp.d(0:rcx_1, ((arg3 - 1) u>> rcx) + 1)

if (r10_1 == 0)
    arg1[4].d = rcx_1 - (((arg3 - 1) u>> rcx) + 1 - (r10_1 + 1)) * temp0_1
else
    *(arg1 + 0x24) += rcx_1 - (((arg3 - 1) u>> rcx) + 1 - r10_1) * temp0_1
    arg1[4].d = temp0_1

sub_1403fe4a0(arg1)
return sub_1403fe100(arg1, ((1 << (temp0 - 7).b) - 1) & arg2, temp0 - 7) __tailcall
