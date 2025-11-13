// 函数: sub_140b98920
// 地址: 0x140b98920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = *arg1
int32_t rsi = arg1[1].d
void* rbx = arg1[2]
int64_t result
result.b = zmm0:4.d != 0

if ((sub_140b5b8a0(zmm0.d, 0).b == 0 | result.b) != 0 && rsi != 0)
    result = zx.q(*(rbx + 0x1c0))
    
    if (result.d != *(rbx + 0x1ec))
        int32_t rax_1 = sub_140b5ead0(zmm0.d) + zmm0:4.d
        void* r8_1 = rbx + 0x1f0
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        result = zx.q(*(r8_1 + (((sx.q(*(rbx + 0x200)) - 1) & sx.q(rax_1)) << 2)))
        
        if (result.d != 0xffffffff)
            int64_t r9_1 = *(rbx + 0x1b8)
            int64_t rdx_4
            
            while (true)
                rdx_4 = sx.q(result.d)
                int64_t r8_2 = rdx_4 * 3
                
                if (*(r9_1 + (r8_2 << 3)) == zmm0)
                    break
                
                result = zx.q(*(r9_1 + (r8_2 << 3) + 0x10))
                
                if (result.d == 0xffffffff)
                    return result
            
            if (result.d != 0xffffffff)
                result = rdx_4 * 3
                void* rcx_4 = r9_1 + (result << 3)
                
                if (rcx_4 != 0)
                    void* rcx_5 = *(rcx_4 + 8)
                    
                    if (rcx_5 != 0 && *(rcx_5 + 0x23c) == rsi)
                        arg2[1] = u"Finish Linker"
                        arg2[2] = *(rcx_5 + 0x58)
                        *(rcx_5 + 0xd0) = *arg2
                        *(rcx_5 + 0xd8) = *(rcx_5 + 0x58)
                        *(rcx_5 + 0xe0) = u"Finish Linker"
                        *(rcx_5 + 0xc4) = arg2[3].d
                        *(rcx_5 + 0xc8) = *(arg2 + 0x1c)
                        *(rcx_5 + 0xc9) = *(arg2 + 0x1d)
                        int128_t zmm6
                        return sub_140ba3f30(rcx_5, zmm6)

return result
