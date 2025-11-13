// 函数: sub_140f7b210
// 地址: 0x140f7b210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *arg2
void* rdi = *(arg1 + 0x3a0)
void var_18
int64_t* rax_1 = (*(*r8 + 0x50))(r8, &var_18)
void* result = sub_140e99b50(sub_140f6a0b0(rdi, 0), rax_1)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_10 + 8))(var_10, 1)

return result
