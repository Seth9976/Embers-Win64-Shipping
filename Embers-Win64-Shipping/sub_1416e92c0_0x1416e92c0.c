// 函数: sub_1416e92c0
// 地址: 0x1416e92c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t* r14 = *(arg1 + 0x10)
void* rsi = arg1
int64_t* var_d8 = arg3
void* r12_1 = sx.q(*(arg1 + 0x18)) * 0x1c + r14
int32_t* var_108 = arg2

if (r14 != r12_1)
    int32_t* rdi_3 = r14 - arg2 + 4
    
    do
        int64_t rcx = 0
        void* rax_3 = &arg2[3]
        
        while (not(*(rax_3 - 0xc) f> *(rdi_3 + rax_3)))
            if (*rax_3 f< *(rdi_3 + rax_3 - 0xc))
                break
            
            rcx += 1
            rax_3 += 4
            
            if (rcx s>= 3)
                int64_t* rsi_1 = *arg3
                int32_t rbx_1 = *r14
                int64_t r15_1 = sx.q(rsi_1[1].d)
                int32_t rax_4 = (r15_1 + 1).d
                rsi_1[1].d = rax_4
                
                if (rax_4 s> *(rsi_1 + 0xc))
                    sub_1405a4cf0(rsi_1)
                    arg3 = var_d8
                
                *(*rsi_1 + (r15_1 << 2)) = rbx_1
                break
        
        r14 = &r14[7]
        rdi_3 = &rdi_3[7]
    while (r14 != r12_1)
    
    rsi = arg1
    arg2 = var_108

int64_t r15_2 = *(rsi + 0x70)
int64_t r12_3 = sx.q(*(rsi + 0x78)) * 0x34 + r15_2
int64_t result

if (r15_2 != r12_3)
    int32_t* rdi_5 = r15_2 - arg2
    
    do
        int64_t rcx_2 = 0
        result = &arg2[3]
        
        while (not(*(result - 0xc) f> *(rdi_5 + result)))
            if (*result f< *(rdi_5 + result - 0xc))
                break
            
            rcx_2 += 1
            result += 4
            
            if (rcx_2 s>= 3)
                int64_t* rsi_2 = *arg3
                int32_t rbx_2 = *(arg2 + rdi_5 + 0x18)
                int64_t r14_1 = sx.q(rsi_2[1].d)
                int32_t rax_6 = (r14_1 + 1).d
                rsi_2[1].d = rax_6
                
                if (rax_6 s> *(rsi_2 + 0xc))
                    sub_1405a4cf0(rsi_2)
                    arg3 = var_d8
                    arg2 = var_108
                
                *(*rsi_2 + (r14_1 << 2)) = rbx_2
                break
        
        r15_2 += 0x34
        rdi_5 = &rdi_5[0xd]
    while (r15_2 != r12_3)
    
    rsi = arg1

