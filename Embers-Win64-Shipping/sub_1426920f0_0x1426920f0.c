// 函数: sub_1426920f0
// 地址: 0x1426920f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r15_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r13_1 = r15_1 * 0x38
int64_t* rdi_3 = *arg1 + 0x30 + r13_1
int32_t i

do
    void* rcx = *rdi_3
    
    if (rcx != 0)
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            *(rcx + 8)
        
        int64_t* rbx_1 = *rdi_3
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_4 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_4 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi_3 = &rdi_3[7]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_6 = arg1[1].d
int32_t rcx_4 = rax_6 - r15_1.d

if (rcx_4 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r13_1, sx.q(r15_1.d + arg3) * 0x38 + r9, (rcx_4 - arg3) * 0x38)
    rax_6 = arg1[1].d

arg1[1].d = rax_6 - arg3

if (arg4 != 0)
    sub_1407c4070(arg1)
