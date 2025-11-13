// 函数: sub_141a3ddc0
// 地址: 0x141a3ddc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* r14 = arg1
int32_t rcx = arg1[0xa].d
void* rsi = arg3
*(arg2 + 0xf0) &= 0xfffffffc
void* rdi = arg2
*(arg2 + 0xf0) |= ((rcx u>> 3 & 1) * 2) | (rcx u>> 2 & 1)
char rax_8 = (*(*r14 + 0x278))(r14)
uint64_t rbx = zx.q(rax_8)

if (rax_8 == 2)
    int64_t* rax_10 = (*(*r14 + 0x2e0))(r14)
    int64_t r12_1 = 0
    int64_t* r13_1 = *rax_10
    uint64_t r15_2 = sx.q(rax_10[1].d) << 3 u>> 3
    
    if (r13_1 u> &r13_1[rax_10[1]])
        r15_2 = 0
    
    uint64_t var_118_1 = r15_2
    
    if (r15_2 != 0)
        do
            void* rsi_1 = *r13_1
            int64_t rdi_1 = *(rsi_1 + 0x98)
            rbx = *(rsi_1 + 0x90)
            uint64_t var_160_1 = rbx
            int64_t var_140_1 = rdi_1
            
            if (rbx.b == 0)
                int32_t var_178_1 = (rbx u>> 0x20).d + 1
                rbx = 1.q
                var_160_1 = rbx
            
            if (rdi_1.b == 1)
                int32_t var_170_1 = (rdi_1 u>> 0x20).d + 1
                rdi_1 = 0.q
                var_140_1 = rdi_1
            
            int64_t var_f0_1 = rdi_1
            
            if ((*(rsi_1 + 0xb0) & 1) != 0)
                if (rbx.b == 2 || rdi_1.b == 2)
                label_141a3df40:
                    int64_t* var_c8
                    (*(*r14 + 0x288))(r14, &var_c8, rsi_1)
                    char var_48
                    
                    if ((var_48 & 1) != 0)
                        char rcx_9 = *(rsi_1 + 0x51)
                        
                        if (rcx_9 == 2)
                            rcx_9 = *(arg3 + 0x10)
                        
                        int64_t* rax_20 = &var_c8
                        
                        if ((var_48 & 2) == 0)
                            rax_20 = var_c8
                        
                        rax_20[2].b = rcx_9
                        int64_t* rcx_11 = &var_c8
                        
                        if ((var_48 & 2) == 0)
                            rcx_11 = var_c8
                        
                        sub_140d3a3a0(rcx_11 + 0x14, rsi_1)
                        void* rdx_2 = arg2
                        void* r14_1 = rdx_2 + 0xa0
                        int64_t r15_3 = sx.q(*(r14_1 + 8))
                        int32_t rax_21 = (r15_3 + 1).d
                        *(r14_1 + 8) = rax_21
                        
                        if (rax_21 s> *(r14_1 + 0xc))
                            sub_1405c5340(r14_1)
                            rdx_2 = arg2
                        
                        int128_t* rcx_15 = r15_3 * 0x88 + *r14_1
                        char rax_22 = (rcx_15[8].b & 0xfe) | 2
                        rcx_15[8].b = rax_22
                        
                        if ((var_48 & 1) != 0)
                            rcx_15[8].b = rax_22 | 1
                            char rax_23 = var_48 & 0xfe
                            var_48 = rax_23
                            rcx_15[8].b &= 0xfd
                            rcx_15[8].b |= rax_23 & 2
                            *rcx_15 = var_c8.o
                            int128_t var_b8
                            rcx_15[1] = var_b8
                            uint128_t var_a8
                            rcx_15[2] = var_a8
                            int128_t var_98
                            rcx_15[3] = var_98
                            uint128_t var_88
                            rcx_15[4] = var_88
                            int128_t var_78
                            rcx_15[5] = var_78
                            uint128_t var_68
                            rcx_15[6] = var_68
                            int128_t var_58
                            rcx_15[7] = var_58
                        
                        uint128_t var_108 = rbx.o
                        void** const var_1c0 = &data_14302f448
                        int32_t var_19c_1 = 0x80000000
                        int32_t var_168_1 = 0
                        uint64_t var_1b0_1 = r15_3.d.q
                        void* var_1b8_1 = rdx_2 + 0x40
                        int32_t var_1a8_1 = 0.d
                        sub_141a37e10(rdx_2 + 0x40, &var_108, &var_1c0, 0xffffffff.q)
                        
                        if (rbx.b != 2)
                            int32_t rdx_5 = *(rsi_1 + 0xa0)
                            
                            if (rdx_5 s> 0)
                                int32_t var_154_1 = var_160_1:4.d
                                int64_t rax_26 = 0.q
                                int64_t var_e0_1 = rax_26
                                var_1c0 = &data_14302f448
                                int32_t var_14c_1 = (rax_26 u>> 0x20).d - rdx_5
                                var_108 = 1.q.o
                                int32_t var_190_1 = 0x80000000
                                int32_t var_144_1 = 0
                                uint64_t var_1b0_2 = r15_3.d.q
                                void* var_1b8_2 = rdx_2 + 0x40
                                int32_t var_1a8_2 = 1.d
                                sub_141a37e10(rdx_2 + 0x40, &var_108, &var_1c0, 0xffffffff.q)
                        
                        if (rdi_1.b != 2)
                            int32_t rdx_7 = *(rsi_1 + 0xa4)
                            
                            if (rdx_7 s> 0)
                                int32_t var_134_1 = var_140_1:4.d
                                int64_t rax_29 = 0.q
                                int32_t var_188_1 = r15_3.d
                                int32_t var_12c_1 = (rax_29 u>> 0x20).d + 1 + rdx_7
                                int64_t var_d0_1 = 0.q
                                var_108 = rax_29.o
                                var_1c0 = &data_14302f448
                                int32_t var_184_1 = 0x80000000
                                int32_t var_124_1 = 0
                                uint64_t var_1b0_3 = var_188_1.q
                                void* var_1b8_3 = rdx_2 + 0x40
                                int32_t var_1a8_3 = 2.d
                                sub_141a37e10(rdx_2 + 0x40, &var_108, &var_1c0, 0xffffffff.q)
                        
                        r15_2 = var_118_1
                        r14 = arg1
                        
                        if ((var_48 & 1) != 0)
                            int64_t* rcx_27 = &var_c8
                            
                            if ((var_48 & 2) == 0)
                                rcx_27 = var_c8
                            
                            var_48 &= 0xfe
                            (**rcx_27)(rcx_27, 0)
                            
                            if ((var_48 & 2) == 0)
                                sub_140a74f90(var_c8)
                else
                    uint32_t rax_17 = (rbx u>> 0x20).d
                    uint32_t rcx_7 = (rdi_1 u>> 0x20).d
                    
                    if (rax_17 s<= rcx_7)
                        if (rax_17 != rcx_7)
                            goto label_141a3df40
                        
                        if (rbx.b != 0 && rdi_1.b != 0)
                            goto label_141a3df40
            
            r13_1 = &r13_1[1]
            r12_1 += 1
        while (r12_1 != r15_2)
        
        rdi = arg2
        rsi = arg3
    
    rbx.b = 0
    *(rdi + 0x38) = r14
    (*(*r14 + 0x280))(r14, rdi, rsi)
else if (rbx.b == 0)
    *(rdi + 0x38) = r14
    (*(*r14 + 0x280))(r14, rdi, rsi)

__security_check_cookie(rax_1 ^ &var_1e8)
return zx.q(rbx.b)
