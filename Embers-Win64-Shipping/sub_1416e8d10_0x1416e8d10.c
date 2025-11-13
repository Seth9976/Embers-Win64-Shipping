// 函数: sub_1416e8d10
// 地址: 0x1416e8d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int128_t* rdi = *(arg1 + 0x10)
void* r14 = arg1
void* r15_2 = &rdi[sx.q(*(arg1 + 0x18)) * 4]
int64_t* var_100 = arg3

if (rdi != r15_2)
    int32_t* rbx_3 = rdi - arg2 + 0x28
    
    do
        int64_t rcx = 0
        void* rax_2 = &arg2[3]
        
        while (not(*(rax_2 - 0xc) f> *(rbx_3 + rax_2)))
            if (*rax_2 f< *(rbx_3 + rax_2 - 0xc))
                break
            
            rcx += 1
            rax_2 += 4
            
            if (rcx s>= 3)
                int64_t* rsi_1 = *arg3
                zmm6 = *rdi
                zmm7 = rdi[1]
                int64_t r14_1 = sx.q(rsi_1[1].d)
                zmm8 = zx.o(rdi[2].q)
                int32_t rax_3 = (r14_1 + 1).d
                rsi_1[1].d = rax_3
                
                if (rax_3 s> *(rsi_1 + 0xc))
                    sub_1405c4ec0(rsi_1)
                    arg3 = var_100
                
                int64_t rax_4 = *rsi_1
                int64_t rcx_2 = r14_1 * 5
                *(rax_4 + (rcx_2 << 3)) = zmm6
                *(rax_4 + (rcx_2 << 3) + 0x10) = zmm7
                *(rax_4 + (rcx_2 << 3) + 0x20) = zmm8.q
                break
        
        rdi = &rdi[4]
        rbx_3 = &rbx_3[0x10]
    while (rdi != r15_2)
    
    r14 = arg1

int64_t rsi_2 = *(r14 + 0x70)
int64_t r15_4 = sx.q(*(r14 + 0x78)) * 0x58 + rsi_2
int64_t result

if (rsi_2 != r15_4)
    int32_t* rbx_5 = rsi_2 - arg2
    
    do
        int64_t rcx_3 = 0
        result = &arg2[3]
        
        while (not(*(result - 0xc) f> *(rbx_5 + result)))
            if (*result f< *(rbx_5 + result - 0xc))
                break
            
            rcx_3 += 1
            result += 4
            
            if (rcx_3 s>= 3)
                int64_t* rdi_1 = *arg3
                zmm6 = *(rbx_5 + arg2 + 0x18)
                zmm7 = *(rbx_5 + arg2 + 0x28)
                int64_t r14_2 = sx.q(rdi_1[1].d)
                zmm8 = zx.o(*(rbx_5 + arg2 + 0x38))
                int32_t rax_5 = (r14_2 + 1).d
                rdi_1[1].d = rax_5
                
                if (rax_5 s> *(rdi_1 + 0xc))
                    sub_1405c4ec0(rdi_1)
                    arg3 = var_100
                
                result = *rdi_1
                int64_t rcx_5 = r14_2 * 5
                *(result + (rcx_5 << 3)) = zmm6
                *(result + (rcx_5 << 3) + 0x10) = zmm7
                *(result + (rcx_5 << 3) + 0x20) = zmm8.q
                break
        
        rsi_2 += 0x58
        rbx_5 = &rbx_5[0x16]
    while (rsi_2 != r15_4)
    
    r14 = arg1

