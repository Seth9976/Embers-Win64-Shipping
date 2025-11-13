// 函数: sub_14201e460
// 地址: 0x14201e460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78
sub_140596d10(&var_78, arg1)
int64_t* var_60 = nullptr
int32_t var_58 = 0

if (arg3 != &var_60 && arg3[1].d != 0)
    int64_t* rcx_1 = *arg3
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1, &var_60)

void*** rax_2 = sub_140a82f30(0x30, 8)
*rax_2 = &data_1432a4d18
sub_140596d10(&rax_2[1], &var_78)
rax_2[3].d = arg2
rax_2[4] = 0
rax_2[5].d = 0

if (&var_60 != &rax_2[4] && var_58 != 0)
    int64_t* rcx_4 = var_60
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x40))(rcx_4)

*rax_2 = &data_1432a4d38
uint64_t (* var_48)(int64_t* arg1)
uint64_t (* rax_4)(int64_t* arg1) = var_48

if (rax_2 != -8)
    rax_4 = j_sub_14201b120

void*** var_38 = rax_2
var_48 = rax_4
sub_140a20e40(0x4ff, &var_48)
sub_140745b20(&var_60)
int64_t rcx_6 = var_78

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return sub_140745b20(arg3) __tailcall
