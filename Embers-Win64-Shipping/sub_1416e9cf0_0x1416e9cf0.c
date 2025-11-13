// 函数: sub_1416e9cf0
// 地址: 0x1416e9cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* r12 = arg1
int64_t* rcx = *arg3
int32_t* rax_3 = (*(*rcx + 0x20))(rcx)
int128_t* rdi = *(r12 + 0x10)
void* r14_2 = &rdi[sx.q(*(r12 + 0x18)) * 4]
uint128_t var_e8
int64_t result
uint128_t zmm1

if (rdi != r14_2)
    int32_t* rbx_3 = rdi - arg2 + 0x28
    
    do
        if (*(arg2 + rbx_3 - 4) == 0 || rax_3 == 0 || *rax_3 == 0 ||
                test_bit(*(arg2 + rbx_3 - 0x10) | *(arg2 + rbx_3 - 0xc), rax_3[3] u>> 0x15 & 0x1f))
            int64_t rcx_3 = 0
            void* rax_7 = arg2 + 0xc
            
            while (true)
                if ((*(rax_7 - 0xc)).d f> *(rbx_3 + rax_7))
                    goto label_1416e9de5
                
                if ((*rax_7).d f< *(rbx_3 + rax_7 - 0xc))
                    goto label_1416e9de5
                
                rcx_3 += 1
                rax_7 += 4
                
                if (rcx_3 s>= 3)
                    int64_t* rcx_4 = *arg3
                    zmm1 = rdi[1]
                    var_e8 = *rdi
                    uint64_t var_c8_1 = rdi[2].q
                    uint128_t var_d8_1 = zmm1
                    
                    if ((*(*rcx_4 + 8))(rcx_4, &var_e8).b != 0)
                        break
                    
                label_1416e9ee2:
                    result.b = 0
                    goto label_1416ea2b5
        
    label_1416e9de5:
        rdi = &rdi[4]
        rbx_3 = &rbx_3[0x10]
    while (rdi != r14_2)

void* r14_3 = *(r12 + 0x70)
void* r15_2 = sx.q(*(r12 + 0x78)) * 0x58 + r14_3

if (r14_3 != r15_2)
    int128_t* r8 = arg2
    int32_t* rbx_4 = r14_3 + 0x30
    void* r12_1 = -0x3c - r8
    void* rdi_1 = -0x30 - r8
    
    while (true)
        if (rbx_4[3].b != 0 && rax_3 != 0 && *rax_3 != 0
            && not(test_bit(rbx_4[1] | *rbx_4, rax_3[3] u>> 0x15 & 0x1f)))
        label_1416e9eba:
            r14_3 += 0x58
            rbx_4 = &rbx_4[0x16]
            
            if (r14_3 != r15_2)
                continue
            
            r12 = arg1
            break
        
        int32_t* rcx_8 = r8 + 0xc
        int64_t rdx_1 = 0
        
        while (true)
            if (rcx_8[-3].d f> *(rcx_8 + rdi_1 + rbx_4))
                goto label_1416e9eb5
            
            if ((*rcx_8).d f< *(rcx_8 + r12_1 + rbx_4))
                goto label_1416e9eb5
            
            rdx_1 += 1
            rcx_8 = &rcx_8[1]
            
            if (rdx_1 s>= 3)
                int64_t* rcx_9 = *arg3
                zmm1 = *(rbx_4 - 8)
                var_e8 = *(rbx_4 - 0x18)
                uint64_t var_c8_2 = *(rbx_4 + 8)
                uint128_t var_d8_2 = zmm1
                
                if ((*(*rcx_9 + 8))(rcx_9, &var_e8).b == 0)
                    break
                
            label_1416e9eb5:
                r8 = arg2
                goto label_1416e9eba
        
        goto label_1416e9ee2

