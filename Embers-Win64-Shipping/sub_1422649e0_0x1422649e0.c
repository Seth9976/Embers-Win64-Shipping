// 函数: sub_1422649e0
// 地址: 0x1422649e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
char arg_8

if (arg1 == 0)
    arg_8 = 0
else
    void* rax_1 = sub_14254f450()
    void* rdx = arg1[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
            || arg1[0x13] == 0)
        arg_8 = 0
    else
        arg_8 = 1
        
        if (arg1[6] != 0)
            arg_8 = 0

void* rax_5 = *(data_143f5b298 + 0x788)
int64_t rax_6

if (rax_5 == 0)
    rax_6 = 0
else
    rax_6 = *(rax_5 + 0x40)

int64_t var_68 = 0
void** const var_78 = &data_14328a9d8
int32_t var_60 = 0
int16_t var_70 = 0
int64_t var_58 = rax_6
void** const* rax_7

if (arg4 == 0 || rax_6 != 0)
    rax_7 = &var_78
else
    rax_7 = sub_140b19e60()

int32_t rax_8 = arg3[1].d
int32_t r13 = rax_8 - 1

if (rax_8 == 0)
    r13 = 0

int64_t rbx_2 = sx.q(r13 + 1) * 2
int64_t rax_10 = sub_140a82f30(rbx_2, 0)
int16_t* rax_11 = sub_140a82f30(rbx_2, 0)
int32_t rcx_3 = arg3[1].d
int16_t* const rbx_3 = &data_142d40450
int64_t var_98 = rax_10
int16_t* rax_12

if (rcx_3 == 0)
    rax_12 = &data_142d40450
else
    rax_12 = *arg3

int32_t rdi_1 = rcx_3 - 1
int32_t rcx_4 = 0

if (rcx_3 == 0)
    rdi_1 = 0

if (r13 s< 0)
    rdi_1 = 0
else if (r13 s< rdi_1)
    rdi_1 = r13

int16_t* var_88 = nullptr
int16_t* r12_1 = nullptr
int64_t var_80 = 0
int32_t rdx_1 = 0

if (rax_12 != 0 && *rax_12 != 0 && rdi_1 s> 0)
    if (rdi_1 + 1 s> 0)
        sub_1405947f0(&var_88, rdi_1 + 1)
        rcx_4 = var_80:4.d
        rdx_1 = var_80.d
        r12_1 = var_88
    
    int32_t r13_2 = rdx_1 + 1 + rdi_1
    var_80.d = r13_2
    
    if (r13_2 s> rcx_4)
        sub_140594770(&var_88)
        r13_2 = var_80.d
        r12_1 = var_88
    
    UnDecorator::getReferenceType(r12_1, rax_12, rdi_1 * 2)
    r12_1[sx.q(r13_2) - 1] = 0
    
    if (r13_2 != 0)
        rbx_3 = r12_1

void* rdx_5 = rax_10 - rbx_3
int16_t i

do
    i = *rbx_3
    *(rbx_3 + rdx_5) = i
    rbx_3 = &rbx_3[1]
while (i != 0)

if (r12_1 != 0)
    sub_140a74f90(r12_1)

if (sub_140b1e3e0(&var_98, rax_11, r13 + 1, 0) != 0)
    char i_1
    
    do
        if ((arg_8 != 0 || arg1[6] != 0) &&
                (*(arg1[5] + 8))(&arg1[5], (*(*arg1 + 0x150))(arg1), rax_11, rax_7, rax_12, rax_7) == 0)
            sub_140b1f700(&var_78, u"Command not recognized: %s", rax_11)
        
        i_1 = sub_140b1e3e0(&var_98, rax_11, r13 + 1, 0)
    while (i_1 != 0)
    result = arg2

sub_140a74f90(rax_10)
sub_140a74f90(rax_11)
*result = 0

if (arg4 != 0)
    result[1] = 0
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
else
    *result = var_68
    result[1].d = var_60
    int32_t var_5c
    *(result + 0xc) = var_5c

return result
