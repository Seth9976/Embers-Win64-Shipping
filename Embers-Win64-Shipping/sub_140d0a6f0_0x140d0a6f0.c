// 函数: sub_140d0a6f0
// 地址: 0x140d0a6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x78)
uint64_t rdi = arg4
int32_t rcx_2

if (rcx == 0)
    rcx_2 = 8
else
    int32_t rax_1 = sub_140bdeca0(rcx)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_1)
    int32_t rdx
    
    if (rcx == 0)
        rdx = 0x20
    else
        rdx = 0x1f - temp0_1
    
    uint64_t rflags_2
    int32_t temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rax_1 - 1)
    arg4 = zx.q(temp0_2)
    
    if (rax_1 == 1)
        rcx_2 = 0
    else
        rcx_2 = (0x20 - (0x1f - arg4.d)) & not.d(rdx << 0x1a s>> 0x1f)

(*(*arg2 + 0x158))(arg2, rdi, zx.q(rcx_2), arg4)
int64_t result
result.b = 1
return result
