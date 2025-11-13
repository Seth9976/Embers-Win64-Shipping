// 函数: sub_140d7a330
// 地址: 0x140d7a330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x58)
int64_t var_18 = *(arg1 + 0x50)
int64_t* var_10 = rbx

if (rbx != 0)
    *(rbx + 0xc) += 1

int32_t arg_8
sub_140d7a930(arg1 + 0x60, &arg_8, &var_18)
int64_t rax_1 = sx.q(arg_8)
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

*(rdi_1 + 0x20) = 0
jump(*(**(arg1 + 0x50) + 0x70))
