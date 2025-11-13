// 函数: sub_140e5ebb0
// 地址: 0x140e5ebb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) != 0)
    return 

*(arg1 + 0x40) = 1
int64_t* rbx_1 = *(arg1 + 0x10)
void* rsi_1 = nullptr
int64_t rcx = 0

if (rbx_1 != 0)
    int32_t rax_1 = rbx_1[1].d
    
    if (rax_1 != 0)
        rbx_1[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rcx = *(arg1 + 8)

int64_t var_18 = rcx
int64_t* var_10_1 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

sub_140a16840(arg1 + 0x18, &var_18)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg1 + 0x50)

if (rbx_2 != 0)
    int32_t rax = rbx_2[1].d
    
    if (rax != 0)
        rbx_2[1].d = rax + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        rsi_1 = *(arg1 + 0x48)

if (rsi_1 != 0)
    sub_140e21770(rsi_1)

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp3_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)
