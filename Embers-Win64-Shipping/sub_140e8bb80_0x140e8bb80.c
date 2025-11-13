// 函数: sub_140e8bb80
// 地址: 0x140e8bb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4[2]
int64_t rbp = *arg4
int64_t r14 = arg4[1]
int32_t arg_18 = arg3

if (rbx != 0)
    rbx[1].d += 1

void var_68
sub_140d94220(&var_68, arg2)
int64_t arg_28
int64_t var_48 = arg_28
int64_t var_40 = rbp
int64_t var_38 = r14

if (rbx != 0)
    rbx[1].d += 1

int32_t var_28 = arg3

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t* var_78 = &arg_18
void* var_70 = &var_68
sub_140e477b0(arg1 + 0x180, &arg_28, &var_78, nullptr)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* var_50

if (var_50 != 0)
    int32_t temp3_1 = *(var_50 + 0xc)
    *(var_50 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*var_50 + 8))(var_50, 1)

int64_t result = sub_140d94cb0(&var_68)
int64_t* rbx_2 = arg4[2]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
