// 函数: sub_140e52c00
// 地址: 0x140e52c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = &arg1[8]
*arg1 = *arg2
void* rbx = &arg2[8]
*(rbp + 0x120) = 0
int32_t i_2 = *(rbx + 0x128)
void* r15 = *(rbx + 0x120)
*(rbp + 0x128) = i_2

if (i_2 != 0)
    sub_140dbc410(rbp, i_2, 0)
    void* rax_1 = *(rbp + 0x120)
    
    if (r15 != 0)
        rbx = r15
    
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
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    *(rbp + 0x12c) = 4

arg1[0x138] = arg2[0x138]
*(arg1 + 0x140) = *(arg2 + 0x140)
void* rax_5 = *(arg2 + 0x148)
*(arg1 + 0x148) = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

*(arg1 + 0x150) = 0
int32_t i_3 = *(arg2 + 0x158)
int64_t* rbx_1 = *(arg2 + 0x150)
*(arg1 + 0x158) = i_3

if (i_3 != 0)
    sub_1405a4be0(&arg1[0x150], i_3, 0)
    int64_t* rcx_4 = *(arg1 + 0x150)
    int32_t i_1
    
    do
        *rcx_4 = *rbx_1
        void* rax_7 = rbx_1[1]
        rcx_4[1] = rax_7
        
        if (rax_7 != 0)
            *(rax_7 + 8) += 1
        
        rcx_4 = &rcx_4[2]
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x15c) = i_3

return arg1
