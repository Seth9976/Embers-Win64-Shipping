// 函数: sub_140e19910
// 地址: 0x140e19910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = data_143e20d08
char arg_c = 0
int32_t arg_8

if (arg3[1].b != 0)
    arg_8 = *arg3
    arg_c = 1

int64_t* rbx = *(arg1 + 0x10)
int64_t rsi = 0

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        int32_t rax_3 = rbx[1].d
        rsi = *(arg1 + 8)
        rbx[1].d = rax_3
        
        if (rax_3 == 0)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)

int64_t var_28 = rsi
int64_t* var_20 = rbx

if (rbx != 0)
    rbx[1].d += 1

char rax_7 = (*(*r14 + 0x168))(r14, &var_28, zx.q(arg2), &arg_8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t r8_1 = *rbx
        (*r8_1)(rbx, arg4, r8_1)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (arg3[1].b != 0)
    arg3[1].b = 0

return zx.q(rax_7)
