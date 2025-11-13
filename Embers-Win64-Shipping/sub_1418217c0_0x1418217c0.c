// 函数: sub_1418217c0
// 地址: 0x1418217c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1->__offset(0x90).q

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rbx = arg1->__offset(0x88).q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

sub_140a4fc50(arg1->__offset(0x70).q)
arg1->__offset(0x70).q = 0

if (arg1->__offset(0x30).q != 0)
    void* rax_4 = arg1->__offset(0x40).q
    void* rcx_4 = &arg1[2]
    
    if (rax_4 != 0)
        rcx_4 = rax_4
    
    (*(*rcx_4 + 0x10))(rcx_4)

return DeleteCriticalSection(arg1) __tailcall
