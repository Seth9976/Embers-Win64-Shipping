// 函数: sub_141f61fc0
// 地址: 0x141f61fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t i = 0

if (arg2[1].d s<= 0)
    return 

int64_t* rax = arg2
int64_t* rdx = nullptr
int32_t r15_1 = 1
int128_t zmm10 = zx.o(0)
int128_t zmm14 = 0x3e800000
int128_t zmm6
int128_t var_48_1 = zmm6
int128_t zmm7
int128_t var_58_1 = zmm7
int128_t zmm8
int128_t var_68_1 = zmm8
float zmm9[0x4]
float var_78_1[0x4] = zmm9
int128_t zmm11
int128_t var_98_1 = zmm11
int128_t zmm12
int128_t var_a8_1 = zmm12
int128_t zmm13
int128_t var_b8_1 = zmm13
int64_t* var_178_1 = nullptr

do
    if ((arg4 & r15_1) != 0)
        int64_t* rcx_1 = arg5 + 0x50
        void* rsi_1 = *(rdx + *rax)
        int64_t* rax_2 = rcx_1[2]
        
        if (rax_2 != 0)
            rcx_1 = rax_2
        
        int64_t* rax_3 = *(rcx_1 + rdx)
        void var_100
        sub_140acc920(&var_100, arg1 + 0x154)
        uint8_t rdi_1 = *(arg1 + 0x36)
        uint8_t var_1a8_1 = rdi_1 & 1
        char var_1b0_1 = 0
        float var_110[0x4]
        sub_1422a29a0(&var_110, &var_100, rsi_1, sub_14076deb0(arg1), rdi_1 u>> 1 & 1, 0)
        zmm11 = *(arg1 + 0xb0)
        zmm12 = *(arg1 + 0xb4)
        float zmm1_1 = *(rsi_1 + 0x60c) f- zmm11.d
        zmm13 = *(arg1 + 0xb8)
        float zmm2_1 = *(rsi_1 + 0x610) f- zmm12.d
        float zmm0_1 = *(rsi_1 + 0x614) f- zmm13.d
        zmm2_1 = zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 + zmm0_1 * zmm0_1
        zmm0_1 = *(arg1 + 0x138)
        
        if (not(zmm2_1 < zmm0_1 * zmm0_1))
            zmm0_1 = *(arg1 + 0x134)
            
            if (not(zmm2_1 > zmm0_1 * zmm0_1))
                zmm0_1 = *(arg1 + 0x90)
                float zmm3 = *(arg1 + 0x80)
                float zmm5_1 = *(arg1 + 0x84)
                zmm2_1 = *(arg1 + 0x94)
                float zmm4_1 = *(arg1 + 0x88)
                zmm1_1 = *(arg1 + 0x98)
                zmm6 = *(arg1 + 0xa0)
                zmm8 = *(arg1 + 0xa4)
                zmm7 = *(arg1 + 0xa8)
                zmm8.d = zmm8.d f* zmm8.d
                zmm6.d = zmm6.d f* zmm6.d
                zmm7.d = zmm7.d f* zmm7.d
                float temp0_1[0x4] =
                    _mm_sqrt_ss(zx.o(0)[0], zmm2_1 * zmm2_1 + zmm0_1 * zmm0_1 + zmm1_1 * zmm1_1)
                zmm8.d = zmm8.d f+ zmm6.d
                float temp0_2 = _mm_sqrt_ss(0, zmm5_1 * zmm5_1 + zmm3 * zmm3 + zmm4_1 * zmm4_1)
                zmm8.d = zmm8.d f+ zmm7.d
                float temp0_3[0x4] = _mm_min_ss(temp0_1[0], temp0_2)
                float temp0_4 = _mm_sqrt_ss(0, zmm8.d)
                float temp0_5[0x4] = _mm_min_ss(temp0_3[0], temp0_4)
                uint64_t var_f0
                uint64_t* rax_5 = sub_140a04880(arg1 + 0x80, &var_f0, 1)
                float var_16c_1 = temp0_5[0] f* *(rax_5 + 4)
                float var_168_1 = temp0_5[0] f* rax_5[1].d
                float var_170 = temp0_5[0] f* *rax_5
                uint64_t var_e4
                uint64_t* rax_6 = sub_140a04880(arg1 + 0x80, &var_e4, 2)
                float var_14c_1 = temp0_5[0] f* *(rax_6 + 4)
                float var_148_1 = temp0_5[0] f* rax_6[1].d
                float var_150 = temp0_5[0] f* *rax_6
                uint64_t var_d8[0x2]
                uint64_t* rax_7 = sub_140a04880(arg1 + 0x80, &var_d8, 3)
                float zmm2_4 = *(arg1 + 0x158)
                float zmm0_4 = temp0_5[0] f* *(rax_7 + 4)
                float zmm1_4 = temp0_5[0] f* rax_7[1].d
                temp0_5[0] = temp0_5[0] f* *rax_7
                float var_15c_1 = zmm0_4
                float var_160 = temp0_5[0]
                float var_158_1 = zmm1_4
                int32_t rax_8 = int.d(zmm2_4 f* zmm14.d)
                int32_t rbx_2
                
                if (rax_8 s>= 0x10)
                    rbx_2 = 0x40
                    
                    if (rax_8 s< 0x40)
                        rbx_2 = rax_8
                else
                    rbx_2 = 0x10
                
                var_1a8_1.d = rbx_2
                var_1b0_1.d = zmm2_4
                uint8_t var_1b8_1
                var_1b8_1.q = &var_110
                int32_t var_140 = zmm11.d
                int32_t var_13c_1 = zmm12.d
                int32_t var_138_1 = zmm13.d
                int32_t zmm10_1 = sub_142298930(rax_3, &var_140, &var_170, &var_150, var_1b8_1, 0, 
                    var_1a8_1, 0, zmm10.d, zmm10.d, 0)
                int32_t zmm1_5 = *(arg1 + 0xb4)
                int32_t var_134 = *(arg1 + 0xb0)
                int32_t var_12c_1 = *(arg1 + 0xb8)
                var_1a8_1.d = rbx_2
                var_1b0_1.d = *(arg1 + 0x158)
                var_1b8_1.q = &var_110
                int32_t var_130_1 = zmm1_5
                int32_t zmm10_2 = sub_142298930(rax_3, &var_134, &var_170, &var_160, var_1b8_1, 0, 
                    var_1a8_1, 0, zmm10_1, zmm10_1, 0)
                int32_t zmm1_6 = *(arg1 + 0xb4)
                int32_t var_128 = *(arg1 + 0xb0)
                int32_t var_120_1 = *(arg1 + 0xb8)
                var_1a8_1.d = rbx_2
                var_1b0_1.d = *(arg1 + 0x158)
                var_1b8_1.q = &var_110
                int32_t var_124_1 = zmm1_6
                zmm10, zmm14 = sub_142298930(rax_3, &var_128, &var_150, &var_160, var_1b8_1, 0, 
                    var_1a8_1, 0, zmm10_2, zmm10_2, 0)
        
        rdx = var_178_1
        rax = arg2
        arg4 = arg_20
    
    rdx = &rdx[1]
    r15_1 = rol.d(r15_1, 1)
    i += 1
    var_178_1 = rdx
while (i s< rax[1].d)
