// 函数: sub_142be3180
// 地址: 0x142be3180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x80)
*arg3 = 0
int32_t result

if (*(arg1 + 0x4b8) == 0)
    result = sub_142be9be0(arg1, *(arg1 + 0xa0), arg4)

if (*(arg1 + 0x4b8) != 0 || result == 0)
    uint64_t r9_1 = zx.q(*(arg1 + 0x4b4))
    result = 6
    void* r8_1 = *(arg1 + 0x498) + 8
    int32_t arg_8 = 6
    void* rsi_2 = zx.q((r9_1 << 2).d) + r8_1
    
    if (rbx != 0 && arg2 != 0)
        char* r15_1 = -ffffffffffffffff
        
        do
            r15_1 = &r15_1[1]
        while (*(r15_1 + arg2) != 0)
        
        if (r15_1 != 0 && r9_1.d != 0)
            void* rdx_1 = r8_1 - 1
            void* r8_2 = r8_1 - 2
            int32_t i
            
            do
                uint32_t rax_1 = zx.d(*(rdx_1 + 2))
                rdx_1 += 4
                uint32_t rcx = zx.d(*(r8_2 + 2))
                r8_2 += 4
                uint64_t rdi_3 = zx.q(zx.d(*r8_2) << 8) | zx.q(*rdx_1)
                
                if ((rcx << 8 | rax_1) == zx.d(*(rbx + 0x1a)))
                    if (rdi_3.d != 0)
                        void* rsi_3 = rsi_2 + 5
                        
                        while (true)
                            uint32_t rbx_3 = zx.d(*(rsi_3 - 1)) << 8 | zx.d(*rsi_3)
                            
                            if ((rbx_3.b & 0x10) != 0)
                                uint32_t rcx_9 = (
                                    (zx.d(*(rsi_3 - 5)) << 8 | zx.d(*(rsi_3 - 4))) << 8
                                    | zx.d(*(rsi_3 - 3))) << 8 | zx.d(*(rsi_3 - 2))
                                uint32_t rbp_7 = (
                                    (zx.d(*(rsi_3 + 1)) << 8 | zx.d(*(rsi_3 + 2))) << 8
                                    | zx.d(*(rsi_3 + 3))) << 8 | zx.d(*(rsi_3 + 4))
                                int32_t rax_12 = *(arg1 + 0x4b0)
                                
                                if (rcx_9 u< rax_12)
                                    uint64_t _MaxCount = zx.q(rax_12 - rcx_9)
                                    
                                    if (r15_1 u< _MaxCount)
                                        result =
                                            strncmp(arg2, zx.q(rcx_9) + *(arg1 + 0x4a8), _MaxCount)
                                        
                                        if (result == 0)
                                            int32_t rbx_4 = rbx_3 & 0xf
                                            
                                            if (rbx_4 u<= 1)
                                                int32_t rax_14 = *(arg1 + 0x4b0)
                                                
                                                if (rbp_7 u< rax_14 && memchr(
                                                        zx.q(rbp_7) + *(arg1 + 0x4a8), 0, 
                                                        zx.q(rax_14)) != 0)
                                                    *arg3 = 1
                                                    *(arg3 + 8) = zx.q(rbp_7) + *(arg1 + 0x4a8)
                                                    return 0
                                            else
                                                if (rbx_4 == 2)
                                                    *arg3 = 2
                                                    arg3[2] = rbp_7
                                                    return 0
                                                
                                                if (rbx_4 == 3)
                                                    *arg3 = rbx_4
                                                    arg3[2] = rbp_7
                                                    return result
                            
                            rsi_3 += 0xa
                            int32_t temp1_1 = rdi_3.d
                            rdi_3 = zx.q(rdi_3.d - 1)
                            
                            if (temp1_1 == 1)
                                return 6
                    
                    break
                
                rsi_2 += zx.q((rdi_3 * 5).d * 2)
                i = r9_1.d
                r9_1 = zx.q(r9_1.d - 1)
            while (i != 1)
            return 6

return result
