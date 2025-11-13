// 函数: sub_1407376b0
// 地址: 0x1407376b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r9 = 0
*(arg2 + 0x10) = &rax[1]
int32_t* rdx = *(arg2 + 0x20)
int32_t rax_2 = zx.d(*rax) & 0x7fff
int32_t r8 = *rdx

if (rax_2 s>= r8)
    int64_t rcx_1 = 0
    
    do
        rax_2 -= r8
        rcx_1 += 1
        r8 = rdx[rcx_1]
        r9 += 1
    while (rax_2 s>= r8)

uint32_t rax_3 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]

if ((not.b((rax_3 u>> 0xf).b) & 1) != 0)
    int32_t rax_5 = *rdx
    int32_t rcx_3 = rax_3 & 0x7fff
    
    if (rcx_3 s>= rax_5)
        int64_t r8_1 = 0
        
        do
            rcx_3 -= rax_5
            r8_1 += 1
            rax_5 = rdx[r8_1]
        while (rcx_3 s>= rax_5)

uint32_t rax_6 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]

if ((not.b((rax_6 u>> 0xf).b) & 1) != 0)
    int32_t rax_8 = *rdx
    int32_t rcx_5 = rax_6 & 0x7fff
    
    if (rcx_5 s>= rax_8)
        int64_t r8_2 = 0
        
        do
            rcx_5 -= rax_8
            r8_2 += 1
            rax_8 = rdx[r8_2]
        while (rcx_5 s>= rax_8)

uint32_t rax_9 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]

if ((not.b((rax_9 u>> 0xf).b) & 1) != 0)
    int32_t rax_11 = *rdx
    int32_t rcx_7 = rax_9 & 0x7fff
    
    if (rcx_7 s>= rax_11)
        int64_t r8_3 = 0
        
        do
            rcx_7 -= rax_11
            r8_3 += 1
            rax_11 = rdx[r8_3]
        while (rcx_7 s>= rax_11)

uint32_t rcx_8 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]

if ((not.b((rcx_8 u>> 0xf).b) & 1) != 0)
    int32_t i = rcx_8 & 0x7fff
    
    if (i s>= *rdx)
        int64_t rax_15 = 0
        int32_t* rcx_9 = nullptr
        
        do
            i -= *(rcx_9 + rdx)
            rax_15 += 1
            rcx_9 = rax_15 << 2
        while (i s>= *(rcx_9 + rdx))

uint32_t var_198 = 0xffffffff
int64_t var_190 = 0
int32_t var_188 = 0
sub_140767bd0(&var_198, arg2)
void var_178
int32_t* result = sub_140742680(&var_178, arg2)
int32_t i_1 = 0

if (*(arg2 + 0x40) s> 0)
    do
        char var_10
        char var_f
        
        if (var_10 != 0 || var_f != 0)
            void* var_168
            int32_t* rdx_3 = var_168
            int32_t var_174
            var_168 = &rdx_3[sx.q(var_174)]
            *rdx_3 = 0
            void* var_150
            int32_t* rdx_4 = var_150
            int32_t var_15c
            var_150 = &rdx_4[sx.q(var_15c)]
            *rdx_4 = 0
            void* var_138
            int32_t* rdx_5 = var_138
            int32_t result_1
            result = sx.q(result_1)
            var_138 = &rdx_5[result]
            *rdx_5 = 0
            
            if (var_f != 0)
                void* var_120
                int32_t* rdx_6 = var_120
                int32_t var_12c
                var_120 = &rdx_6[sx.q(var_12c)]
                *rdx_6 = 0
                void* var_108
                int32_t* rdx_7 = var_108
                int32_t var_114
                var_108 = &rdx_7[sx.q(var_114)]
                *rdx_7 = 0
                void* var_f0
                int32_t* rdx_8 = var_f0
                int32_t result_2
                result = sx.q(result_2)
                var_f0 = &rdx_8[result]
                *rdx_8 = 0
        
        char var_e
        
        if (var_e != 0)
            void* var_d8
            int32_t* rdx_9 = var_d8
            int32_t var_e4
            var_d8 = &rdx_9[sx.q(var_e4)]
            *rdx_9 = 0
            void* var_c0
            int32_t* rdx_10 = var_c0
            int32_t var_cc
            var_c0 = &rdx_10[sx.q(var_cc)]
            *rdx_10 = 0
            void* var_a8
            int32_t* rdx_11 = var_a8
            int32_t result_3
            result = sx.q(result_3)
            var_a8 = &rdx_11[result]
            *rdx_11 = 0x3f800000
        
        char var_d
        
        if (var_d != 0)
            void* var_90
            int32_t* rdx_12 = var_90
            int32_t var_9c
            var_90 = &rdx_12[sx.q(var_9c)]
            *rdx_12 = 0
            void* var_78
            int32_t* rdx_13 = var_78
            int32_t var_84
            var_78 = &rdx_13[sx.q(var_84)]
            *rdx_13 = 0x3f800000
            void* var_60
            int32_t* rdx_14 = var_60
            int32_t result_4
            result = sx.q(result_4)
            var_60 = &rdx_14[result]
            *rdx_14 = 0
        
        char var_c
        
        if (var_c != 0)
            void* var_48
            int32_t* rdx_15 = var_48
            int32_t var_54
            var_48 = &rdx_15[sx.q(var_54)]
            *rdx_15 = 0x3f800000
            void* var_30
            int32_t* rdx_16 = var_30
            int32_t var_3c
            var_30 = &rdx_16[sx.q(var_3c)]
            *rdx_16 = 0
            void* var_18
            int32_t* rdx_17 = var_18
            int32_t result_5
            result = sx.q(result_5)
            var_18 = &rdx_17[result]
            *rdx_17 = 0
        
        i_1 += 1
    while (i_1 s< *(arg2 + 0x40))

return result
