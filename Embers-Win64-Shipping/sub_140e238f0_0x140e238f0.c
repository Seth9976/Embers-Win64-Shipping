// 函数: sub_140e238f0
// 地址: 0x140e238f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x790) = arg2
sub_140db2ed0(arg1 + 0x390)
int64_t* rbx = *(arg1 + 0x10)
int64_t* rsi = nullptr
int64_t rcx_1 = 0
int32_t rax

if (rbx != 0)
    rax = rbx[1].d
    
    if (rax != 0)
        rbx[1].d = rax + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx_1 = *(arg1 + 8)

int64_t var_18 = rcx_1

if (rbx != 0)
    rax = rbx[1].d
    rbx[1].d = rax
    
    if (rax == 0)
        (**rbx)(rbx)
        int32_t temp0_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (*(arg1 + 0x9a8) != 0)
    int64_t* rcx_4 = *(arg1 + 0x9a0)
    
    if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4).b != 0)
        if (*(arg1 + 0x9a8) != 0)
            rsi = *(arg1 + 0x9a0)
        
        (*(*rsi + 0x50))(rsi, &var_18)

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t temp2_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (temp2_1 == 1)
    (*(*rbx + 8))(rbx, 1)
