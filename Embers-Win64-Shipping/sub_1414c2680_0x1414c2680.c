// 函数: sub_1414c2680
// 地址: 0x1414c2680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg1[1]
void** rdi = arg1

if (*rbx == 0)
    void* rax = *arg1
    *(rax + 0x61c4) -= 1
    rbx = arg1[1]

void* rbx_1 = *(rbx + 8)

if (rbx_1 != 0)
    int64_t* rcx = *(rbx_1 + 0xd8)
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx)
    
    int64_t* rcx_1 = *(rbx_1 + 0xd0)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x38))(rcx_1)
    
    int64_t* rcx_2 = *(rbx_1 + 0xc8)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2)
    
    sub_1405d1550(rbx_1 + 0xc0)
    j_sub_140a74f90(rbx_1)

void* rbx_2 = *rdi
int64_t* r8 = *(rbx_2 + 0x1c38)
int64_t r9 = sx.q(*(rbx_2 + 0x1c40))
int64_t* rdx_2 = r8
void* rcx_5 = &r8[r9]

if (r8 != rcx_5)
    do
        if (*rdx_2 == rdi[1])
            int32_t rdx_4 = ((rdx_2 - r8) s>> 3).d
            
            if (rdx_4 != 0xffffffff)
                void* rcx_6 = &r8[sx.q(rdx_4)]
                memmove(rcx_6, rcx_6 + 8, (r9.d - rdx_4 - 1) << 3)
                *(rbx_2 + 0x1c40) -= 1
            
            break
        
        rdx_2 = &rdx_2[1]
    while (rdx_2 != rcx_5)

void* rdx_6 = *rdi

if (*(rdx_6 + 0x1c40) s<= 0)
    *(rdx_6 + 0x1c30) = 0
    return 

*(rdx_6 + 0x1c30) = *(*(*(rdx_6 + 0x1c38) + (sx.q(*(rdx_6 + 0x1c40)) << 3) - 8) + 8)
