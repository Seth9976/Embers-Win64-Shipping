// 函数: sub_1422cc120
// 地址: 0x1422cc120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg3 + 0xa4) u>> 1)

if ((result.b & 1) == 0)
    int64_t* r14_1 = *(arg1 + 0x58)
    
    if (r14_1[4].w != 0)
        result = zx.q(data_143de5458.d)
        int32_t* r15_1 = *(arg4 + 0x808)
        
        if (*r15_1 != result.d)
            int64_t rdi_1 = 0
            *r15_1 = result.d
            result = zx.q(r14_1[1].w)
            
            if (0 u< result.w)
                uint64_t i_1 = zx.q(result.w)
                uint64_t i
                
                do
                    int16_t* r8_1 = *r14_1 + rdi_1
                    
                    if (*(r8_1 + 4) != 0xffffffff)
                        result = sx.q(*(r8_1 + 0xc))
                        int64_t r9_1 = sx.q(*(zx.q(*r8_1) * 0x30 + *(arg1 + 0x28) + 0x14)) + arg2
                        char rcx_2 = *(result + r9_1)
                        
                        if ((rcx_2 & 4) != 0)
                        label_1422cc1e8:
                            result = sx.q(*(r8_1 + 0x10))
                            void* rdx_1 = sx.q(*(r8_1 + 8)) * 0x1660 + *(r15_1 + 8)
                            
                            if (*(rdx_1 + 0x1600) != *(result + r9_1))
                                int32_t r8_2 = *(rdx_1 + 0x165c)
                                int32_t r9_2 = *(rdx_1 + 0x1658)
                                
                                if (r8_2 != r9_2)
                                    result = (zx.q(r8_2) & 0x3f) * 0x58
                                
                                if (r8_2 == r9_2 || *(result + rdx_1 + 0x50) != 0)
                                    if (r8_2 - r9_2 u>= 0x40)
                                        *(rdx_1 + 0x1658) = r9_2 + 1
                                    
                                    *(rdx_1 + 0x165c) = r8_2 + 1
                                    void* rbx_2 = (zx.q(r8_2 + 1) & 0x3f) * 0x58 + rdx_1
                                    result = sub_1417ad930(rbx_2, 0)
                                    *(rbx_2 + 0x50) = 0
                        else if ((rcx_2 & 1) == 0 && (rcx_2 & 2) != 0)
                            goto label_1422cc1e8
                    
                    rdi_1 += 0x18
                    i = i_1
                    i_1 -= 1
                while (i != 1)

return result
