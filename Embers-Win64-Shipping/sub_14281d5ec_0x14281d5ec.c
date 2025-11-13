// 函数: sub_14281d5ec
// 地址: 0x14281d5ec
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rdi = arg4

if (arg3 u> 0x7fffffff)
    std::_Xbad_alloc()
    noreturn

if (arg3 != 0)
    result = zx.q(arg4) & 6

if (arg3 == 0 || result.b == 6)
    *(arg1 + 0x68) = 0
else
    void* rax_1 = sub_14058b9f0(arg3)
    result = memcpy(rax_1, arg2, arg3.d)
    void* rdx_1 = rax_1 + arg3
    *(arg1 + 0x68) = rdx_1
    int32_t r9_1 = rdi & 4
    
    if (r9_1 == 0)
        **(arg1 + 0x18) = rax_1
        **(arg1 + 0x38) = rax_1
        result = *(arg1 + 0x50)
        *result = rdx_1.d - rax_1.d
    
    if ((rdi.b & 2) == 0)
        void* rdx_3 = *(arg1 + 0x68)
        void* rcx_3 = rax_1
        
        if ((rdi.b & 0x18) != 0)
            rcx_3 = rdx_3
        
        **(arg1 + 0x20) = rax_1
        **(arg1 + 0x40) = rcx_3
        result = *(arg1 + 0x58)
        *result = rdx_3.d - rcx_3.d
        
        if (r9_1 != 0)
            **(arg1 + 0x18) = rax_1
            **(arg1 + 0x38) = 0
            result = *(arg1 + 0x50)
            *result = rax_1.d
    
    rdi |= 1

*(arg1 + 0x70) = rdi
return result
