// 函数: ?deallocate@?$allocator@UM@?1???$Deallocate@$07V?$allocator@USymbolEntry@@@std@@@container_internal@phmap@@YAXPEAV?$allocator@USymbolEntry@@@std@@PEAX_K@Z@@std@@QEAAXQEAUM@?1???$Deallocate@$07V?$allocator@USymbolEntry@@@std@@@container_internal@phmap@@YAXPEAV?$allocator@USymbolEntry@@@2@PEAX_K@Z@_K@Z
// 地址: 0x142986710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg2

if (arg3 << 3 u>= 0x1000)
    void* rcx = *(rax - 8)
    
    if (rax - rcx - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rax = rcx

return j_sub_140a74f90(rax) __tailcall
