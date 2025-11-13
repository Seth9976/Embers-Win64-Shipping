// 函数: sub_1423c7640
// 地址: 0x1423c7640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = zx.d(*(arg2 + 0xb))

if (rdx == 0)
    sub_1409740e0(arg1 + 0x60, arg2)
else if (rdx == 1)
    void* rcx_5 = arg1 + 8
    
    if (0f f>= *(arg2 + 0xc))
        sub_1409740e0(rcx_5, arg2)
    else if (sub_1409740e0(rcx_5, arg2).d == 0)
        void* rdx_4 = *(arg1 + 0x58)
        char i = 0
        void* r8_2 = nullptr
        
        if (rdx_4 != 0)
            while (i == 0)
                if (rdx_4 != arg2)
                    r8_2 = rdx_4
                    rdx_4 = (*(rdx_4 + 0x20))[3]
                else
                    i = 1
                    int64_t rax_5 = *(*(arg2 + 0x20) + 0x18)
                    
                    if (r8_2 == 0)
                        *(arg1 + 0x58) = rax_5
                        (*(arg2 + 0x20))[3] = 0
                    else
                        *(*(r8_2 + 0x20) + 0x18) = rax_5
                        (*(arg2 + 0x20))[3] = 0
                
                if (rdx_4 == 0)
                    break
else if (rdx == 2)
    int64_t* rax = *(arg1 + 0xb0)
    void* rcx_2 = &rax[sx.q(*(arg1 + 0xb8)) * 2]
    
    if (rax == rcx_2)
    label_1423c769e:
        rax = nullptr
    else
        while (*rax != arg2)
            rax = &rax[2]
            
            if (rax == rcx_2)
                goto label_1423c769e
    
    void* rdx_2 = *(arg1 + 0x58)
    void* r8_1 = nullptr
    bool i_1 = rax != 0
    
    if (rdx_2 != 0)
        while (i_1 == 0)
            if (rdx_2 != arg2)
                r8_1 = rdx_2
                rdx_2 = (*(rdx_2 + 0x20))[3]
            else
                i_1 = true
                int64_t rax_2 = *(*(arg2 + 0x20) + 0x18)
                
                if (r8_1 == 0)
                    *(arg1 + 0x58) = rax_2
                else
                    *(*(r8_1 + 0x20) + 0x18) = rax_2
                
                void* rcx_4 = *(arg2 + 0x20)
                rax = *(rcx_4 + 0x18)
                
                if (rax != 0)
                    void* rax_3 = rax[4]
                    *(rax_3 + 0x20) = *(rcx_4 + 0x20) f+ *(rax_3 + 0x20)
                    (*(arg2 + 0x20))[3] = 0
            
            if (rdx_2 == 0)
                break

if (*(arg1 + 0x128) != 0)
    sub_1409740e0(arg1 + 0xc0, arg2)
