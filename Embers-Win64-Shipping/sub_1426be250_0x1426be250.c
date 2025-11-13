// 函数: sub_1426be250
// 地址: 0x1426be250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x178)

if (result s>= 0)
    bool cond:0_1 = (*(arg1 + 0x180) & 8) == 0
    *(arg1 + 0x260) = result.w
    int32_t rax = *(arg1 + 0x118)
    *(arg1 + 0x178) = 0xffffffff
    
    if (cond:0_1)
        int32_t i = 0
        
        if (rax s> 0)
            int64_t r15_2 = 0
            
            do
                void* rdx_5 = *(arg1 + 0x110)
                int64_t* rdi_5 = rdx_5 + 0x30 + r15_2
                int64_t* rcx_8 = zx.q(*(rdx_5 + r15_2 + 0x40)) * 0x38 + 0x20 + *(arg1 + 0x120)
                
                if (rdi_5 != rcx_8)
                    uint32_t count_1 = rcx_8[1].d
                    int64_t r12_2 = *rcx_8
                    int32_t r8_5 = *(rdi_5 + 0xc)
                    rdi_5[1].d = count_1
                    
                    if (count_1 != 0 || r8_5 != 0)
                        sub_1405da9e0(rdi_5, count_1, r8_5)
                        memcpy(*rdi_5, r12_2, count_1)
                    else
                        *(rdi_5 + 0xc) = 0
                
                i += 1
                r15_2 += 0x58
            while (i s< *(arg1 + 0x118))
    else
        int32_t i_1 = 0
        
        if (rax s> 0)
            int64_t r15_1 = 0
            
            do
                void* rdi_2 = *(arg1 + 0x110) + r15_1
                int64_t* rcx = *(rdi_2 + 8)
                void* rsi_2 = zx.q(*(rdi_2 + 0x40)) * 0x38 + *(arg1 + 0x120)
                
                if (rcx != 0)
                    int16_t rax_3 = (*(*rcx + 0x280))(rcx)
                    
                    if (rax_3 != 0)
                        uint64_t r8_1 = zx.q(*(*(rdi_2 + 8) + 0x52))
                        memcpy(*(rsi_2 + 0x20) + r8_1, *(rdi_2 + 0x30) + r8_1, zx.d(rax_3))
                
                if (rdi_2 + 0x30 != rsi_2 + 0x20)
                    uint32_t count = *(rsi_2 + 0x28)
                    int64_t r12_1 = *(rsi_2 + 0x20)
                    int32_t r8_3 = *(rdi_2 + 0x3c)
                    *(rdi_2 + 0x38) = count
                    
                    if (count != 0 || r8_3 != 0)
                        sub_1405da9e0(rdi_2 + 0x30, count, r8_3)
                        memcpy(*(rdi_2 + 0x30), r12_1, count)
                    else
                        *(rdi_2 + 0x3c) = 0
                
                i_1 += 1
                r15_1 += 0x58
            while (i_1 s< *(arg1 + 0x118))
    
    bool cond:1_1 = *(arg1 + 0x150) s<= 0
    int64_t r13_1 = 0
    int64_t var_38 = 0
    int32_t rsi_3 = 0
    int64_t var_30_1 = 0
    int32_t i_2 = 0
    
    if (not(cond:1_1))
        int64_t r12_3 = 0
        int32_t rbp_1 = 0
        
        do
            int64_t* rdi_7 = *(arg1 + 0x148) + r12_3
            
            if (*(rdi_7 + 0x12) != 2 && *rdi_7 != 0)
                void* rax_6 = sub_14272f060()
                int64_t r9_1 = *rdi_7
                void* rdx_8 = *(r9_1 + 0x10)
                int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                
                if (rax_7.d s<= *(rdx_8 + 0x38)
                        && *(*(rdx_8 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
                    int16_t rax_9 = rdi_7[2].w
                    int16_t rcx_12 = *(arg1 + 0x170)
                    bool c_1 = rax_9 u< rcx_12
                    
                    if (rax_9 == rcx_12)
                        c_1 = *(r9_1 + 0x50) u< *(arg1 + 0x172)
                    
                    rax_9.b = c_1
                    
                    if (rax_9.b != 0)
                        int64_t r14_1 = sx.q(rsi_3)
                        rsi_3 = (r14_1 + 1).d
                        var_30_1.d = rsi_3
                        
                        if (rsi_3 s> rbp_1)
                            sub_1405a4df0(&var_38)
                            rsi_3 = var_30_1.d
                            r13_1 = var_38
                            rbp_1 = var_30_1:4.d
                        
                        int64_t rcx_14 = r14_1 * 3
                        *(r13_1 + (rcx_14 << 3)) = *rdi_7
                        *(r13_1 + (rcx_14 << 3) + 0x10) = rdi_7[2]
            
            i_2 += 1
            r12_3 += 0x18
        while (i_2 s< *(arg1 + 0x150))
    
    int512_t entry_zmm2
    result = sub_1426a9c40(arg1, &var_38, 0xffff, 0, entry_zmm2)
    *(arg1 + 0x150) = 0
    
    if (*(arg1 + 0x154) s<= 0xffffffff)
        result = sub_1405a5130(arg1 + 0x148, 0)
    
    *(arg1 + 0x160) = 0
    
    if (*(arg1 + 0x164) s<= 0xffffffff)
        result = sub_1405dadb0(arg1 + 0x158, 0)
    
    if (r13_1 != 0)
        return sub_140a74f90(r13_1)

return result
