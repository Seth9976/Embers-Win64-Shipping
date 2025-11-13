// 函数: sub_142987e60
// 地址: 0x142987e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    sub_142986500(arg1)
    void* rbx_1 = *arg1
    *(rbx_1 + 8) = sub_142985280(arg1, *(*arg2 + 8), rbx_1, arg3)
    int64_t* r8_2 = *arg1
    arg1[1] = arg2[1]
    int64_t* rdx_2 = r8_2[1]
    
    if (*(rdx_2 + 0x19) == 0)
        int64_t* rcx_1 = *rdx_2
        
        if (*(rcx_1 + 0x19) == 0)
            int64_t* rax_3
            
            do
                rax_3 = *rcx_1
                rdx_2 = rcx_1
                rcx_1 = rax_3
            while (*(rax_3 + 0x19) == 0)
        
        *r8_2 = rdx_2
        void* rdx_3 = *arg1
        void* rcx_2 = *(rdx_3 + 8)
        void* rax_4 = *(rcx_2 + 0x10)
        
        while (*(rax_4 + 0x19) == 0)
            rcx_2 = rax_4
            rax_4 = *(rax_4 + 0x10)
        
        *(rdx_3 + 0x10) = rcx_2
        return arg1
    
    *r8_2 = r8_2
    void* rax_6 = *arg1
    *(rax_6 + 0x10) = rax_6

return arg1
