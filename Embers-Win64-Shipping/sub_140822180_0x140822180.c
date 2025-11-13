// 函数: sub_140822180
// 地址: 0x140822180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* r10 = arg2
int64_t var_e8 = 0
int32_t r12 = 0
int32_t var_e0 = 0
int64_t rbp = 0
int32_t var_dc = 0x20
int64_t* r15 = *(arg1 + 0x30)
int64_t var_58 = 0
int32_t var_50 = 0
int32_t var_4c = 0x20
uint64_t rcx_1 = sx.q(*(arg1 + 0x38)) << 3 u>> 3
int64_t var_180 = 0

if (r15 u> &r15[sx.q(*(arg1 + 0x38))])
    rcx_1 = 0

if (rcx_1 != 0)
    do
        void* rsi_1 = *r15
        int32_t var_188
        int32_t var_184
        sub_140801190(r10, rsi_1 + 0x28, &var_188, &var_184)
        int32_t rbx_1 = var_188
        void* i_3
        void* r14_1
        
        if (rbx_1 == 0xffffffff)
            rbx_1 = var_184
            
            if (rbx_1 != 0xffffffff)
                void var_168
                i_3 = &var_168
                r14_1 = &var_180
                goto label_140822268
        else
            void var_d8
            i_3 = &var_d8
            r14_1 = &var_180:4
        label_140822268:
            void* i_2 = *(i_3 + 0x80)
            void* i = i_3
            int64_t rdx_1 = sx.q(*(i_3 + 0x88))
            
            if (i_2 != 0)
                i = i_2
            
            int64_t r13_1 = rdx_1 << 2
            
            for (void* rcx_3 = i + r13_1; i != rcx_3; i += 4)
                if (*i == rbx_1)
                    goto label_140822327
            
            int32_t rax_4 = (rdx_1 + 1).d
            *(i_3 + 0x88) = rax_4
            
            if (rax_4 s> *(i_3 + 0x8c))
                sub_1407c3770(i_3, rdx_1.d)
            
            void* i_4 = *(i_3 + 0x80)
            
            if (i_4 != 0)
                i_3 = i_4
            
            *(i_3 + r13_1) = rbx_1
            int16_t rax_5 = *(rsi_1 + 0x3a)
            
            if (rax_5 == 0xffff)
                if (*(rsi_1 + 0x30) == 0 || *(rsi_1 + 0x38) == 1)
                    rax_5 = 0
                else
                    void* rax_6 = sub_140761a70(rsi_1 + 0x30)
                    int16_t rcx_6 = *(rax_6 + 0x5c)
                    rax_5 = (*(rax_6 + 0x58) - 1 + rcx_6) & neg.w(rcx_6)
                
                *(rsi_1 + 0x3a) = rax_5
            
            int32_t rcx_7 = sx.d(rax_5)
            
            if (rcx_7 s< 0)
                rcx_7 += 3
            
            int32_t rcx_9 = (rcx_7 s>> 2) + *r14_1
            *r14_1 = rcx_9
            
            if (r12 u>= rcx_9)
                rcx_9 = r12
            
            r12 = rcx_9
    label_140822327:
        r10 = arg2
        r15 = &r15[1]
        rbp += 1
    while (rbp != rcx_1)

void arg_38
void* rdi_1 = &arg_38

for (int64_t i_1 = 2; i_1 != 0; )
    rdi_1 -= 0x90
    i_1 -= 1
    int64_t rcx_10 = *rdi_1
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_1a8)
return zx.q(r12)
