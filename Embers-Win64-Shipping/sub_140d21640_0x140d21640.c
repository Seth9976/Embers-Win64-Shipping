// 函数: sub_140d21640
// 地址: 0x140d21640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
sub_140d214f0()
int64_t* rcx_4

if (data_1439aac98 == data_1439aacc4)
label_140d216ce:
    rcx_4 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = &data_1439aacc8
    void* rcx_1 = data_1439aacd0
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(data_1439aacd8) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140d216ce_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = sx.q(rax_4) * 0x70 + data_1439aac90
            
            if (*rcx_4 == arg2)
                break
            
            rax_4 = rcx_4[0xd].d
            
            if (rax_4 == 0xffffffff)
                goto label_140d216ce_2
        
        if (rax_4 == 0xffffffff)
        label_140d216ce_2:
            rcx_4 = nullptr

void* rax_5 = &rcx_4[1]

if (rcx_4 == 0)
    rax_5 = nullptr

if (rax_5 == 0)
    sub_140d215d0()
    void* const rcx_9
    
    if (data_1439aabf8 == data_1439aac24)
    label_140d21760:
        rcx_9 = nullptr
    else
        int32_t rax_8 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8_3 = &data_1439aac28
        void* rcx_7 = data_1439aac30
        
        if (rcx_7 != 0)
            r8_3 = rcx_7
        
        int32_t rax_10 = *(r8_3 + (((sx.q(data_1439aac38) - 1) & sx.q(rax_8)) << 2))
        
        if (rax_10 == 0xffffffff)
        label_140d21760_1:
            rcx_9 = nullptr
        else
            int64_t r8_4 = data_1439aabf0
            
            while (true)
                int64_t rdx_7 = sx.q(rax_10) * 3
                rcx_9 = r8_4 + (rdx_7 << 3)
                
                if (*(r8_4 + (rdx_7 << 3)) == arg2)
                    break
                
                rax_10 = *(rcx_9 + 0x10)
                
                if (rax_10 == 0xffffffff)
                    goto label_140d21760_2
            
            if (rax_10 == 0xffffffff)
            label_140d21760_2:
                rcx_9 = nullptr
    
    void* rax_11 = rcx_9 + 8
    
    if (rcx_9 == 0)
        rax_11 = nullptr
    
    if (rax_11 == 0)
        sub_140d21560()
        void* const rcx_14
        
        if (data_1439aac48 == data_1439aac74)
        label_140d217f0:
            rcx_14 = nullptr
        else
            int32_t rax_13 = sub_140b5ead0(arg2.d) + arg2:4.d
            void* r8_5 = &data_1439aac78
            void* rcx_12 = data_1439aac80
            
            if (rcx_12 != 0)
                r8_5 = rcx_12
            
            int32_t rax_15 = *(r8_5 + (((sx.q(data_1439aac88) - 1) & sx.q(rax_13)) << 2))
            
            if (rax_15 == 0xffffffff)
            label_140d217f0_1:
                rcx_14 = nullptr
            else
                int64_t r8_6 = data_1439aac40
                
                while (true)
                    int64_t rdx_11 = sx.q(rax_15) * 3
                    rcx_14 = r8_6 + (rdx_11 << 3)
                    
                    if (*(r8_6 + (rdx_11 << 3)) == arg2)
                        break
                    
                    rax_15 = *(rcx_14 + 0x10)
                    
                    if (rax_15 == 0xffffffff)
                        goto label_140d217f0_2
                
                if (rax_15 == 0xffffffff)
                label_140d217f0_2:
                    rcx_14 = nullptr
        
        void* rax_16 = rcx_14 + 8
        
        if (rcx_14 == 0)
            rax_16 = nullptr
        
        if (rax_16 != 0)
            *arg1 = *(sub_140bdf730() + 0x18)
    else
        *arg1 = *(sub_140bdfe30() + 0x18)
else
    *arg1 = *(sub_140bdf670() + 0x18)

return arg1
