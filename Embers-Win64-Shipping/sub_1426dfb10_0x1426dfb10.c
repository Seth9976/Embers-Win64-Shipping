// 函数: sub_1426dfb10
// 地址: 0x1426dfb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_140638c50(arg2, 0)

int64_t rax = *(arg1 + 0x38)

if (rax != 0 && *(rax + 0x28) == 1 && *(arg1 + 0x58) != 0)
    rax = sub_14273b6f0()
    
    if (rax != 0)
        void* rdx = *(arg1 + 0x58)
        void* r8_1 = rax + 0x30
        rax = sx.q(*(rax + 0x38))
        
        if (rax.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax << 3)) == r8_1 && rdx != 0)
            int64_t rsi_1 = sub_14273b0e0()
            void* const rdx_1
            
            if (*(arg1 + 0x58) == 0)
                rdx_1 = nullptr
            else
                rax = sub_14273b6f0()
                
                if (rax == 0)
                    rdx_1 = nullptr
                else
                    rdx_1 = *(arg1 + 0x58)
                    int64_t r8_2 = rax + 0x30
                    rax = sx.q(*(rax + 0x38))
                    
                    if (rax.d s> *(rdx_1 + 0x38))
                        rdx_1 = nullptr
                    else if (*(*(rdx_1 + 0x30) + (rax << 3)) != r8_2)
                        rdx_1 = nullptr
            
            if (rsi_1 != 0)
                rax = sx.q(*(rsi_1 + 0x38))
                
                if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rsi_1 + 0x30)
                    int64_t* rcx_4 = *(arg1 + 0x38)
                    
                    if (*(arg1 + 0x34) == 3)
                        sub_1426da760(rcx_4, arg2)
                        int64_t rax_2
                        rax_2.b = arg2[1].d s> 0
                        return rax_2
                    
                    uint64_t rax_1 = sub_1426df620(rcx_4, 0)
                    int64_t rdi_1 = sx.q(arg2[1].d)
                    int32_t rcx_5 = (rdi_1 + 1).d
                    arg2[1].d = rcx_5
                    
                    if (rcx_5 s> *(arg2 + 0xc))
                        sub_1405a4d70(arg2)
                    
                    *(*arg2 + (rdi_1 << 3)) = rax_1
                    rax_1.b = arg2[1].d s> 0
                    return rax_1

rax.b = 0
return rax
