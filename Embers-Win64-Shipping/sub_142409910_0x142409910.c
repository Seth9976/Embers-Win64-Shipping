// 函数: sub_142409910
// 地址: 0x142409910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t rcx = 0
int64_t var_218 = 0
int64_t var_210 = 0
int32_t rdx = 0

if (arg4 != 0 && *arg4 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg4[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_218, rbx_1.d + 1)
        rdx = var_210:4.d
        rcx = var_210.d
    
    int32_t rax_2 = rcx + rbx_1.d + 1
    var_210.d = rax_2
    
    if (rax_2 s> rdx)
        sub_140594770(&var_218)
    
    UnDecorator::getReferenceType(var_218, arg4, (rbx_1.d + 1) * 2)

int32_t var_208 = arg2.d
int32_t var_204 = arg3.d
void var_200
void** var_1e8
sub_1420767c0(&var_1e8, &var_208, sub_140aae2f0(&var_200, &var_218), arg5, arg6)
int64_t* var_1f8

if (var_1f8 != 0)
    var_1f8[1].d -= 1
    
    if (var_1f8[1].d == 1)
        (**var_1f8)(var_1f8)
        int32_t rdi_1 = *(var_1f8 + 0xc)
        *(var_1f8 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_1f8 + 8))(var_1f8, zx.q(rdi_1))

int64_t rcx_8 = var_218

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

if (arg5 == 0 || (*(arg5 + 0x110) & 1) == 0)
    int32_t var_1a8
    int32_t var_1a8_1 = var_1a8 | 2
    int32_t var_170_1 = 0x3f800000
    int32_t var_16c_1 = 0x3f800000
    int128_t var_180_1 = *arg7
else
    int32_t var_1d4_1 = 6

var_1e8[3](&var_1e8, arg1)

if (*(arg1 + 0xa0) == 1)
    sub_14240e030(arg1, 0)

sub_141fa61e0(&var_1e8)
__security_check_cookie(rax_1 ^ &var_248)
float var_164
return zx.q(int.d(fconvert.t(var_164)))
