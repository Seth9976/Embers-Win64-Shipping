// 函数: sub_140e649d0
// 地址: 0x140e649d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

char rax_2
uint128_t zmm0
rax_2, zmm0 = sub_140da1990(arg1 + 0x180, &var_18, arg3, arg4, arg5)

if (rax_2 != 0)
    int64_t* rbx_2 = arg2[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    return 1

var_18 = *arg2
void* rax_4 = arg2[1]
void* var_10_1 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

char result = sub_140da1990(arg1 + 0x190, &var_18, arg3, arg4, zmm0)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_2 = *rbx_1
        (*rdx_2)(rbx_1, rdx_2)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return result
