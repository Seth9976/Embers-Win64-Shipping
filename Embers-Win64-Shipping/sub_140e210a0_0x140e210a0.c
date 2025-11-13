// 函数: sub_140e210a0
// 地址: 0x140e210a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r12_1 = sx.q(arg2)
int64_t r15_2 = r12_1 << 5
void* rdi_3 = *arg1 + 8 + r15_2
int32_t i

do
    int64_t* rbx_1 = *(rdi_3 + 0x10)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rcx_2 = *rdi_3
    
    if (rcx_2 != 0)
        int32_t temp2_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rcx_2 + 8))(rcx_2, 1)
    
    rdi_3 += 0x20
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_4 = arg1[1].d
int32_t rdx_1 = rax_4 - r12_1.d

if (rdx_1 != arg3)
    int64_t rcx_3 = *arg1
    memmove(rcx_3 + r15_2, (sx.q(r12_1.d + arg3) << 5) + rcx_3, (rdx_1 - arg3) << 5)
    rax_4 = arg1[1].d

arg1[1].d = rax_4 - arg3

if (arg4 != 0)
    sub_1405dad20(arg1)
