// 函数: sub_140f14730
// 地址: 0x140f14730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r13_1 = r15_1 * 0x70
int64_t* rdi_3 = *arg1 + 0x48 + r13_1
int32_t i

do
    sub_140d948f0(&rdi_3[2])
    sub_140d948f0(rdi_3)
    int64_t rcx_2 = rdi_3[-2]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    sub_140ee3c10(&rdi_3[-4])
    int64_t* rbx_1 = rdi_3[-6]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rbx_2 = rdi_3[-8]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    rdi_3 = &rdi_3[0xe]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_5 = arg1[1].d
int32_t rcx_9 = rax_5 - r15_1.d

if (rcx_9 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r13_1, sx.q(r15_1.d + arg3) * 0x70 + r9, (rcx_9 - arg3) * 0x70)
    rax_5 = arg1[1].d

arg1[1].d = rax_5 - arg3

if (arg4 != 0)
    sub_140b26a50(arg1)
