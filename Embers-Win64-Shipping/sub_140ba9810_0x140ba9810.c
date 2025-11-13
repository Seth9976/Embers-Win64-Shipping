// 函数: sub_140ba9810
// 地址: 0x140ba9810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = 0xbf800000
EnterCriticalSection(arg1 + 0x210)
int64_t rbx = *arg2

if (*(arg1 + 0x1b8) != *(arg1 + 0x1e4))
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x1e8
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0x1f8)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x1b0)
        
        do
            int64_t i_3 = sx.q(i)
            int64_t rdx_3 = i_3 * 3
            
            if (*(r8_2 + (rdx_3 << 3)) == rbx)
                if (i != 0xffffffff)
                    void* rax_5 = r8_2 + i_3 * 0x18
                    
                    if (rax_5 != 0)
                        void* rax_6 = *(rax_5 + 8)
                        
                        if (rax_6 != 0)
                            zmm6 = *(rax_6 + 0xf0)
                
                break
            
            i = *(r8_2 + (rdx_3 << 3) + 0x10)
        while (i != 0xffffffff)

if (arg1 != -0x210)
    LeaveCriticalSection(arg1 + 0x210)

if (not(zmm6.d f>= 0f))
    EnterCriticalSection(arg1 + 0xe0)
    int64_t rbx_1 = *arg2
    
    if (*(arg1 + 0x98) != *(arg1 + 0xc4))
        int32_t rax_9 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* r8_3 = arg1 + 0xc8
        void* rcx_6 = *(r8_3 + 8)
        
        if (rcx_6 != 0)
            r8_3 = rcx_6
        
        int32_t i_1 = *(r8_3 + (((sx.q(*(arg1 + 0xd8)) - 1) & sx.q(rax_9)) << 2))
        
        if (i_1 != 0xffffffff)
            int64_t r8_4 = *(arg1 + 0x90)
            
            do
                int64_t i_4 = sx.q(i_1)
                int64_t rdx_7 = i_4 * 3
                
                if (*(r8_4 + (rdx_7 << 3)) == rbx_1)
                    if (i_1 != 0xffffffff)
                        void* rax_12 = r8_4 + i_4 * 0x18
                        
                        if (rax_12 != 0)
                            void* rax_13 = *(rax_12 + 8)
                            
                            if (rax_13 != 0)
                                zmm6 = *(rax_13 + 0xf0)
                    
                    break
                
                i_1 = *(r8_4 + (rdx_7 << 3) + 0x10)
            while (i_1 != 0xffffffff)
    
    if (arg1 != -0xe0)
        LeaveCriticalSection(arg1 + 0xe0)
    
    if (not(zmm6.d f>= 0f))
        int64_t rbx_2 = *arg2
        
        if (*(arg1 + 0x130) != *(arg1 + 0x15c))
            int32_t rax_16 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
            void* r8_5 = arg1 + 0x160
            void* rcx_9 = *(r8_5 + 8)
            
            if (rcx_9 != 0)
                r8_5 = rcx_9
            
            int32_t i_2 = *(r8_5 + (((sx.q(*(arg1 + 0x170)) - 1) & sx.q(rax_16)) << 2))
            
            if (i_2 != 0xffffffff)
                int64_t r8_6 = *(arg1 + 0x128)
                
                do
                    int64_t i_5 = sx.q(i_2)
                    int64_t rdx_11 = i_5 * 3
                    
                    if (*(r8_6 + (rdx_11 << 3)) == rbx_2)
                        if (i_2 != 0xffffffff)
                            void* rax_19 = r8_6 + i_5 * 0x18
                            
                            if (rax_19 != 0)
                                void* rax_20 = *(rax_19 + 8)
                                
                                if (rax_20 != 0)
                                    zmm6 = *(rax_20 + 0xf0)
                        
                        break
                    
                    i_2 = *(r8_6 + (rdx_11 << 3) + 0x10)
                while (i_2 != 0xffffffff)

int512_t result
result.o = zmm6
return result
