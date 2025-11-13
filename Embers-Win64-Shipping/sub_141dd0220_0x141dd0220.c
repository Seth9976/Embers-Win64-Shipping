// 函数: sub_141dd0220
// 地址: 0x141dd0220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg2
int64_t var_20 = arg2[1]
void* rax_2 = arg2[2]
void* var_18 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

int64_t result = sub_142452810(arg1, &var_28)
int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_1 + 8))

return result
