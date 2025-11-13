// 函数: sub_14073d150
// 地址: 0x14073d150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r8 = *(arg2 + 0x20)
int16_t i_3 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
uint32_t i = zx.d(i_3)
int32_t rdx = 0

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        rdx += 1
    while (i s>= *(rcx + r8))

uint32_t rcx_2 = zx.d(rax[1])
int32_t* rdi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(*(arg2 + 0x18) + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
int32_t i_1 = rcx_2 & 0x7fff

if ((not.b((rcx_2 u>> 0xf).b) & 1) != 0 && i_1 s>= *r8)
    int64_t rax_8 = 0
    int32_t* rdx_3 = nullptr
    
    do
        i_1 -= *(rdx_3 + r8)
        rax_8 += 1
        rdx_3 = rax_8 << 2
    while (i_1 s>= *(rdx_3 + r8))

void var_178
sub_140742c10(&var_178, arg2)
void* result = sub_140d3c6e0(rdi)

if (result != 0)
    result = sub_142591550()

if (*(rdi + 0x58) != 0 && rdi[0x86].b != 0)
    result = sub_140d3c6e0(rdi)
    void* result_6 = result
    
    if (result != 0)
        void* rax_9 = sub_142591550()
        void* rcx_6 = *(result_6 + 0x10)
        result = rax_9 + 0x30
        int64_t rdx_5 = sx.q(*(result + 8))
        
        if (rdx_5.d s<= *(rcx_6 + 0x38) && *(*(rcx_6 + 0x30) + (rdx_5 << 3)) == result
                && *(result_6 + 0x430) != 0)
            result = sub_141f66050(result_6, rdi[0x1a])

float zmm3 = 1f f/ rdi[0x64]
char var_e
char var_d
char var_c
char r9

if (var_e != 0 || var_d != 0 || var_c != 0)
    r9 = 1
else
    r9 = 0

int32_t i_2 = 0

if (*(arg2 + 0x40) s> 0)
    do
        char var_10
        char var_f
        
        if (var_10 != 0 || var_f != 0)
            void* var_168
            int32_t* rdx_7 = var_168
            float zmm0 = data_143dbb1f8
            float zmm1 = data_143dbb1fc
            float zmm2 = data_143dbb200
            int32_t var_174
            var_168 = &rdx_7[sx.q(var_174)]
            *rdx_7 = zmm0
            void* var_150
            int32_t* rdx_8 = var_150
            int32_t var_15c
            var_150 = &rdx_8[sx.q(var_15c)]
            *rdx_8 = zmm1
            void* var_138
            float* rdx_9 = var_138
            int32_t result_1
            result = sx.q(result_1)
            var_138 = &rdx_9[result]
            *rdx_9 = zmm2
            
            if (var_f != 0)
                void* var_120
                float* rdx_10 = var_120
                zmm2 = zmm2 f- data_143dbb200
                int32_t var_12c
                var_120 = &rdx_10[sx.q(var_12c)]
                zmm1 = (zmm1 f- data_143dbb1fc) * zmm3
                *rdx_10 = (zmm0 f- data_143dbb1f8) * zmm3
                float* var_108
                float* rdx_11 = var_108
                int32_t var_114
                var_108 = &rdx_11[sx.q(var_114)]
                *rdx_11 = zmm1
                void* var_f0
                float* rdx_12 = var_f0
                int32_t result_2
                result = sx.q(result_2)
                var_f0 = &rdx_12[result]
                *rdx_12 = zmm2 * zmm3
        
        if (r9 != 0)
            if (var_e != 0)
                void* var_48
                int32_t* rdx_13 = var_48
                int32_t var_54
                var_48 = &rdx_13[sx.q(var_54)]
                *rdx_13 = 0x3f800000
                void* var_30
                int32_t* rdx_14 = var_30
                int32_t var_3c
                var_30 = &rdx_14[sx.q(var_3c)]
                *rdx_14 = 0
                void* var_18
                int32_t* rdx_15 = var_18
                int32_t result_5
                result = sx.q(result_5)
                var_18 = &rdx_15[result]
                *rdx_15 = 0
            
            if (var_d != 0)
                void* var_90
                int32_t* rdx_16 = var_90
                int32_t var_9c
                var_90 = &rdx_16[sx.q(var_9c)]
                *rdx_16 = 0
                void* var_78
                int32_t* rdx_17 = var_78
                int32_t var_84
                var_78 = &rdx_17[sx.q(var_84)]
                *rdx_17 = 0xbf800000
                void* var_60
                int32_t* rdx_18 = var_60
                int32_t result_4
                result = sx.q(result_4)
                var_60 = &rdx_18[result]
                *rdx_18 = 0
            
            if (var_c != 0)
                void* var_d8
                int32_t* rdx_19 = var_d8
                int32_t var_e4
                var_d8 = &rdx_19[sx.q(var_e4)]
                *rdx_19 = 0
                void* var_c0
                int32_t* rdx_20 = var_c0
                int32_t var_cc
                var_c0 = &rdx_20[sx.q(var_cc)]
                *rdx_20 = 0
                void* var_a8
                int32_t* rdx_21 = var_a8
                int32_t result_3
                result = sx.q(result_3)
                var_a8 = &rdx_21[result]
                *rdx_21 = 0x3f800000
        
        i_2 += 1
    while (i_2 s< *(arg2 + 0x40))

return result
