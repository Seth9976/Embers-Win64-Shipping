// 函数: sub_141de7a80
// 地址: 0x141de7a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_f8
int64_t rax_2 = __security_cookie ^ &var_f8
int32_t rcx = *(arg1 + 8)

if (((rcx u>> 0xa).b & 1) != 0)
    sub_140cc45a0(sub_140d3cb50(arg1) + 0x200, arg1)
    rcx = *(arg1 + 8)

if (((rcx u>> 0xc).b & 1) != 0)
    sub_140cd85e0(arg1)

int64_t rbx_1 = 0
char var_c8_1 = 1
char var_d0_1 = 1
int64_t** var_b8 = nullptr
int32_t var_b0_1 = 0
void** var_a8
void*** rax_6 = sub_140cad390(&var_a8, &var_b8, arg1, 0, 1, var_d0_1, var_c8_1)
(*rax_6)[9](rax_6, arg1, 0, 0)
int32_t var_40_1 = 0
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int32_t var_80_1 = 0
uint64_t var_88
int32_t var_7c

if (var_7c != 0)
    sub_1405a5410(&var_88, 0)

int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
void var_78
sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

uint64_t rcx_11 = var_88

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_140d16360(&var_a8)
int64_t** rdi_2 = var_b8
void* rcx_13 = &rdi_2[sx.q(var_b0_1)]
uint64_t rbp_4 = (rcx_13 - rdi_2 + 7) u>> 3

if (rdi_2 u> rcx_13)
    rbp_4 = 0

if (rbp_4 != 0)
    do
        int64_t* rsi_1 = *rdi_2
        int32_t rcx_14 = rsi_1[1].d
        
        if (((rcx_14 u>> 0xa).b & 1) != 0)
            sub_140cc45a0(sub_140d3cb50(rsi_1) + 0x200, rsi_1)
            rcx_14 = rsi_1[1].d
        
        if (((rcx_14 u>> 0xc).b & 1) != 0)
            sub_140cd85e0(rsi_1)
        
        rdi_2 = &rdi_2[1]
        rbx_1 += 1
    while (rbx_1 != rbp_4)
    
    rdi_2 = var_b8

if (rdi_2 != 0)
    sub_140a74f90(rdi_2)

__security_check_cookie(rax_2 ^ &var_f8)
