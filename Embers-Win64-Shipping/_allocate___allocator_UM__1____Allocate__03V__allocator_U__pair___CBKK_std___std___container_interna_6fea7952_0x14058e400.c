// 函数: ?allocate@?$allocator@UM@?1???$Allocate@$03V?$allocator@U?$pair@$$CBKK@std@@@std@@@container_internal@phmap@@YAPEAXPEAV?$allocator@U?$pair@$$CBKK@std@@@std@@_K@Z@@std@@QEAAPEAUM@?1???$Allocate@$03V?$allocator@U?$pair@$$CBKK@std@@@std@@@container_internal@phmap@@YAPEAXPEAV?$allocator@U?$pair@$$CBKK@std@@@2@_K@Z@_K@Z
// 地址: 0x14058e400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u<= 0x3fffffffffffffff)
    int64_t rcx = arg2 << 2
    
    if (rcx u< 0x1000)
        if (rcx == 0)
            return 0
        
        return j_sub_140a82f30(rcx) __tailcall
    
    if (rcx + 0x27 u> rcx)
        int64_t rax_2 = j_sub_140a82f30(rcx + 0x27)
        
        if (rax_2 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* result = (rax_2 + 0x27) & 0xffffffffffffffe0
        *(result - 8) = rax_2
        return result

stdext::threads::_Throw_lock_error()
noreturn
