// 函数: sub_141863db0
// 地址: 0x141863db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142fe7b28
void* rdx = &arg1[4]
arg1[2] = 0
arg1[3] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)
int64_t var_38 = 0
int32_t var_30 = 0

if (rax != 0)
    rdx = rax

void (* arg_10)(char* arg1, int64_t* arg2) = sub_141853b70
*rdx = 0
*(rdx + 8) = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
sub_1405947f0(&var_38, 9)
int32_t rax_1 = var_30 + 9
var_30 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"readonly", 0x12)
int64_t* var_28 = &var_38
void (** var_20)(char* arg1, int64_t* arg2) = &arg_10
void arg_8
sub_141818aa0(&arg1[2], &arg_8, &var_28, nullptr)
int64_t rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

var_38 = 0
arg_10 = sub_141853bc0
int32_t var_30_1 = 0
sub_1405947f0(&var_38, 0xb)
int32_t rax_2 = var_30_1 + 0xb
var_30_1 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"compressed", 0x16)
var_28 = &var_38
void (** var_20_1)(char* arg1, int64_t* arg2) = &arg_10
sub_141818aa0(&arg1[2], &arg_8, &var_28, nullptr)
int64_t rcx_9 = var_38

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

var_38 = 0
arg_10 = sub_141853b50
int32_t var_30_2 = 0
sub_1405947f0(&var_38, 0xb)
int32_t rax_3 = var_30_2 + 0xb
var_30_2 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"executable", 0x16)
var_28 = &var_38
void (** var_20_2)(char* arg1, int64_t* arg2) = &arg_10
sub_141818aa0(&arg1[2], &arg_8, &var_28, nullptr)
int64_t rcx_14 = var_38

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

var_38 = 0
arg_10 = sub_141853b80
int32_t var_30_3 = 0
sub_1405947f0(&var_38, 4)
int32_t rax_4 = var_30_3 + 4
var_30_3 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, &data_142fe7b80, 8)
var_28 = &var_38
void (** var_20_3)(char* arg1, int64_t* arg2) = &arg_10
sub_141818aa0(&arg1[2], &arg_8, &var_28, nullptr)
int64_t rcx_19 = var_38

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

return arg1
