// 函数: sub_142873710
// 地址: 0x142873710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** r9 = arg1[5]

if (r9 != 0)
    while (true)
        int64_t rax_1 = arg1[3]
        uint64_t rax_2 = rax_1 - r9[3]
        
        if (rax_1 == r9[3])
            char rcx = (r9[4].d).b
            
            if ((rcx & 1) != 0)
                break
            
            if ((rcx & 2) != 0)
                break
        
        void* i_1 = r9[2]
        
        if (i_1 != 0)
            int64_t rdx_1 = arg1[1]
            
            if (rdx_1 == 0)
                rdx_1 = *(*arg1 + 8)
            
            char* rdx_3 = i_1 - 1 + r9[1] + rdx_1
            void* i
            
            do
                *rdx_3 = rax_2.b
                rdx_3 = &rdx_3[-1]
                rax_2 u>>= 8
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (rax_2 != 0)
                break
        
        r9 = *r9
        
        if (r9 == 0)
            return 1

return 0
