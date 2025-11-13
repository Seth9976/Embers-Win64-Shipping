// 函数: sub_14067b100
// 地址: 0x14067b100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void var_f8
sub_140b2f110(&var_f8)
int64_t rax_2 = -1
int64_t rbx = -1
void* var_118
void* rdx
int16_t* rsi_1

if (arg2[1].d == 0)
    rsi_1 = &data_142d40450
    
    do
        rbx += 1
    while ((&data_142d40450)[rbx] != 0)
    
    rdx = nullptr
    var_118 = nullptr
    goto label_14067b1b8

int16_t* rcx_1 = *arg2

do
    rbx += 1
while (rcx_1[rbx] != 0)

rdx = nullptr
rsi_1 = rcx_1
var_118 = nullptr

if (rcx_1 != 0)
label_14067b1b8:
    
    do
        rax_2 += 1
    while (rsi_1[rax_2] != 0)
    
    int32_t rbp_1 = (rax_2 + 1).d
    int32_t var_108_1 = rax_2.d
    
    if (rbp_1 u> 0x80 && rbp_1 != 0)
        void* rax_3 = sub_140a84c80(0, sx.q(rbp_1), 0)
        rdx = rax_3
        var_118 = rax_3
    
    void var_198
    void* rcx_2 = &var_198
    
    if (rdx != 0)
        rcx_2 = rdx
    
    sub_14060abb0(rcx_2, rbp_1, rsi_1, rbp_1, 0x3f)
    rdx = rcx_2
else
    int64_t var_110 = 0
    int32_t var_108 = 0

sub_140b4ad80(&var_f8, rdx, sx.q(rbx.d))

if (var_118 != 0)
    sub_140a74f90(var_118)

sub_140b39010(&var_f8)
int64_t i = 0
*arg1 = 0
arg1[1] = 0

do
    int64_t var_1a8
    char var_98[0x70]
    sub_140a2e390(&var_1a8, u"%02x", zx.q(var_98[i]))
    int32_t var_1a0
    int32_t r8_5
    
    if (var_1a0 == 0)
        r8_5 = 0
    else
        r8_5 = var_1a0 - 1
    
    sub_140a20ba0(arg1, var_1a8, r8_5)
    int64_t rcx_8 = var_1a8
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    i += 1
while (i s< 0x14)

sub_140b30ae0(&var_f8)
__security_check_cookie(rax_1 ^ &var_1d8)
return arg1
