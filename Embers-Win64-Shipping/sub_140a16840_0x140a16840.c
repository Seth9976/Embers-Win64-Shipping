// 函数: sub_140a16840
// 地址: 0x140a16840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x14) += 1
int32_t rcx = *(arg1 + 0x14)
int64_t rbp
rbp.b = 0
int32_t rax = arg1[1].d
int64_t rdi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp3_1
    
    do
        int64_t rax_2 = *arg1
        
        if (*(rbx_2 + rax_2 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_2)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else
                int64_t var_18 = *arg2
                void* rax_4 = arg2[1]
                void* var_10_1 = rax_4
                
                if (rax_4 != 0)
                    *(rax_4 + 8) += 1
                
                if ((*(*rcx_1 + 0x50))(rcx_1, &var_18) == 0)
                    rbp.b = 1
        
        rbx_2 -= 0x10
        temp3_1 = rdi
        rdi -= 1
    while (temp3_1 - 1 s>= 0)
    rcx = *(arg1 + 0x14)

int32_t result = rcx - 1
*(arg1 + 0x14) = result

if (rbp.b != 0)
    result = sub_140599630(arg1, 0)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
