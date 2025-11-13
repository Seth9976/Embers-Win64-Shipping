// 函数: sub_140e20b70
// 地址: 0x140e20b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = *arg2
void* rax_1 = arg2[1]
void* var_50 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void var_48
int32_t* rax_2 = sub_140d70490(&var_48, arg5)
void var_30
int32_t* result = sub_140e10340(arg1 + 0x10, &var_58, arg3, sub_140d70490(&var_30, arg4), rax_2)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rcx_5 = *(arg4 + 8)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg5 + 8)

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
