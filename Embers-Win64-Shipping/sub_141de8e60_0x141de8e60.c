// 函数: sub_141de8e60
// 地址: 0x141de8e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_4 = *(arg1 + 0x3b0)

if (i_4 != 0)
    void* rbx_1 = *(arg1 + 0x3a8) + 0x40
    int32_t i
    
    do
        int64_t rcx = *(rbx_1 + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *(rbx_1 - 0x18)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rbx_1 - 0x28)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 += 0x68
        i = i_4
        i_4 -= 1
    while (i != 1)

*(arg1 + 0x3b0) = 0

if (*(arg1 + 0x3b4) != 0)
    sub_1405fdf40(arg1 + 0x3a8, 0)

TEB* gsbase

if (data_143f39348 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f39348)
    
    if (data_143f39348 == 0xffffffff)
        sub_140b58170(&data_143f39340, "AnimGraph", 1)
        _Init_thread_footer(&data_143f39348)

void* var_e8 = arg1
void* const i_5

if (arg1 == 0)
    i_5 = nullptr
else
    i_5 = *(arg1 + 0x48)

void* const i_2 = i_5
int32_t var_d8 = 0xffffffff
int16_t var_d4 = 0x101
char var_d2 = 0
int64_t result = sub_140d0a0c0(&var_e8)

