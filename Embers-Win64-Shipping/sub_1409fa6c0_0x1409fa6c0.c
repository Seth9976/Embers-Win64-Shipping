// 函数: sub_1409fa6c0
// 地址: 0x1409fa6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*arg2)
int32_t rsi = *arg3
sub_1409b3740(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t rax = sx.q(arg1[9].d)

if (rax.d != 0)
    void* rcx = arg1[8]
    void* r8 = &arg1[7]
    
    if (rcx != 0)
        r8 = rcx
    
    int32_t i = *(r8 + (((rax - 1) & rbx) << 2))
    int32_t i_1 = i
    
    if (i != 0xffffffff)
        int64_t r8_1 = *arg1
        
        do
            int64_t rdx_5 = sx.q(i_1) * 2
            i = *(r8_1 + (rdx_5 << 3) + 8)
            
            if (*(r8_1 + (rdx_5 << 3)) == rbx.d)
                break
            
            i_1 = i
        while (i != 0xffffffff)
    
    if (i_1 != 0xffffffff)
        int64_t r8_2 = *arg1
        
        do
            if (*(r8_2 + sx.q(i_1) * 0x10 + 4) == rsi)
                if ((sx.q(i_1) << 4) + 4 != neg.q(r8_2))
                    return (sx.q(i_1) << 4) + 4 + r8_2
                
                break
            
            i_1 = i
            
            if (i == 0xffffffff)
                break
            
            do
                int64_t rdx_9 = sx.q(i_1) * 2
                i = *(r8_2 + (rdx_9 << 3) + 8)
                
                if (*(r8_2 + (rdx_9 << 3)) == rbx.d)
                    break
                
                i_1 = i
            while (i != 0xffffffff)
        while (i_1 != 0xffffffff)

return sub_1409fa1b0(arg1, arg2, arg3)
