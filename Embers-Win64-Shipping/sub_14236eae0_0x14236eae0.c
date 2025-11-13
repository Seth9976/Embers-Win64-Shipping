// 函数: sub_14236eae0
// 地址: 0x14236eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int32_t rax_2 = *(arg4 + 0x668)
int64_t rsi = arg3
int64_t var_250 = arg3
void* const rcx_3

if (rax_2 == *(arg4 + 0x694))
label_14236eba0:
    rcx_3 = nullptr
else
    void* r8 = *(arg4 + 0x6a0)
    void* r9 = arg4 + 0x698
    
    if (r8 != 0)
        r9 = r8
    
    int32_t rax_7 =
        *(r9 + ((sx.q((rsi u>> 0x20).d * 0x17 + rsi.d) & (sx.q(*(arg4 + 0x6a8)) - 1)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_14236eba0_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg4 + 0x660)
        
        while (true)
            int64_t rdx_2 = sx.q(rax_7) * 3
            rcx_3 = r8_1 + (rdx_2 << 3)
            
            if (*(r8_1 + (rdx_2 << 3)) == rsi)
                break
            
            rax_7 = *(rcx_3 + 0x10)
            
            if (rax_7 == 0xffffffff)
                goto label_14236eba0_2
        
        if (rax_7 == 0xffffffff)
        label_14236eba0_2:
            rcx_3 = nullptr

void* rax_8 = rcx_3 + 8

if (rcx_3 == 0)
    rax_8 = nullptr

int32_t var_258
int32_t rax_13
int32_t rcx_6
int32_t* rdx_6
int32_t* r8_3

if (rax_8 != 0)
    int64_t rcx_7 = sx.q(*rax_8)
    r8_3 = *(arg4 + 0x6b0)
    rax_13 = (rcx_7 + 4).d
    rdx_6 = r8_3 + rcx_7
    rcx_6 = *(r8_3 + rcx_7)
else
    int64_t rsi_1 = sx.q(*(arg4 + 0x6b8))
    int32_t rax_9 = (rsi_1 + 0x14).d
    *(arg4 + 0x6b8) = rax_9
    
    if (rax_9 s> *(arg4 + 0x6bc))
        sub_1405daba0(arg4 + 0x6b0)
    
    var_258 = rsi_1.d
    __builtin_memset(rsi_1 + *(arg4 + 0x6b0), 0, 0x14)
    arg5 = sub_141cf16a0(arg4 + 0x660, &var_250, &var_258)
    int64_t rax_12 = sx.q(var_258)
    rcx_6 = 1
    rsi = var_250
    rdx_6 = rax_12 + *(arg4 + 0x6b0)
    rax_13 = rax_12.d + 4
    *rdx_6 = 1
    r8_3 = *(arg4 + 0x6b0)

void* rdi_2 = sx.q(rax_13) + r8_3
uint128_t zmm1
uint128_t zmm2

if (rcx_6 != 0)
    arg5.d = (*(arg4 + 0x190)).d f- *(arg6 + 0x7c)
    *rdi_2 = arg5.d
    int32_t rax_15 = *(arg1 + 0x3c) * 0xbb38435 + 0x3619636b
    *(arg1 + 0x3c) = rax_15
    zmm1 = *(arg1 + 0x18c)
    zmm2.d = arg1[0x31].d.d f- zmm1.d
    var_258 = rax_15 u>> 9 | 0x3f800000
    arg5.d = var_258.d f- 1f
    zmm2.d = zmm2.d f* arg5.d
    zmm2.d = zmm2.d f+ zmm1.d
    *(rdi_2 + 4) = zmm2.d
    int32_t rax_19 = *(arg1 + 0x3c) * 0xbb38435 + 0x3619636b
    *(arg1 + 0x3c) = rax_19
    zmm1 = *(arg1 + 0x184)
    zmm2.d = arg1[0x30].d.d f- zmm1.d
    var_258 = rax_19 u>> 9 | 0x3f800000
    arg5.d = var_258.d f- 1f
    zmm2.d = zmm2.d f* arg5.d
    zmm2.d = zmm2.d f+ zmm1.d
    *(rdi_2 + 8) = zmm2.d
    *(rdi_2 + 0xc) = 0xffffffff
    *rdx_6 = 0

uint128_t zmm6
zmm6.d = (*(arg4 + 0x190)).d f- *rdi_2
int64_t result

if ((arg1[0xb].b & 2) == 0 || zmm6.d f<= *(arg1 + 0x4c))
label_14236ee17:
    void var_248
    sub_14234f710(&var_248, arg6)
    float zmm0
    uint128_t zmm6_1
    zmm0, zmm6_1 = sub_141f86ef0(sub_141f8b8d0(&arg1[0xe]), zmm6, zx.o(0))
    float var_1ec
    float var_1ec_1 = var_1ec * zmm0 f* *(rdi_2 + 4)
    void* var_268_1 = &var_248
    float var_1d0
    float var_1d0_1 =
        var_1d0 * sub_141f86ef0(sub_141f8b8d0(&arg1[0x1f]), zmm6_1, zx.o(0)) f* *(rdi_2 + 8)
    sub_14236d8f0(arg1, arg2, rsi, arg4, var_268_1, arg7)
    result = sub_142351ee0(&var_248)
else
    result = (*(*arg1 + 0x278))(arg1)
    
    if (not(zmm6.d f> arg5.d))
        arg5.d = zmm6.d f- arg1[9].d
        zmm2.d = (*(arg1 + 0x4c)).d f- arg1[9].d
        int32_t rax_24 = *(arg1 + 0x54)
        zmm1.d = _mm_cvtepi32_ps(zx.o(int.d(arg5.d))).d f/ zmm2.d
        int32_t rcx_9 = int.d(zmm1.d)
        arg5.d = _mm_cvtepi32_ps(zx.o(rcx_9)).d f* zmm2.d
        zmm6.d = zmm6.d f- arg5.d
        
        if (rcx_9 == rax_24 && (arg1[0xb].b & 1) == 0 && rax_24 != 0)
            zmm6.d = zmm6.d f+ zmm2.d
        else if (rcx_9 != *(rdi_2 + 0xc))
            int32_t rax_26 = *(arg1 + 0x3c) * 0xbb38435 + 0x3619636b
            *(arg1 + 0x3c) = rax_26
            zmm1 = *(arg1 + 0x18c)
            zmm2.d = arg1[0x31].d.d f- zmm1.d
            var_258 = rax_26 u>> 9 | 0x3f800000
            arg5.d = var_258.d f- 1f
            zmm2.d = zmm2.d f* arg5.d
            zmm2.d = zmm2.d f+ zmm1.d
            *(rdi_2 + 4) = zmm2.d
            int32_t rax_30 = *(arg1 + 0x3c) * 0xbb38435 + 0x3619636b
            *(arg1 + 0x3c) = rax_30
            zmm1 = *(arg1 + 0x184)
            zmm2.d = arg1[0x30].d.d f- zmm1.d
            var_258 = rax_30 u>> 9 | 0x3f800000
            arg5.d = var_258.d f- 1f
            zmm2.d = zmm2.d f* arg5.d
            zmm2.d = zmm2.d f+ zmm1.d
            *(rdi_2 + 8) = zmm2.d
            *(rdi_2 + 0xc) = rcx_9
        
        goto label_14236ee17

__security_check_cookie(rax_1 ^ &var_288)
return result
