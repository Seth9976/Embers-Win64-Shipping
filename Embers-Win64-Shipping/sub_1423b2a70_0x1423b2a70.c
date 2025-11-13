// 函数: sub_1423b2a70
// 地址: 0x1423b2a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
int64_t rsi = sx.q(arg2)
uint64_t rax

if (arg3 s>= 0)
    rax = zx.q(*(arg1 + 0x130))
    
    if (rbx.d s< rax.d && arg2 s>= 0 && rsi.d s< rax.d)
        rax = *(arg1 + 0x128)
        
        if (*(rax + (rbx << 3)) == 0 && *(rax + (rsi << 3)) != 0)
            int32_t* r8 = *(arg1 + 0x138)
            int32_t* rcx = r8
            void* rdx = &r8[sx.q(*(arg1 + 0x140))]
            
            if (r8 != rdx)
                do
                    if (*rcx == rbx.d)
                        int32_t rcx_2 = ((rcx - r8) s>> 2).d
                        
                        if (rcx_2 == 0xffffffff)
                            break
                        
                        r8[sx.q(rcx_2)] = rsi.d
                        int64_t r14 = *(arg1 + 0x128)
                        int64_t r13 = *(r14 + (rsi << 3))
                        int32_t arg_18
                        sub_140865c40(arg1 + 0x168, &arg_18, r13)
                        int64_t rax_1 = sx.q(arg_18)
                        void* const rcx_5
                        
                        if (rax_1.d == 0xffffffff)
                            rcx_5 = nullptr
                        else
                            rcx_5 = *(arg1 + 0x168) + rax_1 * 0x18
                        
                        int32_t* rax_3 = rcx_5 + 8
                        
                        if (rcx_5 == 0)
                            rax_3 = nullptr
                        
                        if (rax_3 != 0)
                            int32_t i = *rax_3
                            
                            if (i != 0xffffffff)
                                do
                                    int64_t rcx_6 = sx.q(i) * 5
                                    int64_t rax_5 = *(arg1 + 0x20)
                                    
                                    if (*(rax_5 + (rcx_6 << 3) + 0x10) == rsi.d)
                                        *(rax_5 + (rcx_6 << 3) + 0x10) = rbx.d
                                    
                                    i = *(rax_5 + (rcx_6 << 3) + 0x24)
                                while (i != 0xffffffff)
                                
                                r14 = *(arg1 + 0x128)
                        
                        *(r14 + (rbx << 3)) = r13
                        *(*(arg1 + 0x128) + (rsi << 3)) = 0
                        sub_1423b79e0(arg1, rbx.d)
                        int32_t temp0
                        int32_t temp1
                        temp0:temp1 = sx.q(rsi.d)
                        int32_t rdx_5 = temp0 & 3
                        int32_t rax_9 = temp1 + rdx_5
                        int64_t rcx_11 = sx.q((rax_9 & 3) - rdx_5)
                        int32_t rax_11
                        rax_11.b = 1
                        int64_t rdx_7 = sx.q(rax_9 s>> 2) * 0xf0 + *(arg1 + 0x10)
                        *(rdx_7 + (rcx_11 << 2)) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0x10) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0x20) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0x30) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0x40) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0x50) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0x60) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0x70) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0x80) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0x90) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0xa0) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0xb0) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0xc0) = 0
                        *(rdx_7 + (rcx_11 << 2) + 0xd0) = 0x7f7fffff
                        *(rdx_7 + (rcx_11 << 2) + 0xe0) = 0xff7fffff
                        return rax_11
                    
                    rcx = &rcx[1]
                while (rcx != rdx)

rax.b = 0
return rax
