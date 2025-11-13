// 函数: sub_141db04e0
// 地址: 0x141db04e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141802500()
int64_t r8 = *rax
int64_t* var_18
(*(r8 + 0x40))(rax, &var_18, r8)
int64_t* rcx_1 = var_18
sub_141da4560((*(*rcx_1 + 0x90))(rcx_1), arg1, sub_141dad290)
int16_t* const r8_1 = &data_142d40450
int64_t* rdi = var_18

if (*(arg1 + 0x208) != 0)
    *(arg1 + 0x200)

if (*(arg1 + 0x230) != 0)
    r8_1 = *(arg1 + 0x228)

int32_t var_48 = *(arg1 + 0x358)
int32_t var_50 = *(arg1 + 0x274)
int32_t var_58 = *(arg1 + 0x238)
int64_t var_28
sub_140a2e390(&var_28, u"%sreplay/%s/stopUploading?numChunks=%i&time=%i&absSize=%i", r8_1)
(*(*rdi + 0x50))(rdi, &var_28)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t var_38 = 0
int32_t var_30 = 0
sub_1405947f0(&var_38, 5)
int32_t rax_7 = var_30 + 5
var_30 = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"POST", 0xa)
int64_t* rcx_9 = var_18
(*(*rcx_9 + 0x48))(rcx_9, &var_38)
int64_t rcx_10 = var_38

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 0x19)
int32_t rax_9 = var_20 + 0x19
var_20 = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_28)

UnDecorator::getReferenceType(var_28, u"application/octet-stream", 0x32)
var_38 = 0
int32_t var_30_1 = 0
sub_1405947f0(&var_38, 0xd)
int32_t rax_10 = var_30_1 + 0xd
var_30_1 = rax_10

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

uint128_t zmm0 = var_18.o
var_28.o = zmm0
void* rax_12 = _mm_bsrli_si128(zmm0, 8).q

if (rax_12 != 0)
    *(rax_12 + 8) += 1

void*** result = sub_141da6730(arg1, 3, &var_28, 3, 0x40000000)
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
