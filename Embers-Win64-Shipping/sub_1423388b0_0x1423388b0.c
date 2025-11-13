// 函数: sub_1423388b0
// 地址: 0x1423388b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x250)
int64_t rdi = 0
int64_t* r9 = data_143e29f28
int64_t* rax = rbx

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
        rax = nullptr
    else
        rbx[1].d = rax_1 + 1
        rax = rbx

if (rax != 0)
    rdi = *(arg1 + 0x248)

void var_18
int64_t rsi
rsi.b = *(*(*r9 + 0x158))(r9, &var_18, 0) == rdi
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t r8_1 = *rbx
        (*r8_1)(rbx, arg2, r8_1)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, 1, r8_2)

return zx.q(rsi.b)
