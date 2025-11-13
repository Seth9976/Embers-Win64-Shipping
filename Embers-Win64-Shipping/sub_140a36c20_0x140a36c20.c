// 函数: sub_140a36c20
// 地址: 0x140a36c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
int64_t rsi = *arg3
sub_1405b6730(arg1, arg1[1].d - *(arg1 + 0x34), 0)

if (arg1[9].d != 0)
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = &arg1[7]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t i = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    int32_t i_1 = i
    
    if (i != 0xffffffff)
        int64_t r8_1 = *arg1
        
        do
            int64_t rdx_5 = sx.q(i_1) * 3
            i = *(r8_1 + (rdx_5 << 3) + 0x10)
            
            if (*(r8_1 + (rdx_5 << 3)) == rbx)
                break
            
            i_1 = i
        while (i != 0xffffffff)
    
    if (i_1 != 0xffffffff)
        int64_t rdx_6 = *arg1
        
        do
            if (*(rdx_6 + sx.q(i_1) * 0x18 + 8) == rsi)
                int64_t result = rdx_6 + ((sx.q(i_1) * 3 + 1) << 3)
                
                if (result != 0)
                    return result
                
                break
            
            i_1 = i
            
            if (i == 0xffffffff)
                break
            
            do
                int64_t r8_3 = sx.q(i_1) * 3
                i = *(rdx_6 + (r8_3 << 3) + 0x10)
                
                if (*(rdx_6 + (r8_3 << 3)) == rbx)
                    break
                
                i_1 = i
            while (i != 0xffffffff)
        while (i_1 != 0xffffffff)

return sub_140a36b40(arg1, arg2, arg3)
