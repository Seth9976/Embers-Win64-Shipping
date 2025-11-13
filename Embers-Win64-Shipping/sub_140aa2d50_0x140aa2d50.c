// 函数: sub_140aa2d50
// 地址: 0x140aa2d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = sub_140a752e0()
int64_t* rbx = *(rax + 0x80)
int64_t* r14 = *(rax + 0x78)

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rdi_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx + 8))(rbx, zx.q(rdi_1))

sub_140aa3740(arg1, arg2, sub_140a7b0b0(r14), 0x64)
return arg2
