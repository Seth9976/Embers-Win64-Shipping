// 函数: sub_141db0740
// 地址: 0x141db0740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x208) s<= 1 || *(arg1 + 0xa0) == 0 || *(arg1 + 0x258) == 0)
    return 

int64_t* rax_1 = sub_141802500()
int64_t r8_1 = *rax_1
int64_t* var_18
(*(r8_1 + 0x40))(rax_1, &var_18, r8_1)
int64_t* rcx_1 = var_18
sub_141da4560((*(*rcx_1 + 0x90))(rcx_1), arg1, sub_141dac540)
int16_t* const r8_2 = &data_142d40450
int64_t* rdi_1 = var_18

if (*(arg1 + 0x208) != 0)
    *(arg1 + 0x200)

if (*(arg1 + 0x230) != 0)
    r8_2 = *(arg1 + 0x228)

int32_t var_40_1 = *(arg1 + 0x274)
int32_t var_48_1 = *(arg1 + 0x238)
int64_t var_28
sub_140a2e390(&var_28, u"%sreplay/%s/file/replay.header?numChunks=%i&time=%i", r8_2)
(*(*rdi_1 + 0x50))(rdi_1, &var_28)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t var_38 = 0
int32_t var_30_1 = 0
sub_1405947f0(&var_38, 5)
int32_t rax_7 = var_30_1 + 5
var_30_1 = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"POST", 0xa)
int64_t* rcx_9 = var_18
(*(*rcx_9 + 0x48))(rcx_9, &var_38)
int64_t rcx_10 = var_38

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

var_28 = 0
int32_t var_20_1 = 0
sub_1405947f0(&var_28, 0x19)
int32_t rax_9 = var_20_1 + 0x19
var_20_1 = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_28)

UnDecorator::getReferenceType(var_28, u"application/octet-stream", 0x32)
var_38 = 0
int32_t var_30_2 = 0
sub_1405947f0(&var_38, 0xd)
int32_t rax_10 = var_30_2 + 0xd
var_30_2 = rax_10

if (rax_10 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"Content-Type", 0x1a)
int64_t* rcx_17 = var_18
(*(*rcx_17 + 0x78))(rcx_17, &var_38, &var_28)
int64_t rcx_18 = var_38

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = var_28

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t* rcx_20 = var_18
(*(*rcx_20 + 0x58))(rcx_20, arg1 + 0x98)
*(arg1 + 0xa0) = 0

if (*(arg1 + 0xa4) != 0)
    sub_1405c5510(arg1 + 0x98, 0)

uint128_t zmm0_1 = var_18.o
var_28.o = zmm0_1
void* rax_13 = _mm_bsrli_si128(zmm0_1, 8).q
*(arg1 + 0xa8) = 0

if (rax_13 != 0)
    *(rax_13 + 8) += 1

sub_141da6730(arg1, 1, &var_28, 3, 0x40000000)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
*(arg1 + 0x240) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
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
