// 函数: sub_140791160
// 地址: 0x140791160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_58 = 0xffffffff
void var_c0
void var_a0
sub_140b2f3e0(&var_c0, sub_140596d10(&var_a0, &arg3[1]))
int64_t var_d8 = 0
int64_t* var_d0 = nullptr
sub_1405947f0(&var_d8, 0xd)
int32_t r15 = var_d0:4.d
int32_t r14 = var_d0.d + 0xd
var_d0.d = r14

if (r14 s> r15)
    sub_140594770(&var_d8)
    r15 = var_d0:4.d
    r14 = var_d0.d

int64_t rbx = var_d8
UnDecorator::getReferenceType(rbx, u"FunctionName", 0x1a)
sub_140783a30(&var_88, &var_d8)
*var_d0 = rbx
var_d0[1].d = r14
*(var_d0 + 0xc) = r15
sub_140b2f340(&var_d0[2], &var_c0)
var_d0[6].d = 0xffffffff
int32_t rax_3 = var_d0[1].d
int16_t* rdx_5

if (rax_3 == 0)
    rdx_5 = &data_142d40450
else
    rdx_5 = *var_d0

int32_t rcx_7 = rax_3 - 1

if (rax_3 == 0)
    rcx_7 = 0

void var_c8
sub_140754310(&var_88, &var_c8, sub_1405969c0(rcx_7, rdx_5), var_d0, var_d8.d, nullptr)
int64_t var_b0

if (var_b0 != 0)
    sub_140a74f90(var_b0)

int64_t rax_5 = *arg3
int64_t* rax_6
int32_t r8_2
bool cond:1_1

if (rax_5 != data_143ce0368)
    int16_t* rdx_9
    
    if (rax_5 == data_143ce0388)
        rdx_9 = data_14396eb60
    label_14079133a:
        rax_6 = sub_140b3b600(&var_d8, rdx_9, &var_88)
        int32_t rcx_13 = rax_6[1].d
        cond:1_1 = rcx_13 == 0
        r8_2 = rcx_13 - 1
        goto label_14079134b
    
    if (rax_5 == data_143ce0370)
        rdx_9 = data_14396eb68
        goto label_14079133a
    
    if (rax_5 == data_143ce0378)
        rdx_9 = data_14396eb70
        goto label_14079133a
    
    if (rax_5 == data_143ce0380)
        rdx_9 = data_14396eb78
        goto label_14079133a
    
    rbx.b = 0
else
    rax_6 = sub_140b3b600(&var_d8, data_14396eb58, &var_88)
    int32_t rdx_8 = rax_6[1].d
    cond:1_1 = rdx_8 == 0
    r8_2 = rdx_8 - 1
label_14079134b:
    
    if (cond:1_1)
        r8_2 = 0
    
    sub_140a20ba0(arg4, *rax_6, r8_2)
    int64_t rcx_15 = var_d8
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    rbx.b = 1
int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

sub_1407464c0(&var_88)
__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rbx.b)
