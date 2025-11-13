// 函数: sub_1407dd7d0
// 地址: 0x1407dd7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
uint8_t r10_1 = (r8 u>> 0xf).b
int32_t r8_1 = r8 & 0x7fff
float* rbx_1

if ((not.b(r10_1) & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * r8_1) + *(arg2 + 0x70)
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
    
    rbx_1 = sx.q(r8_1) + *(*(arg2 + 0x18) + (sx.q(rdx) << 3))

int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_78 = rcx_3
int32_t rax_4
rax_4.b = rcx_3 != 0x7fff
void* var_68
void var_70

if (rcx_3 == 0x7fff)
    var_68 = &var_70
else
    var_68 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_6 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t rdx_3 = rcx_6 & 0x7fff
int32_t var_60 = rdx_3
int64_t result
result.b = rdx_3 != 0x7fff
int32_t result_1 = result.d
void* var_50

if (rdx_3 == 0x7fff)
    void var_58
    result = &var_58
    var_50 = &var_58
else
    var_50 = zx.q(*(arg2 + 0x80) * rdx_3) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    
    do
        zmm6 = *(arg1 + 0x4c)
        float* rax_6 = rbx_1
        rbx_1 = &rbx_1[zx.q(r10_1)]
        float _X = (*rax_6 f- *(arg1 + 0x40)) f* *(arg1 + 0x48) * zmm6[0]
        
        if (_X >= 0f)
            zmm6 = _mm_min_ss(zmm6[0], _X)
        else
            zmm6 = zx.o(0)
        
        _X = zmm6[0]
        truncf(_X)
        float _X_1 = _X
        
        if (not(_X f>= *(arg1 + 0x4c)))
            _X_1 = _X_1 + 1f
        
        int64_t rdx_4 = *(arg1 + 0x30)
        zmm6[0] = zmm6[0] - _X
        i += 1
        int64_t rcx_10 = sx.q(int.d(_X * 2f))
        float zmm1 = *(rdx_4 + (rcx_10 << 2))
        float zmm3 = *(rdx_4 + (rcx_10 << 2) + 4)
        int64_t rcx_11 = sx.q(int.d(_X_1 + _X_1))
        float* rdx_5 = var_68
        var_68 = &rdx_5[sx.q(rax_4)]
        _X = (*(rdx_4 + (rcx_11 << 2) + 4) - zmm3) * zmm6[0] + zmm3
        *rdx_5 = (*(rdx_4 + (rcx_11 << 2)) - zmm1) * zmm6[0] + zmm1
        float* rdx_6 = var_50
        result = sx.q(result_1)
        var_50 = &rdx_6[result]
        *rdx_6 = _X
    while (i s< *(arg2 + 0x40))

return result
