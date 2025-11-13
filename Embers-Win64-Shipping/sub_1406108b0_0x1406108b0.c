// 函数: sub_1406108b0
// 地址: 0x1406108b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
sub_140588000(arg1 + 0x220)
char* rdx = nullptr
int64_t rbx = -1
char* var_48 = nullptr
int16_t* rsi

if (arg2[1].d == 0)
    rsi = &data_142d40450
label_14061092b:
    int64_t rax_2 = -1
    
    do
        rax_2 += 1
    while (rsi[rax_2] != 0)
    
    int32_t rbp_1 = (rax_2 + 1).d
    int32_t var_38_1 = rax_2.d
    
    if (rbp_1 u> 0x80 && rbp_1 != 0)
        char* rax_3 = sub_140a84c80(0, sx.q(rbp_1), 0)
        rdx = rax_3
        var_48 = rax_3
    
    void var_c8
    char* rcx_1 = &var_c8
    
    if (rdx != 0)
        rcx_1 = rdx
    
    sub_14060abb0(rcx_1, rbp_1, rsi, rbp_1, 0x3f)
    rdx = rcx_1
else
    rsi = *arg2
    
    if (rsi != 0)
        goto label_14061092b
    
    int64_t var_40 = 0
    int32_t var_38 = 0
int64_t var_d8 = 0
int64_t var_d0 = 0xf
char var_e8 = 0

do
    rbx += 1
while (rdx[rbx] != 0)

sub_14058ad40(&var_e8, rdx, rbx)
char rax_4 = sub_140587700(arg1 + 0x220, &var_e8)

if (var_d0 u>= 0x10)
    void* rcx_4 = var_e8.q
    void* rax_5 = rcx_4
    
    if (var_d0 + 1 u>= 0x1000)
        rcx_4 = *(rcx_4 - 8)
        
        if (rax_5 - rcx_4 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_4)

int64_t var_d8_1 = 0
int64_t var_d0_1 = 0xf
var_e8 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t rcx_6 = *arg2

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

__security_check_cookie(rax_1 ^ &var_118)
return zx.q(rax_4)
