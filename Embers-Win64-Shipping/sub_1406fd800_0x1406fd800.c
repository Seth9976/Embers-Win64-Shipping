// 函数: sub_1406fd800
// 地址: 0x1406fd800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r9 = *(arg2 + 0x20)
*(arg2 + 0x10) = &rax[1]
int32_t r8_1 = zx.d(*rax) & 0x7fff
int32_t rdx = 0
int32_t rax_1 = *r9

if (r8_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8_1 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8_1 s>= rax_1)

uint32_t rcx_2 = zx.d(rax[1])
void* rdi = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
*(arg2 + 0x10) = &rax[2]

if ((not.b((rcx_2 u>> 0xf).b) & 1) != 0)
    int32_t rax_8 = *r9
    int32_t rdx_4 = rcx_2 & 0x7fff
    
    if (rdx_4 s>= rax_8)
        int64_t rcx_3 = 0
        
        do
            rdx_4 -= rax_8
            rcx_3 += 1
            rax_8 = r9[rcx_3]
        while (rdx_4 s>= rax_8)

float zmm6[0x4]
float var_18[0x4] = zmm6
uint32_t var_178 = 0xffffffff
int64_t var_170 = 0
int32_t var_168 = 0
sub_140767bd0(&var_178, arg2)
void var_118
int32_t* result = sub_1407422f0(&var_118, arg2)
char var_27

if (var_27 != 0)
    int128_t var_158 = *(rdi + 0xd0)
    float var_148_1[0x4] = *(rdi + 0xe0)
    int128_t var_138_1 = *(rdi + 0xf0)
    float var_128_1[0x4] = *(rdi + 0x100)
    sub_1407740e0(&var_158, 0x322bcc77)
    result, zmm6 = sub_140ae1ba0(&var_158, &var_178)
    
    if (var_27 != 0)
        var_158 = *(rdi + 0xd0)
        int128_t var_148_2 = *(rdi + 0xe0)
        int128_t var_138_2 = *(rdi + 0xf0)
        int128_t var_128_2 = *(rdi + 0x100)
        sub_1407740e0(&var_158, zmm6)
        result = sub_140ae1ba0(&var_158, &var_178)

int32_t i = 0

if (*(arg2 + 0x40) s> 0)
    do
        int32_t zmm4 = data_143dbb1f8
        int32_t zmm5 = data_143dbb1fc
        zmm6 = data_143dbb200
        
        if (var_27 != 0)
            void* var_c0
            int32_t* rdx_9 = var_c0
            float zmm1[0x4] = data_14399f720:4.d
            int128_t zmm2 = data_14399f720:8.d
            int32_t zmm3 = data_14399f720:0xc.d
            int32_t var_cc
            var_c0 = &rdx_9[sx.q(var_cc)]
            *rdx_9 = data_14399f720.d.d
            void* var_a8
            float* rdx_10 = var_a8
            int32_t var_b4
            var_a8 = &rdx_10[sx.q(var_b4)]
            *rdx_10 = zmm1[0]
            void* var_90
            int32_t* rdx_11 = var_90
            int32_t var_9c
            var_90 = &rdx_11[sx.q(var_9c)]
            *rdx_11 = zmm2.d
            void* var_78
            int32_t* rdx_12 = var_78
            int32_t result_2
            result = sx.q(result_2)
            var_78 = &rdx_12[result]
            *rdx_12 = zmm3
        
        char var_28
        
        if (var_28 != 0)
            void* var_108
            int32_t* rdx_13 = var_108
            int32_t var_114
            var_108 = &rdx_13[sx.q(var_114)]
            *rdx_13 = zmm4
            void* var_f0
            int32_t* rdx_14 = var_f0
            int32_t var_fc
            var_f0 = &rdx_14[sx.q(var_fc)]
            *rdx_14 = zmm5
            void* var_d8
            float* rdx_15 = var_d8
            int32_t result_1
            result = sx.q(result_1)
            var_d8 = &rdx_15[result]
            *rdx_15 = zmm6[0]
        
        char var_26
        
        if (var_26 != 0)
            void* var_60
            int32_t* rdx_16 = var_60
            int32_t var_6c
            var_60 = &rdx_16[sx.q(var_6c)]
            *rdx_16 = 0
            void* var_48
            int32_t* rdx_17 = var_48
            int32_t var_54
            var_48 = &rdx_17[sx.q(var_54)]
            *rdx_17 = 0
            void* var_30
            int32_t* rdx_18 = var_30
            int32_t result_3
            result = sx.q(result_3)
            var_30 = &rdx_18[result]
            *rdx_18 = 0
        
        i += 1
    while (i s< *(arg2 + 0x40))

return result
