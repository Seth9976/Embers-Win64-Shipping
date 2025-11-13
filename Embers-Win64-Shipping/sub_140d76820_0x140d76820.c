// 函数: sub_140d76820
// 地址: 0x140d76820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x58)
int64_t var_38 = *(arg1 + 0x50)
int64_t* var_30 = rbx

if (rbx != 0)
    *(rbx + 0xc) += 1

int32_t arg_10
sub_140d7a930(arg1 + 0x60, &arg_10, &var_38)
int64_t rax_1 = sx.q(arg_10)
void* const rdi_1

if (rax_1.d == 0xffffffff)
    rdi_1 = nullptr
else
    rdi_1 = rax_1 * 0x38 + *(arg1 + 0x60)

if (rbx != 0)
    int32_t temp0_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rbx + 8))(rbx, 1)

*(rdi_1 + 0x20) = 1
int64_t* rcx_2 = *(arg1 + 0x50)
(*(*rcx_2 + 0x60))(rcx_2)
int64_t* rcx_3 = *(arg1 + 0x50)
int32_t arg_8 = 0
int32_t arg_20 = 0
int32_t arg_18 = 1
(*(*rcx_3 + 0x20))(rcx_3, &arg_8, &arg_20, &arg_18)
*(rdi_1 + 0x24) = arg_8
uint64_t rdx_2 = zx.q(*(rdi_1 + 0x24))
*(rdi_1 + 0x28) = 0
int64_t* rcx_4 = *(arg1 + 0x50)
return (*(*rcx_4 + 0x68))(rcx_4, rdx_2, 0)
