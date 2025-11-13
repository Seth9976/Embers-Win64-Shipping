// 函数: sub_140abffa0
// 地址: 0x140abffa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r12_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r15_2 = r12_1 * 0x30
char* rdi_3 = *arg1 + 0x28 + r15_2
int32_t i

do
    if (*rdi_3 != 0)
        *rdi_3 = 0
        int64_t* rbx_1 = *(rdi_3 - 0x10)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_3 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_3 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi_3 = &rdi_3[0x30]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_5 = arg1[1].d
int32_t rcx_3 = rax_5 - r12_1.d

if (rcx_3 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r15_2, sx.q(r12_1.d + arg3) * 0x30 + r9, (rcx_3 - arg3) * 0x30)
    rax_5 = arg1[1].d

arg1[1].d = rax_5 - arg3

if (arg4 != 0)
    sub_1407c4120(arg1)
