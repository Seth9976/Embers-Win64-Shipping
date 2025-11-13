// 函数: sub_141ba66e0
// 地址: 0x141ba66e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
int64_t r9 = *(arg1 + 0x10)
int64_t var_28 = *arg3
void* rcx_2 = arg3[1]
void* var_20 = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

void var_18
int64_t* rax_1 = r9(rax, &var_18, &var_28)
*arg2 = *rax_1
void* rcx_5 = rax_1[1]
arg2[1] = rcx_5

if (rcx_5 != 0)
    *(rcx_5 + 8) += 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
