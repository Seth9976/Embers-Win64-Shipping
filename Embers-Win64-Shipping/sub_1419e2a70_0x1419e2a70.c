// 函数: sub_1419e2a70
// 地址: 0x1419e2a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = arg2[0xc]
void* rax = *(arg2 + 0x38)
float zmm3 = *arg2
float zmm4 = zmm0.d
int128_t zmm2 = arg2[1]
int64_t r14 = 0
int128_t zmm6
zmm6.d = zmm0.d f* *(rax + 0x29c)
int128_t zmm7
zmm7.d = zmm0.d f* *(rax + 0x298)
uint64_t var_78 = 0
int32_t var_70 = 0
zmm0.d = zmm0.d f* *(rax + 0x29c)
char var_58 = 1
float temp0 = _mm_max_ss(zmm4 f* *(rax + 0x298), zmm0.d)
zmm0.d = zmm2.d f+ temp0
zmm2.d = zmm2.d f- temp0
float var_60 = zmm3 + temp0
int32_t var_5c = zmm0.d
float var_68 = zmm3 - temp0
int32_t var_64 = zmm2.d
sub_1419de290(arg1, &var_68, &var_78)
int32_t r8_1 = arg3[1].d
int32_t rax_1 = var_70
int32_t rdx_1 = r8_1 + rax_1

if (rdx_1 s> *(arg3 + 0xc))
    sub_1405a5130(arg3, rdx_1)
    r8_1 = arg3[1].d
    rax_1 = var_70

uint64_t rsi = var_78
int64_t rcx_1 = rsi + (sx.q(rax_1) << 3)
uint64_t r12_3 = (rcx_1 - rsi + 7) u>> 3

if (rsi u> rcx_1)
    r12_3 = 0

if (r12_3 != 0)
    int64_t r13
    int64_t var_18_1 = r13
    
    do
        float* rdi_1 = *rsi
        
        if (rdi_1 != arg2)
            float zmm0_1 = *arg2 - *rdi_1
            zmm2.d = arg2[1].d f- rdi_1[1]
            void* rax_3 = *(rdi_1 + 0x38)
            float zmm1_1 = rdi_1[0xc]
            zmm2.d = zmm2.d f* zmm2.d
            zmm2.d = zmm2.d f+ zmm0_1 * zmm0_1
            zmm0_1 = zmm1_1 f* *(rax_3 + 0x298) f+ zmm7.d
            r13.b = zmm0_1 * zmm0_1 f>= zmm2.d
            
            if (r13.b == 0)
                zmm1_1 = zmm1_1 f* *(rax_3 + 0x29c) f+ zmm6.d
            
            if (r13.b != 0 || not(zmm2.d f> zmm1_1 * zmm1_1))
                int64_t rbp_1 = sx.q(arg3[1].d)
                int32_t rax_4 = (rbp_1 + 1).d
                arg3[1].d = rax_4
                
                if (rax_4 s> *(arg3 + 0xc))
                    sub_1405a4df0(arg3)
                
                void** rdx_3 = *arg3 + rbp_1 * 0x18
                
                if (rdx_3 != 0)
                    *rdx_3 = arg2
                    rdx_3[2].d = zx.d(r13.b) ^ 1
                    rdx_3[1] = rdi_1
        
        rsi += 8
        r14 += 1
    while (r14 != r12_3)
    
    r8_1 = arg3[1].d
    rsi = var_78

int64_t* rbx
rbx.b = r8_1 s> 0

if (rsi != 0)
    sub_140a74f90(rsi)

return zx.q(rbx.b)
