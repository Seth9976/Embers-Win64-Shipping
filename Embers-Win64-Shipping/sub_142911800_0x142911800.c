// 函数: sub_142911800
// 地址: 0x142911800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
int32_t* rdi = *(arg1 + 0x28)
int32_t r8 = rdi[8]

if (r8 != 0)
    void* rax_2
    
    if (r8 == 1)
        rax_2 = sub_1428c1b70()
    else if (r8 == 2)
        rax_2 = sub_1428c1bf0()
    else
        if (r8 != 3)
            return 0xfffffffe
        
        rax_2 = sub_1428c1c70()
    
    sub_142896310(arg2, 0x398, rax_2)
    return 1

int32_t rcx_1 = rdi[9]

if (rcx_1 == 0)
    void* const rbx_1 = nullptr
    int32_t* rsi_1
    
    if (*(arg1 + 0x38) == 0)
        rsi_1 = nullptr
    label_1429118de:
        int32_t rax_7 = rdi[2]
        
        if (rax_7 == 0)
            void* rax_13 = sub_1428c1750()
            
            if (rax_13 != 0)
                int32_t rax_14 = sub_14294a930(rax_13, zx.q(*rdi), zx.q(rdi[1]), rsi_1)
                sub_14288f9a0(rsi_1)
                
                if (rax_14 == 0)
                    sub_1428c1620(rax_13)
                else
                    sub_142896310(arg2, 0x1c, rax_13)
                
                return zx.q(rax_14)
            
            sub_14288f9a0(rsi_1)
        else
            int64_t r13_1 = sx.q(*rdi)
            int32_t r14_1 = rdi[3]
            void* r15_1 = *(rdi + 0x18)
            
            if (rax_7 s<= 2)
                void* rax_8 = sub_1428d5910()
                
                if (rax_8 != 0)
                    if (r14_1 == 0xffffffff)
                        r14_1 = 0xa0
                        
                        if (r13_1.d s>= 0x800)
                            r14_1 = 0x100
                    
                    if (r15_1 == 0)
                        void* rax_9
                        
                        if (r13_1.d s< 0x800)
                            rax_9 = sub_142893c90()
                        else
                            rax_9 = sub_142893cb0()
                        
                        r15_1 = rax_9
                    
                    int32_t rax_10 = rdi[2]
                    int32_t rax_11
                    
                    if (rax_10 != 1)
                        if (rax_10 == 2)
                            rax_11 = sub_14294b8f0(rax_8, r13_1, sx.q(r14_1), r15_1, 0, 0, 
                                0xffffffff, 0, nullptr, nullptr, rsi_1)
                            goto label_1429119ce
                        
                        sub_1428d5800(rax_8)
                    else
                        rax_11 = sub_14294b080(rax_8, r13_1, sx.q(r14_1), r15_1, 0, 0, 0, nullptr, 
                            nullptr, rsi_1)
                    label_1429119ce:
                        
                        if (rax_11 s<= 0)
                            sub_1428d5800(rax_8)
                        else
                            rbx_1 = rax_8
            
            sub_14288f9a0(rsi_1)
            
            if (rbx_1 != 0)
                void* rax_12 = sub_1428d5670(rbx_1)
                sub_1428d5800(rbx_1)
                
                if (rax_12 != 0)
                    sub_142896310(arg2, 0x398, rax_12)
                    return 1
    else
        int32_t* rax_6 = sub_14288f9d0()
        rsi_1 = rax_6
        
        if (rax_6 != 0)
            sub_1428c2dc0(rax_6, arg1)
            goto label_1429118de
else
    void* rax_4 = sub_14294ab50(rcx_1)
    
    if (rax_4 != 0)
        sub_142896310(arg2, 0x1c, rax_4)
        return 1

return 0
