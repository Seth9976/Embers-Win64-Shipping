// 函数: sub_142c1b5c0
// 地址: 0x142c1b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg2 + 0x90)
int128_t* const rsi = &data_14369a5d0
uint16_t rdx = zx.w(*(arg1 + 2))
uint64_t r8_1 = zx.q(*(arg1 + 3))
int128_t* const rcx_2

if (0 != rdx * 0x100 + r8_1.w)
    rcx_2 = (zx.q(rdx.b) << 8) + arg1 + r8_1
else
    rcx_2 = &data_14369a5d0

int32_t rdx_1 = *(*(r14 + 0x70) + zx.q(*(r14 + 0x5c)) * 0x14)
int32_t r8_4 = (zx.d(*rcx_2) << 8) + zx.d(*(rcx_2 + 1))
int128_t* result

if (r8_4 == 1)
    result = sub_142c1e900(rcx_2, rdx_1)
label_142c1b65b:
    int32_t rbp_1 = result.d
    
    if (result.d != 0xffffffff)
        int32_t r8_6 = *(r14 + 0x5c)
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
        
        if (sub_142c22b10(arg2).b == 0)
            result.b = 0
        else
            uint16_t rdx_4 = zx.w(*(arg1 + 4))
            uint64_t r8_7 = zx.q(*(arg1 + 5))
            uint64_t r12_1 = zx.q(*arg2)
            int128_t* const r8_8
            
            if (0 != rdx_4 * 0x100 + r8_7.w)
                r8_8 = r8_7 + (zx.q(rdx_4.b) << 8) + arg1
            else
                r8_8 = &data_14369a5d0
            
            uint64_t r15_1 = r12_1 * 0x14
            int32_t rdx_5 = *(r15_1 + *(r14 + 0x70))
            int32_t rcx_14 = (zx.d(*r8_8) << 8) + zx.d(*(r8_8 + 1))
            
            if (rcx_14 == 1)
                result = sub_142c1e900(r8_8, rdx_5)
            label_142c1b737:
                
                if (result.d != 0xffffffff)
                    uint16_t r8_9 = zx.w(*(arg1 + 0xa))
                    uint64_t r9_2 = zx.q(*(arg1 + 0xb))
                    int128_t* const rcx_20
                    
                    if (0 != r8_9 * 0x100 + r9_2.w)
                        rcx_20 = (zx.q(r8_9.b) << 8) + arg1 + r9_2
                    else
                        rcx_20 = &data_14369a5d0
                    
                    result = sub_142c191d0(rcx_20, result.d)
                    uint32_t rcx_24 = zx.d(*(result + 1))
                    uint32_t r9_4 = zx.d(*result) << 8
                    uint32_t r9_5 = r9_4 + rcx_24
                    
                    if (r9_4 != neg.d(rcx_24))
                        int64_t rdx_7 = *(r14 + 0x70)
                        uint64_t rcx_25 = zx.q(*(r14 + 0x5c)) * 5
                        char rax_10 = *(rdx_7 + (rcx_25 << 2) + 0xe)
                        uint32_t r8_11 = zx.d(*(rdx_7 + r15_1 + 0xe)) u>> 5
                        int32_t rax_11
                        
                        if ((rax_10 & 0x10) == 0)
                            rax_11 = zx.d(rax_10) & 0xf
                        else
                            rax_11 = 0
                        
                        int32_t r9_6
                        
                        if (r8_11 == 0 || r8_11 != zx.d(*(rdx_7 + (rcx_25 << 2) + 0xe)) u>> 5
                                || rax_11 == 0)
                            r9_6 = r9_5 - 1
                        else
                            char rax_13 = *(rdx_7 + (rcx_25 << 2) + 0xe)
                            
                            if ((rax_13 & 0x10) == 0)
                                uint32_t rax_15 = zx.d(rax_13) & 0xf
                                
                                if (r9_5 u>= rax_15)
                                    r9_5 = rax_15
                                
                                r9_6 = r9_5 - 1
                            else
                                if (r9_5 u>= 0)
                                    r9_5 = 0
                                
                                r9_6 = r9_5 - 1
                        
                        uint16_t r8_12 = zx.w(*(arg1 + 8))
                        uint64_t r10_2 = zx.q(*(arg1 + 9))
                        
                        if (0 != r8_12 * 0x100 + r10_2.w)
                            rsi = (zx.q(r8_12.b) << 8) + arg1 + r10_2
                        
                        return sub_142c1b060(rsi, arg2, rbp_1, r9_6, arg3, result, 
                            (zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7)), r12_1.d)
            else if (rcx_14 == 2)
                result = sub_142c1e990(r8_8, rdx_5)
                goto label_142c1b737
            
            result.b = 0
    else
        result.b = 0
else
    if (r8_4 == 2)
        result = sub_142c1e990(rcx_2, rdx_1)
        goto label_142c1b65b
    
    result.b = 0

return result
