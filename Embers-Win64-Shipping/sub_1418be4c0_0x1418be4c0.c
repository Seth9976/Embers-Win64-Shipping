// 函数: sub_1418be4c0
// 地址: 0x1418be4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void* rbx = *(arg1 + 0x240)

if (*(rbx + 0x78) != 0)
    sub_1418c86c0(rbx, 0, 0)

void* rax_2 = *(rbx + 0x70)
void* result = *(arg1 + 0x458)

if (*(result + 0x10) s> 0)
    int32_t rbx_1 = 0
    int64_t rsi_1 = 0
    int64_t r13_1 = 0
    int32_t rdi_1 = 0
    int64_t* r15_1 = *(result + 8)
    int32_t r14_1 = 0
    int64_t rax_3 = sx.q(*(result + 0x10))
    int64_t r12_1 = 0
    int64_t var_160 = 0
    int32_t var_178_1 = 0
    int32_t var_154_1 = 0
    int64_t var_170 = 0
    int32_t var_164_1 = 0
    uint64_t rcx_2 = rax_3 << 3 u>> 3
    
    if (r15_1 u> &r15_1[rax_3])
        rcx_2 = 0
    
    if (rcx_2 != 0)
        do
            void* rax_5 = *r15_1
            void* rcx_3 = *(rax_5 + 0x50)
            int128_t* rcx_5
            
            if (rcx_3 == 0)
                void* rcx_6 = *(rax_5 + 0x20)
                
                if (rcx_6 == 0)
                    int64_t* rcx_8 = *(rax_5 + 0x28)
                    
                    if (rcx_8 == 0)
                        void* rcx_13 = *(rax_5 + 0x58)
                        
                        if (rcx_13 != 0)
                            int64_t rax_19 = *(rcx_13 + 0x70)
                            int64_t rbx_6 = sx.q(rdi_1)
                            uint64_t var_a0_1 = zx.q(*(rcx_13 + 0x78))
                            uint64_t rax_21 = zx.q(*(rcx_13 + 0x1c))
                            rdi_1 = (rbx_6 + 1).d
                            int64_t var_c4_1 = 0
                            int32_t var_bc_1 = 0
                            int64_t var_b0_1 = 0
                            int32_t var_c8_1 = 0x2c
                            int32_t var_b8_1 = 0x60
                            int32_t var_b4_1 = 0x60
                            
                            if (rdi_1 s> r14_1)
                                sub_1407c3b60(&var_170)
                                r14_1 = var_164_1
                                rsi_1 = var_170
                            
                            rcx_5 = rbx_6 * 0x38
                            *(rcx_5 + rsi_1) = var_c8_1.o
                            *(rcx_5 + rsi_1 + 0x10) = var_b8_1.o
                            *(rcx_5 + rsi_1 + 0x20) = rax_19.o
                            *(rcx_5 + rsi_1 + 0x30) = rax_21
                    else
                        void* rax_13 = (*(*rcx_8 + 0x48))(rcx_8)
                        int32_t rax_14 = sub_1418e0d30(arg1 + 0x248, *(rax_13 + 0x18), 1)
                        int32_t var_70_1 = rax_14
                        int32_t var_6c_1 = rax_14
                        int64_t var_60_1 = *(rax_13 + 0x18)
                        int32_t rax_16 = *(rax_13 + 0x78)
                        int64_t rbx_5 = sx.q(var_178_1)
                        int64_t var_84_1 = 0
                        int32_t var_7c_1 = 0
                        int32_t var_54_1 = 0
                        int32_t rdx_4 = (rbx_5 + 1).d
                        int32_t var_4c_1 = 0
                        int64_t var_48_1 = 1
                        int32_t var_88_1 = 0x2d
                        int32_t var_78_1 = 0x60
                        int32_t var_74_1 = 0x60
                        int32_t var_50_1 = *(rax_13 + 0x70)
                        int64_t var_68_1 = -1
                        var_178_1 = rdx_4
                        
                        if (rdx_4 s> var_154_1)
                            sub_140775520(&var_160)
                            r13_1 = var_160
                            var_178_1 = rdx_4
                        
                        int64_t rcx_12 = rbx_5 * 9
                        *(r13_1 + (rcx_12 << 3)) = var_88_1.o
                        *(r13_1 + (rcx_12 << 3) + 0x10) = var_78_1.o
                        *(r13_1 + (rcx_12 << 3) + 0x20) = var_68_1.o
                        *(r13_1 + (rcx_12 << 3) + 0x30) = rax_16.o
                        *(r13_1 + (rcx_12 << 3) + 0x40) = var_48_1
                else
                    int64_t rax_9 = *(rcx_6 + 0x70)
                    int64_t rbx_3 = sx.q(rdi_1)
                    uint64_t var_d8_1 = zx.q(*(rcx_6 + 0x78))
                    uint64_t rax_11 = zx.q(*(rcx_6 + 0x1c))
                    rdi_1 = (rbx_3 + 1).d
                    int64_t var_fc_1 = 0
                    int32_t var_f4_1 = 0
                    int64_t var_e8_1 = 0
                    int32_t var_100_1 = 0x2c
                    int32_t var_f0_1 = 0x60
                    int32_t var_ec_1 = 0x60
                    
                    if (rdi_1 s> r14_1)
                        sub_1407c3b60(&var_170)
                        r14_1 = var_164_1
                        rsi_1 = var_170
                    
                    rcx_5 = rbx_3 * 0x38
                    *(rcx_5 + rsi_1) = var_100_1.o
                    *(rcx_5 + rsi_1 + 0x10) = var_f0_1.o
                    *(rcx_5 + rsi_1 + 0x20) = rax_9.o
                    *(rcx_5 + rsi_1 + 0x30) = rax_11
            else
                int64_t rax_6 = *(rcx_3 + 0x68)
                int64_t rbx_2 = sx.q(rdi_1)
                uint64_t var_110_1 = zx.q(*(rcx_3 + 0x70))
                uint64_t rax_8 = zx.q(*(rcx_3 + 0x18))
                rdi_1 = (rbx_2 + 1).d
                int64_t var_134_1 = 0
                int32_t var_12c_1 = 0
                int64_t var_120_1 = 0
                int32_t var_138_1 = 0x2c
                int32_t var_128_1 = 0x60
                int32_t var_124_1 = 0x60
                
                if (rdi_1 s> r14_1)
                    sub_1407c3b60(&var_170)
                    r14_1 = var_164_1
                    rsi_1 = var_170
                
                rcx_5 = rbx_2 * 0x38
                *(rcx_5 + rsi_1) = var_138_1.o
                *(rcx_5 + rsi_1 + 0x10) = var_128_1.o
                *(rcx_5 + rsi_1 + 0x20) = rax_6.o
                *(rcx_5 + rsi_1 + 0x30) = rax_8
            r15_1 = &r15_1[1]
            r12_1 += 1
        while (r12_1 != rcx_2)
        
        rbx_1 = var_178_1
    
    data_143efba60(*(rax_2 + 0x40), 0x800, 0x800, 0, 0, 0, rdi_1, rsi_1, rbx_1, r13_1, var_178_1)
    result = arg1
    void* rbx_7 = *(result + 0x458)
    int64_t rdi_2 = sx.q(*(rbx_7 + 0x10))
    int32_t temp0_1 = rdi_2.d
    
    if (temp0_1 s< 0)
        *(rbx_7 + 0x10) = 0
        
        if (*(rbx_7 + 0x14) s< 0)
            sub_1405a4d70(rbx_7 + 8)
        
        result = memset(*(rbx_7 + 8) + (rdi_2 << 3), 0, sx.q(neg.d(rdi_2.d)) << 3)
    else if (temp0_1 s> 0 && rdi_2.d != 0)
        *(rbx_7 + 0x10) = 0
    
    if (rsi_1 != 0)
        result = sub_140a74f90(rsi_1)
    
    if (r13_1 != 0)
        result = sub_140a74f90(r13_1)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
