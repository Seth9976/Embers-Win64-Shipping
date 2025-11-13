// 函数: sub_1423a9220
// 地址: 0x1423a9220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg1
int32_t r14 = 0
int64_t* r15 = arg2
int128_t zmm9
int128_t var_78 = zmm9
void* var_c8 = nullptr
int32_t var_c0 = 0
float i
int128_t zmm7
i, zmm7 = sub_141f1b700(r15, arg3, &var_c8)
int64_t r11 = sx.q(var_c0)
void* r10 = var_c8
void* rbx

if (r11.d != 0)
    void* rcx_1
    void* rdx_3
    
    if (not(i <= 0f))
        rcx_1 = r10
        rdx_3 = r11 * 0x30 + r10
    
    if (i <= 0f || r10 == rdx_3)
    label_1423a92db:
        void* rcx_2 = r10
        char var_d8
        int32_t var_d0
        void* var_b8
        int128_t var_a8
        
        if ((r15[0x11].b & 1) != 0)
            var_d8 = 0
            sub_14239eaa0(rcx_2, r11.d, var_d8, &var_d8)
            sub_140865c40(r13 + 0x168, &var_d0, r15)
            int64_t rax_13 = sx.q(var_d0)
            int64_t rcx_14
            
            if (rax_13.d == 0xffffffff)
                rcx_14 = 0
            else
                rcx_14 = *(r13 + 0x168) + rax_13 * 0x18
            
            int32_t r9_5 = var_c0
            int64_t rax_15 = rcx_14 + 8
            
            if (rcx_14 == 0)
                rax_15 = 0
            
            var_d0.q = rax_15
            
            if (r9_5 s> 0)
                int64_t r12_2 = 0
                int128_t var_58_1 = zmm7
                int128_t zmm8 = 0x7f7fffff
                int32_t var_ac_1 = 0x3f800000
                
                do
                    void* rdx_19 = var_c8
                    int64_t rcx_16 = r12_2 * 0x30
                    int32_t r8_8 = r14 + 1
                    rbx = 1
                    int64_t rdi_2 = 1
                    
                    if (r8_8 s< r9_5)
                        void* rax_17 = rdx_19 + 0x4c + rcx_16
                        
                        while (not(*(rcx_16 + rdx_19 + 8) f!= *(rax_17 - 0x14)))
                            if (*(rcx_16 + rdx_19 + 0xc) f!= *(rax_17 - 0x10))
                                break
                            
                            if (*(rcx_16 + rdx_19 + 0x10) f!= *(rax_17 - 0xc))
                                break
                            
                            if (*(rcx_16 + rdx_19 + 0x14) f!= *(rax_17 - 8))
                                break
                            
                            if (*(rcx_16 + rdx_19 + 0x18) f!= *(rax_17 - 4))
                                break
                            
                            if (*(rcx_16 + rdx_19 + 0x1c) f!= *rax_17)
                                break
                            
                            if (*(rcx_16 + rdx_19 + 0x20) f!= *(rax_17 + 4))
                                break
                            
                            rbx = zx.q(rbx.d + 1)
                            rdi_2 += 1
                            rax_17 += 0x30
                            r8_8 += 1
                            
                            if (r8_8 s>= r9_5)
                                break
                    
                    void* rsi_2 = rcx_16 + rdx_19
                    void* rax_18 = sub_141f15610(r15)
                    float zmm5_1 = r15[0x20].d
                    float zmm1_2 = *(rsi_2 + 8) - zmm5_1
                    i = *(r15 + 0x104)
                    zmm7 = r15[0x21].d
                    float zmm2_1 = *(rsi_2 + 0xc) - i
                    float zmm4_1 = r15[0x3f].d
                    float zmm0_2 = *(rsi_2 + 0x10) f- zmm7.d
                    float temp0_1 = _mm_max_ss(zmm4_1, 0)
                    float temp0_3 = _mm_max_ss(
                        zmm4_1 - _mm_sqrt_ss(0, zmm2_1 * zmm2_1 + zmm1_2 * zmm1_2 + zmm0_2 * zmm0_2)
                            f- *(rsi_2 + 0x20), 
                        0)
                    
                    if (rax_18 == 0)
                        zmm1_2 = zmm8.d
                    else
                        zmm1_2 = zmm5_1 f- *(rax_18 + 0x100)
                        zmm0_2 = zmm7.d f- *(rax_18 + 0x108)
                        zmm2_1 = i f- *(rax_18 + 0x104)
                        zmm1_2 = _mm_sqrt_ss(0, zmm2_1 * zmm2_1 + zmm1_2 * zmm1_2 + zmm0_2 * zmm0_2)
                            + *(rax_18 + 0x1f8) f+ *(rax_18 + 0x118)
                        zmm1_2 = zmm1_2 * zmm1_2
                    
                    var_b8.d = zmm5_1
                    var_b8:4.d = i
                    int32_t var_b0_2 = zmm7.d
                    int32_t rax_19 = sub_1423a8ab0(r13, rsi_2 + 8, 0xffff0000, r15, r15[0x4e].d, 
                        &var_b8, temp0_3 * temp0_3, temp0_1 * temp0_1, zmm1_2)
                    var_a8:8.d = rbx.d
                    var_a8.q = sx.q(r14) * 0x30 + var_c8
                    float var_108_2
                    var_108_2.q = &var_d0
                    zmm8 = sub_1423a9e00(r13, r15, &var_a8, rax_19, var_108_2)
                    r9_5 = var_c0
                    r14 += rbx.d
                    r12_2 += rdi_2
                while (r14 s< r9_5)
        else
            void* rdx_6 = r11 * 0x30 + r10
            
            if (r10 != rdx_6)
                do
                    if (*(rcx_2 + 0x28) == 0)
                        goto label_1423a9291
                    
                    rcx_2 += 0x30
                while (rcx_2 != rdx_6)
            
            var_d8 = 0
            sub_14239ee60(r10, r11.d, var_d8)
            sub_140865c40(r13 + 0x168, &var_d0, r15)
            int64_t rax_3 = sx.q(var_d0)
            int64_t rcx_5
            
            if (rax_3.d == 0xffffffff)
                rcx_5 = 0
            else
                rcx_5 = *(r13 + 0x168) + rax_3 * 0x18
            
            int32_t r8_3 = var_c0
            int64_t rax_5 = rcx_5 + 8
            
            if (rcx_5 == 0)
                rax_5 = 0
            
            var_d0.q = rax_5
            
            if (r8_3 s> 0)
                void* r12_1 = r13 + 0x158
                i = 3.40282347e+38f
                int64_t rsi_1 = 0
                var_a8 = data_142d3f660
                
                do
                    void* rdx_10 = var_c8
                    int32_t rcx_6 = r14 + 1
                    void* r10_3 = rsi_1 * 0x30 + rdx_10
                    rbx = 1
                    int64_t rdi_1 = 1
                    
                    if (rcx_6 s< r8_3)
                        int32_t* rdx_12 = rdx_10 + 0x28 + (rsi_1 + 1) * 0x30
                        
                        while (*rdx_12 == *(r10_3 + 0x28))
                            rbx = zx.q(rbx.d + 1)
                            rdi_1 += 1
                            rcx_6 += 1
                            rdx_12 = &rdx_12[0xc]
                            
                            if (rcx_6 s>= r8_3)
                                break
                    
                    int32_t zmm1_1 = r15[0x4e].d
                    int32_t r8_4 = *(r10_3 + 0x28)
                    int128_t var_98
                    __builtin_memset(&var_98, 0, 0x1c)
                    int32_t rax_9 = sub_1423a8ab0(r13, &var_98, r8_4, r15, zmm1_1, &var_a8, 0, 0, i)
                    int32_t var_b0_1 = rbx.d
                    var_b8 = sx.q(r14) * 0x30 + var_c8
                    int32_t var_108_1
                    var_108_1.q = &var_d0
                    i = sub_1423a9e00(arg1, r15, &var_b8, rax_9, var_108_1)
                    int64_t r15_1 = sx.q(*(r12_1 + 8))
                    int32_t rax_11 = (r15_1 + 1).d
                    *(r12_1 + 8) = rax_11
                    
                    if (rax_11 s> *(r12_1 + 0xc))
                        sub_1405a4cf0(r12_1)
                    
                    r14 += rbx.d
                    rsi_1 += rdi_1
                    *(*r12_1 + (r15_1 << 2)) = rax_9
                    r8_3 = var_c0
                    r15 = arg2
                    r13 = arg1
                while (r14 s< r8_3)
        r10 = var_c8
        rbx.b = 2
    else
        while (not(i f< *(rcx_1 + 0x24)))
            rcx_1 += 0x30
            
            if (rcx_1 == rdx_3)
                goto label_1423a92db
        
        rbx.b = 1
else
label_1423a9291:
    rbx.b = 0

if (r10 != 0)
    sub_140a74f90(r10)

return zx.q(rbx.b)
