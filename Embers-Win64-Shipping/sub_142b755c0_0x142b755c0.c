// 函数: sub_142b755c0
// 地址: 0x142b755c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8_17 = *(arg1 + 0x18)
uint64_t result

if (r8_17 s< 0)
    result = zx.q(*(arg1 + 0x1c))
else
    result = zx.q(sx.d(r8_17) s>> 5)

int16_t r9 = -1
int16_t r8_1

if (arg2 u>= result.d)
    r8_1 = -1
else
    void* r8 = arg1 + 0x1a
    
    if ((r8_17.b & 2) == 0)
        r8 = *(arg1 + 0x28)
    
    r8_1 = *(r8 + (sx.q(arg2) << 1))

if (r8_1 == 0x6f || r8_1 == 0x4f)
    int16_t r8_2 = *(arg1 + 0x18)
    
    if (r8_2 s< 0)
        result = zx.q(*(arg1 + 0x1c))
    else
        result = zx.q(sx.d(r8_2) s>> 5)
    
    int16_t r8_4
    
    if (arg2 + 1 u>= result.d)
        r8_4 = -1
    else
        void* r8_3 = arg1 + 0x1a
        
        if ((r8_2.b & 2) == 0)
            r8_3 = *(arg1 + 0x28)
        
        r8_4 = *(r8_3 + (sx.q(arg2 + 1) << 1))
    
    if (r8_4 == 0x72 || r8_4 == 0x52)
        int16_t r8_5 = *(arg1 + 0x18)
        
        if (r8_5 s< 0)
            result = zx.q(*(arg1 + 0x1c))
        else
            result = zx.q(sx.d(r8_5) s>> 5)
        
        int16_t r8_7
        
        if (arg2 + 2 u>= result.d)
            r8_7 = -1
        else
            void* r8_6 = arg1 + 0x1a
            
            if ((r8_5.b & 2) == 0)
                r8_6 = *(arg1 + 0x28)
            
            r8_7 = *(r8_6 + (sx.q(arg2 + 2) << 1))
        
        if (r8_7 == 0x64 || r8_7 == 0x44)
            int16_t r8_8 = *(arg1 + 0x18)
            
            if (r8_8 s< 0)
                result = zx.q(*(arg1 + 0x1c))
            else
                result = zx.q(sx.d(r8_8) s>> 5)
            
            int16_t r8_10
            
            if (arg2 + 3 u>= result.d)
                r8_10 = -1
            else
                void* r8_9 = arg1 + 0x1a
                
                if ((r8_8.b & 2) == 0)
                    r8_9 = *(arg1 + 0x28)
                
                r8_10 = *(r8_9 + (sx.q(arg2 + 3) << 1))
            
            if (r8_10 == 0x69 || r8_10 == 0x49)
                int16_t r8_11 = *(arg1 + 0x18)
                
                if (r8_11 s< 0)
                    result = zx.q(*(arg1 + 0x1c))
                else
                    result = zx.q(sx.d(r8_11) s>> 5)
                
                int16_t r8_13
                
                if (arg2 + 4 u>= result.d)
                    r8_13 = -1
                else
                    void* r8_12 = arg1 + 0x1a
                    
                    if ((r8_11.b & 2) == 0)
                        r8_12 = *(arg1 + 0x28)
                    
                    r8_13 = *(r8_12 + (sx.q(arg2 + 4) << 1))
                
                if (r8_13 == 0x6e || r8_13 == 0x4e)
                    int16_t r8_14 = *(arg1 + 0x18)
                    
                    if (r8_14 s< 0)
                        result = zx.q(*(arg1 + 0x1c))
                    else
                        result = zx.q(sx.d(r8_14) s>> 5)
                    
                    if (arg2 + 5 u< result.d)
                        void* r8_15 = arg1 + 0x1a
                        
                        if ((r8_14.b & 2) == 0)
                            r8_15 = *(arg1 + 0x28)
                        
                        r9 = *(r8_15 + (sx.q(arg2 + 5) << 1))
                    
                    if (r9 == 0x61 || r9 == 0x41)
                        int16_t r8_16 = *(arg1 + 0x18)
                        
                        if (r8_16 s< 0)
                            result = zx.q(*(arg1 + 0x1c))
                        else
                            result = zx.q(sx.d(r8_16) s>> 5)
                        
                        if (arg2 + 6 u< result.d)
                            void* rcx
                            
                            if ((r8_16.b & 2) == 0)
                                rcx = *(arg1 + 0x28)
                            else
                                rcx = arg1 + 0x1a
                            
                            if ((0xffdf & (*(rcx + (sx.q(arg2 + 6) << 1)) - 0x4c)) == 0)
                                result.b = 1
                                return 0xff01

result.b = 0
return result
