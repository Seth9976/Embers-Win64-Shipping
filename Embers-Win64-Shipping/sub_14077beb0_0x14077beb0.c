// 函数: sub_14077beb0
// 地址: 0x14077beb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
uint8_t r10_1 = (r8 u>> 0xf).b
int32_t r8_1 = r8 & 0x7fff
int32_t* rdi_1

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

int32_t rdx_2 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_58 = rdx_2
float* result
result.b = rdx_2 != 0x7fff
int32_t var_54 = result.d
float* result_1

if (rdx_2 == 0x7fff)
    void var_50
    result = &var_50
    result_1 = &var_50
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_2) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    
    do
        zmm6 = *(arg1 + 0x4c)
        float _X = (*rdi_1 f- *(arg1 + 0x40)) f* *(arg1 + 0x48) * zmm6[0]
        
        if (_X >= 0f)
            zmm6 = _mm_min_ss(zmm6[0], _X)
        else
            zmm6 = zx.o(0)
        
        _X = zmm6[0]
        truncf(_X)
        float _X_1 = _X
        
        if (not(_X_1 f>= *(arg1 + 0x4c)))
            _X = _X + 1f
        
        int64_t rdx_3 = *(arg1 + 0x30)
        zmm6[0] = zmm6[0] - _X_1
        rdi_1 = &rdi_1[zx.q(r10_1)]
        i += 1
        float zmm1 = *(rdx_3 + (sx.q(int.d(_X_1)) << 2))
        *result_1 = (*(rdx_3 + (sx.q(int.d(_X)) << 2)) - zmm1) * zmm6[0] + zmm1
        result = result_1
        result_1 = &result[sx.q(var_54)]
    while (i s< *(arg2 + 0x40))

return result
