// 函数: sub_1425e2900
// 地址: 0x1425e2900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58170(&arg_8, "Messaging", 1)
j_sub_140b3db50()
int64_t* rax_1 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t r8 = *rax_1
void var_18
int64_t* result = (*(r8 + 0x68))(rax_1, &var_18, r8)
*(arg1 + 8) = *result
void* rbx_1 = result[1]
int64_t* rcx_3 = *(arg1 + 0x10)

if (rbx_1 != rcx_3)
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        rcx_3 = *(arg1 + 0x10)
    
    if (rcx_3 != 0)
        result = zx.q(*(rcx_3 + 0xc))
        *(rcx_3 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*rcx_3 + 8))(rcx_3, 1)
    
    *(arg1 + 0x10) = rbx_1

int64_t* var_10

if (var_10 != 0)
    result = zx.q(var_10[1].d)
    var_10[1].d -= 1
    
    if (result.d == 1)
        result = (**var_10)(var_10)
        int32_t rdi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_10 + 8))(var_10, zx.q(rdi_1))

return result
