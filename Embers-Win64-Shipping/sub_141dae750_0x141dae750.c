// 函数: sub_141dae750
// 地址: 0x141dae750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x230) s<= 1)
    return 

int64_t* rax_1 = sub_141802500()
int64_t r8_1 = *rax_1
int64_t* var_18
(*(r8_1 + 0x40))(rax_1, &var_18, r8_1)
int16_t* const r8_2 = &data_142d40450
int64_t* rdi_1 = var_18
wchar16* rdx_1

if (arg2 == 0)
    *(arg1 + 0x290)
    
    if (*(arg1 + 0x208) != 0)
        *(arg1 + 0x200)
    
    if (*(arg1 + 0x230) != 0)
        r8_2 = *(arg1 + 0x228)
    
    rdx_1 = u"%sreplay/%s/viewer/%s"
else
    *(arg1 + 0x290)
    
    if (*(arg1 + 0x208) != 0)
        *(arg1 + 0x200)
    
    if (*(arg1 + 0x230) != 0)
        r8_2 = *(arg1 + 0x228)
    
    rdx_1 = u"%sreplay/%s/viewer/%s?final=true"

int64_t var_28
sub_140a2e390(&var_28, rdx_1, r8_2)
(*(*rdi_1 + 0x50))(rdi_1, &var_28)
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

var_28 = 0
int32_t var_20_1 = 0
sub_1405947f0(&var_28, 5)
int32_t rax_3 = var_20_1 + 5
var_20_1 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_28)

UnDecorator::getReferenceType(var_28, u"POST", 0xa)
int64_t* rcx_7 = var_18
(*(*rcx_7 + 0x48))(rcx_7, &var_28)
int64_t rcx_8 = var_28

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rcx_9 = var_18
sub_141da4560((*(*rcx_9 + 0x90))(rcx_9), arg1, sub_141dac780)
uint128_t zmm0_1 = var_18.o
var_28.o = zmm0_1
void* rax_7 = _mm_bsrli_si128(zmm0_1, 8).q

if (rax_7 != 0)
    *(rax_7 + 8) += 1

sub_141da6730(arg1, 7, &var_28, 0, 0)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
*(arg1 + 0x248) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
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
