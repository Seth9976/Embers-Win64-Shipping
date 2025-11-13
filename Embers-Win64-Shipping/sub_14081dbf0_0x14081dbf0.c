// 函数: sub_14081dbf0
// 地址: 0x14081dbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_3 = *arg2
uint64_t r9 = zx.q(r9_3 - *arg3)

if (r9_3 == *arg3)
    r9 = zx.q(arg2[1] - arg3[1])

if (r9.d == 0)
    void* rdx = *(arg3 + 8)
    uint64_t arg_10
    uint64_t rcx
    uint64_t rdx_1
    
    if (rdx != 0)
        rdx_1 = *(rdx + 0x18)
        rcx = rdx_1
    else
        arg_10 = r9
        rdx_1 = zx.q(r9.d)
        rcx = r9
    
    void* r8 = *(arg2 + 8)
    uint64_t rax_1
    
    if (r8 != 0)
        r9 = *(r8 + 0x18)
        rax_1 = r9
    else
        arg_10 = r9
        rax_1 = r9
    
    int32_t temp2_1 = r9.d
    r9 = zx.q(r9.d - rdx_1.d)
    
    if (temp2_1 == rdx_1.d)
        r9 = zx.q((rax_1 u>> 0x20).d - (rcx u>> 0x20).d)

return zx.q((r9.d u>> 0x1f).b)
