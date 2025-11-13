// 函数: sub_142a8c060
// 地址: 0x142a8c060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg4)
int32_t r8 = arg2

if (arg3 != 0 && r10.d s>= 0xffffffff)
    if (arg1 == 0 || arg2 s< 0xffffffff)
        return 0
    
    int64_t rdx = -1
    int32_t temp0_1 = r10.d
    bool cond:0_1 = temp0_1 != 0
    
    if (temp0_1 s< 0)
        r10 = -1
        
        do
            r10 += 1
        while (*(arg3 + (r10 << 1)) != 0)
        
        cond:0_1 = r10.d != 0
    
    if (cond:0_1)
        int16_t rbx = *(arg3 + ((sx.q(r10.d) - 1) << 1))
        void* rdi_2 = arg3 + ((sx.q(r10.d) - 1) << 1)
        
        if (r10.d == 1 && (zx.d(rbx) & 0xfffff800) != 0xd800)
            if (r8 s>= 0)
                return sub_142a8bd00(arg1, rbx, r8) __tailcall
            
            return sub_142a8c380(arg1, rbx) __tailcall
        
        if (r8 s< 0)
            do
                rdx += 1
            while (arg1[rdx] != 0)
            
            r8 = rdx.d
        
        if (r8 s<= r10.d - 1)
            return 0
        
        void* rsi = &arg1[sx.q(r8)]
        void* r8_3 = rsi
        void* r10_4 = &arg1[sx.q(r10.d - 1)]
        
        if (r10_4 != rsi)
            do
                r8_3 -= 2
                
                if (*r8_3 == rbx)
                    void* rdx_4 = r8_3
                    void* rcx_2 = rdi_2
                    
                    if (rdi_2 != arg3)
                        do
                            int16_t rax_9 = *(rcx_2 - 2)
                            rcx_2 -= 2
                            rdx_4 -= 2
                            
                            if (*rdx_4 != rax_9)
                                goto label_142a8c1e0
                        while (rcx_2 != arg3)
                    
                    if (((zx.d(*rdx_4) & 0xfffffc00) != 0xdc00 || arg1 == rdx_4
                            || (zx.d(*(rdx_4 - 2)) & 0xfffffc00) != 0xd800) && (
                            (zx.d(*r8_3) & 0xfffffc00) != 0xd800 || rdx_4 == rsi
                            || (zx.d(*(r8_3 + 2)) & 0xfffffc00) != 0xdc00))
                        return rdx_4
                
            label_142a8c1e0:
            while (r10_4 != r8_3)
        
        return 0

return arg1
