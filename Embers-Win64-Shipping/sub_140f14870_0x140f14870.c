// 函数: sub_140f14870
// 地址: 0x140f14870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r12_1 = sx.q(arg2)
int64_t r15_2 = r12_1 * 0x30
void* rdi_3 = *arg1 + 0x10 + r15_2
int32_t i

do
    int64_t rcx = *(rdi_3 + 0x10)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t rcx_1 = *rdi_3
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t* rbx_1 = *(rdi_3 - 8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi_3 += 0x30
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_3 = arg1[1].d
int32_t rcx_5 = rax_3 - r12_1.d

if (rcx_5 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r15_2, sx.q(r12_1.d + arg3) * 0x30 + r9, (rcx_5 - arg3) * 0x30)
    rax_3 = arg1[1].d

arg1[1].d = rax_3 - arg3

if (arg4 != 0)
    sub_1407c4120(arg1)
