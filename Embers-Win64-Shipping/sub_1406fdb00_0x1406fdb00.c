// 函数: sub_1406fdb00
// 地址: 0x1406fdb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r9 = *(arg2 + 0x20)
int32_t r8_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
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
void var_128
int32_t* result = sub_1407422f0(&var_128, arg2)
char var_37

if (var_37 != 0)
    int128_t var_168 = *(rdi + 0xd0)
    float var_158_1[0x4] = *(rdi + 0xe0)
    int128_t var_148_1 = *(rdi + 0xf0)
    float var_138_1[0x4] = *(rdi + 0x100)
    sub_1407740e0(&var_168, 0x322bcc77)
    uint32_t var_28[0x4]
    result, zmm6 = sub_140ae1ba0(&var_168, &var_28)
    
    if (var_37 != 0)
        var_168 = *(rdi + 0xd0)
        int128_t var_158_2 = *(rdi + 0xe0)
        int128_t var_148_2 = *(rdi + 0xf0)
        int128_t var_138_2 = *(rdi + 0x100)
        sub_1407740e0(&var_168, zmm6)
        result = sub_140ae1ba0(&var_168, &var_28)

int32_t i = 0

if (*(arg2 + 0x40) s> 0)
    do
        int32_t zmm4 = data_143dbb1f8
        int32_t zmm5 = data_143dbb1fc
        zmm6 = data_143dbb200
        
        if (var_37 != 0)
            void* var_d0
            int32_t* rdx_8 = var_d0
            float zmm1[0x4] = data_14399f720:4.d
            int128_t zmm2 = data_14399f720:8.d
            int32_t zmm3 = data_14399f720:0xc.d
            int32_t var_dc
            var_d0 = &rdx_8[sx.q(var_dc)]
            *rdx_8 = data_14399f720.d.d
            void* var_b8
            float* rdx_9 = var_b8
            int32_t var_c4
            var_b8 = &rdx_9[sx.q(var_c4)]
            *rdx_9 = zmm1[0]
            void* var_a0
            int32_t* rdx_10 = var_a0
            int32_t var_ac
            var_a0 = &rdx_10[sx.q(var_ac)]
            *rdx_10 = zmm2.d
            void* var_88
            int32_t* rdx_11 = var_88
            int32_t result_2
            result = sx.q(result_2)
            var_88 = &rdx_11[result]
            *rdx_11 = zmm3
        
        char var_38
        
        if (var_38 != 0)
            void* var_118
            int32_t* rdx_12 = var_118
            int32_t var_124
            var_118 = &rdx_12[sx.q(var_124)]
            *rdx_12 = zmm4
            void* var_100
            int32_t* rdx_13 = var_100
            int32_t var_10c
            var_100 = &rdx_13[sx.q(var_10c)]
            *rdx_13 = zmm5
            void* var_e8
            float* rdx_14 = var_e8
            int32_t result_1
            result = sx.q(result_1)
            var_e8 = &rdx_14[result]
            *rdx_14 = zmm6[0]
        
        char var_36
        
        if (var_36 != 0)
            void* var_70
            int32_t* rdx_15 = var_70
            int32_t var_7c
            var_70 = &rdx_15[sx.q(var_7c)]
            *rdx_15 = 0
            void* var_58
            int32_t* rdx_16 = var_58
            int32_t var_64
            var_58 = &rdx_16[sx.q(var_64)]
            *rdx_16 = 0
            void* var_40
            int32_t* rdx_17 = var_40
            int32_t result_3
            result = sx.q(result_3)
            var_40 = &rdx_17[result]
            *rdx_17 = 0
        
        i += 1
    while (i s< *(arg2 + 0x40))

return result
