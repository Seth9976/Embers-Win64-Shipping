// 函数: sub_141e22620
// 地址: 0x141e22620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi_1

if (arg1 == 0)
    rsi_1 = nullptr
else
    int64_t* rax_2 = (*(*arg1 + 0x90))()
    void* const rcx_4
    
    if (rax_2[1].d == *(rax_2 + 0x34))
        rcx_4 = nullptr
    else
        int32_t rax_4 = sub_140b5ead0(arg3.d) + arg3:4.d
        void* r8 = &rax_2[7]
        void* rcx_2 = *(r8 + 8)
        
        if (rcx_2 != 0)
            r8 = rcx_2
        
        int32_t rax_6 = *(r8 + (((sx.q(rax_2[9].d) - 1) & sx.q(rax_4)) << 2))
        
        if (rax_6 == 0xffffffff)
            rcx_4 = nullptr
        else
            int64_t r8_1 = *rax_2
            
            while (true)
                int64_t rdx_3 = sx.q(rax_6) * 3
                rcx_4 = r8_1 + (rdx_3 << 3)
                
                if (*(r8_1 + (rdx_3 << 3)) == arg3)
                    break
                
                rax_6 = *(rcx_4 + 0x10)
                
                if (rax_6 == 0xffffffff)
                    rsi_1 = nullptr
                    goto label_141e226e2
            
            if (rax_6 == 0xffffffff)
                rcx_4 = nullptr
    
    rsi_1 = rcx_4 + 8
    
    if (rcx_4 == 0)
        rsi_1 = nullptr

label_141e226e2:
void* rax_13

if (arg2 == 0)
    rax_13 = nullptr
else
    int64_t* rax_8 = (*(*arg2 + 0x90))(arg2)
    void* const rcx_10
    
    if (rax_8[1].d == *(rax_8 + 0x34))
        rcx_10 = nullptr
    else
        int32_t rax_10 = sub_140b5ead0(arg3.d) + arg3:4.d
        void* r8_2 = &rax_8[7]
        void* rcx_8 = *(r8_2 + 8)
        
        if (rcx_8 != 0)
            r8_2 = rcx_8
        
        int32_t rax_12 = *(r8_2 + (((sx.q(rax_8[9].d) - 1) & sx.q(rax_10)) << 2))
        
        if (rax_12 == 0xffffffff)
            rcx_10 = nullptr
        else
            int64_t r8_3 = *rax_8
            
            while (true)
                int64_t rdx_7 = sx.q(rax_12) * 3
                rcx_10 = r8_3 + (rdx_7 << 3)
                
                if (*(r8_3 + (rdx_7 << 3)) == arg3)
                    break
                
                rax_12 = *(rcx_10 + 0x10)
                
                if (rax_12 == 0xffffffff)
                    rax_13 = nullptr
                    goto label_141e22790
            
            if (rax_12 == 0xffffffff)
                rcx_10 = nullptr
    
    rax_13 = rcx_10 + 8
    
    if (rcx_10 == 0)
        rax_13 = nullptr

label_141e22790:
int32_t zmm1

if (rsi_1 == 0)
    zmm1 = 0xbf800000
else
    zmm1 = *(rsi_1 + 4)

if (rax_13 != 0)
    int32_t zmm0 = *rax_13
    
    if (not(zmm0 f< 0f))
        if (zmm1 f< 0f)
            return zmm0
        
        return _mm_min_ss(zmm0, zmm1)

return zmm1
