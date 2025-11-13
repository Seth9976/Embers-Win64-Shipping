// 函数: sub_140aa3400
// 地址: 0x140aa3400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
char* rax = sub_140a752e0()
int64_t* rsi = *(arg1 + 0x60)
int64_t* rbx

if (rsi == 0)
    rbx = *(rax + 0x40)
    rsi = *(rax + 0x38)
    
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

sub_140aa3740(arg1, arg2, sub_140a7b0b0(rsi), 0x64)
return arg2