if (*(rsi + 0x94) == 0)
    float zmm1 = *arg2 f- *(rsi + 0x20)
    float zmm2 = arg2[1] f- *(rsi + 0x24)
    float zmm3 = arg2[2] f- *(rsi + 0x28)
    int32_t rax_7 = int.d(zmm1 f/ *(rsi + 0x44))
    float zmm0 = zmm2 f/ *(rsi + 0x48)
    int32_t var_118 = rax_7
    int32_t rcx_4 = int.d(zmm0)
    int32_t var_114_1 = rcx_4
    int32_t rdx_2 = int.d(zmm3 f/ *(rsi + 0x4c))
    int32_t var_110_1 = rdx_2
    
    if (not(zmm1 >= 0f))
        var_118 = rax_7 - 1
    
    if (not(zmm2 >= 0f))
        int32_t var_114_2 = rcx_4 - 1
    
    if (not(zmm3 >= 0f))
        int32_t var_110_2 = rdx_2 - 1
    
    int32_t var_c8
    sub_1417a90d0(rsi + 0x20, &var_c8, &var_118)
    float* rdi_7 = &var_108[3]
    var_118.q = rdi_7
    zmm1 = *rdi_7 f- *(rsi + 0x20)
    zmm2 = rdi_7[1] f- *(rsi + 0x24)
    zmm3 = rdi_7[2] f- *(rsi + 0x28)
    int32_t rax_11 = int.d(zmm1 f/ *(rsi + 0x44))
    zmm0 = zmm2 f/ *(rsi + 0x48)
    int32_t var_100 = rax_11
    int32_t rdx_4 = int.d(zmm0)
    int32_t var_fc_1 = rdx_4
    int32_t rcx_6 = int.d(zmm3 f/ *(rsi + 0x4c))
    int32_t var_f8_1 = rcx_6
    
    if (not(zmm1 >= 0f))
        var_100 = rax_11 - 1
    
    if (not(zmm2 >= 0f))
        int32_t var_fc_2 = rdx_4 - 1
    
    if (not(zmm3 >= 0f))
        int32_t var_f8_2 = rcx_6 - 1
    
    int32_t var_f0
    sub_1417a90d0(rsi + 0x20, &var_f0, &var_100)
    int32_t r11_1 = var_c8
    int64_t r9_1 = 0
    int32_t rdx_6 = var_f0
    void* r10_1 = nullptr
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x2c)
    int32_t var_7c_1 = 0x80
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    void* var_68_1 = nullptr
    int32_t var_60_1 = 0
    int32_t var_120_1 = r11_1
    int64_t var_a0
    
    if (r11_1 s<= rdx_6)
        int32_t var_e8
        int32_t rcx_8 = var_e8
        int32_t var_ec
        int32_t rax_15 = var_ec
        
        do
            int32_t var_c4
            int32_t r8_2 = var_c4
            int32_t var_124_1 = r8_2
            
            if (r8_2 s<= rax_15)
                do
                    int32_t var_c0
                    int32_t r13_3 = var_c0
                    int32_t var_128_1 = r13_3
                    
                    if (r13_3 s<= rcx_8)
                        do
                            int64_t* rax_23 = (
                                sx.q((*(rsi + 0x54) * r11_1 + r8_2) * *(rsi + 0x58) + r13_3) << 4)
                                + *(rsi + 0x60)
                            void* r14_2 = *rax_23
                            void* r15_4 = sx.q(rax_23[1].d) * 0x34 + r14_2
                            
                            if (r14_2 != r15_4)
                                do
                                    int64_t rcx_9 = sx.q(*(r14_2 + 0x18))
                                    
                                    if (var_a0.d == var_74_1)
                                    label_1416e966e:
                                        int32_t var_e0 = rcx_9.d
                                        void var_b8
                                        sub_140998ff0(&var_a8, &var_b8, &var_e0, nullptr)
                                        int64_t rcx_11 = 0
                                        void* rdx_11 = -0x18 - var_108 + r14_2
                                        float* rax_30 = rdi_7
                                        
                                        while (not(rax_30[-3] f> *(rax_30 + rdx_11 + 0x18)))
                                            if (*rax_30 f< *(rax_30 + rdx_11 + 0xc))
                                                break
                                            
                                            rcx_11 += 1
                                            rax_30 = &rax_30[1]
                                            
                                            if (rcx_11 s>= 3)
                                                int64_t* rdi_8 = *var_d8
                                                int32_t rbx_3 = *(r14_2 + 0x18)
                                                int64_t rsi_3 = sx.q(rdi_8[1].d)
                                                int32_t rax_31 = (rsi_3 + 1).d
                                                rdi_8[1].d = rax_31
                                                
                                                if (rax_31 s> *(rdi_8 + 0xc))
                                                    sub_1405a4cf0(rdi_8)
                                                
                                                rdi_7 = var_118.q
                                                *(*rdi_8 + (rsi_3 << 2)) = rbx_3
                                                break
                                        
                                        r9_1 = var_a8
                                        r10_1 = var_68_1
                                    else
                                        void var_70
                                        void* rax_28 = &var_70
                                        
                                        if (r10_1 != 0)
                                            rax_28 = r10_1
                                        
                                        int32_t rax_29 =
                                            *(rax_28 + ((sx.q(var_60_1 - 1) & rcx_9) << 2))
                                        
                                        if (rax_29 == 0xffffffff)
                                            goto label_1416e966e
                                        
                                        while (true)
                                            int64_t r8_3 = sx.q(rax_29) * 3
                                            
                                            if (*(r9_1 + (r8_3 << 2)) == rcx_9.d)
                                                break
                                            
                                            rax_29 = *(r9_1 + (r8_3 << 2) + 4)
                                            
                                            if (rax_29 == 0xffffffff)
                                                goto label_1416e966e
                                        
                                        if (rax_29 == 0xffffffff)
                                            goto label_1416e966e
                                    
                                    r14_2 += 0x34
                                while (r14_2 != r15_4)
                                
                                rcx_8 = var_e8
                                r13_3 = var_128_1
                                r8_2 = var_124_1
                                rsi = arg1
                                r11_1 = var_120_1
                            
                            r13_3 += 1
                            var_128_1 = r13_3
                        while (r13_3 s<= rcx_8)
                        
                        rax_15 = var_ec
                    
                    r8_2 += 1
                    var_124_1 = r8_2
                while (r8_2 s<= rax_15)
                
                rdx_6 = var_f0
            
            r11_1 += 1
            var_120_1 = r11_1
        while (r11_1 s<= rdx_6)
    
    int32_t var_60_2 = 0
    
    if (r10_1 != 0)
        sub_140a74f90(r10_1)
    
    bool cond:3_1 = var_a0:4.d == 0
    var_a0.d = 0
    
    if (not(cond:3_1))
        sub_140638cc0(&var_a8, 0)
    
    int32_t var_78_2 = 0xffffffff
    int32_t var_74_2 = 0
    int64_t var_98
    sub_14059a8e0(&var_98, 0)
    int64_t var_88
    
    if (var_88 != 0)
        sub_140a74f90(var_88)
    
    int64_t rcx_17 = var_a8
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

result.b = 1
__security_check_cookie(rax_1 ^ &var_148)
return result
