// 函数: sub_140da4990
// 地址: 0x140da4990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
char rbx = 0
int32_t arg_8 = 0
void* rax_2

if (rsi != 0)
    rax_2 = sub_140d21950(rsi, sub_140e28110())

int64_t rdi_1
int64_t var_18
int64_t* var_10

if (rsi == 0 || rax_2 == 0)
    int64_t rax_11 = arg1[6]
    
    if (rax_11 != 0)
        return rax_11
    
    rdi_1 = *sub_140da7f20(sub_140da2a70(), &var_18)
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            int64_t rdx_5 = *var_10
            (*rdx_5)(var_10, rdx_5)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_1 = *var_10
                (*(r8_1 + 8))(var_10, 1, r8_1)
else
    int64_t rdx_2 = *rax_2
    int64_t rax_3 = (*(rdx_2 + 0x10))(rax_2, rdx_2)
    rdi_1 = rax_3
    
    if (rax_3 == 0)
        rbx = 1
        rdi_1 = *sub_140da7f20(sub_140da2a70(), &var_18)
    
    if ((rbx & 1) != 0 && var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp3_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
return rdi_1
