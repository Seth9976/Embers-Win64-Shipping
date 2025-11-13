// 函数: sub_140ea0390
// 地址: 0x140ea0390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
int64_t* rcx = *(arg1 + 8)

if (rcx != 0 && *(arg1 + 0x20) != 0)
    arg2.b = 8
    sub_140e19ef0(rcx, arg2.b)

int64_t rdi = sx.q(*(arg1 + 0x18))
int32_t rax = (rdi + 1).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_1405a4f90(arg1 + 0x10)

int64_t* rcx_4 = (rdi << 4) + *(arg1 + 0x10)
*rcx_4 = *r14
void* rax_2 = r14[1]
rcx_4[1] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

void* rcx_5 = *(arg1 + 8)

if (rcx_5 != 0 && *r14 != data_143e244b0)
    int64_t* rbx_1 = *(rcx_5 + 0x10)
    int64_t rdx_1 = 0
    
    if (rbx_1 != 0)
        int32_t rax_4 = rbx_1[1].d
        
        if (rax_4 != 0)
            rbx_1[1].d = rax_4 + 1
            rax_4.b = 1
        
        if (rax_4.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rdx_1 = *(rcx_5 + 8)
    
    int64_t var_18 = rdx_1
    int64_t* var_10_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    sub_140de86e0(*r14, &var_18)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t rdx_3 = *rbx_1
            (*rdx_3)(rbx_1, rdx_3)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_1 = *rbx_1
                (*(r8_1 + 8))(rbx_1, 1, r8_1)

return zx.q(rdi.d)
