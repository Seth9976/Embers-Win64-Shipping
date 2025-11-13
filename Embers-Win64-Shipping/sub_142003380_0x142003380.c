// 函数: sub_142003380
// 地址: 0x142003380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_143f3eec8

if (rax == 0)
    int64_t* rax_1 = j_sub_140a82f30(0xc8)
    
    if (rax_1 != 0)
        *rax_1 = 0
        void* rcx = &rax_1[2]
        rax_1[1] = 0
        *(rcx + 0x10) = 0
        *(rcx + 0x18) = 0
        *(rcx + 0x1c) = 0x80
        void* rax_2 = *(rcx + 0x10)
        
        if (rax_2 != 0)
            rcx = rax_2
        
        *rcx = 0
        *(rcx + 8) = 0
        void* rcx_1 = &rax_1[0xc]
        rax_1[6].d = 0xffffffff
        *(rax_1 + 0x34) = 0
        rax_1[8] = 0
        rax_1[9].d = 0
        rax_1[0xa] = 0
        rax_1[0xb] = 0
        *(rcx_1 + 0x1c) = 0x80
        void* rax_3 = *(rcx_1 + 0x10)
        
        if (rax_3 != 0)
            rcx_1 = rax_3
        
        __builtin_memset(rcx_1, 0, 0x1c)
        rax_1[0x10].d = 0xffffffff
        *(rax_1 + 0x84) = 0
        rax_1[0x12] = 0
        rax_1[0x13].d = 0
        InitializeCriticalSection(&rax_1[0x14])
        SetCriticalSectionSpinCount(&rax_1[0x14], 0xfa0)
        data_143f3eec8 = rax_1
        return rax_1
    
    rax = 0
    data_143f3eec8 = 0

return rax
