// 函数: sub_140bb1330
// 地址: 0x140bb1330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t var_b8 = 0
int32_t var_b0 = 0
void var_a8
sub_140cad390(&var_a8, &var_b8, arg1, 0, 1, 1, 1)
sub_140cba380(&var_a8, arg1, 0, 0)

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= var_b0)
        break
    
    uint64_t rdi_1 = *(var_b8 + (sx.q(i) << 3))
    int32_t rcx_3 = *(rdi_1 + 8)
    
    if (((rcx_3 u>> 0x15).b & 1) == 0)
        *(rdi_1 + 8) = rcx_3 | 0x400
        int64_t rax_5 = sub_140d3cb50(rdi_1)
        
        if (rax_5 != 0)
            sub_140cc45a0(rax_5 + 0x200, rdi_1)
            sub_140bb1330(rdi_1)

int32_t var_40 = 0
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int32_t var_80 = 0
uint64_t var_88
int32_t var_7c

if (var_7c != 0)
    sub_1405a5410(&var_88, 0)

int32_t var_58 = 0xffffffff
int32_t var_54 = 0
void var_78
sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

uint64_t rcx_12 = var_88

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

void** result = sub_140d16360(&var_a8)
int64_t rcx_14 = var_b8

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

__security_check_cookie(rax_1 ^ &var_f8)
return result
