// 函数: sub_1418db2e0
// 地址: 0x1418db2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint64_t r15 = 0
int64_t var_60 = 0
int32_t rax_2 = arg4[1].d
int32_t* r8 = arg2
int64_t* var_c0 = arg4
var_60.d = rax_2
int32_t result
int32_t var_f8
int32_t var_e8
uint128_t var_a0

if (rax_2 s<= 0)
label_1418db548:
    int128_t zmm0 = zx.o(0)
    var_e8 = *r8
    sub_1418dacd0(r8, &var_e8)
    int32_t rdx_13 = arg1[0x15]
    int64_t r14_3
    
    if (rdx_13 == 0)
        r14_3 = zx.q(arg1[0xa])
        int32_t rax_30 = (r14_3 + 1).d
        arg1[0xa] = rax_30
        
        if (rax_30 s> arg1[0xb])
            sub_1405fde00(&arg1[8])
        
        int32_t rdi_4 = arg1[0x12]
        void* rbx_3 = &arg1[0xc]
        sub_1405a4980(rbx_3, rdi_4 + 1)
        *(rbx_3 + 0x18) += 1
        void* rax_31 = *(rbx_3 + 0x10)
        
        if (rax_31 != 0)
            rbx_3 = rax_31
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_4)
        int64_t rdx_25 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(rbx_3 + (rdx_25 << 2)) &= not.d(1 << (rdi_4.b & 0x1f))
    else
        r14_3 = sx.q(arg1[0x14])
        int64_t r9 = *(arg1 + 0x20)
        int64_t r8_7 = sx.q(*(r14_3 * 0x68 + r9 + 4))
        arg1[0x14] = r8_7.d
        arg1[0x15] = rdx_13 - 1
        
        if (rdx_13 != 1)
            *(r8_7 * 0x68 + r9) = 0xffffffff
    
    void* rax_21 = *(arg1 + 0x40)
    void* r8_8 = &arg1[0xc]
    char* var_100_1 = nullptr
    int32_t var_108_1 = r14_3.d
    
    if (rax_21 != 0)
        r8_8 = rax_21
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r14_3.d)
    void* rdx_16 = r8_8 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)
    *rdx_16 |= 1 << (r14_3.b & 0x1f)
    int32_t* rdx_18 = sx.q(r14_3.d) * 0x68 + *(arg1 + 0x20)
    *rdx_18 = var_e8
    *(rdx_18 + 8) = zmm0.q
    *(rdx_18 + 0x10) = zmm0:8.q
    *(rdx_18 + 0x18) = var_a0
    int128_t var_90
    *(rdx_18 + 0x28) = var_90
    uint128_t var_80
    *(rdx_18 + 0x38) = var_80
    int128_t var_70
    *(rdx_18 + 0x48) = var_70
    *(rdx_18 + 0x58) = var_60
    rdx_18[0x18] = 0xffffffff
    sub_1418dfa70(&arg1[8], &var_f8, *rdx_18, rdx_18, var_108_1, var_100_1)
    memcpy(arg5, &var_a0, var_60.d << 3)
    arg1[0x30] = data_14399fa54
    result.b = 1
else
    int64_t* rsi_1 = nullptr
    int64_t* var_f0 = nullptr
    int64_t r12_1 = 0
    
    while (true)
        int64_t* r14_2 = *arg4 + r12_1
        int32_t rax_3 = r14_2[3].d
        
        if (rax_3 != 0)
            if (r14_2[0xa].b != 0)
                char* rbx_1 = r14_2[6]
                uint32_t rdi_2 = (rax_3 + 1) * 0xc
                sub_1418edb40(&r14_2[7], rbx_1, rdi_2)
                int32_t rax_5 = sub_140b21160(rbx_1, rdi_2, 0)
                rsi_1 = var_f0
                r14_2[7].d = rax_5
                r14_2[0xa].b = 0
            
            sub_1418e0ab0(&arg1[0x1c], &var_f8, &r14_2[7])
            int64_t rax_6 = sx.q(var_f8)
            void* rax_8
            
            if (rax_6.d != 0xffffffff)
                rax_8 = *(arg1 + 0x70) + rax_6 * 0x28
            
            if (rax_6.d == 0xffffffff || rax_8 == 0 || rax_8 == -0x18)
                int128_t var_e0
                void* rdi_3
                
                if (arg1[0x1e] - arg1[0x29] != *arg1)
                    var_e8 = 0x22
                    int64_t* rcx_3 = *(rsi_1 + *(arg3 + 0x188))
                    int64_t var_e4
                    __builtin_memset(&var_e4, 0, 0x20)
                    var_e0:8.q = *(arg1 + 0x18)
                    int32_t var_d0_1 = 1
                    int64_t var_cc_1 = &var_f0
                    rdi_3 = &var_a0 + (r15 << 3)
                    void* rax_15 = *(arg1 + 8)
                    var_f0 = rcx_3
                    result = data_143efb8d8(*(rax_15 + 8), &var_e8, rdi_3)
                
                if (arg1[0x1e] - arg1[0x29] == *arg1 || result != 0)
                    result.b = 0
                    break
                
                void* rax_16 = sub_1418e1e20(r14_2)
                var_e0 = zx.o(0)
                var_e8 = *rax_16
                sub_1418dacd0(rax_16, &var_e8)
                sub_1418cab20(&arg1[0x1c], &var_e8, rdi_3)
                int64_t* rbx_2 = var_e0:8.q
                
                if (rbx_2 != 0)
                    int64_t rcx_8 = *rbx_2
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                    
                    j_sub_140a74f90(rbx_2)
                
                int32_t rdx_11 = r14_2[3].d
                int32_t rax_17 = 0
                int64_t r8_5 = *rdi_3
                
                if (rdx_11 != 0)
                    do
                        uint64_t rdx_9 = zx.q(rax_17)
                        rax_17 += 1
                        *((rdx_9 << 6) + *r14_2 + 0x10) = r8_5
                        rdx_11 = r14_2[3].d
                    while (rax_17 u< rdx_11)
                
                int32_t var_108
                var_108.q = 0
                data_143efb8e8(*(*(arg1 + 8) + 8), rdx_11, *r14_2, 0, var_108)
            else
                *(&var_a0 + (r15 << 3)) = *(rax_8 + 0x18)
            
            arg4 = var_c0
        else
            *(&var_a0 + (r15 << 3)) = 0
        
        rsi_1 = &rsi_1[1]
        r15 = zx.q(r15.d + 1)
        r12_1 += 0x58
        var_f0 = rsi_1
        
        if (r15.d s>= var_60.d)
            r8 = arg2
            goto label_1418db548
__security_check_cookie(rax_1 ^ &var_128)
return result
