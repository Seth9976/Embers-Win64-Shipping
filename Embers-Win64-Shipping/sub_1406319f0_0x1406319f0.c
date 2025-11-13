// 函数: sub_1406319f0
// 地址: 0x1406319f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
int32_t rax_4
int64_t rsi_1

if (*(arg1 + 0x248) != *(arg1 + 0x274))
    void* r11_1 = arg1 + 0x278
    void* r10_1 = *(r11_1 + 8)
    rsi_1 = sx.q(arg3)
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    rax_4 = *(r11_1 + (((sx.q(*(arg1 + 0x288)) - 1) & rsi_1) << 2))

int32_t rax_6
int64_t zmm0

if (*(arg1 + 0x248) == *(arg1 + 0x274) || rax_4 == 0xffffffff)
label_140631a66:
    zmm0 = data_143dbb1f8.q
    rax_6 = data_143dbb200
else
    int64_t rdx = *(arg1 + 0x240)
    
    while (true)
        int64_t rax_5 = sx.q(rax_4) * 3
        
        if (*(rdx + (rax_5 << 3)) == arg3)
            *arg4 = 1
            int32_t rax_10
            
            if (*(arg1 + 0x248) != *(arg1 + 0x274))
                void* rdx_1 = arg1 + 0x278
                void* rax_9 = *(rdx_1 + 8)
                
                if (rax_9 != 0)
                    rdx_1 = rax_9
                
                rax_10 = *(rdx_1 + (((sx.q(*(arg1 + 0x288)) - 1) & rsi_1) << 2))
            
            void* const rcx_5
            
            if (*(arg1 + 0x248) == *(arg1 + 0x274) || rax_10 == 0xffffffff)
            label_140631ae9:
                rcx_5 = nullptr
            else
                int64_t rdx_2 = *(arg1 + 0x240)
                
                while (true)
                    int64_t rax_11 = sx.q(rax_10) * 3
                    rcx_5 = rdx_2 + (rax_11 << 3)
                    
                    if (*(rdx_2 + (rax_11 << 3)) == arg3)
                        break
                    
                    rax_10 = *(rcx_5 + 0x10)
                    
                    if (rax_10 == 0xffffffff)
                        goto label_140631ae9
            
            zmm0 = *(rcx_5 + 4)
            rax_6 = *(rcx_5 + 0xc)
            break
        
        rax_4 = *(rdx + (rax_5 << 3) + 0x10)
        
        if (rax_4 == 0xffffffff)
            goto label_140631a66

*arg2 = zmm0
arg2[1].d = rax_6
return arg2
