// 函数: sub_1408e4100
// 地址: 0x1408e4100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_143cec0f0

if (rax == 0)
    void*** rax_1 = j_sub_140a82f30(0xa8)
    
    if (rax_1 != 0)
        rax_1[1] = 0
        void* rcx = &rax_1[5]
        *rax_1 = &data_142e0f3b8
        rax_1[2].d = 0
        *rax_1 = &data_142e11bc0
        rax_1[3] = 0
        rax_1[4] = 0
        *(rcx + 0x1c) = 0x80
        void* rax_2 = *(rcx + 0x10)
        
        if (rax_2 != 0)
            rcx = rax_2
        
        __builtin_memset(rcx, 0, 0x1c)
        rax_1[9].d = 0xffffffff
        *(rax_1 + 0x4c) = 0
        rax_1[0xb] = 0
        rax_1[0xc].d = 0
        rax_1[0xd] = 0
        rax_1[0xe] = 0
        InitializeCriticalSection(&rax_1[0xf])
        SetCriticalSectionSpinCount(&rax_1[0xf], 0xfa0)
        sub_140d3a600(sub_141f88540(), rax_1)
        data_143cec0f0 = rax_1
        return rax_1
    
    rax = 0
    data_143cec0f0 = 0

return rax
