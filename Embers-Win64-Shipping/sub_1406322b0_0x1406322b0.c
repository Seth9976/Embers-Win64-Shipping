// 函数: sub_1406322b0
// 地址: 0x1406322b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t rbx = -1
char* r15 = nullptr
char* var_58 = nullptr
char* rdx
int16_t* const r14

if (arg1[1].d == 0)
    r14 = &data_142d40450
label_140632312:
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (r14[rdi_1] != 0)
    
    int32_t var_108 = 0
    sub_14060af80(&var_108, (rdi_1 << 2).d, r14, rdi_1.d)
    int32_t rax_2 = var_108
    int32_t var_48_1 = rax_2
    
    if (rax_2 + 1 u> 0x80 && rax_2 != 0xffffffff)
        char* rax_3 = sub_140a84c80(0, sx.q(rax_2 + 1), 0)
        r15 = rax_3
        var_58 = rax_3
    
    void var_d8
    char* rcx_1 = &var_d8
    
    if (r15 != 0)
        rcx_1 = r15
    
    var_108.q = rcx_1
    sub_14060ac90(&var_108, rax_2 + 1, r14, (rdi_1 + 1).d)
    rdx = rcx_1
else
    r14 = *arg1
    
    if (r14 != 0)
        goto label_140632312
    
    rdx = nullptr
    int32_t var_48 = 0
    int64_t var_50 = 0
int64_t var_f0 = 0
int64_t var_e8 = 0xf
char var_100 = 0

do
    rbx += 1
while (rdx[rbx] != 0)

sub_14058ad40(&var_100, rdx, rbx)

if (var_58 != 0)
    sub_140a74f90(var_58)

char* rbx_1 = &var_100
char* rdi_2 = var_100.q

if (var_e8 u>= 0x10)
    rbx_1 = rdi_2

while (true)
    char* rax_4 = &var_100
    
    if (var_e8 u>= 0x10)
        rax_4 = rdi_2
    
    if (rbx_1 == &rax_4[var_f0])
        rbx_1.b = 1
        break
    
    if (isalnum(sx.d(*rbx_1)) == 0)
        rbx_1.b = 0
        break
    
    rbx_1 = &rbx_1[1]

if (var_e8 u>= 0x10)
    char* rax_7 = rdi_2
    
    if (var_e8 + 1 u>= 0x1000)
        rdi_2 = *(rdi_2 - 8)
        
        if (rax_7 - rdi_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rdi_2)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rbx_1.b)
