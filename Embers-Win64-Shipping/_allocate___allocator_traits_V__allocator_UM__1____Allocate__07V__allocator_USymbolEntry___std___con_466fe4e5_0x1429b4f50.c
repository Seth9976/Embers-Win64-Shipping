// 函数: ?allocate@?$allocator_traits@V?$allocator@UM@?1???$Allocate@$07V?$allocator@USymbolEntry@@@std@@@container_internal@phmap@@YAPEAXPEAV?$allocator@USymbolEntry@@@std@@_K@Z@@std@@@phmap@@SAPEAUM@?1???$Allocate@$07V?$allocator@USymbolEntry@@@std@@@container_internal@2@YAPEAXPEAV?$allocator@USymbolEntry@@@std@@_K@Z@AEAV?$allocator@UM@?1???$Allocate@$07V?$allocator@USymbolEntry@@@std@@@container_internal@phmap@@YAPEAXPEAV?$allocator@USymbolEntry@@@std@@_K@Z@@6@1@Z
// 地址: 0x1429b4f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg2 << 3

if (arg2 u> 0x1fffffffffffffff)
    rax = -1
else if (rax u< 0x1000)
    if (rax == 0)
        return rax
    
    return j_sub_140a82f30(rax) __tailcall

int64_t rcx = rax + 0x27

if (rcx u<= rax)
    rcx = -1

int64_t rax_1 = j_sub_140a82f30(rcx)

if (rax_1 == 0)
    _invalid_parameter_noinfo_noreturn()
    noreturn

void* rax_3 = (rax_1 + 0x27) & 0xffffffffffffffe0
*(rax_3 - 8) = rax_1
return rax_3
