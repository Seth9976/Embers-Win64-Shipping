// 函数: sub_140e64900
// 地址: 0x140e64900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

char result
uint128_t zmm0
result, zmm0 = sub_140da1990(arg1 + 0x180, &var_18, arg3, arg4, arg5)

if (result == 0)
    var_18 = *arg2
    void* rax_3 = arg2[1]
    void* var_10_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    result = sub_140da1990(arg1 + 0x190, &var_18, arg3, arg4, zmm0)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
