// 函数: sub_140ea3e60
// 地址: 0x140ea3e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t rsi = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        int32_t rax_2 = rbx[1].d
        rsi = *(arg1 + 8)
        rbx[1].d = rax_2
        
        if (rax_2 == 0)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)

*arg2 = rsi
arg2[1] = rbx

if (rbx != 0)
    int32_t rax_5 = rbx[1].d
    rbx[1].d = rax_5
    
    if (rax_5 == 0)
        (**rbx)(rbx)
        int32_t temp0_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
