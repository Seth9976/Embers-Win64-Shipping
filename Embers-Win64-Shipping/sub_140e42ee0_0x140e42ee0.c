// 函数: sub_140e42ee0
// 地址: 0x140e42ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140e3cbd0(arg1, 0x10, arg2)

if (result u< 2)
    sub_140e43530(arg1, 0xffffff03)
    noreturn

int32_t r13_1 = result - 2

if (result != 2)
    int32_t temp1_1
    
    do
        int32_t rcx = *(arg1 + 0x24f4)
        int32_t rdi_1 = *(arg1 + 0x24f8)
        uint32_t r15_2 = rdi_1 u>> 0x18
        *(arg1 + 0x24f4) = rcx - 8
        int32_t rdi_7
        
        if (rcx - 8 s> 0)
            rdi_7 = rdi_1 << 8
        else
            *(arg1 + 0x24f8) = rdi_1 << rcx.b
            int32_t rax_1 = sub_140e3cd90(arg1, arg2)
            int32_t rax_2 = sub_140e3cd90(arg1, arg2)
            int32_t rcx_3 = *(arg1 + 0x24f4)
            *(arg1 + 0x24f4) = rcx_3 + 0x10
            rdi_7 = (rax_1 << 8 | (*(arg1 + 0x24f8) & 0xffff0000) | rax_2) << (neg.d(rcx_3)).b
        
        *(arg1 + 0x24f8) = rdi_7
        uint64_t rax_4 = zx.q(r15_2) & 0xf
        
        if (rax_4.d u>= 4)
            sub_140e43530(arg1, 0xffffff04)
            noreturn
        
        void* r12_1 = arg1 + (rax_4 << 3)
        
        if (*(r12_1 + 0x1a8) == 0)
            *(r12_1 + 0x1a8) = sub_140e34940(arg1, 0x80, 0)
        
        for (int16_t* i = nullptr; i s< 0x80; i = &i[1])
            int32_t rcx_6 = *(arg1 + 0x24f4)
            int32_t rsi_1 = *(arg1 + 0x24f8)
            uint32_t rdi_9 = rsi_1 u>> 0x18
            *(arg1 + 0x24f4) = rcx_6 - 8
            int32_t rsi_7
            
            if (rcx_6 - 8 s> 0)
                rsi_7 = rsi_1 << 8
            else
                *(arg1 + 0x24f8) = rsi_1 << rcx_6.b
                int32_t rax_7 = sub_140e3cd90(arg1, arg2)
                int32_t rax_8 = sub_140e3cd90(arg1, arg2)
                int32_t rcx_9 = *(arg1 + 0x24f4)
                *(arg1 + 0x24f4) = rcx_9 + 0x10
                rsi_7 = (rax_7 << 8 | (*(arg1 + 0x24f8) & 0xffff0000) | rax_8) << (neg.d(rcx_9)).b
            
            *(arg1 + 0x24f8) = rsi_7
            
            if (r15_2 u>= 0x10)
                int32_t rcx_11 = *(arg1 + 0x24f4)
                *(arg1 + 0x24f4) = rcx_11 - 8
                int32_t rsi_13
                
                if (rcx_11 - 8 s> 0)
                    rsi_13 = rsi_7 << 8
                else
                    *(arg1 + 0x24f8) = rsi_7 << rcx_11.b
                    int32_t rax_10 = sub_140e3cd90(arg1, arg2)
                    int32_t rax_11 = sub_140e3cd90(arg1, arg2)
                    int32_t rcx_14 = *(arg1 + 0x24f4)
                    *(arg1 + 0x24f4) = rcx_14 + 0x10
                    rsi_13 = (rax_10 << 8 | (*(arg1 + 0x24f8) & 0xffff0000) | rax_11)
                        << (neg.d(rcx_14)).b
                
                rdi_9 = (rdi_9 << 8) + (rsi_7 u>> 0x18)
                *(arg1 + 0x24f8) = rsi_13
            
            *(i + *(r12_1 + 0x1a8)) = rdi_9.w
        
        result = 0x81
        
        if (r15_2 u< 0x10)
            result = 0x41
        
        if (r13_1 u< result)
            sub_140e43530(arg1, 0xffffff13)
            noreturn
        
        temp1_1 = r13_1
        r13_1 -= result
    while (temp1_1 != result)

return result
