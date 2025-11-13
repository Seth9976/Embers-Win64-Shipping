// 函数: sub_140aa2b40
// 地址: 0x140aa2b40
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

sub_140a6a0e0(arg2, arg1 + 0x10, *(arg1 + 0x18), arg1 + 0x20, r14)
return arg2
