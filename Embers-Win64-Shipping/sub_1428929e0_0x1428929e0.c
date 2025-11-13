// 函数: sub_1428929e0
// 地址: 0x1428929e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r14 = arg2
int64_t r15 = sx.q(arg5)
int32_t r13 = r15.d
uint64_t rbp = zx.q(*(*arg1 + 4))

if (sub_142890f30(arg1, 0x2000) != 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q((r15 + 7).d)
    r13 = ((temp0_1 & 7) + temp1_1) s>> 3

void* r10 = *arg1

if ((*(r10 + 0x10) & 0x100000) == 0)
    if (r15.d s<= 0)
        *arg3 = 0
        int32_t rbx_1
        rbx_1.b = r15.d == 0
        return zx.q(rbx_1)
    
    if ((*(arg1 + 0x6c) & 0x100) != 0)
        return sub_142892db0(arg1, r14, arg3, arg4, r15.d)
    
    if (rbp.d u> 0x20)
        sub_1428bc530()
        noreturn
    
    uint32_t count
    
    if (arg1[0xf].d == 0)
        count = rbp.d
        arg5 = 0
    else
        int32_t rax_13
        int32_t rcx_6
        
        if (r14 != arg4)
            int64_t rcx_5 = sx.q(rbp.d)
            int64_t r8_6 = r14 - arg4
            int32_t rdx_7
            rdx_7.b = r8_6 u> neg.q(rcx_5)
            rcx_6 = 0
            int32_t rax_12
            rax_12.b = r8_6 u< rcx_5
            
            if (r8_6 != 0)
                rcx_6 = rdx_7 | rax_12
            
            rax_13.b = rbp.d s> 0
        
        if (r14 == arg4 || (rax_13 & rcx_6) != 0)
            sub_1428a5670(6, 0xa6, 0xa2, "crypto\evp\evp_enc.c", 0x1cf)
            return 0
        
        count = rbp.d
        memcpy(r14, &arg1[0x10], rbp.d)
        r14 += rbp
        arg5 = 1
    
    if (sub_142892db0(arg1, r14, arg3, arg4, r15.d) == 0)
        return 0
    
    if (rbp.d u<= 1 || *(arg1 + 0x14) != 0)
        arg1[0xf].d = 0
    else
        *arg3 -= rbp.d
        arg1[0xf].d = 1
        memcpy(&arg1[0x10], sx.q(*arg3) + r14, count)
    
    if (arg5 != 0)
        *arg3 += rbp.d
else
    int32_t rax_7
    int32_t rcx_1
    
    if (rbp.d == 1)
        int64_t rcx = sx.q(r13)
        int64_t r8_1 = r14 - arg4
        int32_t rdx_2
        rdx_2.b = r8_1 u> neg.q(rcx)
        rcx_1 = 0
        int32_t rax_6
        rax_6.b = r8_1 u< rcx
        
        if (r8_1 != 0)
            rcx_1 = rdx_2 | rax_6
        
        rax_7.b = r13 s> 0
    
    if (rbp.d == 1 && (rax_7 & rcx_1) != 0)
        sub_1428a5670(6, 0xa6, 0xa2, "crypto\evp\evp_enc.c", 0x1b4)
        return 0
    
    int32_t rax_8 = (*(r10 + 0x20))(arg1, r14, arg4, r15)
    
    if (rax_8 s< 0)
        *arg3 = 0
        return 0
    
    *arg3 = rax_8

return 1
