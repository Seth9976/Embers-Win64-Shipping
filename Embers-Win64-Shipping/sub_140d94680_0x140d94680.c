// 函数: sub_140d94680
// 地址: 0x140d94680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = &arg1[8]
*arg1 = *arg3
void* rbx = &arg3[8]
*(rbp + 0x120) = 0
int32_t i_1 = *(rbx + 0x128)
void* r12 = *(rbx + 0x120)
*(rbp + 0x128) = i_1

if (i_1 != 0)
    sub_140dbc410(rbp, i_1, 0)
    void* rax_1 = *(rbp + 0x120)
    
    if (r12 != 0)
        rbx = r12
    
    if (rax_1 != 0)
        rbp = rax_1
    
    int64_t* rdx_2 = rbx - rbp
    void* rax_2 = rbp + 0x38
    int32_t i
    
    do
        *(rax_2 - 0x38) = *rbx
        *(rax_2 - 0x28) = *(rbx + 0x10)
        *(rax_2 - 0x18) = *(rbx + 0x20)
        *(rax_2 - 8) = *(rbx + 0x30)
        *rax_2 = *(rdx_2 + rax_2)
        void* rcx_2 = *(rdx_2 + rax_2 + 8)
        *(rax_2 + 8) = rcx_2
        
        if (rcx_2 != 0)
            *(rcx_2 + 8) += 1
        
        rbx += 0x48
        rax_2 += 0x48
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(rbp + 0x12c) = 4

arg1[0x138] = arg3[0x138]
*(arg1 + 0x140) = *arg2
void* rax_5 = arg2[1]
*(arg1 + 0x148) = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

*(arg1 + 0x150) = 0
*(arg1 + 0x158) = 0
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
