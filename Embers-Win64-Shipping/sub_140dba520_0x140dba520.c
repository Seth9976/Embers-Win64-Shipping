// 函数: sub_140dba520
// 地址: 0x140dba520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x110)

for (void* rdi_2 = &i[sx.q(*(arg1 + 0x118)) * 2]; i != rdi_2; i = &i[2])
    int64_t* rcx = *i
    (*(*rcx + 0x20))(rcx)

int64_t rbp
rbp.b = 0
*(arg1 + 0x194) += 1
int32_t rax_2 = *(arg1 + 0x188)
int32_t rcx_1 = *(arg1 + 0x194)
int64_t rbx = sx.q(rax_2 - 1)

if (rax_2 - 1 s>= 0)
    int64_t rdi_4 = rbx << 4
    int64_t temp1_1
    
    do
        int64_t rax_4 = *(arg1 + 0x180)
        
        if (*(rdi_4 + rax_4 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_2 = *(rdi_4 + rax_4)
            
            if (rcx_2 == 0)
                rbp.b = 1
            else if ((*(*rcx_2 + 0x50))(rcx_2, arg1) == 0)
                rbp.b = 1
        
        rdi_4 -= 0x10
        temp1_1 = rbx
        rbx -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_1 = *(arg1 + 0x194)

int32_t result = rcx_1 - 1
*(arg1 + 0x194) = result

if (rbp.b == 0)
    return result

return sub_140599630(arg1 + 0x180, 0)
