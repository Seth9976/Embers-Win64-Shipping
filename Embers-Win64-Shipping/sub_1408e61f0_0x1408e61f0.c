// 函数: sub_1408e61f0
// 地址: 0x1408e61f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int32_t arg_8
sub_140865c40(arg1 + 0x18, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t result = 0
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x18) + rax * 0x18

int64_t* rsi = rcx_1 + 8

if (rcx_1 == 0)
    rsi = nullptr

if (rsi == 0)
    return 0

void* rsi_1 = *rsi
EnterCriticalSection(rsi_1 + 0xc0)
sub_1408e6bf0(rsi_1)
int32_t* rcx_4 = *(rsi_1 + 0x18)
void* rdx_2 = &rcx_4[sx.q(*(rsi_1 + 0x20))]

if (rcx_4 == rdx_2)
label_1408e6285:
    int32_t* rcx_5 = *(rsi_1 + 0x78)
    void* rdx_3 = &rcx_5[sx.q(*(rsi_1 + 0x80))]
    
    if (rcx_5 == rdx_3)
    label_1408e62ad:
        int32_t* rcx_6 = *(rsi_1 + 0x88)
        void* rdx_4 = &rcx_6[sx.q(*(rsi_1 + 0x90))]
        
        if (rcx_6 != rdx_4)
            while (*rcx_6 != rdi.d)
                rcx_6 = &rcx_6[1]
                
                if (rcx_6 == rdx_4)
                    break
    else
        while (*rcx_5 != rdi.d)
            rcx_5 = &rcx_5[1]
            
            if (rcx_5 == rdx_3)
                goto label_1408e62ad
else
    while (true)
        if (*rcx_4 == rdi.d)
            void* const rcx_10
            
            if (*(rsi_1 + 0x30) == *(rsi_1 + 0x5c))
            label_1408e6340:
                rcx_10 = nullptr
            else
                void* rcx_8 = *(rsi_1 + 0x68)
                void* r8_1 = rsi_1 + 0x60
                
                if (rcx_8 != 0)
                    r8_1 = rcx_8
                
                int32_t rax_6 = *(r8_1 + (((sx.q(*(rsi_1 + 0x70)) - 1) & rdi) << 2))
                
                if (rax_6 == 0xffffffff)
                label_1408e6340_1:
                    rcx_10 = nullptr
                else
                    int64_t r8_2 = *(rsi_1 + 0x28)
                    
                    while (true)
                        int64_t rdx_8 = sx.q(rax_6) * 5
                        rcx_10 = r8_2 + (rdx_8 << 3)
                        
                        if (*(r8_2 + (rdx_8 << 3)) == rdi.d)
                            break
                        
                        rax_6 = *(rcx_10 + 0x20)
                        
                        if (rax_6 == 0xffffffff)
                            goto label_1408e6340_2
                    
                    if (rax_6 == 0xffffffff)
                    label_1408e6340_2:
                        rcx_10 = nullptr
            
            void* rdx_9 = rcx_10 + 8
            
            if (rcx_10 == 0)
                rdx_9 = nullptr
            
            if (arg4 != 0)
                *arg4 = *(rdx_9 + 8)
            
            *(rdx_9 + 0xc) += 1
            result = *rdx_9
            break
        
        rcx_4 = &rcx_4[1]
        
        if (rcx_4 == rdx_2)
            goto label_1408e6285

if (rsi_1 != -0xc0)
    LeaveCriticalSection(rsi_1 + 0xc0)

return result
