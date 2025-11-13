// 函数: sub_140bbd9b0
// 地址: 0x140bbd9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t __saved_zmm6 = arg3
arg3 = arg2
EnterCriticalSection(arg1 + 0x40)

if (*(arg1 + 0x70) == 0 && *(arg1 + 0x80) == 0)
    if (*(arg1 + 0x90) == 0)
        void*** rax_2
        rax_2, arg3 = sub_140a491d0(0)
        *(arg1 + 0x90) = rax_2
    
    *(arg1 + 0x88) = 1
    
    if (arg1 != -0x40)
        LeaveCriticalSection(arg1 + 0x40)
    
    int64_t* rcx_2 = *(arg1 + 0x90)
    
    if (not(arg3.d f!= (zx.o(0)).d))
        (*(*rcx_2 + 0x20))(rcx_2, 0xffffffff, 0)
        int64_t result
        result.b = 1
        return result
    
    arg3.d = arg3.d f* 1000f
    uint64_t rdx_1 = 1
    int64_t r9_1 = *rcx_2
    int32_t rax_4 = (int.q(arg3.d)).d
    
    if (rax_4 u>= 1)
        rdx_1 = zx.q(rax_4)
    
    if ((*(r9_1 + 0x20))(rcx_2, rdx_1, 0, r9_1, __saved_zmm6) == 0)
        EnterCriticalSection(arg1 + 0x40)
        void* rdi
        
        if (*(arg1 + 0x88) == 0)
            int64_t* rcx_4 = *(arg1 + 0x90)
            (*(*rcx_4 + 0x18))(rcx_4)
            rdi.b = 1
        else
            *(arg1 + 0x88) = 0
            rdi.b = 0
        
        if (arg1 != -0x40)
            LeaveCriticalSection(arg1 + 0x40)
        
        return zx.q(rdi.b)
else if (arg1 != -0x40)
    LeaveCriticalSection(arg1 + 0x40)

return 1
