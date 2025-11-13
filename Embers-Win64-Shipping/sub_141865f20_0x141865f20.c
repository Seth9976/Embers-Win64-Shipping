// 函数: sub_141865f20
// 地址: 0x141865f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1->__offset(0x88).d
int64_t* rbx = arg1->__offset(0x80).q

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1->__offset(0x80).q

if (rbx != 0)
    sub_140a74f90(rbx)

sub_140a4fc50(arg1->__offset(0x70).q)
arg1->__offset(0x70).q = 0

if (arg1->__offset(0x30).q != 0)
    void* rax_1 = arg1->__offset(0x40).q
    void* rcx_3 = &arg1[2]
    
    if (rax_1 != 0)
        rcx_3 = rax_1
    
    (*(*rcx_3 + 0x10))(rcx_3)

return DeleteCriticalSection(arg1) __tailcall
