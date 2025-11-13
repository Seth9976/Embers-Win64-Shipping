// 函数: sub_14067af10
// 地址: 0x14067af10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t rax_2 = -1
int64_t rbx = -1
int16_t* var_b8
int16_t* rdx
int16_t* rdi

if (arg2[1].d == 0)
    rdx = nullptr
    rdi = &data_142d40450
    var_b8 = nullptr
    
    do
        rbx += 1
    while ((&data_142d40450)[rbx] != 0)
    
    goto label_14067afa9

rdi = *arg2

do
    rbx += 1
while (rdi[rbx] != 0)

rdx = nullptr
var_b8 = nullptr

if (rdi != 0)
label_14067afa9:
    
    do
        rax_2 += 1
    while (rdi[rax_2] != 0)
    
    int32_t rbp_1 = (rax_2 + 1).d
    int32_t var_a8_1 = rax_2.d
    
    if (rbp_1 u> 0x80 && rbp_1 != 0)
        int16_t* rax_3 = sub_140a84c80(0, sx.q(rbp_1), 0)
        rdx = rax_3
        var_b8 = rax_3
    
    void var_138
    int16_t* rcx = &var_138
    
    if (rdx != 0)
        rcx = rdx
    
    sub_14060abb0(rcx, rbp_1, rdi, rbp_1, 0x3f)
    rdi = rcx
else
    int16_t* var_b0 = rdi
    int32_t var_a8 = 0

void var_98
sub_140b2edf0(&var_98)
sub_140b4aca0(&var_98, rdi, sx.q(rbx.d))
char var_38[0x10]
sub_140b38ef0(&var_98, &var_38)
int64_t i = 0
*arg1 = 0
arg1[1] = 0

do
    int64_t var_148
    sub_140a2e390(&var_148, u"%02x", zx.q(var_38[i]))
    int32_t var_140
    int32_t r8_5
    
    if (var_140 == 0)
        r8_5 = 0
    else
        r8_5 = var_140 - 1
    
    sub_140a20ba0(arg1, var_148, r8_5)
    int64_t rcx_6 = var_148
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    i += 1
while (i s< 0x10)

if (var_b8 != 0)
    sub_140a74f90(var_b8)

__security_check_cookie(rax_1 ^ &var_178)
return arg1
