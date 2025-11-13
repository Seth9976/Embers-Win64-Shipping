// 函数: sub_141d75460
// 地址: 0x141d75460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x1a]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))

arg1[0x17].d = 0
int64_t rcx_2 = arg1[0x16]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_141d78120(&arg1[0xe], 0)
int64_t rcx_4 = arg1[0x12]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xe]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return sub_141d753f0(arg1) __tailcall
