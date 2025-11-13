// 函数: sub_1412155b0
// 地址: 0x1412155b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
uint128_t var_c8 = data_142d3f660
int64_t* rcx = *(arg4 + 0x20)
int64_t rdi = 0
int64_t var_40 = 0
void var_98
(*(*rcx + 0x68))(rcx, &var_98)
int64_t* rcx_1
int64_t r9

if ((*(arg4 + 0x64) & 1) == 0 || *(arg4 + 0x78) s>= data_1439b6348)
    rcx_1 = *(arg4 + 0x20)
    
    if ((rcx_1[0x27].b & 8) == 0)
        r9.b = 1
    else
        r9.b = 0
else
    rcx_1 = *(arg4 + 0x20)
    r9.b = 1

int32_t arg_20
(*(*rcx_1 + 0x70))(rcx_1, &arg_20, zx.q(arg6[0x2a9].d), r9, arg6[0x4f].d)
uint128_t zmm0 = arg5
uint128_t zmm1
zmm1.d = zmm0.d f* arg_20
int32_t var_b8 = zmm0.d
int32_t var_b4 = (zmm1 ^ data_142d3f780).d
int32_t rsi = *(*(arg4 + 0x20) + 0xf8)
TEB* gsbase
void* r15 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143e898b0 s> *(r15 + 0x14))
    _Init_thread_header(&data_143e898b0)
    
    if (data_143e898b0 == 0xffffffff)
        int64_t* rcx_8 = data_143db18d0
        
        if (rcx_8 == 0)
            sub_140a53c40()
            rcx_8 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_23 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.AllowStaticLighting", r8_2)
        int64_t rax_24
        
        if (rax_23 == 0)
            rax_24 = 0
        else
            int64_t rdx_5 = *rax_23
            rax_24 = (*(rdx_5 + 0x58))(rax_23, rdx_5)
        
        data_143e898a8 = rax_24
        _Init_thread_footer(&data_143e898b0)

int64_t rax_6 = data_143e898a8

if (rax_6 != 0 && *(rax_6 + 4) == 0)
    rsi = -1

int32_t rax_7
rax_7.b = rsi == 0
int32_t rax_8
rax_8.b = rsi == 1
int32_t rax_9
rax_9.b = rsi == 2
var_c8.d = _mm_cvtepi32_ps(zx.o(rax_7)).d
int32_t rax_10
rax_10.b = rsi == 3
var_c8:4.d = _mm_cvtepi32_ps(zx.o(rax_8)).d
zmm1 = _mm_cvtepi32_ps(zx.o(rax_9))
void* rax_11 = *arg6
zmm0 = _mm_cvtepi32_ps(zx.o(rax_10))
var_c8:8.d = zmm1.d
var_c8:0xc.d = zmm0.d

if ((*(rax_11 + 0x2c) & 1) != 0)
    sub_14148c700()

void* rdx_2 = *(arg4 + 0x20)
int32_t rcx_3

if ((*(rdx_2 + 0x138) & 0x20) == 0)
    rcx_3 = 0

if ((*(rdx_2 + 0x138) & 0x20) != 0 || *(rdx_2 + 0x128) != 0)
    rcx_3 = 1

int32_t var_a8 = rcx_3
int32_t rax_13

if ((*(rdx_2 + 0x138) & 0x10) != 0)
    rax_13 = 3

if ((*(rdx_2 + 0x138) & 0x10) == 0 || (*(*arg6 + 0x2c) & 1) == 0)
    rax_13 = 0

int32_t var_a8_1 = rcx_3 | rax_13
int32_t var_ac = (*(rdx_2 + 0xcc)).d

if (data_143e898c0 s> *(r15 + 0x14))
    _Init_thread_header(&data_143e898c0)
    
    if (data_143e898c0 == 0xffffffff)
        int64_t* rcx_10 = data_143db18d0
        
        if (rcx_10 == 0)
            sub_140a53c40()
            rcx_10 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_26 = (*(*rcx_10 + 0xb0))(rcx_10, u"r.ContactShadows", r8_3)
        
        if (rax_26 != 0)
            int64_t rdx_6 = *rax_26
            rdi = (*(rdx_6 + 0x58))(rax_26, rdx_6)
        
        data_143e898b8 = rdi
        _Init_thread_footer(&data_143e898c0)

void* rax_15 = data_143e898b8
int32_t var_b0 = 0

if (rax_15 != 0 && *(rax_15 + 4) != 0 && (*(*arg6 + 0x28) & 0x400000) != 0)
    void* rax_17 = *(arg4 + 0x20)
    zmm1 = *(rax_17 + 0xe0)
    int32_t var_b0_1 = zmm1.d
    
    if ((*(rax_17 + 0x138) & 1) == 0)
        zmm0.d = zmm1.d f+ zmm1.d
        zmm1 = zmm0
    else
        zmm1 ^= data_142d3f780
    
    int32_t var_b0_2 = zmm1.d

int64_t* rdx_3 = *(arg4 + 0x20)
float var_88
int32_t var_84
float var_80
uint128_t zmm2

if (*(arg6 + 0xd74) != 0)
    zmm2 = rdx_3[0x19].d
    zmm0.d = var_88.d f* zmm2.d
    zmm1.d = var_84.d f* zmm2.d
    var_88 = zmm0.d
    zmm0.d = var_80.d f* zmm2.d
    var_84 = zmm1.d
    var_80 = zmm0.d

char rcx_5 = *(rdx_3 + 0x13c)
int64_t* rax_19

if (rcx_5 - 1 u> 1)
    rax_19 = rdx_3

if (rcx_5 - 1 u<= 1 || rcx_5 == 3)
    rax_19 = rdx_3
    
    if (not(1f f<= *(arg6 + 0x2bc)))
        float zmm0_1 = sub_1412273e0(arg6, rdx_3)
        rax_19 = *(arg4 + 0x20)
        zmm2.d = var_84.d f* zmm0_1
        float var_88_1 = var_88 * zmm0_1
        int32_t var_84_1 = zmm2.d
        float var_80_1 = var_80 * zmm0_1

uint32_t var_a4 = zx.d(*(rax_19 + 0x13d))
return sub_141217d90(arg1, &arg_10, arg3, &var_c8)
