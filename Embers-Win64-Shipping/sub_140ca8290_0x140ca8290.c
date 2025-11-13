// 函数: sub_140ca8290
// 地址: 0x140ca8290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d3ffc0(arg1)
AcquireSRWLockExclusive(&arg1[0x3a])
sub_1405b8890(&arg1[0x30], 0)
ReleaseSRWLockExclusive(&arg1[0x3a])
arg1[8] = arg2
sub_140ca20f0(&arg1[6])

if ((*(*arg1 + 0x148))(arg1) == 0)
    int64_t* rcx_5 = arg1[8]
    
    if (rcx_5 != 0)
        void* rax_3 = (*(*rcx_5 + 0x148))(rcx_5)
        
        if (rax_3 != 0 && arg1[0x25] != rax_3)
            int64_t rdx = arg1[0x24]
            arg1[0x25] = rax_3
            
            if (rdx != 0)
                int64_t* rcx_6 = *(rax_3 + 0xb8)
                (*(*rcx_6 + 0x28))(rcx_6, rdx)
                sub_140a74f90(arg1[0x24])
                arg1[0x24] = 0

return sub_140d3d660(arg1) __tailcall
