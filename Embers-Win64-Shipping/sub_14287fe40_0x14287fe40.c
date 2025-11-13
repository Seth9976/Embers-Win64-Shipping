// 函数: sub_14287fe40
// 地址: 0x14287fe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r12 = 0
int64_t rbx = 0

if (arg3 == 1)
    int64_t* rsi_1
    
    if (arg4 == 0)
        rsi_1 = *(arg1 + 0x430)
    else
        rsi_1 = *(arg1 + 0x460)
    
    int64_t rax_1
    
    if (rsi_1 != 0)
        rax_1 = sub_140687ad0(rsi_1)
    else
        rax_1 = 0
    
    if (*(arg1 + 0x508) == 0 || rsi_1 == 0 || rax_1 == 0)
        memmove(*(arg2 + 0x20), *(arg2 + 0x28), (*(arg2 + 8)).d)
        *(arg2 + 0x28) = *(arg2 + 0x20)
        return 1
    
    int64_t r14_1 = *(arg2 + 8)
    int64_t r15_1 = sx.q(sub_142890e90(rsi_1))
    
    if (r15_1 == 1)
        goto label_14287ff13
    
    if (arg4 != 0)
        int64_t count = r15_1 - modu.dp.q(0:r14_1, r15_1)
        r14_1 += count
        memset(*(arg2 + 0x28) + *(arg2 + 8), 0, count)
        *(arg2 + 8) += count
        count.b -= 1
        *(r14_1 + *(arg2 + 0x28) - 1) = count.b
        rbx = 0
    label_14287ff13:
        
        if (arg4 == 0)
            goto label_14287ff18
        
    label_14287ff40:
        
        if (sub_142891550(rsi_1, *(arg2 + 0x20), *(arg2 + 0x28), zx.q(r14_1.d)) s< 1)
            return 0xffffffff
        
        if (sub_142891580(*(arg1 + 0x448)) != 0)
            int32_t rax_11 = sub_1428916c0(sub_142891580(*(arg1 + 0x448)))
            
            if (rax_11 s< 0)
                sub_142856580(arg1, 0x50, 0x260, 0x44, "ssl\record\ssl3_record.c", 0x392)
                return 0xffffffff
            
            rbx = sx.q(rax_11)
        
        if (r15_1 == 1 || arg4 != 0)
            return 1
        
        int64_t r10_1 = *(arg2 + 8)
        
        if (rbx + 1 u<= r10_1)
            uint64_t rcx_9 = zx.q(*(r10_1 + *(arg2 + 0x20) - 1))
            int64_t rdx_5 = rcx_9 + rbx + 1
            int64_t r9_8 = ((((((r10_1 - rdx_5) ^ rdx_5) | (r10_1 ^ rdx_5)) ^ r10_1) u>> 0x3f) - 1)
                & (((((r15_1 - (rcx_9 + 1)) | ((rcx_9 + 1) ^ r15_1)) ^ r15_1) u>> 0x3f) - 1)
            *(arg2 + 8) = r10_1 - ((rcx_9 + 1) & r9_8)
            r12 = (r9_8.d & 1) | not.d(r9_8.d)
        
        return zx.q(r12)
    
label_14287ff18:
    
    if (r14_1 != 0 && modu.dp.q(0:r14_1, r15_1) == 0)
        goto label_14287ff40

return 0
