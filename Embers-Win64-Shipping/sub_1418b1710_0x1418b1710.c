// 函数: sub_1418b1710
// 地址: 0x1418b1710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x20)

for (void* rsi_2 = &i[sx.q(*(arg1 + 0x28)) * 2]; i != rsi_2; i = &i[2])
    int64_t* rcx = *i
    
    if (rcx != 0)
        (*(*rcx + 0x48))(rcx)
    
    void var_18
    
    if (i != &var_18)
        *i = 0
        int64_t* rdi_1 = i[1]
        
        if (rdi_1 != 0)
            i[1] = 0
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)

*(arg1 + 0x1c) += 1
int32_t rax_4 = *(arg1 + 0x10)
void* rbp
rbp.b = 0
int32_t rcx_3 = *(arg1 + 0x1c)
int64_t rdi_2 = sx.q(rax_4 - 1)

if (rax_4 - 1 s>= 0)
    int64_t rbx_1 = rdi_2 << 4
    int64_t temp2_1
    
    do
        int64_t rax_6 = *(arg1 + 8)
        
        if (*(rbx_1 + rax_6 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_4 = *(rbx_1 + rax_6)
            
            if (rcx_4 == 0)
                rbp.b = 1
            else if ((*(*rcx_4 + 0x50))(rcx_4) == 0)
                rbp.b = 1
        
        rbx_1 -= 0x10
        temp2_1 = rdi_2
        rdi_2 -= 1
    while (temp2_1 - 1 s>= 0)
    rcx_3 = *(arg1 + 0x1c)

*(arg1 + 0x1c) = rcx_3 - 1

if (rbp.b != 0)
    sub_140599630(arg1 + 8, 0)

void*** rax_11 = data_143efaec8

if (rax_11 == 0)
    void*** rax_10 = j_sub_140a82f30(0x220)
    
    if (rax_10 == 0)
        rax_11 = nullptr
    else
        rax_11 = sub_1418af110(rax_10)
    
    data_143efaec8 = rax_11

return sub_141997870(rax_11) __tailcall
