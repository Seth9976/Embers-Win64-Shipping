// 函数: sub_140cf17b0
// 地址: 0x140cf17b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140cf1af0(arg1, &arg2[3])
void* r10 = *arg1

if ((r10.b & 1) != 0)
    r10 = (r10 s>> 1) + arg1

void* rbp_1 = sx.q(arg2[4] * rax) + r10
void* arg_8 = rbp_1
(*arg5)(*(arg5 + 8), &arg_8)
int32_t rax_5 = arg1[1].d - *(arg1 + 0x24)
int32_t rax_9

if (rax_5 u< 4)
    rax_9 = 1
else
    uint32_t rax_6 = rax_5 u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_6 + 8)
    int32_t rcx_1
    
    if (rax_6 == 0xfffffff8)
        rcx_1 = 0x20
    else
        rcx_1 = 0x1f - temp0_2
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_6 + 7)
    
    if (rax_6 == 0xfffffff9)
        rax_9 = 1
    else
        rax_9 = 1 << ((not.d(rcx_1 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))

int64_t rcx_6 = sx.q(arg1[6].d)

if (rcx_6.d == 0 || rcx_6.d s< rax_9)
    int64_t rax_13 = *arg3
    int64_t var_28 = rax_13
    
    if (rax_13 != 0)
        int64_t var_20_1 = arg3[1]
    
    sub_140d0bee0(arg1, arg2, &var_28)
else
    void* rdx_3 = arg1[5]
    int32_t r8_3 = (rcx_6 - 1).d & arg4
    
    if ((rdx_3.b & 1) != 0)
        rdx_3 = (rdx_3 s>> 1) + &arg1[5]
    
    void* rdx_5 = rdx_3 + (((rcx_6 - 1) & sx.q(r8_3)) << 2)
    *(sx.q(arg2[1]) + rbp_1) = r8_3
    *(sx.q(*arg2) + rbp_1) = *rdx_5
    *rdx_5 = rax

return zx.q(rax)
