// 函数: sub_142a35fa0
// 地址: 0x142a35fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0xa0)
void* r15 = &r14[sx.q(*(arg1 + 0xac) + *(arg1 + 0xa8))]

while (r14 != r15)
    void* rdi_1 = *r14
    r14 = &r14[1]
    
    if (rdi_1 != 0)
        int64_t rax_3 = sx.q(*(rdi_1 + 0x3c))
        
        if (rax_3.d s> 0)
            int64_t* i = *(rdi_1 + 0x30)
            
            while (i != &i[rax_3])
                int64_t* rcx = *i
                i = &i[1]
                
                if (rcx != 0)
                    (**rcx)(rcx, 1)
        
        j_sub_140a74f90(*(rdi_1 + 0x30))
        j_sub_140a74f90(rdi_1)

j_sub_140a74f90(*(arg1 + 0xa0))
void* rsi_2 = *(arg1 + 0x80)

if (rsi_2 != 0)
    int64_t* rbx_1 = *(rsi_2 + 0x28)
    int64_t rdi_2 = *(rsi_2 + 0x30)
    
    while (rbx_1 != rdi_2)
        int64_t* rcx_4 = *rbx_1
        rbx_1 = &rbx_1[1]
        
        if (rcx_4 != 0)
            (**rcx_4)(rcx_4, 1)
    
    j_sub_140a74f90(*(rsi_2 + 0x28))
    j_sub_140a74f90(rsi_2)

void* rbx_2 = *(arg1 + 0x78)

if (rbx_2 != 0)
    j_sub_140a74f90(*(rbx_2 + 0x38))
    int64_t rcx_8 = *(rbx_2 + 0x40)
    *(rbx_2 + 0x38) = 0
    j_sub_140a74f90(rcx_8)
    int64_t rcx_9 = *(rbx_2 + 0x48)
    *(rbx_2 + 0x40) = 0
    j_sub_140a74f90(rcx_9)
    *(rbx_2 + 0x48) = 0
    j_sub_140a74f90(rbx_2)

void* rbx_3 = *(arg1 + 0x88)

if (rbx_3 != 0)
    sub_142a35eb0(rbx_3)
    j_sub_140a74f90(rbx_3)

void* rbx_4 = *(arg1 + 0x90)

if (rbx_4 != 0)
    sub_142a35bc0(rbx_4)
    j_sub_140a74f90(rbx_4)

void* rbx_5 = *(arg1 + 0x98)

if (rbx_5 != 0)
    sub_142a36190(rbx_5)
    j_sub_140a74f90(rbx_5)

void* rbx_6 = *(arg1 + 0x70)

if (rbx_6 != 0)
    j_sub_140a74f90(*(rbx_6 + 0x28))
    j_sub_140a74f90(*(rbx_6 + 0x38))
    j_sub_140a74f90(rbx_6)

return sub_142a35cd0(arg1 + 0x20) __tailcall
