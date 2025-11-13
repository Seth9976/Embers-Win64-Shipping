// 函数: sub_1423b9d40
// 地址: 0x1423b9d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 4
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 4
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x8c) = 4
*(arg1 + 0xb0) = 0
*(arg1 + 0xb8) = 0
*(arg1 + 0xbc) = 4
*(arg1 + 0xe0) = 0
*(arg1 + 0xe8) = 0
*(arg1 + 0xec) = 4
*(arg1 + 0x110) = 0
*(arg1 + 0x118) = 0
*(arg1 + 0x11c) = 4
*(arg1 + 0x140) = 0
*(arg1 + 0x148) = 0
*(arg1 + 0x14c) = 4
*(arg1 + 0x170) = 0
*(arg1 + 0x178) = 0
*(arg1 + 0x17c) = 4
__builtin_memset(arg1 + 0x180, 0, 0x800)
*(arg1 + 0x9a0) = 0
*(arg1 + 0x9a8) = 0
*(arg1 + 0x9ac) = 4
*(arg1 + 0x9b4) = 0
*(arg1 + 0x9b6) = 0
void*** var_48 = nullptr
void** const var_38 = &data_142e347e8
void (* var_58)(int64_t* arg1) = sub_1423bd390
void* var_30 = arg1
int64_t* rax_2 = sub_140a242a0()
int64_t r8 = *rax_2
(*(r8 + 0x58))(rax_2, &var_58, r8)

if (var_58 != 0)
    void** const* rcx_1 = &var_38
    
    if (var_48 != 0)
        rcx_1 = var_48
    
    void** const rdx_2 = *rcx_1
    rdx_2[2](rcx_1, rdx_2)

__security_check_cookie(rax_1 ^ &var_78)
return arg1
