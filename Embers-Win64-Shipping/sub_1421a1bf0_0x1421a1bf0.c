// 函数: sub_1421a1bf0
// 地址: 0x1421a1bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = arg4

if ((*(arg1 + 0x30) & 1) == 0 || arg2 == 0 || *(arg1 + 0x34) == 0 || (*(arg2 + 0xe0) & 0x100) == 0)
    return 

int32_t rax_1 = *(arg2 + 0x118)
int64_t* r10_1 = *(arg2 + 0x1d0)
int64_t r8 = *(arg2 + 0xf8)
char rsi_1 = *(arg1 + 0x5b)
int64_t rcx = *(arg2 + 0xf0)
int32_t rdx = *(arg2 + 0x114)
int64_t rax = sx.q(rax_1 - 1)
int32_t rdi_1 = -1
int64_t var_e0_1 = rax
int64_t* var_118_1 = r10_1
char arg_8 = rsi_1
int64_t var_120_1 = rcx
int32_t var_128_1 = rdx
int64_t var_b0_1 = r8

if (rax_1 - 1 s< 0)
    return 

int128_t zmm6
int128_t var_38_1 = zmm6
int128_t zmm8 = zx.o(0)
int128_t zmm9 = 0x3f800000
int128_t zmm10 = 0x38d1b717
bool cond:2_1

do
    void* r8_3 = zx.q(zx.d(*(r8 + (rax << 1))) * rdx) + rcx
    
    if ((*(r8_3 + 0x5c) & 0x4000000) == 0)
        int32_t var_110 = *(arg2 + 0x30)
        int64_t rax_4 = *r10_1
        int32_t* var_108
        __builtin_memset(&var_108, 0, 0x28)
        int64_t var_d8
        __builtin_memset(&var_d8, 0, 0x28)
        int64_t var_100
        void* var_f8
        int64_t var_f0
        int32_t* var_e8
        int64_t var_d0
        int64_t var_c8
        int64_t var_c0
        int64_t var_b8
        (*(rax_4 + 0x388))(r10_1, arg2, r8_3, &var_110, &var_f8, &var_b8, &var_108, &var_e8, 
            &var_100, &var_f0, &var_c0, &var_c8, &var_d0, &var_d8, var_128_1, var_120_1, var_118_1, 
            var_110, var_108, var_100, var_f8, var_f0, var_e8, var_e0_1, var_d8, var_d0, var_c8, 
            var_c0, var_b8, var_b0_1)
        
        if (rsi_1 == 0 || (*(arg1 + 0x110) & 2) == 0)
            rdi_1 = 0
        else
            rdi_1 = neg.d(rdi_1)
        
        int128_t zmm1 = *(arg1 + 0x114)
        
        if (not(zmm1.d f< zmm8.d))
            int32_t rbx_4 = (*(var_f8 + 0x38) s>> 0xc & 0xfff) + 1
            zmm6.d = zmm9.d f/ _mm_cvtepi32_ps(zx.o(rbx_4)).d
            int64_t* var_178_1
            uint128_t zmm2
            
            if (zmm1.d f<= zmm10.d)
                int32_t rsi_3 = 0
                
                if (rbx_4 != 0)
                    int64_t r14_3 = 0
                    
                    do
                        int64_t var_170_4 = 0
                        int32_t r9_4 = (*(arg2 + 0x18)).d
                        var_178_1.d = rdi_1
                        zmm2.d = _mm_cvtepi32_ps(zx.o(rsi_3)).d f* zmm6.d
                        void var_90
                        int64_t* rax_15
                        rax_15, zmm1, zmm6, zmm7, zmm8, zmm9, zmm10 =
                            sub_141fe56b0(arg1 + 0x40, &var_90, zmm2, zmm1, r9_4, var_178_1)
                        int64_t rcx_7 = var_100
                        r14_3 += 0xc
                        rsi_3 += 1
                        *(r14_3 + rcx_7 - 0xc) = *rax_15
                        *(r14_3 + rcx_7 - 4) = rax_15[1].d
                    while (rsi_3 s< rbx_4)
            else
                int32_t* rax_6 = var_108
                zmm1.d = zmm7.d f+ *rax_6
                *rax_6 = zmm1.d
                
                if ((*(arg1 + 0x114)).d f>= zmm1.d)
                    *var_e8 = zmm7.d
                else
                    int32_t rsi_2 = 0
                    
                    if ((*(arg1 + 0x108) & 1) == 0)
                        if (rbx_4 != 0)
                            int64_t r14_2 = 0
                            
                            do
                                int64_t var_170_3 = 0
                                int32_t r9_3 = (*(arg2 + 0x18)).d
                                var_178_1.d = rdi_1
                                zmm2.d = _mm_cvtepi32_ps(zx.o(rsi_2)).d f* zmm6.d
                                void var_9c
                                int64_t* rax_11
                                rax_11, zmm1, zmm6, zmm7, zmm8, zmm9, zmm10 =
                                    sub_141fe56b0(arg1 + 0x40, &var_9c, zmm2, zmm1, r9_3, var_178_1)
                                int64_t rcx_5 = var_100
                                r14_2 += 0xc
                                rsi_2 += 1
                                *(r14_2 + rcx_5 - 0xc) = *rax_11
                                *(r14_2 + rcx_5 - 4) = rax_11[1].d
                            while (rsi_2 s< rbx_4)
                        
                        *var_108 = 0
                        *var_e8 = zmm7.d
                    else if (rbx_4 == 0)
                        *var_108 = 0
                        *var_e8 = zmm7.d
                    else
                        int64_t r14_1 = 0
                        
                        do
                            int64_t var_170_2 = 0
                            int32_t r9_2 = (*(arg2 + 0x18)).d
                            var_178_1.d = rdi_1
                            zmm2.d = _mm_cvtepi32_ps(zx.o(rsi_2)).d f* zmm6.d
                            void var_a8
                            int64_t* rax_7
                            rax_7, zmm1, zmm6, zmm7, zmm8, zmm9, zmm10 =
                                sub_141fe56b0(arg1 + 0x40, &var_a8, zmm2, zmm1, r9_2, var_178_1)
                            int64_t rcx_3 = var_f0
                            r14_1 += 0xc
                            rsi_2 += 1
                            *(r14_1 + rcx_3 - 0xc) = *rax_7
                            *(r14_1 + rcx_3 - 4) = rax_7[1].d
                        while (rsi_2 s< rbx_4)
                        
                        *var_108 = 0
                        *var_e8 = zmm7.d
        
        r10_1 = var_118_1
        rdx = var_128_1
        rcx = var_120_1
    
    r8 = var_b0_1
    rax = var_e0_1 - 1
    cond:2_1 = var_e0_1 - 1 s>= 0
    rsi_1 = arg_8
    var_e0_1 = rax
while (cond:2_1)
