// 函数: sub_142121e30
// 地址: 0x142121e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
bool cond:0 = *(arg4 + 0x14) != 0
int128_t* r13 = arg4
void* rax_2 = j_sub_1419cf430(1)
void* rax_3 = j_sub_1419cf430(2)
void* rax_4 = j_sub_1419cf370(1)
void* rdi = rax_4
void* rax_5 = j_sub_1419cf370(2)
void var_118
sub_140b2f110(&var_118)
int64_t* r14 = *rax_2
int64_t r12 = 0
int64_t var_198 = 0
uint64_t rax_7 = sx.q(*(rax_2 + 8)) << 3 u>> 3

if (r14 u> &r14[sx.q(*(rax_2 + 8))])
    rax_7 = 0

int32_t var_1b4
int32_t var_160
int128_t zmm0_1
int128_t zmm1

if (rax_7 != 0)
    do
        void* rdi_1 = *r14
        int32_t rax_8 = 0
        var_1b4 = 0
        int32_t rsi_1 = *(rdi_1 + 0x50)
        
        if (rsi_1 s> 0)
            do
                zmm0_1 = *r13
                zmm1 = r13[1]
                var_160 = arg3
                int128_t var_158_1 = zmm0_1
                int32_t var_15c_1 = rax_8
                int128_t var_148_1 = zmm1
                int128_t var_138_1 = r13[2]
                
                if (sub_1419d8600(rdi_1, &var_160) != 0)
                    int64_t rbx_1 = sx.q(*(arg2 + 0x10))
                    int32_t var_178_1 = var_1b4
                    int32_t rax_11 = (rbx_1 + 1).d
                    *(arg2 + 0x10) = rax_11
                    
                    if (rax_11 s> *(arg2 + 0x14))
                        sub_1405a4f90(arg2 + 8)
                    
                    *(*(arg2 + 8) + rbx_1 * 0x10) = rdi_1.o
                    sub_140b4ad80(&var_118, rdi_1 + 0x28, 8)
                    sub_140b4ad80(&var_118, &var_1b4, 4)
                
                rax_8 = var_1b4 + 1
                var_1b4 = rax_8
            while (rax_8 s< rsi_1)
            
            r12 = var_198
        
        r12 += 1
        r14 = &r14[1]
        var_198 = r12
    while (r12 != rax_7)
    
    rdi = rax_4

int64_t r12_2 = 0
int64_t* r14_1 = *rdi
uint64_t rsi_3 = sx.q(*(rdi + 8)) << 3 u>> 3

if (r14_1 u> &r14_1[sx.q(*(rdi + 8))])
    rsi_3 = 0

if (rsi_3 != 0)
    bool rcx_9 = cond:0
    
    do
        void* rsi_4 = *r14_1
        void* rax_15
        rax_15.b = *(rsi_4 + 0x40) != 0
        
        if (rax_15.b == rcx_9)
            zmm0_1 = *r13
            int64_t* rbx_2 = *(rsi_4 + 0x20)
            zmm1 = r13[1]
            var_160 = arg3
            int128_t var_158_2 = zmm0_1
            int32_t var_15c_2 = 0
            void* rdi_2 = &rbx_2[sx.q(*(rsi_4 + 0x28))]
            int128_t var_148_2 = zmm1
            int128_t var_138_2 = r13[2]
            
            if (rbx_2 == rdi_2)
            label_142122089:
                int64_t rbx_3 = sx.q(*(arg2 + 0x20))
                int32_t rax_18 = (rbx_3 + 1).d
                *(arg2 + 0x20) = rax_18
                
                if (rax_18 s> *(arg2 + 0x24))
                    sub_1405a4d70(arg2 + 0x18)
                
                *(*(arg2 + 0x18) + (rbx_3 << 3)) = rsi_4
                sub_140b4ad80(&var_118, rsi_4 + 0x10, 8)
            else
                while (sub_1419d8600(*rbx_2, &var_160).b != 0)
                    rbx_2 = &rbx_2[1]
                    
                    if (rbx_2 == rdi_2)
                        goto label_142122089
            
            rcx_9 = cond:0
        
        r14_1 = &r14_1[1]
        r12_2 += 1
    while (r12_2 != rsi_3)

j_sub_1419cf300()
int64_t* rcx_13 = data_143f21a80
int64_t* var_1a0_2 = rcx_13
void* rax_21 = &rcx_13[sx.q(data_143f21a88)]

