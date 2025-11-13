// 函数: sub_141291670
// 地址: 0x141291670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422e1d40(arg3 + 0x1dd0, arg2, arg4, arg3, 1, 0)
int32_t var_180 = 1
int32_t var_188 = 1
sub_1422e1d40(arg3 + 0x1dd0, arg2, arg4, arg3, 1, 1)
char rax_1 = sub_14128e090((*U"1111")[sx.q(*(arg1 + 0x3b0))])
char rax_2

if (rax_1 != 0)
    rax_2 = sub_1422eb710()

int64_t r12

if (rax_1 == 0 || rax_2 != 0)
    r12.b = 0
else
    r12.b = 1

int64_t var_158
__builtin_memset(&var_158, 0, 0x14)
sub_141095f70(&var_158, 0)
int64_t var_140 = 0
int64_t var_138 = 0
void var_108
sub_14108b090(&var_108)
int32_t rbx = *(arg3 + 0x1548)
void** const var_130 = &data_142f11938
int64_t* var_128 = &var_158
int64_t* var_120 = &var_140
void* var_118 = &var_108
void arg_18
void* var_110 = &arg_18
int64_t* rcx_5 = *(*arg3 + 0x20)
var_180.b = 0
var_188.q = arg4
void** var_b8
sub_14111c620(&var_b8, (*(*rcx_5 + 0x248))(rcx_5), rbx, arg3, var_188, 0, &var_130)
int32_t i = 0

if (*(arg3 + 0x1d48) s> 0)
    void** rbx_1 = nullptr
    
    do
        var_188 = 0xffffffff
        sub_14111d1d0(&var_b8, *(rbx_1 + *(arg3 + 0x1d40)), -1, nullptr, 0xffffffff)
        i += 1
        rbx_1 = &rbx_1[1]
    while (i s< *(arg3 + 0x1d48))

int32_t rcx_9
rcx_9.b = sub_1422eb5d0(arg3) != 0
void** const* var_178
var_178.d = rcx_9 + 1
var_180.q = &arg_18
var_188.q = &var_108
sub_1412680e0(arg3, arg2, &var_140, &var_158, var_188, var_180, var_178.d)
var_130 = &data_142d56fa0
int64_t var_d8

if (var_d8 != 0)
    sub_140a74f90(var_d8)

int64_t var_e8

if (var_e8 != 0)
    sub_140a74f90(var_e8)

sub_1412687b0(&var_108)
int64_t var_f8

if (var_f8 != 0)
    sub_140a74f90(var_f8)

sub_14108c350(&var_108)
sub_141095f70(&var_158, 0)
int64_t rcx_18 = var_158

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

var_180.q = arg3
var_188.b = r12.b
sub_141e9a320(arg3 + 0x18e0, arg2, arg4, *(arg1 + 0x3b0), var_188.b, var_180, 0, 0x3f800000, 3)
__builtin_memset(&var_158, 0, 0x14)
sub_141095f70(&var_158, 0)
var_140 = 0
int64_t var_138_1 = 0
sub_14108b090(&var_108)
int32_t rbx_2 = *(arg3 + 0x1548)
var_130 = &data_142f11938
int64_t* var_128_1 = &var_158
int64_t* var_120_1 = &var_140
void* var_118_1 = &var_108
void* var_110_1 = &arg_18
int64_t* rcx_22 = *(*arg3 + 0x20)
var_180.b = 0
var_188.q = arg4
sub_14111c620(&var_b8, (*(*rcx_22 + 0x248))(rcx_22), rbx_2, arg3, var_188, var_180.b, &var_130)
int32_t i_1 = 0

if (*(arg3 + 0x1d58) s> 0)
    int64_t rbx_3 = 0
    
    do
        var_188 = 0xffffffff
        sub_14111d1d0(&var_b8, *(*(arg3 + 0x1d50) + rbx_3), -1, nullptr, 0xffffffff)
        i_1 += 1
        rbx_3 += 8
    while (i_1 s< *(arg3 + 0x1d58))

int32_t r14
r14.b = sub_1422eb5d0(arg3) != 0
void** const* var_178_1
var_178_1.d = r14 + 1
var_180.q = &arg_18
var_188.q = &var_108
sub_1412680e0(arg3, arg2, &var_140, &var_158, var_188, var_180, var_178_1.d)
var_130 = &data_142d56fa0

if (var_d8 != 0)
    sub_140a74f90(var_d8)

if (var_e8 != 0)
    sub_140a74f90(var_e8)

sub_1412687b0(&var_108)

if (var_f8 != 0)
    sub_140a74f90(var_f8)

int32_t zmm6 = sub_14108c350(&var_108)
sub_141095f70(&var_158, 0)
int64_t rcx_33 = var_158

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

var_180.q = arg3
var_188.b = r12.b
return sub_141e9a320(arg3 + 0x1b10, arg2, arg4, *(arg1 + 0x3b0), var_188.b, var_180, 0, zmm6, 3)
