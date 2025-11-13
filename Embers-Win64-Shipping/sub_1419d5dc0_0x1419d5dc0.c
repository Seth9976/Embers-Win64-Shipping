// 函数: sub_1419d5dc0
// 地址: 0x1419d5dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
uint32_t result

if (*(arg1 + 0x18) u> 0)
    do
        int32_t rdi_1 = 0
        int64_t rbp_1 = sx.q(i) * 0x1c8
        void* r14_1 = *(*(arg1 + 0x10) + rbp_1 + 0x1c0)
        
        if (*(r14_1 + 0x98) != 0)
            do
                int64_t rbx_1 = *(r14_1 + 0x90)
                uint64_t arg_8 = -0x4010000000000000
                int64_t rbp_3 = sx.q(rdi_1) << 6
                int64_t* rax_3 = *(rbx_1 + rbp_3 + 0x10)
                int64_t* rcx_1 = rbp_3 + 0x20 + rbx_1
                
                if (rax_3 != 0)
                    rcx_1 = rax_3
                
                if ((*(rbx_1 + rbp_3))((*(*rcx_1 + 8))(rcx_1), &arg_8) == 0)
                    rdi_1 += 1
                else
                    int64_t* rcx_3 = *(r14_1 + 0x90)
                    
                    if (rcx_3[sx.q(rdi_1) * 8] != 0)
                        void* rax_7 = rcx_3[sx.q(rdi_1) * 8 + 2]
                        void* rcx_5 = &rcx_3[4 + sx.q(rdi_1) * 8]
                        
                        if (rax_7 != 0)
                            rcx_5 = rax_7
                        
                        (*(*rcx_5 + 0x10))(rcx_5)
                    
                    int32_t rcx_8 = *(r14_1 + 0x98)
                    int32_t rax_10 = rcx_8 - rdi_1
                    
                    if (rax_10 != 1)
                        int64_t rcx_6 = *(r14_1 + 0x90)
                        memmove(rcx_6 + rbp_3, (sx.q(rdi_1 + 1) << 6) + rcx_6, (rax_10 - 1) << 6)
                        rcx_8 = *(r14_1 + 0x98)
                    
                    *(r14_1 + 0x98) = rcx_8 - 1
                    sub_1407c3fe0(r14_1 + 0x90)
                
                result = *(r14_1 + 0x98)
            while (rdi_1 u< result)
        
        if (*(r14_1 + 0x98) != 0 && result != 0)
            i += 1
        else
            int64_t rbx_2 = sx.q(*(arg1 + 0x28))
            int32_t* rsi_3 = *(arg1 + 0x10) + rbp_1
            int32_t rax_14 = (rbx_2 + 1).d
            *(arg1 + 0x28) = rax_14
            
            if (rax_14 s> *(arg1 + 0x2c))
                sub_140b8a4a0(arg1 + 0x20)
            
            int32_t* rbx_4 = rbx_2 * 0x1c8 + *(arg1 + 0x20)
            sub_141961560(rbx_4, rsi_3)
            *(rbx_4 + 0x1c0) = *(rsi_3 + 0x1c0)
            *(arg1 + 0x10)
            int32_t rax_16 = *(arg1 + 0x18)
            int32_t rcx_15 = rax_16 - i
            
            if (rcx_15 != 1)
                int64_t r9_1 = *(arg1 + 0x10)
                memmove(r9_1 + rbp_1, sx.q(i + 1) * 0x1c8 + r9_1, (rcx_15 - 1) * 0x1c8)
                rax_16 = *(arg1 + 0x18)
            
            *(arg1 + 0x18) = rax_16 - 1
            sub_1419d7020(arg1 + 0x10)
    while (i u< *(arg1 + 0x18))

void* rcx_20 = *(arg1 + 0x148)

if (rcx_20 != 0)
    int64_t rax_20 = 0
    
    if (0 == *(rcx_20 + 8))
        *(rcx_20 + 8) = 0
    else
        rax_20 = *(rcx_20 + 8)
    
    if (((rax_20 u>> 0x1a).d.b & 1) != 0)
        int64_t* rcx_21 = *(arg1 + 0x148)
        *(arg1 + 0x148) = 0
        
        if (rcx_21 != 0)
            rcx_21[9].d -= 1
            
            if (rcx_21[9].d == 1)
                sub_140a2f6e0(rcx_21)

if (*(arg1 + 0x28) != 0 && *(arg1 + 0x148) == 0)
    result.b = 1
    return result

result.b = 0
return result
