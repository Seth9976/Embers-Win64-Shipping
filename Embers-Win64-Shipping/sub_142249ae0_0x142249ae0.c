// 函数: sub_142249ae0
// 地址: 0x142249ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 1 - *(arg1 + 0x268)
*(arg1 + 0x268) = rax
int64_t rcx_1 = sx.q(rax) * 2
void* i = *(arg1 + (rcx_1 << 3) + 0x250)

if (i != 0)
    do
        *(i + 0x10010) = 0
        i = *(i + 0x10000)
    while (i != 0)
    
    i = *(arg1 + (rcx_1 << 3) + 0x250)

*(arg1 + (rcx_1 << 3) + 0x248) = i
*(arg1 + 0x160) = 0

if (*(arg1 + 0x164) s<= 0xffffffff)
    sub_1405c55e0(arg1 + 0x158, 0)

int32_t rax_1 = *(arg1 + 0x9c)
*(arg1 + 0x98) = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405a52a0(arg1 + 0x90, 0)

int64_t rbx = sx.q(*(arg1 + 0xa8))
int128_t zmm6
int128_t var_58 = zmm6
int128_t zmm7
int128_t var_68 = zmm7
int128_t zmm8
int128_t var_78 = zmm8
int128_t zmm9
int128_t var_88 = zmm9
int128_t zmm10
int128_t var_98 = zmm10
int128_t zmm11
int128_t var_a8 = zmm11
int128_t zmm13
int128_t var_c8 = zmm13
int128_t zmm14
int128_t var_d8 = zmm14
int128_t zmm15
int128_t var_e8 = zmm15
int64_t result = sub_142240500(arg1 + 0x40, rbx.d * 0x1c)
int128_t zmm12 = 0x3f000000
int64_t r13 = rbx
int64_t var_130
float arg_8
int128_t zmm0_1
float zmm1
float zmm2
int128_t zmm4_1
float zmm5_1

if (rbx.d s> 0)
    int64_t rbp_1 = 0
    void* rsi_1 = result + 0x18
    
    do
        int32_t* r8_3 = *(arg1 + 0xa0) + -0x18 - result + rsi_1
        zmm0_1 = r8_3[4]
        zmm12 = r8_3[5]
        zmm0_1.d = zmm0_1.d f+ zmm0_1.d
        zmm15 = r8_3[6]
        zmm12.d = zmm12.d f+ zmm12.d
        void* rbx_3 = sx.q(*(*(arg1 + 0xf0) + (rbp_1 << 2))) * 0x60 + *(arg1 + 0x50)
        zmm15.d = zmm15.d f+ zmm15.d
        arg_8 = zmm0_1.d
        zmm10 = *(rbx_3 + 0x3c)
        zmm14 = *(rbx_3 + 0x30)
        zmm9.d = zmm14.d f* zmm0_1.d
        zmm0_1.d = (*(rbx_3 + 0x34)).d f* zmm12.d
        zmm13.d = zmm10.d f* zmm10.d
        zmm9.d = zmm9.d f+ zmm0_1.d
        zmm13.d = zmm13.d f- 0.5f
        zmm9.d = zmm9.d f+ (*(rbx_3 + 0x38)).d f* zmm15.d
        float* rax_3
        rax_3, zmm8, zmm9, zmm10, zmm11 = sub_1417c7990(rbx_3 + 0x30, &var_130, r8_3)
        zmm5_1 = *(rbx_3 + 0x40)
        zmm6 = *(rbx_3 + 0x44)
        zmm7 = *(rbx_3 + 0x48)
        rbp_1 += 1
        *(rsi_1 - 0x18) = *rax_3
        zmm4_1.d = zmm8.d f* zmm15.d
        zmm0_1.d = zmm11.d f* zmm12.d
        zmm2 = zmm11.d * arg_8
        zmm4_1.d = zmm4_1.d f- zmm0_1.d
        zmm1 = zmm14.d f* zmm9.d
        zmm11.d = zmm11.d f* zmm9.d
        zmm0_1.d = zmm13.d f* arg_8
        zmm4_1.d = zmm4_1.d f* zmm10.d
        zmm4_1.d = zmm4_1.d f+ zmm0_1.d
        zmm0_1 = zmm14
        zmm14.d = zmm14.d f* zmm12.d
        zmm0_1.d = zmm0_1.d f* zmm15.d
        zmm4_1.d = zmm4_1.d f+ zmm1
        zmm1 = zmm8.d
        zmm8.d = zmm8.d f* arg_8
        zmm2 = zmm2 f- zmm0_1.d
        zmm14.d = zmm14.d f- zmm8.d
        zmm0_1 = zmm13
        zmm13.d = zmm13.d f* zmm15.d
        zmm4_1.d = zmm4_1.d f+ zmm5_1
        zmm14.d = zmm14.d f* zmm10.d
        zmm0_1.d = zmm0_1.d f* zmm12.d
        zmm14.d = zmm14.d f+ zmm13.d
        *(rsi_1 - 8) = zmm4_1.d
        zmm14.d = zmm14.d f+ zmm11.d
        zmm14.d = zmm14.d f+ zmm7.d
        *rsi_1 = zmm14.d
        *(rsi_1 - 4) = zmm2 f* zmm10.d f+ zmm0_1.d + zmm1 f* zmm9.d f+ zmm6.d
        rsi_1 += 0x1c
    while (rbp_1 s< r13)
    
    zmm12 = 0x3f000000

