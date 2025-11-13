// 函数: sub_1420ce1d0
// 地址: 0x1420ce1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int32_t rdi = 0
sub_141d54100(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t rax = sx.q(arg1[9].d)

if (rax.d != 0)
    void* rcx = arg1[8]
    void* r8_1 = &arg1[7]
    
    if (rcx != 0)
        r8_1 = rcx
    
    int32_t i = *(r8_1 + (((rax - 1) & rbx) << 2))
    int32_t i_2 = i
    
    if (i != 0xffffffff)
        int64_t r8_2 = *arg1
        
        do
            int64_t rdx_4 = sx.q(i_2) * 3
            i = *(r8_2 + (rdx_4 << 3) + 0x10)
            
            if (*(r8_2 + (rdx_4 << 3)) == rbx.d)
                break
            
            i_2 = i
        while (i != 0xffffffff)
    
    if (i_2 != 0xffffffff)
        int32_t i_1
        
        do
            rdi += 1
            i_1 = i
            
            if (i == 0xffffffff)
                break
            
            int64_t r8_3 = *arg1
            
            do
                int64_t rdx_5 = sx.q(i_1) * 3
                i = *(r8_3 + (rdx_5 << 3) + 0x10)
                
                if (*(r8_3 + (rdx_5 << 3)) == rbx.d)
                    break
                
                i_1 = i
            while (i != 0xffffffff)
        while (i_1 != 0xffffffff)

return zx.q(rdi)
