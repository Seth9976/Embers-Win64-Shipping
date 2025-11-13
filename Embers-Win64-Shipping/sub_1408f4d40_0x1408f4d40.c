// 函数: sub_1408f4d40
// 地址: 0x1408f4d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x3f].d

if (rax != 0 && rax != 1 && arg1[0x62].b != 0)
    void* rdi_1 = arg1[0x49]
    
    if (rdi_1 == 0)
        void* rdx
        
        if (arg1[0x41] == rdi_1)
            rdx = nullptr
        else
            void* rax_1 = sub_1408f5ff0()
            
            if (rax_1 == 0)
                rdx = nullptr
            else
                rdx = arg1[0x41]
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                    rdx = nullptr
        
        void* rax_4 = sub_1420224f0(rdx)
        rdi_1 = rax_4
        void* rax_5
        void* rcx_2
        int64_t rdx_1
        
        if (rax_4 != 0)
            rax_5 = sub_1408f5ff0()
            rcx_2 = *(rdi_1 + 0x10)
            rdx_1 = sx.q(*(rax_5 + 0x38))
        
        if (rax_4 == 0 || rdx_1.d s> *(rcx_2 + 0x38)
                || *(*(rcx_2 + 0x30) + (rdx_1 << 3)) != rax_5 + 0x30)
            rdi_1 = nullptr
        
        arg1[0x49] = rdi_1
    
    *(rdi_1 + 0x28) = *(arg1 + 0x230)
    void* rax_7 = arg1[0x49]
    *(rax_7 + 0x40) = *(arg1 + 0x2b0)
    *(rax_7 + 0x50) = *(arg1 + 0x2c0)
    *(rax_7 + 0x60) = *(arg1 + 0x2d0)
    void* rax_8 = arg1[0x49]
    *(rax_8 + 0x70) = *(arg1 + 0x2e0)
    *(rax_8 + 0x80) = *(arg1 + 0x2f0)
    *(rax_8 + 0x90) = *(arg1 + 0x300)
    sub_14203bd10(arg1[0x49], &arg1[0x3e], arg1[0x40].d)

*(arg1 + 0x312) = 0
return sub_141ee0600(arg1, arg2) __tailcall
