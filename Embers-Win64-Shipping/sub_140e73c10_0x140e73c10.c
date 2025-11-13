// 函数: sub_140e73c10
// 地址: 0x140e73c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t var_48 = arg2
int64_t* rcx = *(arg1 + 0x4e8)
int128_t var_40 = zx.o(0)
int32_t var_30
(*(*rcx + 0x10))(rcx, &var_30, arg3, &var_48)
char var_2c
uint64_t result

if (var_2c != 0)
    int64_t* rcx_1 = data_143e20d18
    int32_t rdi_1 = var_30
    void var_98
    int16_t* rax_4 = (*(*rcx_1 + 0x58))(rcx_1, &var_98)
    void** const var_88 = &data_142d7f690
    int16_t var_80_1 = *rax_4
    int64_t var_78_1 = 0
    var_88 = &data_142ecfd58
    int32_t var_50_1 = arg4.d
    char var_7e_1 = 0
    int32_t var_7c_1 = rdi_1
    int64_t var_70_1 = arg2
    int128_t var_68
    __builtin_memset(&var_68, 0, 0x18)
    char result_1 = sub_140e7a7f0(arg1 - 0x118, &var_88)
    int64_t* rbx_1 = var_68:8.q
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t rdx_3 = *rbx_1
            (*rdx_3)(rbx_1, rdx_3)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = zx.q(result_1)
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_b8)
return result