int32_t result_1 = 0
int64_t rbx_4 = sx.q(*(arg1 + 0x238))
int32_t r12 = 0
int64_t var_180 = rbx_4
int32_t i_1 = 0

if (*(arg1 + 0x174) s> 0)
    int64_t r11_1 = 1
    int128_t* rcx_7 = nullptr
    int64_t var_148_1 = 1
    void* r8_4 = result + 0x18
    void* var_168_1 = r8_4
    int64_t rbp_2 = 0
    int64_t rdx_2 = 0
    int128_t* var_160_1
    __builtin_memset(&var_160_1, 0, 0x18)
    int64_t* r14_2 = nullptr
    int128_t* r10_1 = nullptr
    
    do
        zmm2 = *(r8_4 - 0x18)
        zmm6 = *(r8_4 - 0xc)
        float zmm3 = *(r8_4 - 0x14)
        zmm4_1 = *(r8_4 - 0x10)
        zmm7.d = zmm6.d f* zmm6.d
        zmm11 = *(rcx_7 + *(arg1 + 0xd0))
        int64_t rax_5 = *(arg1 + 0xe0)
        zmm7.d = zmm7.d f- zmm12.d
        arg_8 = zmm11.d
        zmm9 = *(r10_1 + rax_5 + 8)
        zmm8 = *(r10_1 + rax_5)
        zmm9.d = zmm9.d f+ zmm9.d
        zmm14 = *(r10_1 + rax_5 + 4)
        zmm8.d = zmm8.d f+ zmm8.d
        zmm14.d = zmm14.d f+ zmm14.d
        int32_t rsi_2 = *(rcx_7 + *(arg1 + 0xf0))
        zmm0_1.d = zmm14.d f* zmm3
        zmm10.d = zmm8.d f* zmm4_1.d
        zmm5_1 = zmm8.d * zmm2 f+ zmm0_1.d
        zmm0_1.d = zmm14.d f* zmm4_1.d
        zmm15.d = zmm9.d f* zmm3
        int64_t rax_10 = *(arg1 + 0xb0) + sx.q(i_1) * 0x14
        zmm5_1 = zmm5_1 + zmm9.d f* zmm4_1.d
        result = *(arg1 + 0xc0)
        zmm15.d = zmm15.d f- zmm0_1.d
        zmm0_1.d = zmm7.d f* zmm8.d
        var_130 = *(r14_2 + result)
        zmm15.d = zmm15.d f* zmm6.d
        zmm8.d = zmm8.d f* zmm3
        zmm15.d = zmm15.d f+ zmm0_1.d
        zmm0_1.d = zmm9.d f* zmm2
        zmm10.d = zmm10.d f- zmm0_1.d
        zmm15.d = zmm15.d f+ zmm5_1 * zmm2
        zmm0_1.d = zmm7.d f* zmm14.d
        zmm14.d = zmm14.d f* zmm2
        zmm10.d = zmm10.d f* zmm6.d
        zmm14.d = zmm14.d f- zmm8.d
        zmm10.d = zmm10.d f+ zmm0_1.d
        zmm7.d = zmm7.d f* zmm9.d
        zmm15.d = zmm15.d f+ *(r8_4 - 8)
        zmm14.d = zmm14.d f* zmm6.d
        zmm10.d = zmm10.d f+ zmm5_1 * zmm3
        zmm14.d = zmm14.d f+ zmm7.d
        zmm10.d = zmm10.d f+ *(r8_4 - 4)
        zmm14.d = zmm14.d f+ zmm5_1 f* zmm4_1.d
        int64_t arg_10
        arg_10.d = zmm10.d
        zmm14.d = zmm14.d f+ *r8_4
        
        if (rsi_2 s>= *(arg1 + 0x16c))
            break
        
        i_1 += 1
        int64_t rsi_3 = r11_1
        int32_t i_2 = i_1
        
        if (r11_1 s< r13)
            void* rcx_10 = r10_1 + 0xc
            void* var_188_1 = rcx_10
            void* r13_1 = r8_4 + 0x1c
            
            do
                if (rbp_2 s< rbx_4)
                    result = zx.q(result_1)
                    result_1 += 1
                    rcx_10 = var_188_1
                
                if (rbp_2 s>= rbx_4 || *(*(arg1 + 0x230) + (rbp_2 << 2)) != result.d)
                    result = *(arg1 + 0xf0)
                    int32_t r8_5 = *(result + (rsi_3 << 2))
                    
                    if (r8_5 s< *(arg1 + 0x16c) || r8_5 s>= *(arg1 + 0x168))
                        int32_t r9 = r12
                        int64_t rbx_6 = rdx_2 << 5
                        rdx_2 += 1
                        void* rbx_7 = rbx_6 + *(arg1 + 0x100)
                        r12 += 1
                        
                        if (*(rbx_7 + 0x1c) + 1 != *(arg1 + 0x180))
                            __builtin_memset(rbx_7, 0, 0x20)
                        
                        zmm7 = *(r13_1 - 0xc)
                        zmm4_1 = *(r13_1 - 0x14)
                        zmm6 = *(r13_1 - 0x10)
                        int64_t r11_2 = *(arg1 + 0xb0)
                        zmm9.d = zmm7.d f* zmm7.d
                        zmm13.d = zmm11.d f+ *(*(arg1 + 0xd0) + (rsi_3 << 2))
                        int64_t rax_15 = *(arg1 + 0xe0)
                        zmm9.d = zmm9.d f- zmm12.d
                        zmm12 = *(r13_1 - 0x18)
                        zmm11 = *(rcx_10 + rax_15)
                        zmm8 = *(rcx_10 + rax_15 + 4)
                        zmm11.d = zmm11.d f+ zmm11.d
                        zmm10 = *(rcx_10 + rax_15 + 8)
                        zmm8.d = zmm8.d f+ zmm8.d
                        zmm10.d = zmm10.d f+ zmm10.d
                        zmm13.d = zmm13.d f* zmm13.d
                        zmm3 = zmm6.d f* zmm11.d
                        zmm0_1.d = zmm4_1.d f* zmm8.d
                        zmm5_1 = zmm12.d f* zmm11.d f+ zmm0_1.d
                        zmm0_1.d = zmm6.d f* zmm8.d
                        zmm2 = zmm4_1.d f* zmm10.d f- zmm0_1.d
                        zmm0_1.d = zmm9.d f* zmm11.d
                        zmm5_1 = zmm5_1 + zmm6.d f* zmm10.d
                        zmm1 = zmm12.d * zmm5_1
                        zmm2 = zmm2 f* zmm7.d f+ zmm0_1.d
                        zmm6.d = zmm6.d f* zmm5_1
                        zmm0_1 = zmm12
                        zmm12.d = zmm12.d f* zmm8.d
                        zmm0_1.d = zmm0_1.d f* zmm10.d
                        zmm2 = zmm2 + zmm1
                        zmm1 = zmm4_1.d * zmm5_1
                        zmm3 = zmm3 f- zmm0_1.d
                        zmm4_1.d = zmm4_1.d f* zmm11.d
                        zmm0_1 = zmm9
                        zmm9.d = zmm9.d f* zmm10.d
                        zmm0_1.d = zmm0_1.d f* zmm8.d
                        zmm12.d = zmm12.d f- zmm4_1.d
                        zmm12.d = zmm12.d f* zmm7.d
                        zmm12.d = zmm12.d f+ zmm9.d
                        zmm3 = zmm3 f* zmm7.d f+ zmm0_1.d + zmm1
                        zmm1 = zmm15.d - (zmm2 f+ *(r13_1 - 8))
                        zmm12.d = zmm12.d f+ zmm6.d
                        zmm12.d = zmm12.d f+ *r13_1
                        zmm2 = arg_10.d - (zmm3 f+ *(r13_1 - 4))
                        zmm0_1.d = zmm14.d f- zmm12.d
                        zmm0_1.d = zmm0_1.d f* zmm0_1.d
                        
                        if (zmm2 * zmm2 + zmm1 * zmm1 f+ zmm0_1.d f<= zmm13.d)
                            void** const var_120 = &data_14330aa20
                            int64_t var_110_1 = rax_10
                            int64_t i_3 = sx.q(i_2)
                            int32_t var_fc_1 = r8_5
                            int32_t var_f8_1 = r9
                            void* var_118_1 = arg1
                            int32_t var_100_1 = rsi_2
                            int64_t var_108_1 = r11_2 + i_3 * 0x14
                            result = PxGenerateContacts(0x40800000, *(arg1 + 0xc0) + (i_3 << 3), 
                                r8_4 - 0x18, r13_1 - 0x18, rbx_7, 1, &var_120, 0x40800000, 
                                0x3f800000, 0x42c80000, arg1 + 0x240)
                            rcx_10 = var_188_1
                            
                            if (result.b == 0)
                                result = 0
                                *(rbx_7 + 0x10) = 0
                                *(rbx_7 + 0x18) = 0
                        else
                            result = 0
                            __builtin_memset(rbx_7, 0, 0x20)
                        
                        zmm12 = 0x3f000000
                        zmm11 = arg_8
                        rbx_4 = var_180
                else
                    rbp_2 += 1
                
                rcx_10 += 0xc
                i_2 += 1
                rsi_3 += 1
                var_188_1 = rcx_10
                r13_1 += 0x1c
            while (rsi_3 s< rbx)
            
            r13 = rbx
            r8_4 = var_168_1
            r10_1 = var_160_1
            r11_1 = var_148_1
        
        r8_4 += 0x1c
        int128_t* var_158_1
        rcx_7 = var_158_1 + 4
        int64_t* var_150_1
        r14_2 = &var_150_1[1]
        var_168_1 = r8_4
        r10_1 += 0xc
        var_158_1 = rcx_7
        r11_1 += 1
        var_160_1 = r10_1
        var_150_1 = r14_2
        var_148_1 = r11_1
    while (i_1 s< *(arg1 + 0x174))

return result
