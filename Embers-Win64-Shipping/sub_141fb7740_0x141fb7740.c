// 函数: sub_141fb7740
// 地址: 0x141fb7740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
void var_18
sub_140b291e0(sub_140b214c0(&var_18), &var_38, 0)
int64_t var_28
int64_t* rax_1 = sub_140a35790(&var_38, &var_28)

if (arg1 + 0xbd0 != rax_1)
    int64_t rcx_3 = *(arg1 + 0xbd0)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *(arg1 + 0xbd0) = *rax_1
    *rax_1 = 0
    *(arg1 + 0xbd8) = rax_1[1].d
    *(arg1 + 0xbdc) = *(rax_1 + 0xc)
    rax_1[1] = 0

int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = var_38

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

uint8_t rax_5 = (*(arg1 + 8) u>> 4).b
*(arg1 + 0x760) = 0
*(arg1 + 0xb08) = 0
*(arg1 + 0x10c8) = 0
*(arg1 + 0x10d0) = 0
*(arg1 + 0x85) = 1

if ((rax_5 & 1) == 0 && *(arg1 + 0xd0c) s< 0x200)
    sub_1405a5410(arg1 + 0xd00, 0x200)

int32_t* result = data_143f3d638
*(arg1 + 0x10e8) = *result
return result
