// 函数: sub_14236e7f0
// 地址: 0x14236e7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
uint64_t rbx = arg3
int32_t rax_3 = *(arg4 + 0x668)
uint64_t var_278 = rbx
void* const rcx_3

if (rax_3 == *(arg4 + 0x694))
label_14236e8b0:
    rcx_3 = nullptr
else
    void* r8 = *(arg4 + 0x6a0)
    void* r9 = arg4 + 0x698
    
    if (r8 != 0)
        r9 = r8
    
    int32_t rax_8 =
        *(r9 + ((sx.q((rbx u>> 0x20).d * 0x17 + rbx.d) & (sx.q(*(arg4 + 0x6a8)) - 1)) << 2))
    
    if (rax_8 == 0xffffffff)
    label_14236e8b0_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg4 + 0x660)
        
        while (true)
            int64_t rdx_2 = sx.q(rax_8) * 3
            rcx_3 = r8_1 + (rdx_2 << 3)
            
            if (*(r8_1 + (rdx_2 << 3)) == rbx)
                break
            
            rax_8 = *(rcx_3 + 0x10)
            
            if (rax_8 == 0xffffffff)
                goto label_14236e8b0_2
        
        if (rax_8 == 0xffffffff)
        label_14236e8b0_2:
            rcx_3 = nullptr

void* rax_9 = rcx_3 + 8

if (rcx_3 == 0)
    rax_9 = nullptr

int64_t rax_13
void* rcx_6
int32_t* rdi_2

if (rax_9 != 0)
    rax_13 = sx.q(*rax_9)
    rcx_6 = *(arg4 + 0x6b0)
    rdi_2 = rcx_6 + rax_13
else
    int64_t rbx_1 = sx.q(*(arg4 + 0x6b8))
    int32_t rax_10 = (rbx_1 + 8).d
    *(arg4 + 0x6b8) = rax_10
    
    if (rax_10 s> *(arg4 + 0x6bc))
        sub_1405daba0(arg4 + 0x6b0)
    
    int32_t var_288 = rbx_1.d
    *(rbx_1 + *(arg4 + 0x6b0)) = 0
    sub_141cf16a0(arg4 + 0x660, &var_278, &var_288)
    rax_13 = sx.q(var_288)
    rbx = var_278
    rdi_2 = rax_13 + *(arg4 + 0x6b0)
    *rdi_2 = 1
    rcx_6 = *(arg4 + 0x6b0)

void* r15_1 = sx.q(rax_13.d + 4) + rcx_6
void var_228
sub_14234f710(&var_228, arg5)
int32_t rcx_8 = *(arg4 + 0x6d0)
int32_t rax_15 = 0

if (rcx_8 s< *(arg2 + 0x138))
    rax_15 = rcx_8

void* rsi_3 = sx.q(rax_15) * 0xc0 + *(arg2 + 0x130)
int64_t* rdi_3
float zmm0_2
uint64_t var_258
uint128_t zmm2

if (*rdi_2 == 0)
    zmm2 = *(arg5 + 0x30)
    int32_t rax_19 = arg5[0xb].d
    var_258 = arg5[0xa]
    int32_t var_240_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    int32_t var_250_1 = rax_19
    var_278 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    int32_t var_270_1 = var_240_1
    int32_t zmm0_3 = sub_141e7dbc0(arg2)
    zmm0_2 = sub_142364220(arg1, r15_1, *(arg1 + 0x4c), rsi_3, &var_278, &var_258, zmm0_3)
    rdi_3 = arg1
else
    *rdi_2 = 0
    zmm2 = *(arg5 + 0x30)
    int32_t rax_17 = arg5[0xb].d
    var_278 = arg5[0xa]
    int32_t var_240 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    int32_t var_270 = rax_17
    var_258 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    int32_t var_250 = var_240
    rdi_3 = arg1
    zmm0_2 = sub_142364220(rdi_3, r15_1, 0, rsi_3, &var_258, &var_278, sub_141e7dbc0(arg2))
    *r15_1 = zmm0_2
float var_1b0
float var_1b0_1 = var_1b0 * zmm0_2
sub_14236d8f0(rdi_3, arg2, rbx, arg4, &var_228, arg6)
int64_t result = sub_142351ee0(&var_228)
__security_check_cookie(rax_1 ^ &var_2c8)
return result