if (rcx_13 != rax_21)
    int32_t rdi_3 = arg3
    
    do
        int64_t r12_3 = *rcx_13
        
        if (sub_142155d00(r12_3, rdi_3, r13) != 0)
            int64_t rdx_8 = 0
            void* const rbx_4 = nullptr
            int64_t var_1a8_1 = 0
            int64_t* rcx_15 = *rax_3
            int64_t* var_198_1 = rcx_15
            uint64_t r8_2 = sx.q(*(rax_3 + 8)) << 3 u>> 3
            
            if (rcx_15 u> &rcx_15[sx.q(*(rax_3 + 8))])
                r8_2 = 0
            
            uint64_t var_188_1 = r8_2
            
            if (r8_2 != 0)
                do
                    void* r14_2 = *rcx_15
                    int32_t rax_26 = 0
                    var_1b4 = 0
                    int32_t r13_1 = *(r14_2 + 0x50)
                    
                    if (r13_1 s> 0)
                        do
                            int32_t var_1c8_1 = rax_26
                            
                            if (sub_142155c10(r14_2, rdi_3, arg4, r12_3.d) != 0)
                                if (rbx_4 == 0)
                                    int64_t rbx_5 = sx.q(*(arg2 + 0x30))
                                    int32_t rax_28 = (rbx_5 + 1).d
                                    *(arg2 + 0x30) = rax_28
                                    
                                    if (rax_28 s> *(arg2 + 0x34))
                                        sub_1405c4f50(arg2 + 0x28)
                                    
                                    int64_t rbx_7 = rbx_5 * 0x30
                                    rbx_4 = rbx_7 + *(arg2 + 0x28)
                                    
                                    if (rbx_7 == neg.q(*(arg2 + 0x28)))
                                        rbx_4 = nullptr
                                    else
                                        __builtin_memset(rbx_4 + 8, 0, 0x20)
                                        *(rbx_4 + 0x28) = r12_3
                                
                                int64_t rsi_5 = sx.q(*(rbx_4 + 0x10))
                                int32_t var_120_1 = var_1b4
                                int32_t rax_30 = (rsi_5 + 1).d
                                *(rbx_4 + 0x10) = rax_30
                                
                                if (rax_30 s> *(rbx_4 + 0x14))
                                    sub_1405a4f90(rbx_4 + 8)
                                
                                *(*(rbx_4 + 8) + rsi_5 * 0x10) = r14_2.o
                                sub_140b4ad80(&var_118, r14_2 + 0x28, 8)
                                sub_140b4ad80(&var_118, &var_1b4, 4)
                                rdi_3 = arg3
                            
                            rax_26 = var_1b4 + 1
                            var_1b4 = rax_26
                        while (rax_26 s< r13_1)
                        
                        rcx_15 = var_198_1
                        rdx_8 = var_1a8_1
                        r8_2 = var_188_1
                    
                    rcx_15 = &rcx_15[1]
                    rdx_8 += 1
                    var_198_1 = rcx_15
                    var_1a8_1 = rdx_8
                while (rdx_8 != r8_2)
            
            int64_t rdi_4 = 0
            int64_t var_1a8_2 = 0
            void** r13_2 = *rax_5
            uint64_t rsi_7 = sx.q(*(rax_5 + 8)) << 3 u>> 3
            
            if (r13_2 u> &r13_2[sx.q(*(rax_5 + 8))])
                rsi_7 = 0
            
            if (rsi_7 != 0)
                bool rcx_23 = cond:0
                
                do
                    void* rsi_8 = *r13_2
                    int64_t rax_35
                    rax_35.b = *(rsi_8 + 0x40) != 0
                    
                    if (rax_35.b == rcx_23)
                        if (sub_142155c70(rsi_8, arg3, arg4).b != 0)
                            if (rbx_4 == 0)
                                int64_t rbx_8 = sx.q(*(arg2 + 0x30))
                                int32_t rax_36 = (rbx_8 + 1).d
                                *(arg2 + 0x30) = rax_36
                                
                                if (rax_36 s> *(arg2 + 0x34))
                                    sub_1405c4f50(arg2 + 0x28)
                                
                                int64_t rbx_10 = rbx_8 * 0x30
                                rbx_4 = rbx_10 + *(arg2 + 0x28)
                                
                                if (rbx_10 == neg.q(*(arg2 + 0x28)))
                                    rbx_4 = nullptr
                                else
                                    __builtin_memset(rbx_4 + 8, 0, 0x20)
                                    *(rbx_4 + 0x28) = r12_3
                            
                            int64_t r14_3 = sx.q(*(rbx_4 + 0x20))
                            int32_t rax_37 = (r14_3 + 1).d
                            *(rbx_4 + 0x20) = rax_37
                            
                            if (rax_37 s> *(rbx_4 + 0x24))
                                sub_1405a4d70(rbx_4 + 0x18)
                            
                            *(*(rbx_4 + 0x18) + (r14_3 << 3)) = rsi_8
                            sub_140b4ad80(&var_118, rsi_8 + 0x10, 8)
                            rdi_4 = var_1a8_2
                        
                        rcx_23 = cond:0
                    
                    rdi_4 += 1
                    r13_2 = &r13_2[1]
                    var_1a8_2 = rdi_4
                while (rdi_4 != rsi_7)
            
            rdi_3 = arg3
            r13 = arg4
        
        rcx_13 = &var_1a0_2[1]
        var_1a0_2 = rcx_13
    while (rcx_13 != rax_21)

sub_140b39010(&var_118)
sub_140b3da80(&var_118, arg2 + 0x38)
sub_140b30ae0(&var_118)
__security_check_cookie(rax_1 ^ &var_1e8)
return 0
