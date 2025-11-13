// 函数: sub_140ba8f00
// 地址: 0x140ba8f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
char result = data_14399fa10()

if (result != 0)
    bool z_1
    
    if (0 == *(arg1 + 0x7c))
        *(arg1 + 0x7c) = 0
        z_1 = true
    else
        *(arg1 + 0x7c)
        z_1 = false
    
    if (not(z_1))
        int32_t rax_1 = 0
        
        if (0 == *(arg1 + 0x7c))
            *(arg1 + 0x7c) = 0
        else
            rax_1 = *(arg1 + 0x7c)
        
        sub_140af98a0("Unknown", 0x1b1b, 
            Cannot Flush Async Loading while async loading is suspended (%d)", zx.q(rax_1))
        sub_140afbb40()
    
    if (rbp.d != 0xffffffff)
        result = sub_140b9e3c0(arg1 - 8, rbp.d)
    
    if (rbp.d == 0xffffffff || result != 0)
        sub_140599090(&data_14399fac0)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        int32_t* rdi_1 = nullptr
        int128_t zmm7
        zmm7.q = float.d(performanceCount)
        zmm7.q = zmm7.q f* data_143d796f8
        
        if (rbp.d != 0xffffffff)
            int32_t* rax_2 = j_sub_140a82f30(0x58)
            rdi_1 = rax_2
            
            if (rax_2 == 0)
                rdi_1 = nullptr
            else
                *rax_2 = rbp.d
                void* rcx_2 = &rax_2[6]
                *(rax_2 + 8) = 0
                *(rax_2 + 0x10) = 0
                *(rcx_2 + 0x10) = 0
                *(rcx_2 + 0x18) = 0
                *(rcx_2 + 0x1c) = 0x80
                void* rax_3 = *(rcx_2 + 0x10)
                
                if (rax_3 != 0)
                    rcx_2 = rax_3
                
                *rcx_2 = 0
                *(rcx_2 + 8) = 0
                rdi_1[0xe] = 0xffffffff
                rdi_1[0xf] = 0
                *(rdi_1 + 0x48) = 0
                rdi_1[0x14] = 0
            
            void var_58
            sub_140b99ec0(&var_58, nullptr)
        
        if (data_14399fa10() != 0)
            char i
            
            do
                zmm7 = sub_140bbbde0(arg1 - 8, 0, 0, zx.o(0), rdi_1)
                
                if (rbp.d != 0xffffffff)
                    EnterCriticalSection(arg1 + 0x288)
                    int32_t rbx_1
                    
                    if (*(arg1 + 0x240) != *(arg1 + 0x26c))
                        void* r8_1 = arg1 + 0x270
                        void* rcx_6 = *(r8_1 + 8)
                        
                        if (rcx_6 != 0)
                            r8_1 = rcx_6
                        
                        rbx_1 = *(r8_1 + (((sx.q(*(arg1 + 0x280)) - 1) & rbp) << 2))
                    
                    if (*(arg1 + 0x240) == *(arg1 + 0x26c) || rbx_1 == 0xffffffff)
                    label_140ba90d5:
                        rbx_1 = -1
                    else
                        int64_t rdx_4 = *(arg1 + 0x238)
                        
                        while (true)
                            int64_t rcx_7 = sx.q(rbx_1) * 3
                            
                            if (*(rdx_4 + (rcx_7 << 2)) == rbp.d)
                                break
                            
                            rbx_1 = *(rdx_4 + (rcx_7 << 2) + 4)
                            
                            if (rbx_1 == 0xffffffff)
                                goto label_140ba90d5
                    
                    if (arg1 != -0x288)
                        LeaveCriticalSection(arg1 + 0x288)
                    
                    if (rbx_1 == 0xffffffff)
                        break
                
                if (data_143e1a340 != 0)
                    float zmm6_1
                    zmm6_1, zmm7 = sub_140a7ddb0(sub_140a753a0(), 0)
                    sub_140b732d0(zmm6_1)
                
                i = data_14399fa10()
            while (i != 0)
        
        if (rdi_1 != 0)
            rdi_1[0x14] = 0
            int64_t rcx_10 = *(rdi_1 + 0x48)
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            rdi_1[4] = 0
            
            if (rdi_1[5] != 0)
                sub_1405a5410(&rdi_1[2], 0)
            
            rdi_1[0xe] = 0xffffffff
            rdi_1[0xf] = 0
            sub_14059a8e0(&rdi_1[6], 0)
            int64_t rcx_13 = *(rdi_1 + 0x28)
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            int64_t rcx_14 = *(rdi_1 + 8)
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            j_sub_140a74f90(rdi_1)
        
        int64_t performanceCount_1
        result = QueryPerformanceCounter(&performanceCount_1)
        double zmm0_1 = data_143e1a8c8
        int64_t zmm1_1 = float.d(performanceCount_1)
        data_143e1a8d0 += 1
        data_143e1a8c8 = zmm0_1 f+ zmm1_1 f* data_143d796f8 f- zmm7.q

return result
