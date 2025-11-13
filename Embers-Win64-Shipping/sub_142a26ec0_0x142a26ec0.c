// 函数: sub_142a26ec0
// 地址: 0x142a26ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[0x33].d
void* rdi = &arg2[2]
int32_t r9 = *(arg2 + 0x194)
int64_t* rbx = arg1
void* rcx = *arg2
void* r15 = arg2[1]
int32_t r12 = arg2[0x32].d
int32_t rcx_1 = 3

if (rax != 0)
    rcx_1 = 1

int32_t var_6c = r9
int32_t rdx = *(r15 + 0x364)
void* var_60 = rdi
int32_t r8_1 = (rdx + 7) s>> 3
int32_t var_78 = r8_1
int32_t arg_10

if (rax == 0)
    int32_t rax_1 = *(rdi + 0x8c)
    
    if (rax_1 != 1 || *(rdi + 0x88) != 1)
        if (rax_1 == 0)
            arg_10 = 1
        
        if (rax_1 != 0 || *(rdi + 0x88) != rax_1)
            arg_10 = 2
    else
        arg_10 = 0
else
    arg_10 = 1

if (r12 s>= r9)
    return 1

do
    int32_t rbp_1 = 0
    int32_t rsi_2 = r12 s>> 3
    int32_t arg_18 = rsi_2
    int32_t arg_20 = 0
    int64_t rax_5 = *(r15 + 0x408) + (sx.q(*(r15 + 0x368) * r12) << 3)
    int64_t* r14_3 = sx.q(rsi_2 * *(r15 + 0x10e0)) * 0xa0 + *(r15 + 0x10d8)
    int64_t* var_68_1 = r14_3
    
    if (rdx s> 0)
        do
            int32_t rbp_2 = rbx[3].d
            int32_t i = rbp_1 s>> 3
            
            if (rsi_2 != 0 && (i & (rbp_2 - 1)) == 0)
                int64_t rsi_3 = sx.q(rsi_2 - 1)
                int32_t rbx_1 = 0
                CRITICAL_SECTION* rdi_1 = *rbx + rsi_3 * 0x28
                
                while (TryEnterCriticalSection(rdi_1) == 0)
                    rbx_1 += 1
                    
                    if (rbx_1 s>= 0xfa0)
                        EnterCriticalSection(rdi_1)
                        break
                
                rbx = arg1
                
                if (i s> *(rbx[2] + (rsi_3 << 2)) - rbp_2)
                    do
                        SleepConditionVariableCS(arg1[1] + (rsi_3 << 3), rdi_1, 0xffffffff)
                    while (i s> *((sx.q(arg_18) << 2) + -fffffffffffffffc + arg1[2]) - rbp_2)
                    
                    r14_3 = var_68_1
                    rbx = arg1
                
                LeaveCriticalSection(rdi_1)
                rsi_2 = arg_18
                rdi = var_60
            
            int64_t rbp_3 = sx.q(arg_20)
            sub_142a28ab0(rdi, rcx, zx.q(r12), rbp_3.d)
            sub_142a25c40(r15, r12, rbp_3.d, r14_3)
            sub_142a26770(r15, rdi, r12, r14_3)
            
            if (rcx_1 u> 1)
                int32_t rcx_13 = arg_10
                void* rbx_3 = rdi + 0x80
                uint64_t i_2 = zx.q(rcx_1 - 1)
                uint64_t i_1
                
                do
                    if (rcx_13 == 0)
                        sub_142a26920(r15, rbx_3, r12, r14_3)
                        rcx_13 = arg_10
                    else if (rcx_13 == 1)
                        sub_142a26770(r15, rbx_3, r12, r14_3)
                        rcx_13 = arg_10
                    else if (rcx_13 == 2)
                        sub_142a261e0(r15, rbx_3, rax_5 + (rbp_3 << 3), r12, rbp_3.d)
                        rcx_13 = arg_10
                    
                    rbx_3 -= -0x80
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                rbx = arg1
                rsi_2 = arg_18
            
            int32_t rcx_17 = rbx[3].d
            
            if (i s>= r8_1 - 1)
                i = var_78 + rcx_17
            label_142a271c9:
                int64_t rsi_5 = sx.q(rsi_2)
                int64_t r14_5 = rsi_5 * 0x28
                CRITICAL_SECTION* lpCriticalSection = *rbx + r14_5
                int32_t rbx_4 = 0
                
                while (TryEnterCriticalSection(lpCriticalSection) == 0)
                    rbx_4 += 1
                    
                    if (rbx_4 s>= 0xfa0)
                        EnterCriticalSection(lpCriticalSection)
                        break
                
                rbx = arg1
                *(rbx[2] + (rsi_5 << 2)) = i
                WakeConditionVariable(rbx[1] + (rsi_5 << 3))
                LeaveCriticalSection(*rbx + r14_5)
                r14_3 = var_68_1
            else
                int32_t rax_23
                rax_23.b = mods.dp.d(sx.q(i), rcx_17) == 0
                
                if (rax_23 != 0)
                    goto label_142a271c9
            
            rdx = *(r15 + 0x364)
            rbp_1 = rbp_3.d + 8
            rsi_2 = arg_18
            r14_3 = &r14_3[0x14]
            rdi = var_60
            arg_20 = rbp_1
            var_68_1 = r14_3
        while (rbp_1 s< rdx)
        
        r8_1 = var_78
        r9 = var_6c
    
    r12 += rbx[5].d << 3
while (r12 s< r9)

return 1
