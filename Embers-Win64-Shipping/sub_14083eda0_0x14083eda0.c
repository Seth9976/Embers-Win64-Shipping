// 函数: sub_14083eda0
// 地址: 0x14083eda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t var_7c = 0x80
uint64_t var_e8 = 0
int64_t var_e0
__builtin_memset(&var_e0, 0, 0x24)
void** var_f8 = &data_142dd5c48
uint64_t var_b8 = 0
int64_t var_b0
__builtin_memset(&var_b0, 0, 0x34)
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int64_t var_58 = 0
int64_t var_50 = 0
int32_t var_78 = 0xffffffff
sub_140822520(&var_e8, arg1 + 0x50)
void* r13 = arg1 + 0x60
int64_t var_d8
sub_14081d8c0(&var_d8, r13)
uint64_t var_c8
sub_140780c40(&var_c8, arg1 + 0x70)
sub_140780c40(&var_b8, arg1 + 0x80)
int32_t var_44
int32_t var_44_1 = var_44 + 1
(*(*(arg1 + 0x40) + 0x18))(arg1 + 0x40, 0)
void* rax_3 = *(arg1 + 0x28)
int64_t* r12 = *(rax_3 + 0x30)
void* rax_5 = &r12[sx.q(*(rax_3 + 0x38)) * 5]

if (r12 != rax_5)
    int16_t* rbx_1 = r12 + 0x12
    
    do
        int32_t* rax_7
        int64_t r9_1
        rax_7, r9_1 = var_f8[6](&var_f8, r12)
        int32_t var_130
        int32_t var_128
        int16_t rax_19
        int64_t rcx_17
        int64_t rdx_11
        
        if (rax_7 == 0)
        label_14083ef2e:
            void* rdi_1 = *(*(arg1 + 0x28) + 0x40)
            int32_t* rax_12
            int64_t r9_2
            rax_12, r9_2 = (*(*(rdi_1 + 0x40) + 0x30))(rdi_1 + 0x40, r12)
            int32_t rsi_2
            
            if (rax_12 == 0)
                rsi_2 = -1
            else
                rsi_2 = *rax_12
            
            int64_t rax_21 = *(arg1 + 0x40)
            int32_t var_114
            int32_t* var_138_2 = &var_114
            r9_2.b = 1
            var_114 = 0xffffffff
            (*(rax_21 + 8))(arg1 + 0x40, r12, 0, r9_2, var_138_2, var_130, var_128)
            
            if (sub_140834780(&rbx_1[-5]) == 0)
                rax_19 = *rbx_1
                
                if (rax_19 == 0xffff)
                    if (*(rbx_1 - 0xa) == 0 || rbx_1[-1] == 1)
                        rax_19 = 0
                    else
                        void* rax_27 = sub_140761a70(&rbx_1[-5])
                        int16_t rcx_29 = *(rax_27 + 0x5c)
                        rax_19 = (*(rax_27 + 0x58) - 1 + rcx_29) & neg.w(rcx_29)
                    
                    *rbx_1 = rax_19
                
                rcx_17 = sx.q(var_114)
                r13 = arg1 + 0x60
                rdx_11 = sx.q(rsi_2) + *(rdi_1 + 0x60)
            label_14083f001:
                int64_t rcx_18 = rcx_17 + *r13
                
                if (rcx_18 != rdx_11)
                    memcpy(rcx_18, rdx_11, sx.d(rax_19))
                
                *(arg1 + 0xf0) |= 1
            else
                void* const rcx_26
                
                if (rsi_2 s< 0 || rsi_2 s>= *(rdi_1 + 0x78))
                    rcx_26 = nullptr
                else
                    rcx_26 = *(*(rdi_1 + 0x70) + (sx.q(rsi_2) << 3))
                
                var_128 = 0x7f800000
                var_130 = 0
                void* rax_24 = sub_140d2e1f0(rcx_26, arg1, 0, 0xfffffff, 0, var_130)
                int64_t r8_3 = *(arg1 + 0x40)
                int32_t* rax_25 = (*(r8_3 + 0x30))(arg1 + 0x40, r12, r8_3)
                r13 = arg1 + 0x60
                
                if (rax_25 != 0)
                    int64_t rcx_14 = sx.q(*rax_25)
                    
                    if (rcx_14.d != 0xffffffff)
                        *(*(arg1 + 0x70) + (rcx_14 << 3)) = rax_24
                        *(arg1 + 0xf0) |= 2
        else
            int64_t rsi_1 = sx.q(*rax_7)
            
            if (rsi_1.d == 0xffffffff)
                goto label_14083ef2e
            
            void* rax_8 = *(arg1 + 0x28)
            
            if (rax_8 == 0 || *(rax_8 + 0x40) != arg1)
                int64_t* rax_9 = *(arg1 + 0x30)
                void* r8_1 = &rax_9[sx.q(*(arg1 + 0x38)) * 5]
                
                if (rax_9 == r8_1)
                    goto label_14083ef2e
                
                while (*rax_9 != *r12 || rax_9[1] != *(rbx_1 - 0xa) || rax_9[2].w != rbx_1[-1])
                    rax_9 = &rax_9[5]
                    
                    if (rax_9 == r8_1)
                        goto label_14083ef2e
            
            int64_t rax_13 = *(arg1 + 0x40)
            int32_t var_118
            int32_t* var_138_1 = &var_118
            r9_1.b = 1
            var_118 = 0xffffffff
            (*(rax_13 + 8))(arg1 + 0x40, r12, 0, r9_1, var_138_1, var_130, var_128)
            
            if (sub_140834780(&rbx_1[-5]) == 0)
                rax_19 = *rbx_1
                
                if (rax_19 == 0xffff)
                    if (*(rbx_1 - 0xa) == 0 || rbx_1[-1] == 1)
                        rax_19 = 0
                    else
                        void* rax_20 = sub_140761a70(&rbx_1[-5])
                        int16_t rcx_16 = *(rax_20 + 0x5c)
                        rax_19 = (*(rax_20 + 0x58) - 1 + rcx_16) & neg.w(rcx_16)
                    
                    *rbx_1 = rax_19
                
                rcx_17 = sx.q(var_118)
                rdx_11 = rsi_1 + var_d8
                goto label_14083f001
            
            int32_t var_c0
            void* rdi_2
            
            if (rsi_1.d s< 0 || rsi_1.d s>= var_c0)
                rdi_2 = nullptr
            else
                rdi_2 = *(var_c8 + (rsi_1 << 3))
            
            int32_t* rax_17 = (*(*(arg1 + 0x40) + 0x30))(arg1 + 0x40, r12)
            
            if (rax_17 != 0)
                int64_t rax_18 = sx.q(*rax_17)
                
                if (rax_18.d != 0xffffffff)
                    *(*(arg1 + 0x70) + (rax_18 << 3)) = rdi_2
                    *(arg1 + 0xf0) |= 2
        r12 = &r12[5]
        rbx_1 = &rbx_1[0x14]
    while (r12 != rax_5)

sub_140835b50(arg1 + 0x40)
int64_t result = sub_14081ccd0(&var_f8)
__security_check_cookie(rax_1 ^ &var_158)
return result
