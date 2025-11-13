// 函数: sub_1425d6e20
// 地址: 0x1425d6e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg2 + 0x20)
int64_t result = sx.q(*(arg2 + 0x28))

for (void* rbp_1 = result * 0x1f0 + i; i != rbp_1; i += 0x1f0)
    void* rsi_1 = *i
    int64_t rbx_1 = *(sub_1425e1410() + 0x18)
    void* const rcx_3
    
    if (*(rsi_1 + 0x58) == *(rsi_1 + 0x84))
    label_1425d6ee0:
        rcx_3 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* r8_1 = rsi_1 + 0x88
        void* rcx_1 = *(r8_1 + 8)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        int32_t rax_5 = *(r8_1 + (((sx.q(*(rsi_1 + 0x98)) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_1425d6ee0_1:
            rcx_3 = nullptr
        else
            int64_t r8_2 = *(rsi_1 + 0x50)
            
            while (true)
                int64_t rdx_3 = sx.q(rax_5) * 3
                rcx_3 = r8_2 + (rdx_3 << 3)
                
                if (*(r8_2 + (rdx_3 << 3)) == rbx_1)
                    break
                
                rax_5 = *(rcx_3 + 0x10)
                
                if (rax_5 == 0xffffffff)
                    goto label_1425d6ee0_2
            
            if (rax_5 == 0xffffffff)
            label_1425d6ee0_2:
                rcx_3 = nullptr
    
    result = rcx_3 + 8
    
    if (rcx_3 == 0)
        result = 0
    
    if (result != 0)
        void* rsi_2 = *result
        
        if (rsi_2 != 0)
            int64_t rbx_2 = *(rsi_2 + 0x10)
            result = sub_1425e1410()
            
            if (rbx_2 == result)
                result = sub_1425d72e0(arg2, rsi_2, i)

return result
