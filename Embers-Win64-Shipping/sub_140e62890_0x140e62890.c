// 函数: sub_140e62890
// 地址: 0x140e62890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t var_f8 = *arg3
int64_t var_f0 = arg3[1]
void* rax_4 = arg3[2]
void* var_e8 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

void var_d8
sub_140e51550(arg2, (*(arg1 + 8))(&var_d8, &var_f8, arg1))
sub_140597700(&var_d8)
int64_t* rbx_1 = arg3[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_2 = *rbx_1
        (*rdx_2)(rbx_1, rdx_2)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *rbx_1
            (*(r8_1 + 8))(rbx_1, 1, r8_1)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
