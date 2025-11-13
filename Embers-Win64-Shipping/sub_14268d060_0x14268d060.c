// 函数: sub_14268d060
// 地址: 0x14268d060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6b8
int64_t rax_1 = __security_cookie ^ &var_6b8
int32_t var_54
int32_t var_54_1 = var_54 & 0xfffffffe
int32_t var_64 = 0x7f7fffff
int32_t var_68 = 0
int64_t var_60 = 0
int32_t var_58 = 0
void var_668
memset(&var_668, 0, 0x600)
int64_t var_678 = *arg5
void* rax_3 = arg5[1]
void* var_670 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

char rax_4 = sub_14268d180(arg1, arg2, arg3, arg4, &var_678, arg6, &var_668)
int64_t* rbx_1 = arg5[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_2 = *rbx_1
        (*rdx_2)(rbx_1, rdx_2)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_6b8)
return zx.q(rax_4)
