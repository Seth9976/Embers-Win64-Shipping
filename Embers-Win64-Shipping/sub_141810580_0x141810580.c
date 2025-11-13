// 函数: sub_141810580
// 地址: 0x141810580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_78 = nullptr
int32_t var_70 = 0
int64_t var_68 = 0
int64_t var_60 = 0
sub_1405947f0(&var_68, 9)
int32_t rax = var_60.d + 9
var_60.d = rax

if (rax s> 0)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"Currency", 0x12)
int64_t var_58
sub_140596d10(&var_58, arg3)
int64_t rbx_1 = sx.q(var_70)
int32_t rax_1 = (rbx_1 + 1).d

if (rax_1 s> 0)
    sub_1405c4f50(&var_78)

int64_t rax_2 = var_68
int64_t* rcx_7 = rbx_1 * 0x30 + var_78
var_68 = 0
*rcx_7 = rax_2
rcx_7[1].d = var_60.d
*(rcx_7 + 0xc) = var_60:4.d
rcx_7[2] = var_58
int32_t var_50
rcx_7[3].d = var_50
int32_t var_4c
*(rcx_7 + 0x1c) = var_4c
rcx_7[4] = 0
rcx_7[5].b = 0
*(rcx_7 + 0x2c) = 0
int64_t var_60_1 = 0
sub_1405947f0(&var_68, 0xc)
int32_t r14 = var_60_1:4.d
int32_t rdi = var_60_1.d + 0xc
var_60_1.d = rdi

if (rdi s> r14)
    sub_140594770(&var_68)
    r14 = var_60_1:4.d
    rdi = var_60_1.d

int64_t rsi = var_68
UnDecorator::getReferenceType(rsi, u"PerItemCost", 0x18)
int64_t rbx_2 = sx.q(rax_1)
uint128_t zmm6 = _mm_cvtepi32_pd(zx.q(arg4))
int32_t i_2 = (rbx_2 + 1).d

if (i_2 s> 0)
    sub_1405c4f50(&var_78)

int64_t* rcx_14 = rbx_2 * 0x30 + var_78
*rcx_14 = rsi
rcx_14[1].d = rdi
*(rcx_14 + 0xc) = r14
rcx_14[2] = 0
rcx_14[3] = 0
rcx_14[4] = zmm6.q
rcx_14[5].b = 0
*(rcx_14 + 0x2c) = 1
int64_t result = (*(*arg1 + 0x60))(arg1, arg2, zx.q(arg5), &var_78)
int32_t i_1 = i_2
void* rbx_3 = var_78

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_16 = *(rbx_3 + 0x10)
        
        if (rcx_16 != 0)
            result = sub_140a74f90(rcx_16)
        
        int64_t rcx_17 = *rbx_3
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
        
        rbx_3 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_3 = var_78

if (rbx_3 == 0)
    return result

return sub_140a74f90(rbx_3)
