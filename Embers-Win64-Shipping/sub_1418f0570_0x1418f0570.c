// 函数: sub_1418f0570
// 地址: 0x1418f0570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x48)
int32_t i = 0
void* r14 = *(*(result + 0xc8) + 0x80)

if (*(r14 + 0x130) s> 0)
    int64_t rsi_1 = 0
    
    do
        int16_t* rdx_1 = *(r14 + 0x128) + rsi_1
        uint32_t rcx = zx.d(*(rdx_1 + 3))
        uint64_t rcx_2
        void* r8_1
        bool cond:4_1
        
        if (rcx == 0)
            uint64_t rax_3 = zx.q(rdx_1[1].b)
            uint64_t r11_3 = zx.q(*rdx_1)
            rdx_1.b = 0
            r8_1 = *(arg1 + 0x48)
            uint64_t* rbx_1 = *arg2
            int64_t* r9_4 = rax_3 * 0x58 + *(r8_1 + 0x98)
            void* r10_2 = *((zx.q(r11_3.d) << 6) + *r9_4 + 0x28)
            
            if (data_1439c7a08 s> 1)
                result = *rbx_1
                bool cond:1_1 = *(r10_2 + 8) != result
                *(r10_2 + 8) = result
                rcx_2.b = cond:1_1
                cond:4_1 = *(r10_2 + 0x10) != 1
                *(r10_2 + 0x10) = 1
            label_1418f0707:
                rdx_1.b = cond:4_1
                rdx_1.b |= rcx_2.b
                *(r8_1 + 0x90) |= rdx_1.b
                *(r8_1 + 0xc0) |= rdx_1.b
            else
                void* r11_4 = r9_4[6] + r11_3 * 0xc
                result = zx.q(rbx_1[2].d)
                
                if (*(r11_4 + 4) != result.d)
                    *(r11_4 + 4) = result.d
                    rdx_1.b = 1
                    result = *rbx_1
                    *(r10_2 + 8) = result
                
                if (*(r11_4 + 8) != 1)
                    *(r11_4 + 8) = 1
                    rdx_1.b = 1
                    *(r10_2 + 0x10) = 1
                
                r9_4[0xa].b |= rdx_1.b
                *(r8_1 + 0x90) |= rdx_1.b
                *(r8_1 + 0xc0) |= rdx_1.b
        else if (rcx == 1)
            uint64_t rax = zx.q(rdx_1[1].b)
            uint64_t r11_1 = zx.q(*rdx_1)
            rdx_1.b = 0
            r8_1 = *(arg1 + 0x48)
            int64_t* r9_2 = rax * 0x58 + *(r8_1 + 0x98)
            void* r10_1 = *((zx.q(r11_1.d) << 6) + *r9_2 + 0x28)
            
            if (data_1439c7a08 s> 1)
                result = arg2[2]
                bool cond:3_1 = *(r10_1 + 8) != result
                *(r10_1 + 8) = result
                rcx_2.b = cond:3_1
                cond:4_1 = *(r10_1 + 0x10) != 4
                *(r10_1 + 0x10) = 4
                goto label_1418f0707
            
            void* r11_2 = r9_2[6] + r11_1 * 0xc
            result = zx.q(arg2[4].d)
            
            if (*(r11_2 + 4) != result.d)
                *(r11_2 + 4) = result.d
                rdx_1.b = 1
                result = arg2[2]
                *(r10_1 + 8) = result
            
            if (*(r11_2 + 8) != 4)
                *(r11_2 + 8) = 4
                rdx_1.b = 1
                *(r10_1 + 0x10) = 4
            
            r9_2[0xa].b |= rdx_1.b
            *(r8_1 + 0x90) |= rdx_1.b
            *(r8_1 + 0xc0) |= rdx_1.b
        i += 1
        rsi_1 += 4
    while (i s< *(r14 + 0x130))

return result
