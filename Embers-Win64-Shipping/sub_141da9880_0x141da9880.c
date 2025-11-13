// 函数: sub_141da9880
// 地址: 0x141da9880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x41].d s<= 1 || arg1[0x29].d == 0)
    return 

int64_t* rax_1 = sub_141802500()
int64_t r8_1 = *rax_1
int64_t* var_18
(*(r8_1 + 0x40))(rax_1, &var_18, r8_1)
int64_t* rcx_1 = var_18
sub_141da4560((*(*rcx_1 + 0x90))(rcx_1), arg1, sub_141dad730)
uint128_t zmm0_1 = var_18.o
uint128_t var_28 = zmm0_1
void* rax_4 = _mm_bsrli_si128(zmm0_1, 8).q

if (rax_4 != 0)
    *(rax_4 + 8) += 1

if ((*(*arg1 + 0x1d0))(arg1, &var_28, &arg1[0x28]) != 0)
    int64_t* rcx_5 = var_18
    int32_t rax_9 = (*(*rcx_5 + 0x28))(rcx_5)
    int16_t* const r8_3 = &data_142d40450
    int64_t* rsi_1 = var_18
    int32_t r11_2 = arg1[0x6b].d + rax_9
    arg1[0x6b].d = r11_2
    
    if (arg1[0x41].d != 0)
        arg1[0x40]
    
    if (arg1[0x46].d != 0)
        r8_3 = arg1[0x45]
    
    int32_t r10_1 = arg1[0x47].d
    int32_t var_40_1 = r11_2
    int32_t var_48_1 = arg1[0x50].d
    int32_t var_50_1 = *(arg1 + 0x27c)
    int32_t var_58_1 = *(arg1 + 0x274)
    int32_t var_60_1 = r10_1 + 1
    int32_t var_68_1 = r10_1
    sub_140a2e390(&var_28, 
        %sreplay/%s/file/stream.%i?numChunks=%i&time=%i&mTime1=%i&mTime2=%i&absSize=%i", r8_3)
    (*(*rsi_1 + 0x50))(rsi_1, &var_28)
    int64_t rcx_8 = var_28.q
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t var_38 = 0
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, 5)
    int32_t rax_14 = var_30_1 + 5
    var_30_1 = rax_14
    
    if (rax_14 s> 0)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"POST", 0xa)
    int64_t* rcx_12 = var_18
    (*(*rcx_12 + 0x48))(rcx_12, &var_38)
    int64_t rcx_13 = var_38
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    var_28.q = 0
    var_28:8.q = 0
    sub_1405947f0(&var_28, 0x19)
    var_28:8.d += 0x19
    
    if (var_28:8.d + 0x19 s> var_28:0xc.d)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28.q, u"application/octet-stream", 0x32)
    var_38 = 0
    int32_t var_30_2 = 0
    sub_1405947f0(&var_38, 0xd)
    int32_t rax_17 = var_30_2 + 0xd
    var_30_2 = rax_17
    
    if (rax_17 s> 0)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"Content-Type", 0x1a)
    int64_t* rcx_20 = var_18
    (*(*rcx_20 + 0x78))(rcx_20, &var_38, &var_28)
    int64_t rcx_21 = var_38
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    int64_t rcx_22 = var_28.q
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    arg1[0x29].d = 0
    
    if (*(arg1 + 0x14c) != 0)
        sub_1405c5510(&arg1[0x28], 0)
    
    uint128_t zmm0_2 = var_18.o
    int32_t rax_19 = arg1[0x50].d
    arg1[0x47].d += 1
    var_28 = zmm0_2
    uint128_t temp0_2 = _mm_bsrli_si128(zmm0_2, 8)
    *(arg1 + 0x27c) = rax_19
    void* rax_20 = temp0_2.q
    arg1[0x2a].d = 0
    
    if (rax_20 != 0)
        *(rax_20 + 8) += 1
    
    sub_141da6730(arg1, 2, &var_28, 2, 0x40000000)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    arg1[0x48] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
else
    (*(*arg1 + 0x198))(arg1)
    *(arg1 + 0x29c) = 1

int64_t* var_10

if (var_10 == 0)
    return 

var_10[1].d -= 1

if (var_10[1].d != 1)
    return 

(**var_10)(var_10)
int32_t temp1_1 = *(var_10 + 0xc)
*(var_10 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*var_10 + 8))(var_10, 1)
