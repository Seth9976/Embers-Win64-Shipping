// 函数: sub_142b9a480
// 地址: 0x142b9a480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg1

if (arg1 != 0 && arg2 != 0)
    char* i = *arg1
    
    while (i != 0)
        void* r9_2 = arg2 - i
        uint32_t j
        uint32_t rdx
        
        do
            rdx = zx.d(*i)
            j = zx.d(*(i + r9_2))
            
            if (rdx != j)
                break
            
            i = &i[1]
        while (j != 0)
        
        if (rdx - j == 0)
            return rax[1]
        
        i = rax[2]
        rax = &rax[2]

return 0