for (void* const i_1 = i_2; i_1 != 0; i_1 = i_2)
    uint64_t rbx_2
    rbx_2.b = 0
    void* const j_4 = nullptr
    char arg_8 = 0
    int32_t r13_1 = 0
    int64_t var_f8 = 0
    int32_t r14_1 = 0
    int32_t var_ec_1 = 0
    int64_t r15_1 = 0
    int64_t var_108 = 0
    int32_t rsi_1 = 0
    int32_t arg_10 = 0
    int32_t r12_1 = 0
    int32_t var_fc_1 = 0
    int64_t var_118 = 0
    int32_t arg_18 = 0
    int32_t var_10c_1 = 0
    int64_t var_128 = 0
    int32_t var_11c_1 = 0
    void* const i_3 = i_1
    void* const j_1
    
    if (i_1 == 0)
        j_1 = nullptr
    else
        j_1 = *(i_1 + 0x50)
    
    int32_t var_c0_1 = 0xffffffff
    int16_t var_bc_1 = 0x101
    char var_ba_1 = 0
    sub_1406328d0(&i_3)
    void* const j = j_1
    
    if (j != 0)
        do
            if (((zx.q(*(*(j + 8) + 0x10)) u>> 0x14).b & 1) == 0)
            label_141de9108:
                int64_t rbx_6 = sx.q(rsi_1)
                rsi_1 = (rbx_6 + 1).d
                
                if (rsi_1 s> r12_1)
                    sub_1405a4d70(&var_128)
                    r12_1 = var_11c_1
                    r15_1 = var_128
                
                *(r15_1 + (rbx_6 << 3)) = j
            else
                void* rax_3 = sub_142468b80()
                
                if (rax_3 == 0)
                    goto label_141de9108
                
                int64_t rcx_10 = sx.q(*(rax_3 + 0x38))
                void* rax_4 = *(j + 0x78)
                
                if (rcx_10.d s> *(rax_4 + 0x38)
                        || *(*(rax_4 + 0x30) + (rcx_10 << 3)) != rax_3 + 0x30)
                    goto label_141de9108
                
                if (not(test_bit(zx.q(*(j + 0x40)), 8)))
                    int64_t rbx_3 = *(j + 0x28)
                    int64_t r14_2 = sx.q(r13_1)
                    r13_1 = (r14_2 + 1).d
                    
                    if (r13_1 s> var_ec_1)
                        sub_1405a4d70(&var_f8)
                    
                    *(var_f8 + (r14_2 << 3)) = rbx_3
                    int64_t rbx_4 = sx.q(arg_10)
                    int32_t rcx_14 = (rbx_4 + 1).d
                    arg_10 = rcx_14
                    
                    if (rcx_14 s> var_fc_1)
                        sub_1405a4cf0(&var_108)
                        arg_10 = rcx_14
                    
                    *(var_108 + (rbx_4 << 2)) = 0xffffffff
                    int64_t rbx_5 = sx.q(arg_18)
                    r14_1 = (rbx_5 + 1).d
                    arg_18 = r14_1
                    
                    if (r14_1 s> var_10c_1)
                        sub_1405a4d70(&var_118)
                        arg_18 = r14_1
                    
                    *(var_118 + (rbx_5 << 3)) = 0
                else
                    char rax_7 = arg_8
                    
                    if (arg_8 == 0)
                        rax_7 = 1
                    
                    arg_8 = rax_7
                    void* const j_2 = j
                    
                    if (rbx_2.b != 0)
                        j_2 = nullptr
                    
                    j_4 = j_2
            
            void* j_3 = *(j + 0x20)
            sub_1406328d0(&i_3)
            j = j_3
            rbx_2 = zx.q(arg_8)
        while (j != 0)
        
        if (j_4 != 0)
            int64_t rbx_8 = *(i_2 + 0x18)
            int64_t rdi = sx.q(*(arg1 + 0x3b0))
            int64_t* rdi_1
            
            if (rbx_8 != data_143f39340)
                int32_t rax_11 = (rdi + 1).d
                *(arg1 + 0x3b0) = rax_11
                
                if (rax_11 s> *(arg1 + 0x3b4))
                    sub_1405fde00(arg1 + 0x3a8)
                
                rdi_1 = rdi * 0x68 + *(arg1 + 0x3a8)
                *rdi_1 = rbx_8
                rdi_1[1] = 0
            else
                int64_t var_a8_1 = 0
                int32_t rax_9 = (rdi + 1).d
                *(arg1 + 0x3b0) = rax_9
                
                if (rax_9 s> *(arg1 + 0x3b4))
                    sub_1405fde00(arg1 + 0x3a8)
                
                int64_t rdx_7 = *(arg1 + 0x3a8)
                memmove(rdx_7 + 0x68, rdx_7, rdi.d * 0x68)
                rdi_1 = *(arg1 + 0x3a8)
                *rdi_1 = rbx_8
                rdi_1[1] = var_a8_1
            
            rdi_1[2].d = 0xffffffff
            __builtin_memset(&rdi_1[3], 0, 0x49)
            
            if (r13_1 != 0)
                int32_t rax_12 = rdi_1[4].d
                int32_t rdx_9 = rax_12 + r13_1
                
                if (rdx_9 s> *(rdi_1 + 0x24))
                    sub_140638c50(&rdi_1[3], rdx_9)
                    rax_12 = rdi_1[4].d
                
                memmove(rdi_1[3] + (sx.q(rax_12) << 3), var_f8, r13_1 << 3)
                rdi_1[4].d += r13_1
                int32_t var_f0_2 = 0
            
            int64_t r12_3 = sx.q(arg_10)
            
            if (r12_3.d != 0)
                int32_t rax_14 = rdi_1[6].d
                int32_t rdx_11 = r12_3.d + rax_14
                
                if (rdx_11 s> *(rdi_1 + 0x34))
                    sub_1405dadb0(&rdi_1[5], rdx_11)
                    rax_14 = rdi_1[6].d
                
                memmove(rdi_1[5] + (sx.q(rax_14) << 2), var_108, (r12_3 << 2).d)
                rdi_1[6].d += r12_3.d
                int32_t var_100_2 = 0
            
            if (r14_1 != 0)
                int32_t rax_16 = rdi_1[9].d
                int32_t rdx_13 = rax_16 + r14_1
                
                if (rdx_13 s> *(rdi_1 + 0x4c))
                    sub_1405c5570(&rdi_1[8], rdx_13)
                    rax_16 = rdi_1[9].d
                
                memmove(rdi_1[8] + (sx.q(rax_16) << 3), var_118, r14_1 << 3)
                rdi_1[9].d += r14_1
                int32_t var_110_2 = 0
            
            if (rsi_1 != 0)
                int32_t rax_18 = rdi_1[0xb].d
                int32_t rdx_15 = rax_18 + rsi_1
                
                if (rdx_15 s> *(rdi_1 + 0x5c))
                    sub_1405c5570(&rdi_1[0xa], rdx_15)
                    rax_18 = rdi_1[0xb].d
                
                memmove(rdi_1[0xa] + (sx.q(rax_18) << 3), r15_1, rsi_1 << 3)
                rdi_1[0xb].d += rsi_1
                int32_t var_120_2 = 0
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        int64_t rax_20 = var_118
        
        if (rax_20 != 0)
            sub_140a74f90(rax_20)
        
        int64_t rax_21 = var_108
        
        if (rax_21 != 0)
            sub_140a74f90(rax_21)
        
        int64_t rax_22 = var_f8
        
        if (rax_22 != 0)
            sub_140a74f90(rax_22)
    
    i_2 = *(i_2 + 0x28)
    result = sub_140d0a0c0(&var_e8)

return result
