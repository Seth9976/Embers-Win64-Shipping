// 函数: sub_141ea3870
// 地址: 0x141ea3870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx_5

if (arg1[1].d == *(arg1 + 0x34))
label_141ea38ee:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8 = &arg1[7]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141ea38ee_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 6) + *arg1
            
            if (*rdx_5 == arg3)
                break
            
            rax_4 = rdx_5[7].d
            
            if (rax_4 == 0xffffffff)
                goto label_141ea38ee_2
        
        if (rax_4 == 0xffffffff)
        label_141ea38ee_2:
            rdx_5 = nullptr

void* rcx_2 = &rdx_5[1]

if (rdx_5 == 0)
    rcx_2 = nullptr

int32_t rax_7

if (rcx_2 == 0)
    int64_t* rdx_11
    
    if (arg1[0xb].d == *(arg1 + 0x84))
    label_141ea398e:
        rdx_11 = nullptr
    else
        int32_t rax_10 = sub_140b5ead0(arg3.d) + arg3:4.d
        void* r8_2 = &arg1[0x11]
        void* rcx_4 = *(r8_2 + 8)
        
        if (rcx_4 != 0)
            r8_2 = rcx_4
        
        int32_t rax_12 = *(r8_2 + (((sx.q(arg1[0x13].d) - 1) & sx.q(rax_10)) << 2))
        
        if (rax_12 == 0xffffffff)
        label_141ea398e_1:
            rdx_11 = nullptr
        else
            while (true)
                rdx_11 = (sx.q(rax_12) << 6) + arg1[0xa]
                
                if (*rdx_11 == arg3)
                    break
                
                rax_12 = rdx_11[7].d
                
                if (rax_12 == 0xffffffff)
                    goto label_141ea398e_2
            
            if (rax_12 == 0xffffffff)
            label_141ea398e_2:
                rdx_11 = nullptr
    
    rcx_2 = &rdx_11[1]
    
    if (rdx_11 == 0)
        rcx_2 = nullptr
    
    if (rcx_2 != 0)
        goto label_141ea3905
    
    TEB* gsbase
    
    if (data_143cd6ff0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd6ff0)
        
        if (data_143cd6ff0 == 0xffffffff)
            sub_140a96080(&data_143cd6fd8)
            atexit(sub_142cb0d20)
            _Init_thread_footer(&data_143cd6ff0)
    
    *arg2 = data_143cd6fd8
    void* rax_16 = data_143cd6fe0
    arg2[1] = rax_16
    
    if (rax_16 != 0)
        *(rax_16 + 8) += 1
    
    rax_7 = data_143cd6fe8
else
label_141ea3905:
    *arg2 = *(rcx_2 + 0x10)
    void* rax_6 = *(rcx_2 + 0x18)
    arg2[1] = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    rax_7 = *(rcx_2 + 0x20)

arg2[2].d = rax_7
return arg2
