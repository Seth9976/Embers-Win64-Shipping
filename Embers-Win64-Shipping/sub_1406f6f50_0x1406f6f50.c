// 函数: sub_1406f6f50
// 地址: 0x1406f6f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rax_1 = *r8

if (rdx_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        rdx_1 -= rax_1
        rcx += 1
        rax_1 = r8[rcx]
        r9 += 1
    while (rdx_1 s>= rax_1)

int64_t r11 = *(arg2 + 0x18)
int32_t* r15 = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r14_1 = (rax_5 u>> 0xf).b
int32_t rcx_3 = rax_5 & 0x7fff
int32_t* rsi_1

if ((not.b(r14_1) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r8
    int32_t r9_1 = 0
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_3 = 0
        
        do
            rcx_3 -= rax_7
            rdx_3 += 1
            rax_7 = r8[rdx_3]
            r9_1 += 1
        while (rcx_3 s>= rax_7)
    
    rsi_1 = sx.q(rcx_3) + *(r11 + (sx.q(r9_1) << 3))

int32_t rdx_5 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_88 = rdx_5
int32_t result_1
result_1.b = rdx_5 != 0x7fff
void* var_78
void var_80

if (rdx_5 == 0x7fff)
    var_78 = &var_80
else
    var_78 = zx.q(*(arg2 + 0x80) * rdx_5) + *(arg2 + 0x70)
int32_t var_1c
int32_t var_1c_1 = var_1c & 0xfffffff8
int32_t var_58 = 0xffffffff
int128_t var_68 = zx.o(0)
int128_t var_38
__builtin_memset(&var_38, 0, 0x18)
int32_t var_54
__builtin_memset(&var_54, 0, 0x14)
int32_t var_20 = 0xffffffff
sub_14077b510(&var_68, r15)
uint64_t result = zx.q(*(arg2 + 0x40))
int64_t var_48

if (var_48 == 0)
    if (result.d s> 0)
        do
            void* rdx_9 = var_78
            i += 1
            result = sx.q(result_1)
            var_78 = rdx_9 + (result << 2)
            *rdx_9 = 0xffffffff
        while (i s< *(arg2 + 0x40))
else if (result.d s> 0)
    do
        int32_t rcx_8 = *rsi_1
        rsi_1 = &rsi_1[zx.q(r14_1)]
        void* rdx_7 = var_38:8.q
        int32_t rax_11 = *(rdx_7 + 0x18) - 1
        
        if (rcx_8 s<= rax_11)
            rax_11 = rcx_8
        
        i += 1
        int32_t* rdx_8 = var_78
        result = sx.q(result_1)
        var_78 = &rdx_8[result]
        *rdx_8 = *(*(rdx_7 + 0x10) + (sx.q(rax_11) << 2))
    while (i s< *(arg2 + 0x40))

return result
