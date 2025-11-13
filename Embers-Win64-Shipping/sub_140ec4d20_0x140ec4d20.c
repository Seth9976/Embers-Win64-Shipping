// 函数: sub_140ec4d20
// 地址: 0x140ec4d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)
int64_t var_20 = 0
int32_t var_18 = 0
char var_24 = 0
int32_t var_28 = 0
void* var_38
void** rax = sub_140ec4a10(rcx, &var_38, 0, arg3, &var_28)
*arg2 = *rax
void* rcx_2 = rax[1]
arg2[1] = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

return arg2
