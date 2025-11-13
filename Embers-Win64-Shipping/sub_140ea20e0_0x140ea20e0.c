// 函数: sub_140ea20e0
// 地址: 0x140ea20e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
int64_t* rbx = *(rax + 0x78)
int64_t rdi = *(rax + 0x70)

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)

if (rdi != 0)
    void* rax_3 = *arg2
    int64_t* rbx_1 = *(rax_3 + 0x78)
    int64_t i = *(rax_3 + 0x70)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t* r8_1 = *(arg1 + 0x40)
    int64_t rdx = sx.q(*(arg1 + 0x48))
    int64_t* rax_4 = r8_1
    int64_t r14_2 = rdx * 2
    void* rcx_2 = &r8_1[r14_2]
    
    if (r8_1 != rcx_2)
        while (*rax_4 != i)
            rax_4 = &rax_4[2]
            
            if (rax_4 == rcx_2)
                goto label_140ea2183
    
    if (r8_1 == rcx_2 || ((rax_4 - r8_1) s>> 4).d == 0xffffffff)
    label_140ea2183:
        int32_t rax_5 = (rdx + 1).d
        *(arg1 + 0x48) = rax_5
        
        if (rax_5 s> *(arg1 + 0x4c))
            sub_1405a4f90(arg1 + 0x40)
        
        int64_t rax_6 = *(arg1 + 0x40)
        *(rax_6 + (r14_2 << 3)) = i
        *(rax_6 + (r14_2 << 3) + 8) = rbx_1
    else if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rdi_1 = sx.q(*(arg1 + 0x58))
int32_t rax_7 = (rdi_1 + 1).d
*(arg1 + 0x58) = rax_7

if (rax_7 s> *(arg1 + 0x5c))
    sub_1405a4f90(arg1 + 0x50)

int64_t* rcx_7 = (rdi_1 << 4) + *(arg1 + 0x50)
*rcx_7 = *arg2
void* result = arg2[1]
rcx_7[1] = result

if (result != 0)
    *(result + 8) += 1

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            jump(*(*rbx_3 + 8))

return result
