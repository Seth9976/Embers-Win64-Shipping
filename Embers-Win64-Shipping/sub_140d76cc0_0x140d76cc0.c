// 函数: sub_140d76cc0
// 地址: 0x140d76cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x58)
int64_t var_28 = *(arg1 + 0x50)
int64_t* var_20 = rbx

if (rbx != 0)
    *(rbx + 0xc) += 1

int32_t arg_8
sub_140d7a930(arg1 + 0x60, &arg_8, &var_28)
int64_t rax_1 = sx.q(arg_8)
void* const rbp_1

if (rax_1.d == 0xffffffff)
    rbp_1 = nullptr
else
    rbp_1 = rax_1 * 0x38 + *(arg1 + 0x60)

if (rbx != 0)
    int32_t temp0_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rbx + 8))(rbx, 1)

int32_t rbx_1 = *(rbp_1 + 0x28)
int32_t rdi = *(rbp_1 + 0x24)
*(rbp_1 + 0x28) = 0
int64_t* rcx_2 = *(arg1 + 0x50)
(*(*rcx_2 + 0x68))(rcx_2, zx.q(rdi), 0)
int64_t* rcx_3 = *(arg1 + 0x50)
(*(*rcx_3 + 0x28))(rcx_3, zx.q(*(rbp_1 + 0x24)), 0, 0)
int64_t* rcx_4 = *(arg1 + 0x50)
var_28 = 0
(*(*rcx_4 + 0x38))(rcx_4, zx.q(rdi), zx.q(rbx_1), &var_28, var_28, 0)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return sub_140d7a330(arg1) __tailcall
