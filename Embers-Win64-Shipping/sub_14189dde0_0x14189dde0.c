// 函数: sub_14189dde0
// 地址: 0x14189dde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1->__offset(0x88).q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140a4fc50(arg1->__offset(0x70).q)
arg1->__offset(0x70).q = 0

if (arg1->__offset(0x30).q != 0)
    void* rax_3 = arg1->__offset(0x40).q
    void* rcx_3 = &arg1[2]
    
    if (rax_3 != 0)
        rcx_3 = rax_3
    
    (*(*rcx_3 + 0x10))(rcx_3)

return DeleteCriticalSection(arg1) __tailcall
