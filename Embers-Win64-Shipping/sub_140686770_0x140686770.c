// 函数: sub_140686770
// 地址: 0x140686770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t var_188
int64_t* rax_3 = sub_140a300d0(arg2, &var_188, &data_142d84ee4, &data_142d404d4, 1)
int16_t* const rdx_1

if (rax_3[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax_3

int32_t r14 = 0
int64_t rbx = -1
int64_t r8 = -1
void var_c8
char* rdx_2 = *(sub_140685ed0(&var_c8, rdx_1) + 0x88)
int64_t var_118 = 0
int64_t var_110 = 0xf
char var_128 = 0

do
    r8 += 1
while (rdx_2[r8] != 0)

sub_14058ad40(&var_128, rdx_2, r8)
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t rcx_4 = var_188

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

void var_108
sub_14281d4d0(&var_108, &var_128, arg3)
void var_178
sub_14281a404(&var_178)
sub_14281b9d0(&var_178, 0x1d)
sub_14281ba64(&var_178, 0x1d)
sub_14281ba44(&var_178, 0xc)
var_188.d = 5
var_188:4.d = 5
sub_14281b8d0(&var_178, &var_188)
sub_14281d800(&var_178, &var_108)
char* rax_5 = sub_14281c1ec(&var_178)
*arg1 = 0
arg1[1] = 0

if (rax_5 != 0 && *rax_5 != 0)
    do
        rbx += 1
    while (rax_5[rbx] != 0)
    
    int32_t rcx_13 = 0
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(arg1, rbx.d + 1)
        rcx_13 = *(arg1 + 0xc)
        r14 = arg1[1].d
    
    int32_t rax_6 = r14 + rbx.d + 1
    arg1[1].d = rax_6
    
    if (rax_6 s> rcx_13)
        sub_140594770(arg1)
    
    int32_t var_198
    var_198.w = 0x3f
    sub_1405a7220(*arg1, rbx.d + 1, rax_5, rbx.d + 1, var_198.w)

sub_14281a474(&var_178)
sub_140686270(&var_108)

if (var_110 u>= 0x10)
    void* rcx_19 = var_128.q
    void* rax_7 = rcx_19
    
    if (var_110 + 1 u>= 0x1000)
        rcx_19 = *(rcx_19 - 8)
        
        if (rax_7 - rcx_19 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_19)

__security_check_cookie(rax_1 ^ &var_1b8)
return arg1