if (*(r14 + 0x94) == 0)
    zmm6 = zx.o(0)
    float zmm1 = *arg2 f- *(r14 + 0x20)
    int32_t* rsi_3 = arg2
    float zmm2 = arg2[1] f- *(r14 + 0x24)
    float zmm3 = arg2[2] f- *(r14 + 0x28)
    int32_t rax_6 = int.d(zmm1 f/ *(r14 + 0x44))
    float zmm0 = zmm2 f/ *(r14 + 0x48)
    int32_t var_138 = rax_6
    int32_t rcx_6 = int.d(zmm0)
    int32_t var_134_1 = rcx_6
    int32_t rdx_2 = int.d(zmm3 f/ *(r14 + 0x4c))
    int32_t var_130_1 = rdx_2
    
    if (not(zmm1 f>= zmm6.d))
        var_138 = rax_6 - 1
    
    if (not(zmm2 f>= zmm6.d))
        int32_t var_134_2 = rcx_6 - 1
    
    if (not(zmm3 f>= zmm6.d))
        int32_t var_130_2 = rdx_2 - 1
    
    int32_t var_e8
    sub_1417a90d0(r14 + 0x20, &var_e8, &var_138)
    void* rdi_2 = &arg2[3]
    zmm1 = arg2[3] f- *(r14 + 0x20)
    zmm2 = *(rdi_2 + 4) f- *(r14 + 0x24)
    zmm3 = *(rdi_2 + 8) f- *(r14 + 0x28)
    var_138.q = rdi_2
    int32_t rax_10 = int.d(zmm1 f/ *(r14 + 0x44))
    zmm0 = zmm2 f/ *(r14 + 0x48)
    int32_t var_128 = rax_10
    int32_t rdx_4 = int.d(zmm0)
    int32_t var_124_1 = rdx_4
    int32_t rcx_8 = int.d(zmm3 f/ *(r14 + 0x4c))
    int32_t var_120_1 = rcx_8
    
    if (not(zmm1 f>= zmm6.d))
        var_128 = rax_10 - 1
    
    if (not(zmm2 f>= zmm6.d))
        int32_t var_124_2 = rdx_4 - 1
    
    if (not(zmm3 f>= zmm6.d))
        int32_t var_120_2 = rcx_8 - 1
    
    int32_t var_118
    sub_1417a90d0(r14 + 0x20, &var_118, &var_128)
    int32_t r11_1 = var_e8
    int32_t rdx_6 = var_118
    int64_t r9_1 = 0
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x2c)
    void* r10_1 = nullptr
    int32_t var_9c_1 = 0x80
    int32_t var_98_1 = 0xffffffff
    int32_t var_94_1 = 0
    void* var_88_1 = nullptr
    int32_t var_80_1 = 0
    int32_t var_140_1 = r11_1
    int64_t var_c0
    
    if (r11_1 s<= rdx_6)
        int32_t var_110
        int32_t rcx_10 = var_110
        int32_t var_114
        int32_t rax_14 = var_114
        
        do
            int32_t var_e4
            int32_t r8_2 = var_e4
            int32_t var_144_1 = r8_2
            
            if (r8_2 s<= rax_14)
                do
                    int32_t var_e0
                    int32_t r13_1 = var_e0
                    int32_t var_148_1 = r13_1
                    
                    if (r13_1 s<= rcx_10)
                        do
                            void** rax_22 = (
                                sx.q((*(r14 + 0x54) * r11_1 + r8_2) * *(r14 + 0x58) + r13_1) << 4)
                                + *(r14 + 0x60)
                            void* rbx_6 = *rax_22
                            void* r15_6 = sx.q(rax_22[1].d) * 0x58 + rbx_6
                            
                            if (rbx_6 != r15_6)
                                do
                                    int64_t rcx_11 = sx.q(*(rbx_6 + 0x28))
                                    
                                    if (var_c0.d == var_94_1)
                                    label_1416e9122:
                                        int32_t var_108 = rcx_11.d
                                        void var_d8
                                        sub_140998ff0(&var_c8, &var_d8, &var_108, nullptr)
                                        int64_t rdx_11 = 0
                                        void* rcx_13 = rdi_2
                                        
                                        while (not(*(rcx_13 - 0xc) f>
                                                *(rbx_6 + -0x28 - rsi_3 + rcx_13 + 0x28)))
                                            if (*rcx_13 f< *(-0x34 - rsi_3 + rbx_6 + rcx_13 + 0x28))
                                                break
                                            
                                            rdx_11 += 1
                                            rcx_13 += 4
                                            
                                            if (rdx_11 s>= 3)
                                                int64_t* rdi_3 = *var_100
                                                zmm6 = *(rbx_6 + 0x18)
                                                zmm7 = *(rbx_6 + 0x28)
                                                int64_t rsi_4 = sx.q(rdi_3[1].d)
                                                zmm8 = zx.o(*(rbx_6 + 0x38))
                                                int32_t rax_30 = (rsi_4 + 1).d
                                                rdi_3[1].d = rax_30
                                                
                                                if (rax_30 s> *(rdi_3 + 0xc))
                                                    sub_1405c4ec0(rdi_3)
                                                
                                                int64_t rax_31 = *rdi_3
                                                int64_t rcx_15 = rsi_4 * 5
                                                rdi_2 = var_138.q
                                                *(rax_31 + (rcx_15 << 3)) = zmm6
                                                *(rax_31 + (rcx_15 << 3) + 0x10) = zmm7
                                                *(rax_31 + (rcx_15 << 3) + 0x20) = zmm8.q
                                                break
                                        
                                        r9_1 = var_c8
                                        r10_1 = var_88_1
                                    else
                                        void var_90
                                        void* rax_27 = &var_90
                                        
                                        if (r10_1 != 0)
                                            rax_27 = r10_1
                                        
                                        int32_t rax_28 =
                                            *(rax_27 + ((sx.q(var_80_1 - 1) & rcx_11) << 2))
                                        
                                        if (rax_28 == 0xffffffff)
                                            goto label_1416e9122
                                        
                                        while (true)
                                            int64_t r8_3 = sx.q(rax_28) * 3
                                            
                                            if (*(r9_1 + (r8_3 << 2)) == rcx_11.d)
                                                break
                                            
                                            rax_28 = *(r9_1 + (r8_3 << 2) + 4)
                                            
                                            if (rax_28 == 0xffffffff)
                                                goto label_1416e9122
                                        
                                        if (rax_28 == 0xffffffff)
                                            goto label_1416e9122
                                    
                                    rbx_6 += 0x58
                                while (rbx_6 != r15_6)
                                
                                rcx_10 = var_110
                                r13_1 = var_148_1
                                rsi_3 = arg2
                                r8_2 = var_144_1
                                r14 = arg1
                                r11_1 = var_140_1
                            
                            r13_1 += 1
                            var_148_1 = r13_1
                        while (r13_1 s<= rcx_10)
                        
                        rax_14 = var_114
                    
                    r8_2 += 1
                    var_144_1 = r8_2
                while (r8_2 s<= rax_14)
                
                rdx_6 = var_118
            
            r11_1 += 1
            var_140_1 = r11_1
        while (r11_1 s<= rdx_6)
    
    int32_t var_80_2 = 0
    
    if (r10_1 != 0)
        sub_140a74f90(r10_1)
    
    bool cond:2_1 = var_c0:4.d == 0
    var_c0.d = 0
    
    if (not(cond:2_1))
        sub_140638cc0(&var_c8, 0)
    
    int32_t var_98_2 = 0xffffffff
    int32_t var_94_2 = 0
    int64_t var_b8
    sub_14059a8e0(&var_b8, 0)
    int64_t var_a8
    
    if (var_a8 != 0)
        sub_140a74f90(var_a8)
    
    int64_t rcx_20 = var_c8
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)

result.b = 1
__security_check_cookie(rax_1 ^ &var_168)
return result