if (*(r12 + 0x94) == 0)
    int128_t* rsi_1 = arg2
    zmm1.d = (*rsi_1).d f- *(r12 + 0x20)
    uint128_t zmm2
    zmm2.d = (*(rsi_1 + 4)).d f- *(r12 + 0x24)
    uint128_t zmm3
    zmm3.d = (*(rsi_1 + 8)).d f- *(r12 + 0x28)
    uint128_t zmm0
    zmm0.d = zmm1.d f/ *(r12 + 0x44)
    int32_t rax_11 = int.d(zmm0.d)
    zmm0.d = zmm2.d f/ *(r12 + 0x48)
    int32_t var_138 = rax_11
    int32_t rcx_10 = int.d(zmm0.d)
    zmm0.d = zmm3.d f/ *(r12 + 0x4c)
    int32_t var_134_1 = rcx_10
    int32_t rdx_3 = int.d(zmm0.d)
    int32_t var_130_1 = rdx_3
    
    if (not(zmm1.d f>= 0f))
        var_138 = rax_11 - 1
    
    if (not(zmm2.d f>= 0f))
        int32_t var_134_2 = rcx_10 - 1
    
    if (not(zmm3.d f>= 0f))
        int32_t var_130_2 = rdx_3 - 1
    
    int32_t var_f8
    sub_1417a90d0(r12 + 0x20, &var_f8, &var_138)
    zmm1.d = (*(rsi_1 + 0xc)).d f- *(r12 + 0x20)
    zmm2.d = rsi_1[1].d.d f- *(r12 + 0x24)
    zmm3.d = (*(rsi_1 + 0x14)).d f- *(r12 + 0x28)
    zmm0.d = zmm1.d f/ *(r12 + 0x44)
    int32_t rax_15 = int.d(zmm0.d)
    zmm0.d = zmm2.d f/ *(r12 + 0x48)
    var_138 = rax_15
    int32_t rdx_5 = int.d(zmm0.d)
    zmm0.d = zmm3.d f/ *(r12 + 0x4c)
    int32_t var_134_3 = rdx_5
    int32_t rcx_12 = int.d(zmm0.d)
    int32_t var_130_3 = rcx_12
    
    if (not(zmm1.d f>= 0f))
        var_138 = rax_15 - 1
    
    if (not(zmm2.d f>= 0f))
        int32_t var_134_4 = rdx_5 - 1
    
    if (not(zmm3.d f>= 0f))
        int32_t var_130_4 = rcx_12 - 1
    
    int32_t i_1
    sub_1417a90d0(r12 + 0x20, &i_1, &var_138)
    uint64_t rbx_5 = zx.q(var_f8)
    int32_t i = i_1
    int64_t r9_1 = 0
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x2c)
    int32_t r11_1 = 0
    int32_t rdi_2 = 0
    void* r10_1 = nullptr
    int32_t r14_4 = 0
    int32_t var_7c_1 = 0x80
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    void* var_68_1 = nullptr
    int32_t var_60_1 = 0
    int32_t var_120_1 = rbx_5.d
    int64_t var_a0
    
    if (rbx_5.d s<= i)
        int32_t var_110
        int32_t rcx_14 = var_110
        int32_t var_114
        int32_t rax_19 = var_114
        
        do
            int32_t var_f4
            int32_t r8_4 = var_f4
            int32_t var_11c_1 = r8_4
            
            if (r8_4 s<= rax_19)
                do
                    int32_t var_f0
                    int32_t r13_1 = var_f0
                    
                    if (r13_1 s<= rcx_14)
                        do
                            uint64_t* rax_27 = (
                                sx.q((*(r12 + 0x54) * rbx_5.d + r8_4) * *(r12 + 0x58) + r13_1) << 4)
                                + *(r12 + 0x60)
                            rbx_5 = *rax_27
                            int64_t r12_3 = sx.q(rax_27[1].d) * 0x58 + rbx_5
                            
                            if (rbx_5 != r12_3)
                                do
                                    int64_t rcx_15 = sx.q(*(rbx_5 + 0x28))
                                    
                                    if (r11_1 == rdi_2)
                                    label_1416ea152:
                                        int32_t var_108 = rcx_15.d
                                        void var_c0
                                        sub_140998ff0(&var_a8, &var_c0, &var_108, nullptr)
                                        int64_t rdx_11 = 0
                                        void* rcx_18 = arg2 + 0xc
                                        
                                        while (true)
                                            if ((*(rcx_18 - 0xc)).d f>
                                                    *(rcx_18 + rbx_5 + -0x28 - arg2 + 0x28))
                                                goto label_1416ea1de
                                            
                                            if ((*rcx_18).d f<
                                                    *(-0x34 - rsi_1 + rbx_5 + rcx_18 + 0x28))
                                                goto label_1416ea1de
                                            
                                            rdx_11 += 1
                                            rcx_18 += 4
                                            
                                            if (rdx_11 s>= 3)
                                                int128_t zmm1_1 = *(rbx_5 + 0x28)
                                                var_e8 = *(rbx_5 + 0x18)
                                                int64_t* rcx_19 = *arg3
                                                int128_t var_d8_3 = zmm1_1
                                                uint64_t var_c8_3 = *(rbx_5 + 0x38)
                                                
                                                if ((*(*rcx_19 + 8))(rcx_19, &var_e8) == 0)
                                                    r10_1 = var_68_1
                                                    rbx_5.b = 0
                                                    goto label_1416ea24a
                                                
                                            label_1416ea1de:
                                                r14_4 = var_60_1
                                                r10_1 = var_68_1
                                                rdi_2 = var_74_1
                                                r11_1 = var_a0.d
                                                r9_1 = var_a8
                                                break
                                    else
                                        void var_70
                                        void* rax_30 = &var_70
                                        
                                        if (r10_1 != 0)
                                            rax_30 = r10_1
                                        
                                        int32_t rax_31 =
                                            *(rax_30 + ((sx.q(r14_4 - 1) & rcx_15) << 2))
                                        
                                        if (rax_31 == 0xffffffff)
                                            goto label_1416ea152
                                        
                                        while (true)
                                            int64_t r8_5 = sx.q(rax_31) * 3
                                            
                                            if (*(r9_1 + (r8_5 << 2)) == rcx_15.d)
                                                break
                                            
                                            rax_31 = *(r9_1 + (r8_5 << 2) + 4)
                                            
                                            if (rax_31 == 0xffffffff)
                                                goto label_1416ea152
                                        
                                        if (rax_31 == 0xffffffff)
                                            goto label_1416ea152
                                    
                                    rbx_5 += 0x58
                                while (rbx_5 != r12_3)
                                
                                rcx_14 = var_110
                                rsi_1 = arg2
                                r8_4 = var_11c_1
                            
                            r12 = arg1
                            r13_1 += 1
                            rbx_5 = zx.q(var_120_1)
                        while (r13_1 s<= rcx_14)
                        
                        rax_19 = var_114
                    
                    r8_4 += 1
                    var_11c_1 = r8_4
                while (r8_4 s<= rax_19)
                
                i = i_1
            
            rbx_5 = zx.q(rbx_5.d + 1)
            var_120_1 = rbx_5.d
        while (rbx_5.d s<= i)
    
    rbx_5.b = 1
label_1416ea24a:
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
    
    int64_t rcx_24 = var_a8
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    result = zx.q(rbx_5.b)
else
    result.b = 1

label_1416ea2b5:
__security_check_cookie(rax_1 ^ &var_158)
return result
