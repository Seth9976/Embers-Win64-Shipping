// 函数: sub_1418b50e0
// 地址: 0x1418b50e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg1 + 0x214) == 0)
    result.b = 0
else if (sub_140b5f8e0(*(arg1 + 0x214)).b == 0)
    result.b = 0
else
    int64_t rbx_1 = *(arg1 + 0x214)
    int64_t* rdx_5
    
    if (*(arg1 + 0x118) == *(arg1 + 0x144))
    label_1418b519e:
        rdx_5 = nullptr
    else
        int32_t rax_2 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* r8_1 = arg1 + 0x148
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        int32_t rax_4 = *(r8_1 + (((sx.q(*(arg1 + 0x158)) - 1) & sx.q(rax_2)) << 2))
        
        if (rax_4 == 0xffffffff)
        label_1418b519e_1:
            rdx_5 = nullptr
        else
            while (true)
                rdx_5 = (sx.q(rax_4) << 5) + *(arg1 + 0x110)
                
                if (*rdx_5 == rbx_1)
                    break
                
                rax_4 = rdx_5[3].d
                
                if (rax_4 == 0xffffffff)
                    goto label_1418b519e_2
            
            if (rax_4 == 0xffffffff)
            label_1418b519e_2:
                rdx_5 = nullptr
    
    result = &rdx_5[1]
    
    if (rdx_5 == 0)
        result = 0
    
    if (result == 0)
        result.b = 0
    else
        int64_t rbx_2 = *(arg1 + 0x214)
        *(arg1 + 0x144)
        int64_t* rdx_11
        
        if (*(arg1 + 0x118) == *(arg1 + 0x144))
        label_1418b522e:
            rdx_11 = nullptr
        else
            int32_t rax_7 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
            void* r8_3 = arg1 + 0x148
            void* rcx_4 = *(r8_3 + 8)
            
            if (rcx_4 != 0)
                r8_3 = rcx_4
            
            result = zx.q(*(r8_3 + (((sx.q(*(arg1 + 0x158)) - 1) & sx.q(rax_7)) << 2)))
            
            if (result.d == 0xffffffff)
            label_1418b522e_1:
                rdx_11 = nullptr
            else
                while (true)
                    rdx_11 = (sx.q(result.d) << 5) + *(arg1 + 0x110)
                    
                    if (*rdx_11 == rbx_2)
                        break
                    
                    result = zx.q(rdx_11[3].d)
                    
                    if (result.d == 0xffffffff)
                        goto label_1418b522e_2
                
                if (result.d == 0xffffffff)
                label_1418b522e_2:
                    rdx_11 = nullptr
        
        if (arg2 s< 0)
            result.b = 0
        else
            result = &rdx_11[2]
            
            if (rdx_11 == 0)
                result = 8
            
            if (arg2 s>= *result)
                result.b = 0
            else
                result.b = 1

return result
