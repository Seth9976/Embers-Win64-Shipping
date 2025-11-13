// 函数: sub_141834f20
// 地址: 0x141834f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141822010(arg1 + 0x90)
sub_140a4fc50((arg1 + 0x10)->__offset(0x70).q)
(arg1 + 0x10)->__offset(0x70).q = 0

if ((arg1 + 0x10)->__offset(0x30).q != 0)
    void* rax_1 = (arg1 + 0x10)->__offset(0x40).q
    void* rcx_2 = arg1 + 0x60
    
    if (rax_1 != 0)
        rcx_2 = rax_1
    
    (*(*rcx_2 + 0x10))(rcx_2)

return DeleteCriticalSection(arg1 + 0x10) __tailcall
