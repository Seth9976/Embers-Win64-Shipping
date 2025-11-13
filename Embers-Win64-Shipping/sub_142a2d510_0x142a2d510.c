// 函数: sub_142a2d510
// 地址: 0x142a2d510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void* rsi = arg2
int32_t i_3 = 0
uint128_t zmm7
zmm7.q = arg1.q f+ arg1.q
int32_t i = -0x20
uint64_t i_5 = zx.q(arg3)
zmm7.q = zmm7.q f* arg1.q
uint128_t zmm0
zmm0.q = sqrt(0x401921fb53c8d4f1).q f* arg1.q
uint128_t zmm6
zmm6.q = 0x3ff0000000000000 f/ zmm0.q
char var_178[0x100]

do
    zmm0 = _mm_cvtepi32_pd(zx.q(i))
    zmm0.q = zmm0.q f* zmm0.q
    zmm0.q = zmm0.q f/ zmm7.q
    zmm0.q = exp((zmm0 ^ -0x8000000000000000).q).q f* zmm6.q
    zmm0.q = zmm0.q f* 0x4070000000000000
    zmm0.q = zmm0.q f+ 0x3fe0000000000000
    int32_t rcx_1 = int.d(zmm0.q)
    
    if (rcx_1 != 0)
        int32_t rdx = 0
        
        if (rcx_1 s> 0)
            rdx = rcx_1
            int64_t rcx_3
            int64_t rdi_2
            rdi_2, rcx_3 = __memfill_u8(&var_178[sx.q(i_3)], i.b, sx.q(rcx_1))
        
        i_3 += rdx
    
    i += 1
while (i s< 0x20)

int64_t i_1 = sx.q(i_3)
bool cond:0 = i_1 u>= 0x100

while (i_1 s< 0x100)
    if (cond:0)
        __report_rangecheckfailure()
        noreturn
    
    var_178[i_1] = 0
    i_1 += 1
    cond:0 = i_1 u>= 0x100

if (i_5.d s> 0)
    uint64_t i_4 = i_5
    uint64_t i_2
    
    do
        rsi += 1
        *(rsi - 1) = var_178[zx.q(rand())]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

uint64_t result = zx.q(neg.d(sx.d(var_178[0])))
__security_check_cookie(rax_1 ^ &var_198)
return result
