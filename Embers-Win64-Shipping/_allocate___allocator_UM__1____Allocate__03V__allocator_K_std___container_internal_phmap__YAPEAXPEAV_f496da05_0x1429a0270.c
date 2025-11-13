// 函数: ?allocate@?$allocator@UM@?1???$Allocate@$03V?$allocator@K@std@@@container_internal@phmap@@YAPEAXPEAV?$allocator@K@std@@_K@Z@@std@@QEAAPEAUM@?1???$Allocate@$03V?$allocator@K@std@@@container_internal@phmap@@YAPEAXPEAV?$allocator@K@2@_K@Z@_K@Z
// 地址: 0x1429a0270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg2 << 2

if (arg2 u> 0x3fffffffffffffff)
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
