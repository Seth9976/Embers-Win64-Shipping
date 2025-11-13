// 函数: sub_141821870
// 地址: 0x141821870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1->__offset(0xd8).d = 0
int64_t rcx = arg1->__offset(0xd0).q

if (rcx != 0)
    sub_140a74f90(rcx)

sub_14059ad90(arg1 + 0x90, 0)
int64_t rcx_2 = arg1->__offset(0xb0).q

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1->__offset(0x90).q

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140a4fc50(arg1->__offset(0x70).q)
arg1->__offset(0x70).q = 0

if (arg1->__offset(0x30).q != 0)
    void* rax_1 = arg1->__offset(0x40).q
    void* rcx_5 = &arg1[2]
    
    if (rax_1 != 0)
        rcx_5 = rax_1
    
    (*(*rcx_5 + 0x10))(rcx_5)

return DeleteCriticalSection(arg1) __tailcall
