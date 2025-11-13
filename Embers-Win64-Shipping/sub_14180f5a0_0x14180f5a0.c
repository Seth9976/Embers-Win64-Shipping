// 函数: sub_14180f5a0
// 地址: 0x14180f5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg4[1].d
void* rdi = *arg4
void* var_88 = nullptr
int32_t i_4 = i_2
int32_t var_7c

if (i_2 != 0)
    sub_1405a4b40(&var_88, i_2, 0)
    void* rbx_2 = var_88 + 0x20
    void* rdi_1 = rdi + 0x20
    int32_t i
    
    do
        sub_140596d10(rbx_2 - 0x20, rdi_1 - 0x20)
        sub_140596d10(rbx_2 - 0x10, rdi_1 - 0x10)
        int64_t rax_1 = *rdi_1
        rdi_1 += 0x30
        *rbx_2 = rax_1
        rbx_2 += 0x30
        *(rbx_2 - 0x28) = *(rdi_1 - 0x28)
        *(rbx_2 - 0x24) = *(rdi_1 - 0x24)
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    var_7c = 0

int64_t var_68 = 0
int64_t var_60 = 0
sub_1405947f0(&var_68, 0x11)
int32_t rax_4 = var_60.d + 0x11
var_60.d = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"GameCurrencyType", 0x22)
int64_t var_58
sub_140596d10(&var_58, arg2)
int64_t i_6 = sx.q(i_4)
int32_t rax_5 = (i_6 + 1).d

if (rax_5 s> var_7c)
    sub_1405c4f50(&var_88)

int64_t rax_6 = var_68
int64_t* rcx_10 = i_6 * 0x30 + var_88
var_68 = 0
*rcx_10 = rax_6
rcx_10[1].d = var_60.d
*(rcx_10 + 0xc) = var_60:4.d
rcx_10[2] = var_58
int32_t var_50
rcx_10[3].d = var_50
int32_t var_4c
*(rcx_10 + 0x1c) = var_4c
rcx_10[4] = 0
rcx_10[5].b = 0
*(rcx_10 + 0x2c) = 0
int64_t var_60_1 = 0
sub_1405947f0(&var_68, 0x13)
int32_t r14_1 = var_60_1:4.d
int32_t rdi_2 = var_60_1.d + 0x13
var_60_1.d = rdi_2

if (rdi_2 s> r14_1)
    sub_140594770(&var_68)
    r14_1 = var_60_1:4.d
    rdi_2 = var_60_1.d

int64_t rsi = var_68
UnDecorator::getReferenceType(rsi, u"GameCurrencyAmount", 0x26)
int64_t rbx_3 = sx.q(rax_5)
uint128_t zmm6 = _mm_cvtepi32_pd(zx.q(arg3))
int32_t i_5 = (rbx_3 + 1).d

if (i_5 s> var_7c)
    sub_1405c4f50(&var_88)

int64_t var_78 = 0
int64_t* rcx_17 = rbx_3 * 0x30 + var_88
int32_t var_70 = 0
*rcx_17 = rsi
rcx_17[1].d = rdi_2
*(rcx_17 + 0xc) = r14_1
rcx_17[2] = 0
rcx_17[3] = 0
rcx_17[4] = zmm6.q
rcx_17[5].b = 0
*(rcx_17 + 0x2c) = 1
sub_1405947f0(&var_78, 0xf)
int32_t rax_12 = var_70 + 0xf
var_70 = rax_12

if (rax_12 s> 0)
    sub_140594770(&var_78)

UnDecorator::getReferenceType(var_78, u"Currency Given", 0x1e)
int64_t result = (*(*arg1 + 0x58))(arg1, &var_78, &var_88)
int64_t rcx_22 = var_78

if (rcx_22 != 0)
    result = sub_140a74f90(rcx_22)

int32_t i_3 = i_5
void* rbx_4 = var_88

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_23 = *(rbx_4 + 0x10)
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)
        
        int64_t rcx_24 = *rbx_4
        
        if (rcx_24 != 0)
            result = sub_140a74f90(rcx_24)
        
        rbx_4 += 0x30
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_4 = var_88

if (rbx_4 == 0)
    return result

return sub_140a74f90(rbx_4)
