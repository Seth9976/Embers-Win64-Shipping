// 函数: sub_141da55a0
// 地址: 0x141da55a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = *arg7
void* rax_1 = arg7[1]
void* var_30 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141da5520(arg1, 0xd, &var_38)
*arg1 = &data_143239dc0
arg1[7] = 0
arg1[8] = 0
__builtin_memset(&arg1[0xa], 0, 0x20)
int64_t var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 5)
int32_t rax_2 = var_40 + 5
var_40 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"POST", 0xa)
int64_t* rcx_3 = arg1[2]
(*(*rcx_3 + 0x48))(rcx_3, &var_48)
int64_t rcx_4 = var_48

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

var_38 = 0
int32_t var_30_1 = 0
sub_1405947f0(&var_38, 0x19)
int32_t rax_4 = var_30_1 + 0x19
var_30_1 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"application/octet-stream", 0x32)
var_48 = 0
int32_t var_40_1 = 0
sub_1405947f0(&var_48, 0xd)
int32_t rax_5 = var_40_1 + 0xd
var_40_1 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"Content-Type", 0x1a)
int64_t* rcx_11 = arg1[2]
(*(*rcx_11 + 0x78))(rcx_11, &var_48, &var_38)
int64_t rcx_12 = var_48

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = var_38

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t* rcx_14 = arg1[2]
(*(*rcx_14 + 0x58))(rcx_14, arg6)
sub_140597df0(&arg1[7], arg2)
arg1[9].d = arg3
sub_140597df0(&arg1[0xa], arg4)
sub_140597df0(&arg1[0xc], arg5)
int64_t* rbx_1 = arg7[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
