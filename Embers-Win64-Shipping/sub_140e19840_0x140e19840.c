// 函数: sub_140e19840
// 地址: 0x140e19840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t rdi = 0
int64_t* rsi = data_143e20d08

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        int32_t rax_2 = rbx[1].d
        rdi = *(arg1 + 8)
        rbx[1].d = rax_2
        
        if (rax_2 == 0)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)

int64_t var_18 = rdi
int64_t* var_10 = rbx

if (rbx != 0)
    rbx[1].d += 1

char rax_6 = (*(*rsi + 0x160))(rsi, &var_18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t r8_1 = *rbx
        (*r8_1)(rbx, arg2, r8_1)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return zx.q(rax_6)
