// 函数: sub_14208c020
// 地址: 0x14208c020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0xa0)
float* rsi = arg4
float zmm2[0x4] = arg2

if (rdx == 0)
    *arg3 = 0
    int64_t rax
    rax.b = 0
    *arg4 = 0
    return rax

int32_t* r9 = *(arg1 + 0x98)
float zmm3

if (not(zmm2[0] f>= *r9))
    *arg3 = *(r9 + 8)
    zmm3 = *(*(arg1 + 0x98) + 0x10)
    *rsi = zmm3
    char* rax_3 = *(arg1 + 0x98)
    
    if ((rax_3[0x1c] & 2) != 0)
        void* r8 = *(rax_3 + 8)
        
        if (r8 != 0)
            *rsi = sub_142084570(arg1, rax_3, r8, zmm3)
            rax_3 = *(arg1 + 0x98)
        
        *arg5 = rax_3[0x1c] & 1
    
    rax_3.b = 1
    return rax_3

int32_t rcx_1 = 0

if (rdx - 1 s> 0)
    void* rax_4 = &r9[8]
    int64_t rdx_3 = 0
    
    while (not(zmm2[0] f< *rax_4))
        rcx_1 += 1
        rdx_3 += 1
        rax_4 += 0x20
        
        if (rdx_3 s>= sx.q(rdx - 1))
            break

int64_t rbx_1 = sx.q(rcx_1) << 5
*arg3 = *(rbx_1 + r9 + 8)
int64_t rax_6 = *(arg1 + 0x98)
zmm2[0] = zmm2[0] f- *(rbx_1 + rax_6)
zmm2[0] = zmm2[0] f* *(rbx_1 + rax_6 + 0x18)
*rsi = zmm2[0]
uint64_t rax_7 = *(arg1 + 0x98)
void* rbp = *(rbx_1 + rax_7 + 8)

if (rbp == 0)
    rax_7.b = 0
else
    bool cond:0_1 = (*(rbx_1 + rax_7 + 0x1c) & 1) == 0
    float zmm5[0x4] = *(rbx_1 + rax_7 + 0x14)
    float zmm4 = *(rbx_1 + rax_7 + 0x10)
    arg2 = *(rbp + 0x90)
    zmm5[0] = zmm5[0] + zmm4
    arg2[0] = arg2[0] - zmm5[0]
    float zmm0[0x4]
    
    if (cond:0_1)
        zmm4 = zmm4 + zmm2[0]
        zmm3 = (zx.o(0)).d
        
        if (not(zmm4 < 0f))
            zmm3 = _mm_min_ss(*(rbp + 0x90) - zmm5[0] + 9.99999975e-05f, zmm4)
    else
        zmm0, arg3 = sub_140a454f0(zmm2, __maxss_xmmss_memss(arg2[0], 0x3c23d70a))
        zmm3 = zmm0[0]
        *rsi = zmm3
        zmm3 = zmm3 f+ *(rbx_1 + *(arg1 + 0x98) + 0x10)
    
    *rsi = zmm3
    int64_t rax_9 = *(arg1 + 0x98)
    bool cond:1_1
    
    if ((*(rbx_1 + rax_9 + 0x1c) & 2) == 0)
        cond:1_1 = zmm3 f!= *(rbx_1 + rax_9 + 0x10)
    else
        arg2 = *(rbx_1 + rax_9 + 0x10)
        zmm2 = *(rbp + 0x90)
        zmm3 = zmm3 - arg2[0]
        arg2[0] = arg2[0] f+ *(rbx_1 + rax_9 + 0x14)
        zmm2[0] = zmm2[0] - arg2[0]
        zmm2[0] = zmm2[0] - zmm3
        zmm2[0] = zmm2[0] + arg2[0]
        *rsi = zmm2[0]
        rax_9 = *(arg1 + 0x98)
        zmm0 = *(rbp + 0x90)
        zmm0[0] = zmm0[0] f- *(rbx_1 + rax_9 + 0x14)
        cond:1_1 = zmm2[0] != zmm0[0]
    
    if (cond:1_1)
        arg3.b = 0
    else
        arg3.b = 1
    
    rax_7 = zx.q(arg3.b)
    *arg5 = *(rbx_1 + rax_9 + 0x1c) & 1

return rax_7
