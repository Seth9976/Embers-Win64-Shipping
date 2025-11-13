// 函数: sub_140bc0500
// 地址: 0x140bc0500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1->__offset(0xb0).q

if (rbx != 0)
    int32_t rax_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rax_1 == 1 && rbx != 0)
        sub_140a99090(rbx)
        j_sub_140a74f90(rbx)

int64_t rcx_2 = arg1->__offset(0x98).q

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1405ae200(&arg1[1])
return DeleteCriticalSection(arg1) __tailcall
