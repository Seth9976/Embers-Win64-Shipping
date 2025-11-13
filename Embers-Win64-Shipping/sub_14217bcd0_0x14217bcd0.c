// 函数: sub_14217bcd0
// 地址: 0x14217bcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *arg2

if (result == 0 || (result.b & 1) != 0)
    int64_t* rcx = arg1[0x29]
    
    if (rcx == 0)
        result.b = 0
        return result
    
    result = (*(*rcx + 0x368))(rcx)
    
    if (result.b != 0)
        result.b = 0
        return result
    
    int32_t r10_1 = arg1[1].d
    int32_t* rcx_6
    
    if (r10_1 == *(arg1 + 0x34))
    label_14217bd6e:
        rcx_6 = nullptr
    else
        void* rdx = arg1[8]
        void* r8_1 = &arg1[7]
        int64_t r9_1 = sx.q(*arg2)
        
        if (rdx != 0)
            r8_1 = rdx
        
        result = *(r8_1 + (((sx.q(arg1[9].d) - 1) & r9_1) << 2))
        
        if (result == 0xffffffff)
        label_14217bd6e_1:
            rcx_6 = nullptr
        else
            while (true)
                rcx_6 = sx.q(result) * 0x38 + *arg1
                
                if (*rcx_6 == r9_1.d)
                    break
                
                result = rcx_6[0xc]
                
                if (result == 0xffffffff)
                    goto label_14217bd6e_2
            
            if (result == 0xffffffff)
            label_14217bd6e_2:
                rcx_6 = nullptr
    
    void* rsi_1 = &rcx_6[2]
    
    if (rcx_6 == 0)
        rsi_1 = nullptr
    
    if (rsi_1 == 0)
        result.b = 0
        return result
    
    void* rbx_1 = rsi_1
    
    while (true)
        int64_t r9_2 = sx.q(*(rbx_1 + 8))
        
        if (r9_2.d == 0)
            break
        
        int32_t* rcx_10
        
        if (r10_1 - *(arg1 + 0x34) == 0)
        label_14217bdee:
            rcx_10 = nullptr
        else
            void* rcx_7 = arg1[8]
            void* r8_3 = &arg1[7]
            
            if (rcx_7 != 0)
                r8_3 = rcx_7
            
            result = *(r8_3 + (((sx.q(arg1[9].d) - 1) & r9_2) << 2))
            
            if (result == 0xffffffff)
            label_14217bdee_1:
                rcx_10 = nullptr
            else
                while (true)
                    rcx_10 = sx.q(result) * 0x38 + *arg1
                    
                    if (*rcx_10 == r9_2.d)
                        break
                    
                    result = rcx_10[0xc]
                    
                    if (result == 0xffffffff)
                        goto label_14217bdee_2
                
                if (result == 0xffffffff)
                label_14217bdee_2:
                    rcx_10 = nullptr
        
        rbx_1 = &rcx_10[2]
        
        if (rcx_10 == 0)
            rbx_1 = nullptr
        
        if (rbx_1 == 0)
            return *(rsi_1 + 0x20) u>> 1 & 1
    
    if ((*(rbx_1 + 0x20) & 4) == 0)
        char rax_2 = j_sub_140d3e110(rbx_1)
        
        if (rax_2 != 0)
            void* rax_3
            int32_t rdx_5
            rax_3, rdx_5 = sub_140d3c6e0(rbx_1)
            result = sub_140ce0e10(sub_140d21d80(rax_3), rdx_5)
        
        if (rax_2 == 0 || result.b != 0)
            return *(rsi_1 + 0x20) u>> 1 & 1

result.b = 1
return result
