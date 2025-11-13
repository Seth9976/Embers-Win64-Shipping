// 函数: sub_140d1aab0
// 地址: 0x140d1aab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d214f0()
int64_t* rcx_4

if (data_1439aac98 == data_1439aacc4)
label_140d1ab3e:
    rcx_4 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg1.d) + arg1:4.d
    void* r8_1 = &data_1439aacc8
    void* rcx_1 = data_1439aacd0
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(data_1439aacd8) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140d1ab3e_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = sx.q(rax_4) * 0x70 + data_1439aac90
            
            if (*rcx_4 == arg1)
                break
            
            rax_4 = rcx_4[0xd].d
            
            if (rax_4 == 0xffffffff)
                goto label_140d1ab3e_2
        
        if (rax_4 == 0xffffffff)
        label_140d1ab3e_2:
            rcx_4 = nullptr

void* rax_5 = &rcx_4[1]

if (rcx_4 == 0)
    rax_5 = nullptr

if (rax_5 == 0)
    sub_140d215d0()
    void* const rcx_10
    
    if (data_1439aabf8 == data_1439aac24)
    label_140d1abe1:
        rcx_10 = nullptr
    else
        int32_t rax_8 = sub_140b5ead0(arg1.d) + arg1:4.d
        void* r8_3 = &data_1439aac28
        void* rcx_8 = data_1439aac30
        
        if (rcx_8 != 0)
            r8_3 = rcx_8
        
        int32_t rax_10 = *(r8_3 + (((sx.q(data_1439aac38) - 1) & sx.q(rax_8)) << 2))
        
        if (rax_10 == 0xffffffff)
        label_140d1abe1_1:
            rcx_10 = nullptr
        else
            int64_t r8_4 = data_1439aabf0
            
            while (true)
                int64_t rdx_6 = sx.q(rax_10) * 3
                rcx_10 = r8_4 + (rdx_6 << 3)
                
                if (*(r8_4 + (rdx_6 << 3)) == arg1)
                    break
                
                rax_10 = *(rcx_10 + 0x10)
                
                if (rax_10 == 0xffffffff)
                    goto label_140d1abe1_2
            
            if (rax_10 == 0xffffffff)
            label_140d1abe1_2:
                rcx_10 = nullptr
    
    void* rax_11 = rcx_10 + 8
    
    if (rcx_10 == 0)
        rax_11 = nullptr
    
    if (rax_11 != 0)
        return (*rax_11)(rcx_10)
    
    sub_140d21560()
    
    if (data_1439aac48 == data_1439aac74)
    label_140d1ac60:
        rcx_10 = nullptr
    else
        int32_t rax_13 = sub_140b5ead0(arg1.d) + arg1:4.d
        void* r8_5 = &data_1439aac78
        void* rcx_13 = data_1439aac80
        
        if (rcx_13 != 0)
            r8_5 = rcx_13
        
        int32_t rax_15 = *(r8_5 + (((sx.q(data_1439aac88) - 1) & sx.q(rax_13)) << 2))
        
        if (rax_15 == 0xffffffff)
        label_140d1ac60_1:
            rcx_10 = nullptr
        else
            int64_t r8_6 = data_1439aac40
            
            while (true)
                int64_t rdx_10 = sx.q(rax_15) * 3
                rcx_10 = r8_6 + (rdx_10 << 3)
                
                if (*(r8_6 + (rdx_10 << 3)) == arg1)
                    break
                
                rax_15 = *(rcx_10 + 0x10)
                
                if (rax_15 == 0xffffffff)
                    goto label_140d1ac60_2
            
            if (rax_15 == 0xffffffff)
            label_140d1ac60_2:
                rcx_10 = nullptr
    
    rax_11 = rcx_10 + 8
    
    if (rcx_10 == 0)
        rax_11 = nullptr
    
    if (rax_11 != 0)
        return (*rax_11)(rcx_10)
else
    if (arg2 == 1)
        void* result = (*rax_5)()
        sub_140cb0360(result, 0)
        return result
    
    if (arg2 == 0)
        return (*(rax_5 + 8))()

return nullptr
