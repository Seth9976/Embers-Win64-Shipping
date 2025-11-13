// 函数: sub_14180f860
// 地址: 0x14180f860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_78 = nullptr
int32_t var_70 = 0
int64_t var_68 = 0
int64_t var_60 = 0
sub_1405947f0(&var_68, 0x11)
int32_t rax = var_60.d + 0x11
var_60.d = rax

if (rax s> 0)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"RealCurrencyType", 0x22)
int64_t var_58
sub_140596d10(&var_58, arg4)
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
sub_1405947f0(&var_68, 0xe)
int32_t rsi = var_60_1:4.d
int32_t rdi = var_60_1.d + 0xe
var_60_1.d = rdi

if (rdi s> rsi)
    sub_140594770(&var_68)
    rsi = var_60_1:4.d
    rdi = var_60_1.d

int64_t r14 = var_68
UnDecorator::getReferenceType(r14, u"RealMoneyCost", 0x1c)
int64_t rbx_2 = sx.q(rax_1)
var_58 = 0
var_50.q = 0
int32_t rax_8 = (rbx_2 + 1).d
int128_t zmm6 = _mm_cvtps_pd(arg5.q)

if (rax_8 s> 0)
    sub_1405c4f50(&var_78)

int64_t* rcx_14 = rbx_2 * 0x30 + var_78
*rcx_14 = r14
rcx_14[1].d = rdi
*(rcx_14 + 0xc) = rsi
rcx_14[2] = 0
rcx_14[3] = 0
rcx_14[4] = zmm6.q
rcx_14[5].b = 0
*(rcx_14 + 0x2c) = 1
var_68 = 0
int64_t var_60_2 = 0
sub_1405947f0(&var_68, 0x10)
int32_t rax_9 = var_60_2.d + 0x10
var_60_2.d = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"PaymentProvider", 0x20)
sub_140596d10(&var_58, arg6)
int64_t rbx_3 = sx.q(rax_8)
int32_t i_2 = (rbx_3 + 1).d

if (i_2 s> 0)
    sub_1405c4f50(&var_78)

int64_t* rcx_22 = rbx_3 * 0x30 + var_78
*rcx_22 = var_68
rcx_22[1].d = var_60_2.d
*(rcx_22 + 0xc) = var_60_2:4.d
rcx_22[2] = var_58
rcx_22[3].d = var_50
*(rcx_22 + 0x1c) = var_4c
rcx_22[4] = 0
rcx_22[5].b = 0
*(rcx_22 + 0x2c) = 0
int64_t result = (*(*arg1 + 0x78))(arg1, arg2, zx.q(arg3), &var_78)
int32_t i_1 = i_2
void* rbx_4 = var_78

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_24 = *(rbx_4 + 0x10)
        
        if (rcx_24 != 0)
            result = sub_140a74f90(rcx_24)
        
        int64_t rcx_25 = *rbx_4
        
        if (rcx_25 != 0)
            result = sub_140a74f90(rcx_25)
        
        rbx_4 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_4 = var_78

if (rbx_4 == 0)
    return result

return sub_140a74f90(rbx_4)
