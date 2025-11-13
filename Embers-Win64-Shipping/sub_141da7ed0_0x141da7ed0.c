// 函数: sub_141da7ed0
// 地址: 0x141da7ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141802500()
int64_t r8 = *rax
int64_t* var_18
(*(r8 + 0x40))(rax, &var_18, r8)
int16_t* const r8_1 = &data_142d40450
int64_t* rdi = var_18

if (*(arg1 + 0x208) != 0)
    *(arg1 + 0x200)

if (*(arg1 + 0x230) != 0)
    r8_1 = *(arg1 + 0x228)

int64_t var_28
sub_140a2e390(&var_28, u"%sreplay/%s/event?group=checkpoint", r8_1)
(*(*rdi + 0x50))(rdi, &var_28)
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 4)
int32_t rax_2 = var_20 + 4
var_20 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_28)

UnDecorator::getReferenceType(var_28, &data_142d85f90, 8)
int64_t* rcx_7 = var_18
(*(*rcx_7 + 0x48))(rcx_7, &var_28)
int64_t rcx_8 = var_28

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rcx_9 = var_18
sub_141da4560((*(*rcx_9 + 0x90))(rcx_9), arg1, sub_141dabc20)
uint128_t zmm0 = var_18.o
var_28.o = zmm0
void* rax_6 = _mm_bsrli_si128(zmm0, 8).q

if (rax_6 != 0)
    *(rax_6 + 8) += 1

sub_141da6730(arg1, 9, &var_28, 0, 0)
int64_t performanceCount
int64_t result = QueryPerformanceCounter(&performanceCount)
*(arg1 + 0x250) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_10 + 8))(var_10, 1)

return result
