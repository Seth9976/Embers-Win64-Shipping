// 函数: sub_140e1c800
// 地址: 0x140e1c800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
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

if (*(arg1 + 0x980) != 0)
    int64_t* rcx_3 = *(arg1 + 0x978)
    
    if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
        int64_t* rcx_4
        
        if (*(arg1 + 0x980) == 0)
            rcx_4 = nullptr
        else
            rcx_4 = *(arg1 + 0x978)
        
        (*(*rcx_4 + 0x50))(rcx_4, &var_18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_2 = *(arg1 + 0x10)

if (rbx_2 != 0)
    int32_t rax_10 = rbx_2[1].d
    
    if (rax_10 != 0)
        rbx_2[1].d = rax_10 + 1
        rax_10.b = 1
    
    if (rax_10.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        rdi = *(arg1 + 8)

var_18 = rdi

if (rbx_2 != 0)
    int32_t rax_11 = rbx_2[1].d
    rbx_2[1].d = rax_11
    
    if (rax_11 == 0)
        (**rbx_2)(rbx_2)
        int32_t temp4_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t rbp
rbp.b = 0
*(arg1 + 0x99c) += 1
int32_t rax_14 = *(arg1 + 0x990)
int32_t rcx_9 = *(arg1 + 0x99c)
int64_t rdi_1 = sx.q(rax_14 - 1)

if (rax_14 - 1 s>= 0)
    int64_t rbx_4 = rdi_1 << 4
    int64_t temp7_1
    
    do
        int64_t rax_16 = *(arg1 + 0x988)
        
        if (*(rbx_4 + rax_16 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_10 = *(rbx_4 + rax_16)
            
            if (rcx_10 == 0)
                rbp.b = 1
            else if ((*(*rcx_10 + 0x50))(rcx_10, &var_18) == 0)
                rbp.b = 1
        
        rbx_4 -= 0x10
        temp7_1 = rdi_1
        rdi_1 -= 1
    while (temp7_1 - 1 s>= 0)
    rcx_9 = *(arg1 + 0x99c)

int32_t result = rcx_9 - 1
*(arg1 + 0x99c) = result

if (rbp.b != 0)
    result = sub_140599630(arg1 + 0x988, 0)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
