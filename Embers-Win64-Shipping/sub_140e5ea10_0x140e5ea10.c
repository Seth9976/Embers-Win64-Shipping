// 函数: sub_140e5ea10
// 地址: 0x140e5ea10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) != 0)
    return 

int64_t rbp_1 = 0
*(arg1 + 0x40) = 1
int64_t* rdi_1 = *(arg1 + 0x50)
int64_t* rax_1 = rdi_1

if (rdi_1 != 0)
    int32_t rax_2 = rdi_1[1].d
    
    if (rax_2 == 0)
        rdi_1 = nullptr
        rax_1 = nullptr
    else
        rdi_1[1].d = rax_2 + 1
        rax_1 = rdi_1

if (rax_1 != 0)
    int64_t* rcx = *(arg1 + 0x48)
    
    if (rcx != 0)
        (*(*rcx + 8))(rcx)

int64_t* rbx_1 = *(arg1 + 0x10)

if (rbx_1 != 0)
    int32_t rax_5 = rbx_1[1].d
    
    if (rax_5 != 0)
        rbx_1[1].d = rax_5 + 1
        rax_5.b = 1
    
    if (rax_5.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rbp_1 = *(arg1 + 8)

int64_t var_18 = rbp_1
int64_t* var_10_1 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

sub_140a16840(arg1 + 0x18, &var_18)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (rdi_1 == 0)
    return 

rdi_1[1].d -= 1

if (rdi_1[1].d != 1)
    return 

(**rdi_1)(rdi_1)
int32_t temp3_1 = *(rdi_1 + 0xc)
*(rdi_1 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*rdi_1 + 8))(rdi_1, 1)
