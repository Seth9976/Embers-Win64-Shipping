// 函数: sub_140b5be40
// 地址: 0x140b5be40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
int32_t var_5c = 0x80
int32_t r15 = 0
int64_t var_68 = 0
int32_t var_60 = 0
void var_468
sub_140b5e900(arg1 + 8, &var_468)
int64_t* var_480 = nullptr
int64_t r14 = 0
int32_t i_4 = 0
int32_t rsi = 0
int64_t var_4a8 = 0
int64_t var_4a0 = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_4a8, rbx_1.d + 1)
        r15 = var_4a0:4.d
        rsi = var_4a0.d
        r14 = var_4a8
    
    rsi += rbx_1.d + 1
    var_4a0.d = rsi
    
    if (rsi s> r15)
        sub_140594770(&var_4a8)
        r15 = var_4a0:4.d
        rsi = var_4a0.d
        r14 = var_4a8
    
    UnDecorator::getReferenceType(r14, arg3, (rbx_1.d + 1) * 2)

int64_t* var_4b8 = &var_480
int64_t var_498 = r14
int32_t var_490 = rsi
int32_t var_48c = r15
sub_140b5d370(arg1 + 8, &var_468, arg4, arg5, var_4b8)
int64_t rdi_1 = sx.q(*(arg1 + 0x40))
int32_t rax_2 = (rdi_1 + 1).d
*(arg1 + 0x40) = rax_2

if (rax_2 s> *(arg1 + 0x44))
    sub_1405c4ec0(arg1 + 0x38)

int64_t* rbx_3 = *(arg1 + 0x38) + rdi_1 * 0x28
sub_140596d10(rbx_3, &var_498)
int32_t i_2 = i_4
int64_t* r15_1 = var_480
rbx_3[2].d = arg2
int64_t result = 0
rbx_3[3] = 0
rbx_3[4].d = i_2

if (i_2 != 0)
    sub_14083a1f0(&rbx_3[3], i_2, 0)
    int64_t* rbx_4 = rbx_3[3]
    void* rdi_2 = &r15_1[3]
    int32_t i_3 = i_2
    int32_t i
    
    do
        sub_140596d10(rbx_4, rdi_2 - 0x18)
        int64_t rax_5 = *(rdi_2 - 8)
        rdi_2 += 0x20
        rbx_4[2] = rax_5
        result = *(rdi_2 - 0x20)
        rbx_4[3] = result
        rbx_4 = &rbx_4[4]
        i = i_3
        i_3 -= 1
    while (i != 1)
else
    *(rbx_3 + 0x24) = 0

int64_t* rbx_5 = r15_1

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_10 = *rbx_5
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        rbx_5 = &rbx_5[4]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r15_1 != 0)
    result = sub_140a74f90(r15_1)

int64_t rcx_12 = var_498

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

if (var_68 != 0)
    result = sub_140a74f90(var_68)

__security_check_cookie(rax_1 ^ &var_4d8)
return result
