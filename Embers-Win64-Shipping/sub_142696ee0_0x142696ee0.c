// 函数: sub_142696ee0
// 地址: 0x142696ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
uint32_t result_1
temp0:result_1 = muls.dp.d(0x55555556, *(arg1 + 0x28))
uint32_t result = result_1
uint32_t r8_1 = temp0 u>> 0x1f
uint64_t rcx_1 = zx.q(temp0 + r8_1)

if (temp0 != neg.d(r8_1))
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = muls.dp.d(0x55555556, *(arg1 + 0x18))
    result = temp3_1 u>> 0x1f
    uint64_t rdx_2 = zx.q(temp3_1 + result)
    
    if (temp3_1 != neg.d(result))
        uint32_t r14_1 = (rcx_1 * 3).d << 2
        int32_t var_20 = rcx_1.d
        int64_t* rcx_3 = *(arg1 + 8) + 0x10
        uint32_t rbp_1 = (rdx_2 * 3).d << 2
        int32_t var_24 = rdx_2.d
        int32_t rdi_1 = r14_1 + 0x30 + rbp_1
        int128_t var_1c = *(arg1 + 0x30)
        rcx_3[1].d = 0
        
        if (*(rcx_3 + 0xc) != rdi_1)
            sub_1405c5510(rcx_3, rdi_1)
        
        int64_t* rcx_5 = *(arg1 + 8) + 0x10
        int32_t rax_1 = rcx_5[1].d + rdi_1
        rcx_5[1].d = rax_1
        
        if (rax_1 s> *(rcx_5 + 0xc))
            sub_1405daba0(rcx_5)
        
        int128_t* rdi_2 = *(*(arg1 + 8) + 0x10)
        *rdi_2 = rdi_1.o
        rdi_2[2].q = 0
        *(rdi_2 + 0x28) = 0
        rdi_2[1].q = var_1c:4.q
        *(rdi_2 + 0x18) = var_1c:0xc.d
        int64_t rbx = sx.q(rbp_1)
        memcpy(&rdi_2[3], *(arg1 + 0x10), rbx.d)
        return memcpy(&rdi_2[3] + rbx, *(arg1 + 0x20), r14_1) __tailcall

int64_t* rcx_11 = *(arg1 + 8) + 0x10
rcx_11[1].d = 0

if (*(rcx_11 + 0xc) == 0)
    return result

return sub_1405c5510(rcx_11, 0)
