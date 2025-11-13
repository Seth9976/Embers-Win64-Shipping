// 函数: sub_140e7a090
// 地址: 0x140e7a090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *arg2
*(arg1 + 0x524) += 1
int32_t rax = *(arg1 + 0x518)
int32_t r8 = *(arg1 + 0x524)
int64_t rbp
rbp.b = 0
int64_t rdi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_2 = *(arg1 + 0x510)
        
        if (*(rbx_2 + rax_2 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx = *(rbx_2 + rax_2)
            
            if (rcx == 0)
                rbp.b = 1
            else if ((*(*rcx + 0x50))(rcx, r14) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    r8 = *(arg1 + 0x524)

*(arg1 + 0x524) = r8 - 1

if (rbp.b != 0)
    sub_140599630(arg1 + 0x510, 0)

sub_140e1c800(*arg2)
int64_t* rcx_3 = *(arg1 + 0x20)
(*(*rcx_3 + 0x90))(rcx_3, arg2)
sub_140e0de90(*arg2)
char result = sub_140dbb6c0(arg1 + 0x180, arg2)
int64_t* r14_1 = nullptr
int32_t rdi_1 = 0

while (true)
    if (rdi_1 s< 0 || rdi_1 s>= *(arg1 + 0x188))
        if (*(arg1 + 0x378) == 0)
            break
        
        int64_t* rcx_11 = *(arg1 + 0x370)
        
        if (rcx_11 != 0)
            result = (*(*rcx_11 + 0x28))(rcx_11)
            
            if (result != 0)
                if (*(arg1 + 0x378) != 0)
                    r14_1 = *(arg1 + 0x370)
                
                return (*(*r14_1 + 0x50))(r14_1)
        
        break
    
    int64_t* rbx_5 = (sx.q(rdi_1) << 4) + *(arg1 + 0x180)
    int64_t* rbx_6 = rbx_5[1]
    
    if (rbx_6 != 0)
        rbx_6[1].d += 1
    
    result = sub_140de7d60(*rbx_5)
    
    if (result != 0)
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                result = (**rbx_6)(rbx_6)
                int32_t temp4_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    return (*(*rbx_6 + 8))(rbx_6, 1)
        
        break
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            result = (**rbx_6)(rbx_6)
            int32_t temp5_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp5_1 == 1)
                result = (*(*rbx_6 + 8))(rbx_6, 1)
    
    rdi_1 += 1
    continue

return result
