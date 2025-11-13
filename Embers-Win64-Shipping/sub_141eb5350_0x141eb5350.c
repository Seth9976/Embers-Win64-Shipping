// 函数: sub_141eb5350
// 地址: 0x141eb5350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14325bc70

if (*(arg2 + 0x1e) == 0)
    bool cond:1_1 = *(arg2 + 0x48) s<= 1
    *(arg2 + 0x1e) = 1
    
    if (not(cond:1_1))
        void* rax_1 = *(arg2 + 0x40)
        void* rdi_1 = arg2 + 0x20
        void* rcx = rdi_1
        
        if (rax_1 != 0)
            rcx = rax_1
        
        sub_1414f01a0(rcx, *(arg2 + 0x48))
        void* r10_1 = *(rdi_1 + 0x20)
        void* rax_2 = rdi_1
        
        if (r10_1 != 0)
            rax_2 = r10_1
        
        void* rdx_1 = rax_2 + (sx.q(*(arg2 + 0x48)) << 2)
        int64_t rcx_2 = 0
        void* r8_1 = rax_2 + 4
        uint64_t r9_4 = (rdx_1 - r8_1 + 3) u>> 2
        
        if (r8_1 u> rdx_1)
            r9_4 = 0
        
        if (r9_4 != 0)
            do
                int32_t rdx_2 = *r8_1
                
                if (*rax_2 != rdx_2)
                    rax_2 += 4
                    *rax_2 = rdx_2
                
                r8_1 += 4
                rcx_2 += 1
            while (rcx_2 != r9_4)
            
            r10_1 = *(rdi_1 + 0x20)
        
        int64_t rbp_1 = sx.q(*(rdi_1 + 0x28))
        void* rcx_3 = rdi_1
        
        if (r10_1 != 0)
            rcx_3 = r10_1
        
        if (((rax_2 - rcx_3) s>> 2).d + 1 s> rbp_1.d)
            *(rdi_1 + 0x28) = ((rax_2 - rcx_3) s>> 2).d + 1
            
            if (((rax_2 - rcx_3) s>> 2).d + 1 s> *(rdi_1 + 0x2c))
                sub_14083a280(rdi_1, rbp_1.d)
            
            void* rax_6 = *(rdi_1 + 0x20)
            
            if (rax_6 != 0)
                rdi_1 = rax_6
            
            memset(rdi_1 + (rbp_1 << 2), 0, sx.q(((rax_2 - rcx_3) s>> 2).d + 1 - rbp_1.d) << 2)
        else if (((rax_2 - rcx_3) s>> 2).d + 1 s< rbp_1.d
                && ((rax_2 - rcx_3) s>> 2).d + 1 != rbp_1.d)
            *(rdi_1 + 0x28) = ((rax_2 - rcx_3) s>> 2).d + 1

*(arg1 + 0x24) = arg3
arg1[2] = arg2 + 0x20
arg1[3] = arg2 + 0x50
arg1[1].b = 0
arg1[4].b = 0
*(arg1 + 0x21) = *(arg2 + 0x15)
*(arg1 + 0x22) = *(arg2 + 0x14)
*(arg1 + 0x23) = *(arg2 + 0x11) == 0
return arg1
