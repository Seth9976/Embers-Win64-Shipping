// 函数: sub_1406e9820
// 地址: 0x1406e9820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t r8 = *arg2
int32_t rsi = 0
__builtin_memset(arg1, 0, 0x31)
int64_t var_178
sub_140a2e390(&var_178, u"%I64d", r8)

if (arg1 == &var_178)
    int64_t rcx_2 = var_178
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
else
    int64_t rcx_1 = *arg1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg1 = var_178
    int32_t var_170
    arg1[1].d = var_170
    int32_t var_16c
    *(arg1 + 0xc) = var_16c

int64_t rbx = -1
void var_168
int16_t* rbp = *(sub_14060c4d0(&var_168, &arg2[1]) + 0x108)

if (arg1[2] != rbp)
    int32_t rdi_2
    
    if (rbp == 0 || *rbp == 0)
        rdi_2 = 0
    else
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (rbp[rdi_1] != 0)
        
        rdi_2 = rdi_1.d + 1
    
    int32_t rcx_4 = *(arg1 + 0x1c)
    int32_t rdx_1 = 0
    arg1[3].d = 0
    
    if (rcx_4 != rdi_2)
        sub_1405947f0(&arg1[2], rdi_2)
        rdx_1 = arg1[3].d
        rcx_4 = *(arg1 + 0x1c)
    
    int32_t rax_6 = rdi_2 + rdx_1
    arg1[3].d = rax_6
    
    if (rax_6 s> rcx_4)
        sub_140594770(&arg1[2])
    
    if (rdi_2 != 0)
        memcpy(arg1[2], rbp, rdi_2 * 2)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int16_t* rdi_3 = *(sub_14060c4d0(&var_168, &arg2[0x21]) + 0x108)

if (arg1[4] != rdi_3)
    int32_t rbx_1
    
    if (rdi_3 == 0 || *rdi_3 == 0)
        rbx_1 = 0
    else
        do
            rbx += 1
        while (rdi_3[rbx] != 0)
        
        rbx_1 = rbx.d + 1
    
    int32_t rcx_10 = *(arg1 + 0x2c)
    arg1[5].d = 0
    
    if (rcx_10 != rbx_1)
        sub_1405947f0(&arg1[4], rbx_1)
        rcx_10 = *(arg1 + 0x2c)
        rsi = arg1[5].d
    
    int32_t rax_8 = rbx_1 + rsi
    arg1[5].d = rax_8
    
    if (rax_8 s> rcx_10)
        sub_140594770(&arg1[4])
    
    if (rbx_1 != 0)
        memcpy(arg1[4], rdi_3, rbx_1 * 2)

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_14
rcx_14.b = arg2[0x32].b != 0
arg1[6].b = rcx_14.b
__security_check_cookie(rax_1 ^ &var_198)
return arg1
