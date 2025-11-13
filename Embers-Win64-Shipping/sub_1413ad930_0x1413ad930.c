// 函数: sub_1413ad930
// 地址: 0x1413ad930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg1 + 0x20))
uint64_t result

if (r10.d == 0)
    result = *(arg1 + 8)
    
    if ((*(result + 0x3a) & 0x40) != 0)
        void* r9_3 = *(arg1 + 0xf0)
        void* const rcx_11
        
        if (*(r9_3 + 0x1d10) == *(r9_3 + 0x1d3c))
        label_1413adb00:
            rcx_11 = nullptr
        else
            int64_t r10_1 = sx.q(*(arg1 + 0x10))
            void* r8_5 = r9_3 + 0x1d40
            void* rdx_7 = *(r8_5 + 8)
            
            if (rdx_7 != 0)
                r8_5 = rdx_7
            
            int32_t rax_6 = *(r8_5 + (((sx.q(*(r9_3 + 0x1d50)) - 1) & r10_1) << 2))
            
            if (rax_6 == 0xffffffff)
            label_1413adb00_1:
                rcx_11 = nullptr
            else
                int64_t r8_6 = *(r9_3 + 0x1d08)
                
                while (true)
                    int64_t rdx_8 = sx.q(rax_6) * 5
                    rcx_11 = r8_6 + (rdx_8 << 3)
                    
                    if (*(r8_6 + (rdx_8 << 3)) == r10_1.d)
                        break
                    
                    rax_6 = *(rcx_11 + 0x20)
                    
                    if (rax_6 == 0xffffffff)
                        goto label_1413adb00_2
                
                if (rax_6 == 0xffffffff)
                label_1413adb00_2:
                    rcx_11 = nullptr
        
        result = rcx_11 + 8
        
        if (rcx_11 == 0)
            result = 0
        
        if (result != 0)
            *result = 0
            
            if (*(result + 0x10) == 0)
                return sub_1413a3450(*(arg1 + 0xf0) + 0x1d08, arg1 + 0x20) __tailcall
else
    void* r9_1 = *(arg1 + 0xf0)
    int32_t i = 0
    result = zx.q(*(r9_1 + 0x1d10))
    void* const rsi_1
    
    if (result.d == *(r9_1 + 0x1d3c))
    label_1413ad9c0:
        rsi_1 = nullptr
    else
        void* r8_1 = r9_1 + 0x1d40
        void* rcx = *(r8_1 + 8)
        
        if (rcx != 0)
            r8_1 = rcx
        
        result = zx.q(*(r8_1 + (((sx.q(*(r9_1 + 0x1d50)) - 1) & r10) << 2)))
        
        if (result.d == 0xffffffff)
        label_1413ad9c0_1:
            rsi_1 = nullptr
        else
            int64_t r8_2 = *(r9_1 + 0x1d08)
            
            while (true)
                int64_t rdx_4 = sx.q(result.d) * 5
                rsi_1 = r8_2 + (rdx_4 << 3)
                
                if (*(r8_2 + (rdx_4 << 3)) == r10.d)
                    break
                
                result = zx.q(*(rsi_1 + 0x20))
                
                if (result.d == 0xffffffff)
                    goto label_1413ad9c0_2
            
            if (result.d == 0xffffffff)
            label_1413ad9c0_2:
                rsi_1 = nullptr
    
    int32_t result_1 = *(rsi_1 + 0x18)
    
    if (result_1 s> 0)
        int64_t rdi_1 = 0
        
        do
            int64_t* r9_2 = *(rsi_1 + 0x10)
            result = zx.q(result_1)
            
            if (*(r9_2 + rdi_1) == arg1)
                int32_t rax_1 = result.d - i - 1
                
                if (rax_1 s>= 1)
                    rax_1 = 1
                
                if (rax_1 != 0)
                    memcpy(&r9_2[sx.q(i)], &r9_2[sx.q(result_1 - rax_1)], rax_1 << 3)
                    result_1 = *(rsi_1 + 0x18)
                
                *(rsi_1 + 0x18) = result_1 - 1
                sub_1405c53d0(rsi_1 + 0x10)
                result = zx.q(*(rsi_1 + 0x18))
                i -= 1
                rdi_1 -= 8
            
            i += 1
            rdi_1 += 8
            result_1 = result.d
        while (i s< result.d)
    
    if (*(rsi_1 + 0x18) == 0 && *(rsi_1 + 8) == 0)
        return sub_1413a3450(*(arg1 + 0xf0) + 0x1d08, arg1 + 0x20)

return result
