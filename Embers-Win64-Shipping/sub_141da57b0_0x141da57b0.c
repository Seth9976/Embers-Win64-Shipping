// 函数: sub_141da57b0
// 地址: 0x141da57b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = *arg3
void* rax_1 = arg3[1]
void* var_50 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141da5520(arg1, 0xc, &var_58)
int32_t i_2 = 1
*arg1 = &data_143239dd0
void** const var_38 = &data_14323a0f8
int64_t* var_30 = nullptr
sub_1405a4f90(&var_30)
sub_140596d10(var_30, arg2)
int64_t var_48
sub_140937030(&var_38, &var_48, 1)
int64_t var_68 = 0
int32_t var_60 = 0
sub_1405947f0(&var_68, 5)
int32_t rax_2 = var_60 + 5
var_60 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"POST", 0xa)
int64_t* rcx_6 = arg1[2]
(*(*rcx_6 + 0x48))(rcx_6, &var_68)
int64_t rcx_7 = var_68

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rcx_8 = arg1[2]
(*(*rcx_8 + 0x60))(rcx_8, &var_48)
var_58 = 0
int32_t var_50_1 = 0
sub_1405947f0(&var_58, 0x11)
int32_t rax_5 = var_50_1 + 0x11
var_50_1 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"application/json", 0x22)
var_68 = 0
int32_t var_60_1 = 0
sub_1405947f0(&var_68, 0xd)
int32_t rax_6 = var_60_1 + 0xd
var_60_1 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"Content-Type", 0x1a)
int64_t* rcx_15 = arg1[2]
(*(*rcx_15 + 0x78))(rcx_15, &var_68, &var_58)
int64_t rcx_16 = var_68

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = var_58

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = var_48

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int32_t i_1 = i_2
int64_t* rbx_1 = var_30
var_38 = &data_14323a0f8

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_19 = *rbx_1
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_30

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg1
