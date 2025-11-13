// 函数: sub_140d899a0
// 地址: 0x140d899a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_868
int64_t rax_1 = __security_cookie ^ &var_868
int64_t* rbx = arg2[1]
int64_t var_840 = *arg2
int64_t* var_838 = rbx

if (rbx != 0)
    *(rbx + 0xc) += 1

int32_t var_848
sub_140d7a930(arg1 + 0x60, &var_848, &var_840)
int64_t rax_3 = sx.q(var_848)
void* const rdi_1

if (rax_3.d == 0xffffffff)
    rdi_1 = nullptr
else
    rdi_1 = rax_3 * 0x38 + *(arg1 + 0x60)

if (rbx != 0)
    int32_t temp0_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rbx + 8))(rbx, 1)

int64_t* rcx_2 = *(*(rdi_1 + 0x18) + 0x60)
enum WIN32_ERROR rax_7 = (*(*rcx_2 + 0x28))(rcx_2, 1)
void var_828

if (rax_7 s< NO_ERROR)
    sub_140b6cae0(&var_828, 0x400, rax_7)
int64_t* rbx_1 = arg2[1]
var_840 = *arg2
int64_t* var_838_1 = rbx_1

if (rbx_1 != 0)
    *(rbx_1 + 0xc) += 1

uint64_t result = sub_140d857c0(arg1 + 0x60, &var_840)

if (rbx_1 != 0)
    int32_t temp1_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (temp1_1 == 1)
        result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(rax_1 ^ &var_868)
return result
