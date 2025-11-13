// 函数: sub_140631840
// 地址: 0x140631840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
int64_t rbx = sx.q(arg2)
int512_t result

if (*(arg1 + 0x298) != *(arg1 + 0x2c4))
    void* r10_1 = arg1 + 0x2c8
    void* r9_1 = *(r10_1 + 8)
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t i = *(r10_1 + (((sx.q(*(arg1 + 0x2d8)) - 1) & rbx) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx = *(arg1 + 0x290)
        
        do
            int64_t rcx_1 = sx.q(i) * 2
            
            if (*(rdx + (rcx_1 << 3)) == rbx.d)
                *arg3 = 1
                int32_t* rax_8
                
                if (*(arg1 + 0x298) != *(arg1 + 0x2c4))
                    void* rdx_1 = arg1 + 0x2c8
                    void* rax_5 = *(rdx_1 + 8)
                    
                    if (rax_5 != 0)
                        rdx_1 = rax_5
                    
                    for (int32_t j = *(rdx_1 + (((sx.q(*(arg1 + 0x2d8)) - 1) & rbx) << 2)); 
                            j != 0xffffffff; j = rax_8[2])
                        rax_8 = (sx.q(j) << 4) + *(arg1 + 0x290)
                        
                        if (*rax_8 == rbx.d)
                            goto label_140631917
                
                rax_8 = nullptr
            label_140631917:
                result.o = rax_8[1]
                return result
            
            i = *(rdx + (rcx_1 << 3) + 8)
        while (i != 0xffffffff)

result.o = 0xbf800000
return result
