// 函数: sub_140cd6aa0
// 地址: 0x140cd6aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int32_t result = arg1[1].d + 1
    arg1[2] = 0
    
    while (true)
        arg1[1].d = result
        void* r8_1 = *arg1
        
        if (result s< *(r8_1 + 0x24))
            uint32_t rdx_1 = zx.d(result.w)
            int32_t result_1 = result
            
            if (result s< 0)
                result_1 = result + 0xffff
                rdx_1 -= 0x10000
            
            int64_t rdx_2 = sx.q(rdx_1) * 3
            int64_t rcx_2 = *(*(r8_1 + 0x10) + (sx.q(result_1 s>> 0x10) << 3))
            int64_t* r8_3 = rcx_2 + (rdx_2 << 3)
            
            if (*(rcx_2 + (rdx_2 << 3)) != 0)
                arg1[2] = r8_3
                void* rcx_3 = *r8_3
                
                if ((arg1[4].d & *(rcx_3 + 8)) != 0)
                    break
                
                int32_t rax_3 = *(rcx_3 + 0xc)
                void* const rax_7
                
                if (rax_3 s>= data_143e1d9b4)
                    rax_7 = nullptr
                else
                    uint32_t rdx_3 = zx.d(rax_3.w)
                    
                    if (rax_3 s< 0)
                        rax_3 += 0xffff
                        rdx_3 -= 0x10000
                    
                    rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
                
                result = *(rax_7 + 8)
                
                if ((*(arg1 + 0x24) & result) != 0)
                    break
            else
                result += 1
                continue
        
        return result
