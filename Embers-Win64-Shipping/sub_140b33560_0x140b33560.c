// 函数: sub_140b33560
// 地址: 0x140b33560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143de8174
int32_t var_50 = arg2
char var_58 = 0
int32_t var_54 = rax
int64_t var_48
sub_140596d10(&var_48, arg3)
int64_t var_38
sub_140596d10(&var_38, arg4)
int32_t var_28 = arg5
int128_t var_18 = zx.o(0)
int32_t result = sub_140b388f0(arg1 + 0x30, &var_58)
void* rcx_3 = var_18:8.q

if (rcx_3 != 0)
    result = *(rcx_3 + 8)
    *(rcx_3 + 8) -= 1
    
    if (result == 1)
        int64_t* rbx_1 = var_18:8.q
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_5 = var_18:8.q
            result = (*(*rcx_5 + 8))(rcx_5, zx.q(rdi_1))

int64_t rcx_6 = var_38

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = var_48

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
