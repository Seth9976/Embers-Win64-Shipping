// 函数: sub_14139bda0
// 地址: 0x14139bda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int32_t rax = (rdi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_14083a310(arg2, rdi.d)

uint64_t result = *arg2
*(result + (rdi << 3)) = arg1

if (*(arg1 + 0x20) u<= 0)
    result = *(arg1 + 8)
    
    if ((*(result + 0x3a) & 0x40) != 0)
        void* r9_1 = *(arg1 + 0xf0)
        int64_t rdi_1 = 0
        result = zx.q(*(r9_1 + 0x1d10))
        void* const rcx_5
        
        if (result.d == *(r9_1 + 0x1d3c))
        label_14139be60:
            rcx_5 = nullptr
        else
            void* r8_1 = r9_1 + 0x1d40
            void* rdx_1 = *(r8_1 + 8)
            int64_t r10_1 = sx.q(*(arg1 + 0x10))
            
            if (rdx_1 != 0)
                r8_1 = rdx_1
            
            result = zx.q(*(r8_1 + (((sx.q(*(r9_1 + 0x1d50)) - 1) & r10_1) << 2)))
            
            if (result.d == 0xffffffff)
            label_14139be60_1:
                rcx_5 = nullptr
            else
                int64_t r8_2 = *(r9_1 + 0x1d08)
                
                while (true)
                    int64_t rdx_2 = sx.q(result.d) * 5
                    rcx_5 = r8_2 + (rdx_2 << 3)
                    
                    if (*(r8_2 + (rdx_2 << 3)) == r10_1.d)
                        break
                    
                    result = zx.q(*(rcx_5 + 0x20))
                    
                    if (result.d == 0xffffffff)
                        goto label_14139be60_2
                
                if (result.d == 0xffffffff)
                label_14139be60_2:
                    rcx_5 = nullptr
        
        void* rbp_1 = rcx_5 + 8
        
        if (rcx_5 == 0)
            rbp_1 = nullptr
        
        if (rbp_1 != 0)
            int64_t r15_1 = sx.q(*(rbp_1 + 0x10))
            
            if (r15_1 s> 0)
                do
                    int64_t rsi_1 = sx.q(arg2[1].d)
                    int64_t r14_1 = *(*(rbp_1 + 8) + (rdi_1 << 3))
                    int32_t rax_2 = (rsi_1 + 1).d
                    arg2[1].d = rax_2
                    
                    if (rax_2 s> *(arg2 + 0xc))
                        sub_14083a310(arg2, rsi_1.d)
                    
                    result = *arg2
                    rdi_1 += 1
                    *(result + (rsi_1 << 3)) = r14_1
                while (rdi_1 s< r15_1)

return result
