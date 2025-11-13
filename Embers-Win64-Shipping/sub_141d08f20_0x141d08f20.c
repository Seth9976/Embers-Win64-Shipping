// 函数: sub_141d08f20
// 地址: 0x141d08f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* var_110 = arg2
void* rdi = arg1
int32_t i = 0
int32_t i_1 = 0

if (arg2[1].d s> 0)
    int64_t rcx = 0
    int64_t var_118_1 = 0
    
    do
        int64_t* rax_2 = *arg2
        int64_t* r13_1 = nullptr
        int32_t j_1 = 0
        
        if (*(rax_2 + rcx + 8) s> 0)
            int64_t rdx = rcx + 8
            int64_t* r12_1 = nullptr
            void* lpCriticalSection = rdi + 0x38
            int32_t j
            
            do
                int128_t var_98 = data_14321e0d0
                int64_t var_88
                __builtin_memset(&var_88, 0, 0x1c)
                void* var_68 = nullptr
                int32_t var_60_1 = 0
                int64_t var_58_1 = 0
                int16_t var_50_1 = 0
                int64_t rax_3 = *(rax_2 + rcx)
                void* var_f8 = nullptr
                int16_t* r15_1
                
                if (*(r12_1 + rax_3 + 8) == 0)
                    r15_1 = &data_142d40450
                else
                    r15_1 = *(r12_1 + rax_3)
                
                int64_t var_108 = 0
                int64_t rsi_1 = 0
                int32_t var_100_1 = 0
                int32_t r14_1 = 0
                EnterCriticalSection(lpCriticalSection)
                int64_t rdi_1 = sx.q(*(rdi + 0x18))
                int32_t temp0_1 = rdi_1.d
                
                if (temp0_1 != 0)
                    if (temp0_1 s> 0)
                        sub_1405a5410(&var_108, rdi_1.d)
                        r14_1 = var_100_1
                        rsi_1 = var_108
                    
                    memcpy((sx.q(r14_1) << 4) + rsi_1, *(arg1 + 0x10), (rdi_1 << 4).d)
                    var_100_1 = r14_1 + rdi_1.d
                
                if (lpCriticalSection != 0)
                    LeaveCriticalSection(lpCriticalSection)
                
                char rax_4
                int512_t zmm1_1
                rax_4, zmm1_1 = sub_141d02340(&var_108, r15_1, &var_f8, &var_98)
                
                if (rsi_1 != 0)
                    zmm1_1 = sub_140a74f90(rsi_1)
                
                if (rax_4 != 0)
                    void* rsi_2 = var_f8
                    
                    if (rsi_2 != 0)
                        int64_t rdi_3 = *(rsi_2 + 0x18)
                        int32_t rcx_9
                        rcx_9.b = sub_140b5b8a0(rdi_3.d, 0) == 0
                        rcx_9.b |= (rdi_3 u>> 0x20).d != 0
                        
                        if (rcx_9.b != 0)
                            if (r13_1 != 0)
                            label_141d09199:
                                int64_t rcx_14 = *(*var_110 + var_118_1)
                                int16_t* rsi_3
                                
                                if (*(r12_1 + rcx_14 + 8) == 0)
                                    rsi_3 = &data_142d40450
                                else
                                    rsi_3 = *(r12_1 + rcx_14)
                                
                                int32_t rdx_7 = 0
                                int64_t var_130 = 0
                                int32_t rcx_15 = 0
                                int64_t var_128_1 = 0
                                
                                if (rsi_3 != 0 && *rsi_3 != 0)
                                    int64_t rdi_6 = -1
                                    
                                    do
                                        rdi_6 += 1
                                    while (rsi_3[rdi_6] != 0)
                                    
                                    if (rdi_6.d + 1 s> 0)
                                        sub_1405947f0(&var_130, rdi_6.d + 1)
                                        rcx_15 = var_128_1:4.d
                                        rdx_7 = var_128_1.d
                                    
                                    int32_t rax_12 = rdi_6.d + 1 + rdx_7
                                    var_128_1.d = rax_12
                                    
                                    if (rax_12 s> rcx_15)
                                        sub_140594770(&var_130)
                                    
                                    UnDecorator::getReferenceType(var_130, rsi_3, (rdi_6.d + 1) * 2)
                                
                                bool cond:2_1 = (var_68.b & 1) == 0
                                int64_t rdi_8 = sx.q(var_60_1)
                                int64_t var_e8 = var_98.q
                                int64_t var_e0_1 = var_98:8.q
                                int64_t var_d8_1 = var_88
                                int32_t var_70
                                int32_t var_c0_1 = var_70
                                int64_t var_80
                                int128_t var_d0_1 = var_80.o
                                void* var_b8 = nullptr
                                void* rsi_4
                                
                                if (cond:2_1)
                                    rsi_4 = var_68
                                else
                                    rsi_4 = &var_68 + (var_68 s>> 1)
                                
                                int32_t var_b0_1 = rdi_8.d
                                
                                if (rdi_8.d != 0)
                                    sub_14085a140(&var_b8, rdi_8.d, 0)
                                    void* rcx_20
                                    
                                    if ((var_b8.b & 1) == 0)
                                        rcx_20 = var_b8
                                    else
                                        rcx_20 = &var_b8 + (var_b8 s>> 1)
                                    
                                    memcpy(rcx_20, rsi_4, (rdi_8 << 4).d)
                                else
                                    int32_t var_ac_1 = rdi_8.d
                                
                                int32_t var_a8_1 = var_58_1.d
                                int32_t var_a4_1 = var_58_1:4.d
                                char var_a0_1 = var_50_1.b
                                char var_9f_1 = var_50_1:1.b
                                sub_141cfba00(r13_1, &var_e8, &var_130)
                                int64_t rcx_22 = var_130
                                
                                if (rcx_22 != 0)
                                    sub_140a74f90(rcx_22)
                            else
                                int16_t* r9_2
                                
                                if (*(rsi_2 + 0xf8) == r13_1.d)
                                    r9_2 = &data_142d40450
                                else
                                    r9_2 = *(rsi_2 + 0xf0)
                                
                                int16_t* rdx_5
                                
                                if (*(rsi_2 + 0x10) == 0)
                                    rdx_5 = &data_142d40450
                                else
                                    rdx_5 = *(rsi_2 + 8)
                                
                                if (sub_141d093d0(arg1, rdx_5, 0x1f4, r9_2, zmm1_1, 0) != 0)
                                    int64_t rax_7 = sx.q(*(arg1 + 0x18))
                                    int64_t rcx_11 = 0
                                    
                                    if (rax_7.d s> 0)
                                        void* r10_1 = *(arg1 + 0x10)
                                        int64_t* r8_3 = r10_1 + 8
                                        
                                        do
                                            int64_t* rdx_6 = *r8_3
                                            
                                            if (*(*rdx_6 + 0x18) == 0
                                                    && rdx_6[0x28] == *(rsi_2 + 0x140))
                                                r13_1 = *(r10_1 + rcx_11 * 0x10 + 8)
                                                
                                                if (r13_1 == 0)
                                                    goto label_141d092ed
                                                
                                                r13_1[0x31].b = 1
                                                goto label_141d09183
                                            
                                            rcx_11 += 1
                                            r8_3 = &r8_3[2]
                                        while (rcx_11 s< rax_7)
                                
                            label_141d09183:
                                
                                if (r13_1 != 0)
                                    goto label_141d09199
                
            label_141d092ed:
                sub_140a1d5c0(&var_68)
                r12_1 = &r12_1[2]
                j = j_1 + 1
                rdi = arg1
                j_1 = j
                rax_2 = *var_110
                rcx = var_118_1
            while (j s< *(rax_2 + rdx))
            arg2 = var_110
            i = i_1
        
        i += 1
        rcx += 0x10
        i_1 = i
        var_118_1 = rcx
    while (i s< arg2[1].d)

int64_t result = sub_1409f1840(arg2)
__security_check_cookie(rax_1 ^ &var_168)
return result
