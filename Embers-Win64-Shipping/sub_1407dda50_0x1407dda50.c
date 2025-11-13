// 函数: sub_1407dda50
// 地址: 0x1407dda50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
uint8_t r10_1 = (r8 u>> 0xf).b
int32_t r8_1 = r8 & 0x7fff
float* rdi_1

if ((not.b(r10_1) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * r8_1) + *(arg2 + 0x70)
else
    int32_t* r9_1 = *(arg2 + 0x20)
    int32_t rdx = 0
    int32_t rax_2 = *r9_1
    
    if (r8_1 s>= rax_2)
        int64_t rcx = 0
        
        do
            r8_1 -= rax_2
            rcx += 1
            rax_2 = r9_1[rcx]
            rdx += 1
        while (r8_1 s>= rax_2)
    
    rdi_1 = sx.q(r8_1) + *(*(arg2 + 0x18) + (sx.q(rdx) << 3))

int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_a8 = rcx_3
int32_t rax_4
rax_4.b = rcx_3 != 0x7fff
void* var_98
void var_a0

if (rcx_3 == 0x7fff)
    var_98 = &var_a0
else
    var_98 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_90 = rcx_7
int32_t rax_5
rax_5.b = rcx_7 != 0x7fff
void* var_80
void var_88

if (rcx_7 == 0x7fff)
    var_80 = &var_88
else
    var_80 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_10 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]
int32_t rdx_4 = rcx_10 & 0x7fff
int32_t var_78 = rdx_4
int64_t result
result.b = rdx_4 != 0x7fff
int32_t result_1 = result.d
void* var_68

if (rdx_4 == 0x7fff)
    void var_70
    result = &var_70
    var_68 = &var_70
else
    var_68 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    
    do
        zmm6 = *(arg1 + 0x4c)
        float* rax_7 = rdi_1
        rdi_1 = &rdi_1[zx.q(r10_1)]
        float _X = (*rax_7 f- *(arg1 + 0x40)) f* *(arg1 + 0x48) * zmm6[0]
        
        if (_X >= 0f)
            zmm6 = _mm_min_ss(zmm6[0], _X)
        else
            zmm6 = zx.o(0)
        
        _X = zmm6[0]
        truncf(_X)
        float _X_1 = _X
        
        if (not(_X f>= *(arg1 + 0x4c)))
            _X_1 = _X_1 + 1f
        
        int64_t rdx_5 = *(arg1 + 0x30)
        zmm6[0] = zmm6[0] - _X
        i += 1
        int64_t rcx_14 = sx.q(int.d(_X * 3f))
        float zmm1 = *(rdx_5 + (rcx_14 << 2))
        _X = *(rdx_5 + (rcx_14 << 2) + 4)
        float zmm4_1 = *(rdx_5 + (rcx_14 << 2) + 8)
        int64_t rcx_15 = sx.q(int.d(_X_1 * 3f))
        float zmm3 = (*(rdx_5 + (rcx_15 << 2)) - zmm1) * zmm6[0] + zmm1
        float* rdx_6 = var_98
        zmm1 = *(rdx_5 + (rcx_15 << 2) + 8) - zmm4_1
        _X_1 = (*(rdx_5 + (rcx_15 << 2) + 4) - _X) * zmm6[0] + _X
        var_98 = &rdx_6[sx.q(rax_4)]
        *rdx_6 = zmm3
        float* rdx_7 = var_80
        var_80 = &rdx_7[sx.q(rax_5)]
        zmm1 = zmm1 * zmm6[0] + zmm4_1
        *rdx_7 = _X_1
        float* rdx_8 = var_68
        result = sx.q(result_1)
        var_68 = &rdx_8[result]
        *rdx_8 = zmm1
    while (i s< *(arg2 + 0x40))

return result
