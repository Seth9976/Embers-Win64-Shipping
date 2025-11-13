// 函数: sub_141af26c0
// 地址: 0x141af26c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
int64_t* rax_1 = sub_141a58900(arg1, &var_28, *(sub_141a788e0() + 0x18), arg3)
int64_t* rbx_1 = rax_1[1]
int64_t rbp = *rax_1

if (rbx_1 != 0)
    *(rbx_1 + 0xc) += 1

int32_t rdi_1 = rax_1[3].d
int64_t r8_1 = *(sub_141a788e0() + 0x18)

if (rbx_1 != 0)
    *(rbx_1 + 0xc) += 1

int64_t var_38 = rbp
int64_t* var_30 = rbx_1

if (rbx_1 != 0)
    *(rbx_1 + 0xc) += 1

sub_141a2efc0(arg2, &var_38, r8_1, rdi_1)

if (rbx_1 != 0)
    int32_t temp0_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rbx_1 != 0)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_20

if (var_20 != 0)
    int32_t temp1_1 = *(var_20 + 0xc)
    *(var_20 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*var_20 + 8))(var_20, 1)

return arg2
