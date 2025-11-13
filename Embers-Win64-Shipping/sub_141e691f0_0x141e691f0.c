// 函数: sub_141e691f0
// 地址: 0x141e691f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r12_1 = sx.q(arg2)
int64_t r15_2 = r12_1 << 6
void* rdi_2 = *arg1 + r15_2
int32_t i

do
    sub_140745b20(rdi_2 + 0x30)
    int64_t* rbx_1 = *(rdi_2 + 0x28)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t rcx_3 = *(rdi_2 + 0x10)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *rdi_2
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rdi_2 += 0x40
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_3 = arg1[1].d
int32_t rdx_1 = rax_3 - r12_1.d

if (rdx_1 != arg3)
    int64_t rcx_5 = *arg1
    memmove(rcx_5 + r15_2, (sx.q(r12_1.d + arg3) << 6) + rcx_5, (rdx_1 - arg3) << 6)
    rax_3 = arg1[1].d

arg1[1].d = rax_3 - arg3

if (arg4 != 0)
    sub_1407c3fe0(arg1)
