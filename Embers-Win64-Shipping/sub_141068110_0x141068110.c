// 函数: sub_141068110
// 地址: 0x141068110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0 = sub_14105b290(arg1 + 0x68, arg2, arg3)
EnterCriticalSection(arg1 + 0x30)
int64_t* rsi = *(arg1 + 0x58)
int64_t rdi = 0
uint64_t result = &rsi[sx.q(*(arg1 + 0x60))]
uint64_t r14_1 = sx.q(*(arg1 + 0x60)) << 3 u>> 3

if (rsi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        result = *rsi
        void* const rcx_2 = result - 0x88
        
        if (result == 0)
            rcx_2 = nullptr
        
        if (*(rcx_2 + 0xc) == 0)
            result = nullptr
            
            if (0 == *(rcx_2 + 8))
                *(rcx_2 + 8) = 0
            else
                result = zx.q(*(rcx_2 + 8))
            
            if (result.d s> 0)
                uint64_t r9_1 = zx.q(*(rcx_2 + 0xa4))
                
                if (*(rcx_2 + 0x64) == 1)
                    *(rcx_2 + 0x70) = divu.dp.q(0:(*(arg1 + 0xb8)), r9_1)
                
                result, zmm0 = sub_141025d40(rcx_2, rcx_2 + 0x60, arg1 + 0x68, r9_1.d, 0)
        
        rsi = &rsi[1]
        rdi += 1
    while (rdi != r14_1)

if (arg1 != -0x30)
    result = LeaveCriticalSection(arg1 + 0x30)

if (data_1439c7a34 u> 1)
    for (void* i = *(arg1 + 0xd8); i != 0; i = *(i + 0xd8))
        zmm0 = sub_141059540(*(i + 0x28), i + 0x68, arg1 + 0x68, zmm0)
        EnterCriticalSection(i + 0x30)
        int64_t rdi_1 = 0
        uint64_t* rsi_1 = *(i + 0x58)
        result = &rsi_1[sx.q(*(i + 0x60))]
        uint64_t r14_3 = sx.q(*(i + 0x60)) << 3 u>> 3
        
        if (rsi_1 u> result)
            r14_3 = 0
        
        if (r14_3 != 0)
            do
                result = *rsi_1
                void* rcx_6 = result - 0x88
                
                if (result == 0)
                    rcx_6 = nullptr
                
                if (*(rcx_6 + 0xc) == 0)
                    result = 0
                    
                    if (0 == *(rcx_6 + 8))
                        *(rcx_6 + 8) = 0
                    else
                        result = zx.q(*(rcx_6 + 8))
                    
                    if (result.d s> 0)
                        uint64_t r9_2 = zx.q(*(rcx_6 + 0xa4))
                        
                        if (*(rcx_6 + 0x64) == 1)
                            *(rcx_6 + 0x70) = divu.dp.q(0:(*(i + 0xb8)), r9_2)
                        
                        result, zmm0 = sub_141025d40(rcx_6, rcx_6 + 0x60, i + 0x68, r9_2.d, 0)
                
                rsi_1 = &rsi_1[1]
                rdi_1 += 1
            while (rdi_1 != r14_3)
        
        if (i != -0x30)
            result = LeaveCriticalSection(i + 0x30)

return result
