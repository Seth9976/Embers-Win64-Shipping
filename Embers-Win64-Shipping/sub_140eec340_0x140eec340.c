// 函数: sub_140eec340
// 地址: 0x140eec340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
int64_t rcx = 0
int64_t* rbx = *(arg1 + 0x10)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(arg1 + 8)

int64_t var_18 = rcx

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    rbx[1].d = rax_2
    
    if (rax_2 == 0)
        (**rbx)(rbx)
        int32_t temp0_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = *(arg1 + 0x4d0)
void* rcx_3 = nullptr

if (rbx_1 != 0)
    int32_t rax_5 = rbx_1[1].d
    
    if (rax_5 == 0)
        rbx_1 = nullptr
    else
        rbx_1[1].d = rax_5 + 1
        
        if (rbx_1 != 0)
            rcx_3 = *(arg1 + 0x4c8)

void* rdi

if (sub_140ec2a10(rcx_3, &var_18) == 0)
    rdi.b = 0
else if (*(arg1 + 0x5e0) == 0)
    rdi.b = 1
else
    int64_t* rcx_4 = *(arg1 + 0x5d8)
    
    if (rcx_4 == 0)
        rdi.b = 1
    else if ((*(*rcx_4 + 0x28))(rcx_4) == 0)
        rdi.b = 1
    else
        if (*(arg1 + 0x5e0) != 0)
            rsi = *(arg1 + 0x5d8)
        
        if ((*(*rsi + 0x48))(rsi) == 0)
            rdi.b = 0
        else
            rdi.b = 1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t r8_1 = *rbx
        (*r8_1)(rbx, arg2, r8_1)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, 1, r8_2)

return zx.q(rdi.b)
