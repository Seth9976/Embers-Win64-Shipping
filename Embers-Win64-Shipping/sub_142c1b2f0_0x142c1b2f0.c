// 函数: sub_142c1b2f0
// 地址: 0x142c1b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg2 + 0x90)
int128_t* const rsi = &data_14369a5d0
uint16_t rdx = zx.w(*(arg1 + 2))
uint64_t r8_1 = zx.q(*(arg1 + 3))
int128_t* const rcx_2

if (0 != rdx * 0x100 + r8_1.w)
    rcx_2 = (zx.q(rdx.b) << 8) + arg1 + r8_1
else
    rcx_2 = &data_14369a5d0

int32_t rdx_1 = *(*(rbp + 0x70) + zx.q(*(rbp + 0x5c)) * 0x14)
uint32_t r8_4 = (zx.d(*rcx_2) << 8) + zx.d(*(rcx_2 + 1))
uint32_t result

if (r8_4 == 1)
    result = sub_142c1e900(rcx_2, rdx_1)
label_142c1b38d:
    uint32_t result_1 = result
    
    if (result != 0xffffffff)
        int32_t r8_6 = *(rbp + 0x5c)
        void* rdx_2 = *(arg2 + 8)
        *arg2 = r8_6
        arg2[0xe] = 1
        arg2[0xf] = *(*(rdx_2 + 0x90) + 0x60)
        void* r9_1 = *(rdx_2 + 0x90)
        char rdx_3
        
        if (r8_6 != *(r9_1 + 0x5c))
            rdx_3 = 0
        else
            rdx_3 = *(*(r9_1 + 0x70) + zx.q(*(r9_1 + 0x5c)) * 0x14 + 0xf)
        
        arg2[7].b = rdx_3
        arg2[4] = 8
        
        if (sub_142c22b10(arg2).b != 0)
            while (true)
                uint64_t rcx_9 = zx.q(*arg2)
                int64_t r8_7 = *(rbp + 0x70)
                uint64_t rax_5 = rcx_9 * 5
                void* rdx_4 = r8_7 + (rax_5 << 2)
                
                if ((*(r8_7 + (rax_5 << 2) + 0xc) u>> 6 & 1) != 0)
                    char rax_7 = *(rdx_4 + 0xe)
                    
                    if ((rax_7 & 0x10) == 0 && (zx.d(rax_7) & 0xf) != 0 && rcx_9.d != 0)
                        void* r8_8 = r8_7 + zx.q((rcx_9 - 1).d) * 0x14
                        
                        if ((*(r8_8 + 0xc) u>> 3 & 1) == 0
                                && ((*(r8_8 + 0xe) ^ *(rdx_4 + 0xe)) & 0xe0) == 0)
                            char rax_14 = *(rdx_4 + 0xe)
                            int32_t rcx_10
                            
                            if ((rax_14 & 0x10) == 0)
                                rcx_10 = zx.d(rax_14) & 0xf
                            else
                                rcx_10 = 0
                            
                            char rax_15 = *(r8_8 + 0xe)
                            int32_t rax_16
                            
                            if ((rax_15 & 0x10) == 0)
                                rax_16 = zx.d(rax_15) & 0xf
                            else
                                rax_16 = 0
                            
                            if (rcx_10 == rax_16 + 1)
                                arg2[0xe] += 1
                                *(arg2 + 0x30) -= 2
                                
                                if (sub_142c22b10(arg2).b == 0)
                                    break
                                
                                continue
                
                uint16_t rdx_5 = zx.w(*(arg1 + 4))
                uint64_t r8_9 = zx.q(*(arg1 + 5))
                char* r8_10
                
                if (0 != rdx_5 * 0x100 + r8_9.w)
                    r8_10 = r8_9 + (zx.q(rdx_5.b) << 8) + arg1
                else
                    r8_10 = &data_14369a5d0
                
                int32_t rdx_6 = *(*(rbp + 0x70) + zx.q(*arg2) * 0x14)
                uint32_t rcx_18 = (zx.d(*r8_10) << 8) + zx.d(r8_10[1])
                
                if (rcx_18 == 1)
                    result = sub_142c1e900(r8_10, rdx_6)
                label_142c1b52a:
                    
                    if (result != 0xffffffff)
                        uint16_t rdx_7 = zx.w(*(arg1 + 0xa))
                        uint64_t r10_1 = zx.q(*(arg1 + 0xb))
                        int128_t* const rdx_8
                        
                        if (0 != rdx_7 * 0x100 + r10_1.w)
                            rdx_8 = (zx.q(rdx_7.b) << 8) + arg1 + r10_1
                        else
                            rdx_8 = &data_14369a5d0
                        
                        uint16_t r10_2 = zx.w(*(arg1 + 8))
                        uint64_t r11_1 = zx.q(*(arg1 + 9))
                        
                        if (0 != r10_2 * 0x100 + r11_1.w)
                            rsi = (zx.q(r10_2.b) << 8) + arg1 + r11_1
                        
                        return sub_142c1b060(rsi, arg2, result_1, result, arg3, rdx_8, 
                            (zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7)), *arg2)
                else if (rcx_18 == 2)
                    result = sub_142c1e990(r8_10, rdx_6)
                    goto label_142c1b52a
                
                break
else if (r8_4 == 2)
    result = sub_142c1e990(rcx_2, rdx_1)
    goto label_142c1b38d

result.b = 0
return result
