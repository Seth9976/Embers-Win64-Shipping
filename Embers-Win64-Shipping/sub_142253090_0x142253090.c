// 函数: sub_142253090
// 地址: 0x142253090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg2[1]
int64_t* result_1 = nullptr
int64_t* r8 = *(arg1 + 0x10)
int128_t zmm2 = *arg2
int64_t* rax = nullptr
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float var_48 = zmm1[0]
char r10 = *(r8 + 0xc)
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float var_44 = temp0[0]

if (r10 u>= 2)
    rax = r8

float var_40 = temp0_1[0]
int64_t rcx_3
int64_t rdx_1

if (rax == 0)
label_142253133:
    rdx_1 = sx.q(r8[1].d) * 3
    rcx_3 = *(*r8 + 0x28)
else
    int64_t* rcx = nullptr
    
    if (r10 u>= 1)
        rcx = r8
    
    if (rcx == 0)
        rax.b = 3
    else
        rax = nullptr
        
        if (*(rcx + 0xc) u>= 2)
            rax = rcx
        
        if (rax == 0)
            rax.b = 2
        else
            rax = zx.q(*(sx.q(rax[1].d) + *(*rax + 0x398)))
    
    if (rax.b != 4)
        goto label_142253133
    
    int64_t* rcx_2 = nullptr
    
    if (r10 u>= 2)
        rcx_2 = r8
    
    rdx_1 = sx.q(rcx_2[1].d) * 3
    rcx_3 = *(*rcx_2 + 0x3c8)

int64_t* r10_1 = rcx_3 + (rdx_1 << 2)
*r10_1 = var_48.q
r10_1[1].d = var_40
int64_t* rax_7 = nullptr
char r10_2 = *(r8 + 0xc)

if (r10_2 u>= 2)
    rax_7 = r8

int128_t* rcx_9

if (rax_7 == 0)
    rcx_9 = (sx.q(r8[1].d) << 4) + *(*r8 + 0x68)
else
    int64_t* rcx_4 = nullptr
    
    if (r10_2 u>= 1)
        rcx_4 = r8
    
    if (rcx_4 == 0)
        rax_7.b = 3
    else
        rax_7 = nullptr
        
        if (*(rcx_4 + 0xc) u>= 2)
            rax_7 = rcx_4
        
        if (rax_7 == 0)
            rax_7.b = 2
        else
            rax_7 = zx.q(*(sx.q(rax_7[1].d) + *(*rax_7 + 0x398)))
    
    if (rax_7.b != 4)
        rcx_9 = (sx.q(r8[1].d) << 4) + *(*r8 + 0x68)
    else
        int64_t* rax_9 = nullptr
        
        if (r10_2 u>= 2)
            rax_9 = r8
        
        rcx_9 = (sx.q(rax_9[1].d) << 4) + *(*rax_9 + 0x3e0)

*rcx_9 = zmm2
int64_t* result = *(arg1 + 0x10)

if (*(result + 0xc) u>= 2)
    result_1 = result

if (result_1 != 0)
    void* r8_1 = *result_1
    char* rcx_12 = sx.q(result_1[1].d)
    result = *(r8_1 + 0x398)
    
    if (*(rcx_12 + result) == 4)
        int64_t rax_12 = *(r8_1 + 0x3c8)
        void* rdx_3 = rcx_12 * 3
        int64_t rcx_13 = *(r8_1 + 0x28)
        *(rcx_13 + (rdx_3 << 2)) = *(rax_12 + (rdx_3 << 2))
        *(rcx_13 + (rdx_3 << 2) + 8) = *(rax_12 + (rdx_3 << 2) + 8)
        result = *result_1
        int64_t r8_3 = sx.q(result_1[1].d) * 2
        *(result[0xd] + (r8_3 << 3)) = *(result[0x7c] + (r8_3 << 3))

return result
