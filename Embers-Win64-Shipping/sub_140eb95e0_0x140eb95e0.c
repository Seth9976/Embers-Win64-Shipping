// 函数: sub_140eb95e0
// 地址: 0x140eb95e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg3
void* rax_1 = arg3[1]
void* var_20 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t var_18
int64_t* rax_2 = (*(arg1 + 8))(&var_18, &var_28, arg1)
*arg2 = 0
*arg2 = *rax_2
*rax_2 = 0
arg2[1].d = rax_2[1].d
*(arg2 + 0xc) = *(rax_2 + 0xc)
rax_2[1] = 0
int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
