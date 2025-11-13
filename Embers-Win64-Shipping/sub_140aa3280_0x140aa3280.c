// 函数: sub_140aa3280
// 地址: 0x140aa3280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
char* rax = sub_140a752e0()
int64_t* rbp = *(arg1 + 0x30)
int64_t* rbx

if (rbp == 0)
    rbx = *(rax + 0x40)
    rbp = *(rax + 0x38)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rdi = 1
else
    rbx = 0.q

if ((rdi & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))

sub_140a6a260(arg2, arg1 + 0x10, *(arg1 + 0x18), *(arg1 + 0x1c), arg1 + 0x20, rbp)
return arg2
