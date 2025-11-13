// 函数: sub_140bc7720
// 地址: 0x140bc7720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
char result
int64_t r9
result, r9 = data_14399fa10()

if (result != 0)
    bool z_1
    
    if (0 == *(arg1 + 0x11))
        *(arg1 + 0x11) = 0
        z_1 = true
    else
        int64_t rax
        rax.b = *(arg1 + 0x11)
        z_1 = false
    
    if (not(z_1))
        sub_140af98a0("Unknown", 0x1389, 
            Cannot Flush Async Loading while async loading is suspended", r9)
        sub_140afbb40()
    
    if (rsi.d != 0xffffffff)
        result = sub_140bc43e0(arg1 - 8, rsi.d)
    
    if (rsi.d == 0xffffffff || result != 0)
        sub_140599090(&data_14399fac0)
        void performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        
        if (data_14399fa10() != 0)
            char i
            
            do
                int512_t zmm3
                zmm3.o = zx.o(0)
                int32_t var_48_1 = rsi.d
                sub_140bd1b50(arg1 - 8, 0)
                
                if (rsi.d != 0xffffffff)
                    EnterCriticalSection(arg1 + 0x1c0)
                    int32_t rbx_1
                    
                    if (*(arg1 + 0x178) != *(arg1 + 0x1a4))
                        void* r8_2 = arg1 + 0x1a8
                        void* rcx_4 = *(r8_2 + 8)
                        
                        if (rcx_4 != 0)
                            r8_2 = rcx_4
                        
                        rbx_1 = *(r8_2 + (((sx.q(*(arg1 + 0x1b8)) - 1) & rsi) << 2))
                    
                    if (*(arg1 + 0x178) == *(arg1 + 0x1a4) || rbx_1 == 0xffffffff)
                    label_140bc7845:
                        rbx_1 = -1
                    else
                        int64_t rdx_4 = *(arg1 + 0x170)
                        
                        while (true)
                            int64_t rcx_5 = sx.q(rbx_1) * 3
                            
                            if (*(rdx_4 + (rcx_5 << 2)) == rsi.d)
                                break
                            
                            rbx_1 = *(rdx_4 + (rcx_5 << 2) + 4)
                            
                            if (rbx_1 == 0xffffffff)
                                goto label_140bc7845
                    
                    if (arg1 != -0x1c0)
                        LeaveCriticalSection(arg1 + 0x1c0)
                    
                    if (rbx_1 == 0xffffffff)
                        break
                
                if (*(arg1 + 0x2d) != 0)
                    float zmm6_1
                    zmm3, zmm6_1 = sub_140a7ddb0(sub_140a753a0(), 0)
                    sub_140b732d0(zmm6_1)
                
                i = data_14399fa10()
            while (i != 0)
        
        int64_t performanceCount[0x2]
        return QueryPerformanceCounter(&performanceCount)

return result
