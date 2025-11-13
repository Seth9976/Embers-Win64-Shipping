// 函数: sub_142c78c60
// 地址: 0x142c78c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r8 = arg1 + 2

while (true)
    char rax_1 = *r8
    
    if (rax_1 != 0x20 && rax_1 != 9)
        int64_t rax_2 = -1
        
        do
            rax_2 += 1
        while (r8[rax_2] != 0)
        
        if (rax_2 == 0)
        label_142c78cbd:
            rax_2 -= 1
        else
            while (true)
                char rcx = r8[rax_2 - 1]
                rax_2 -= 1
                
                if (rcx u> 0x20)
                    break
                
                if (not(test_bit(0x100002600, sx.q(rcx))))
                    break
                
                if (rax_2 == 0)
                    goto label_142c78cbd
        
        if (rax_2 != -1)
            r8[rax_2 + 1] = 0
        
        *arg2 = r8
        return rax_2 + 1
    
    r8 = &r8[1]
