// 函数: sub_140e758f0
// 地址: 0x140e758f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
void var_18
int64_t* rax_1 = (*(*rcx + 0x20))(rcx, &var_18)
int64_t var_28 = *rax_1
int64_t var_20 = rax_1[1]
rax_1[1] = 0
*rax_1 = 0
int64_t result = sub_140e215b0(arg1, &var_28)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_10 + 8))(var_10, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
