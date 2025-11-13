// 函数: sub_1426b3920
// 地址: 0x1426b3920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if (*(arg1 + 0x218) != *(arg1 + 0x244))
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = arg1 + 0x248
    void* rdx = *(r8_1 + 8)
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0x258)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x210)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rdx_1 = i_1 * 5
            
            if (*(r8_2 + (rdx_1 << 2)) == arg2)
                if (i != 0xffffffff)
                    void* rcx_4 = r8_2 + i_1 * 0x14
                    
                    if (rcx_4 != 0)
                        result.o = *(rcx_4 + 8)
                        return result
                
                break
            
            i = *(r8_2 + (rdx_1 << 2) + 0xc)
        while (i != 0xffffffff)

result.o = zx.o(0)
return result
