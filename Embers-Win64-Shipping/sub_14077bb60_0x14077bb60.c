// 函数: sub_14077bb60
// 地址: 0x14077bb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
uint8_t r10_1 = (r8 u>> 0xf).b
int32_t rdx_1 = r8 & 0x7fff
float* rdi_1

if ((not.b(r10_1) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * rdx_1) + *(arg2 + 0x70)
else
    int32_t* r9_1 = *(arg2 + 0x20)
    int32_t r8_1 = 0
    int32_t rax_2 = *r9_1
    
    if (rdx_1 s>= rax_2)
        int64_t rcx = 0
        
        do
            rdx_1 -= rax_2
            rcx += 1
            rax_2 = r9_1[rcx]
            r8_1 += 1
        while (rdx_1 s>= rax_2)
    
    rdi_1 = sx.q(rdx_1) + *(*(arg2 + 0x18) + (sx.q(r8_1) << 3))

int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_b8 = rcx_3
int32_t rax_4
rax_4.b = rcx_3 != 0x7fff
void* var_a8
void var_b0

if (rcx_3 == 0x7fff)
    var_a8 = &var_b0
else
    var_a8 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_a0 = rcx_7
int32_t rax_5
rax_5.b = rcx_7 != 0x7fff
void* var_90
void var_98

if (rcx_7 == 0x7fff)
    var_90 = &var_98
else
    var_90 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_88 = rcx_11
int32_t rax_6
rax_6.b = rcx_11 != 0x7fff
void* var_78
void var_80

if (rcx_11 == 0x7fff)
    var_78 = &var_80
else
    var_78 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_14 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_6 = rcx_14 & 0x7fff
int32_t var_70 = rdx_6
int64_t result
result.b = rdx_6 != 0x7fff
int32_t result_1 = result.d
void* var_60

if (rdx_6 == 0x7fff)
    void var_68
    result = &var_68
    var_60 = &var_68
else
    var_60 = zx.q(*(arg2 + 0x80) * rdx_6) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    
    do
        zmm6 = *(arg1 + 0x4c)
        float* rax_8 = rdi_1
        rdi_1 = &rdi_1[zx.q(r10_1)]
        float _X = (*rax_8 f- *(arg1 + 0x40)) f* *(arg1 + 0x48) * zmm6[0]
        
        if (_X >= 0f)
            zmm6 = _mm_min_ss(zmm6[0], _X)
        else
            zmm6 = zx.o(0)
        
        _X = zmm6[0]
        truncf(_X)
        float _X_1 = _X
        
        if (not(_X f>= *(arg1 + 0x4c)))
            _X_1 = _X_1 + 1f
        
        int64_t rdx_7 = *(arg1 + 0x30)
        zmm6[0] = zmm6[0] - _X
        i += 1
        int64_t rcx_18 = sx.q(int.d(_X * 4f))
        float zmm1 = *(rdx_7 + (rcx_18 << 2))
        _X = *(rdx_7 + (rcx_18 << 2) + 4)
        float zmm2 = *(rdx_7 + (rcx_18 << 2) + 8)
        float zmm5_1 = *(rdx_7 + (rcx_18 << 2) + 0xc)
        int64_t rcx_19 = sx.q(int.d(_X_1 * 4f))
        float zmm4_1 = (*(rdx_7 + (rcx_19 << 2)) - zmm1) * zmm6[0] + zmm1
        _X_1 = (*(rdx_7 + (rcx_19 << 2) + 4) - _X) * zmm6[0] + _X
        float* rdx_8 = var_a8
        _X = *(rdx_7 + (rcx_19 << 2) + 0xc) - zmm5_1
        zmm1 = (*(rdx_7 + (rcx_19 << 2) + 8) - zmm2) * zmm6[0]
        var_a8 = &rdx_8[sx.q(rax_4)]
        *rdx_8 = zmm4_1
        float* rdx_9 = var_90
        var_90 = &rdx_9[sx.q(rax_5)]
        _X = _X * zmm6[0] + zmm5_1
        *rdx_9 = _X_1
        float* rdx_10 = var_78
        var_78 = &rdx_10[sx.q(rax_6)]
        *rdx_10 = zmm1 + zmm2
        float* rdx_11 = var_60
        result = sx.q(result_1)
        var_60 = &rdx_11[result]
        *rdx_11 = _X
    while (i s< *(arg2 + 0x40))

return result
