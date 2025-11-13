// 函数: sub_142331290
// 地址: 0x142331290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18

if (arg2 == 0)
    if (arg1 + 0x110 != &var_18)
        *(arg1 + 0x110) = 0
        int64_t* r8_1 = *(arg1 + 0x118)
        *(arg1 + 0x118) = 0
        
        if (r8_1 != 0)
            int32_t temp0_1 = *(r8_1 + 0xc)
            *(r8_1 + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*r8_1 + 8))(r8_1, 1)
    
    int32_t rax_9 = (*(arg1 + 0x18c) & 0xffffffdf) | 1
    *(arg1 + 0x18c) = rax_9
    return rax_9

int64_t* rbx = *(arg1 + 0x250)
int64_t rcx = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(arg1 + 0x248)

var_18 = rcx
int64_t* var_10 = rbx

if (rbx != 0)
    rbx[1].d += 1

void* rax_2 = sub_140f63c00(arg1 + 0xd8, &var_18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        rax_2 = (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return rax_2
