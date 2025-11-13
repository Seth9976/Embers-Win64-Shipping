// 函数: sub_142136da0
// 地址: 0x142136da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t result = *(arg2 + 0x2a)
int16_t r9 = arg1[0x95].w
void* rsi = arg2

if (result != r9)
    uint32_t r13_2 = zx.d(result) - zx.d(r9)
    uint64_t r8_1 = zx.q(r13_2) & 0x3fff
    
    if (r8_1.d u< 0x2000)
        int32_t r10_1 = arg1[1]
        int32_t i_1 = r13_2 << 0x12 s>> 0x12
        uint16_t rdx_4
        
        if (sx.q(i_1) u> zx.q(*arg1 - r10_1))
            rdx_4 = (result - 0x100) & 0x3fff
        else
            if (i_1 s> 1)
                r10_1 = r10_1 - 1 + i_1
                arg1[1] = r10_1
            
            void* r9_2 = &arg1[4]
            void* rdx_2 = *(r9_2 + 0x200)
            r8_1 = zx.q(arg1[2]) & zx.q(r10_1)
            
            if (rdx_2 != 0)
                r9_2 = rdx_2
            
            int32_t rdx_3 = *(r9_2 + (r8_1 << 2))
            arg1[1] = r10_1 + 1
            
            if (rdx_3.w != result)
                rdx_4 = (result - 0x100) & 0x3fff
            else
                rdx_4 = (rdx_3 u>> 0x10).w
        
        int16_t rbx_1 = (arg1[0x95].w + 1) & 0x3fff
        arg1[0x94].w = rdx_4
        int64_t var_48
        
        if (i_1 s> 0x100)
            uint64_t i_2 = zx.q(i_1 - 0x100)
            i_1 = 0 + 0x100
            uint64_t i
            
            do
                void* rax_1 = *(arg3 + 8)
                *(rax_1 + 0x1990) += 1
                void* rax_2 = *(arg3 + 8)
                *(rax_2 + 0x1994) += 1
                void* rcx_3 = *(*(arg3 + 8) + 0x58)
                *(rcx_3 + 0x710) += 1
                void* rdi_1 = *(arg3 + 8)
                
                if ((*(rdi_1 + 0x1990) & 0x3fff) == rbx_1)
                    int32_t r14_1 = *(rdi_1 + 0x1990)
                    *(rdi_1 + 0x19f8) += 1
                    *(rdi_1 + 0x1a04) += 1
                    int64_t* rcx_7 = *(rdi_1 + 0x68)
                    (*(*rcx_7 + 0x288))(rcx_7, zx.q(r14_1))
                    int32_t rcx_8 = *(rdi_1 + 0x1710)
                    r8_1 = 0xffffffff
                    int32_t rdx_6 = *(rdi_1 + 0x1714)
                    
                    if (rcx_8 != rdx_6)
                        int32_t j = rdx_6 + 1
                        *(rdi_1 + 0x1714) = j
                        
                        if (rcx_8 != j)
                            do
                                int32_t rbp_1 = *(*(rdi_1 + 0x1720)
                                    + ((zx.q(j) & zx.q(*(rdi_1 + 0x1718))) << 2))
                                
                                if (rbp_1 s< 0)
                                    break
                                
                                j += 1
                                uint64_t rbp_2 = zx.q(rbp_1) & 0x7fffffff
                                *(rdi_1 + 0x1714) = j
                                
                                if (rbp_2.d != r8_1.d)
                                    int64_t* rsi_1 = *(*(rdi_1 + 0x1310) + (rbp_2 << 3))
                                    
                                    if (rsi_1 != 0)
                                        (*(*rsi_1 + 0x2a0))(rsi_1, zx.q(r14_1))
                                        
                                        if (rsi_1[7].d s<= r14_1 && r14_1 s<= *(rsi_1 + 0x3c))
                                            sub_141f94020(rsi_1)
                                    
                                    j = *(rdi_1 + 0x1714)
                                    r8_1 = zx.q(rbp_2.d)
                            while (*(rdi_1 + 0x1710) != j)
                    
                    void* rax_10 = *(rdi_1 + 0x58)
                    *(rdi_1 + 0x4d8) += 1
                    *(rdi_1 + 0x4e0) += 1
                    *(rax_10 + 0x278) += 1
                    void* rax_11 = *(rdi_1 + 0x58)
                    *(rax_11 + 0x27c) += 1
                else
                    sub_140a2e390(&var_48, u"LastNotifiedPacketId != AckedSequence", r8_1)
                    r8_1 = sub_14213f9e0(*(arg3 + 8))
                    int64_t rcx_6 = var_48
                    
                    if (rcx_6 != 0)
                        r8_1 = sub_140a74f90(rcx_6)
                
                rbx_1 = (rbx_1 + 1) & 0x3fff
                i = i_2
                i_2 -= 1
            while (i != 1)
            rsi = arg2
        
        if (i_1 s> 0)
            int64_t i_3 = sx.q(i_1)
            
            do
                i_3 -= 1
                i_1 -= 1
                int32_t rdx_9 = 1 << (i_3.b & 0x1f) & *(rsi + (i_3 u>> 5 << 2))
                void* rax_14 = *(arg3 + 8)
                *(rax_14 + 0x1990) += 1
                void* rax_15 = *(arg3 + 8)
                *(rax_15 + 0x1994) += 1
                void* rcx_14 = *(*(arg3 + 8) + 0x58)
                *(rcx_14 + 0x710) += 1
                void* rdi_2 = *(arg3 + 8)
                
                if ((*(rdi_2 + 0x1990) & 0x3fff) == rbx_1)
                    int32_t r14_2 = *(rdi_2 + 0x1990)
                    
                    if (rdx_9 == 0)
                        *(rdi_2 + 0x19f8) += 1
                        *(rdi_2 + 0x1a04) += 1
                        int64_t* rcx_19 = *(rdi_2 + 0x68)
                        (*(*rcx_19 + 0x288))(rcx_19, r14_2)
                        int32_t rcx_20 = *(rdi_2 + 0x1710)
                        r8_1 = 0xffffffff
                        int32_t rdx_11 = *(rdi_2 + 0x1714)
                        
                        if (rcx_20 != rdx_11)
                            int32_t j_1 = rdx_11 + 1
                            *(rdi_2 + 0x1714) = j_1
                            
                            if (rcx_20 != j_1)
                                do
                                    int32_t rbp_3 = *(*(rdi_2 + 0x1720)
                                        + ((zx.q(*(rdi_2 + 0x1718)) & zx.q(j_1)) << 2))
                                    
                                    if (rbp_3 s< 0)
                                        break
                                    
                                    j_1 += 1
                                    uint64_t rbp_4 = zx.q(rbp_3) & 0x7fffffff
                                    *(rdi_2 + 0x1714) = j_1
                                    
                                    if (rbp_4.d != r8_1.d)
                                        int64_t* rsi_2 = *(*(rdi_2 + 0x1310) + (rbp_4 << 3))
                                        
                                        if (rsi_2 != 0)
                                            (*(*rsi_2 + 0x2a0))(rsi_2, zx.q(r14_2))
                                            
                                            if (rsi_2[7].d s<= r14_2 && r14_2 s<= *(rsi_2 + 0x3c))
                                                sub_141f94020(rsi_2)
                                        
                                        j_1 = *(rdi_2 + 0x1714)
                                        r8_1 = zx.q(rbp_4.d)
                                while (*(rdi_2 + 0x1710) != j_1)
                                
                                rsi = arg2
                        
                        void* rax_23 = *(rdi_2 + 0x58)
                        *(rdi_2 + 0x4d8) += 1
                        *(rdi_2 + 0x4e0) += 1
                        *(rax_23 + 0x278) += 1
                        void* rax_24 = *(rdi_2 + 0x58)
                        *(rax_24 + 0x27c) += 1
                    else
                        r8_1 = sub_14214ff30(rdi_2, r14_2)
                else
                    sub_140a2e390(&var_48, u"LastNotifiedPacketId != AckedSequence", r8_1)
                    r8_1 = sub_14213f9e0(*(arg3 + 8))
                    int64_t rcx_17 = var_48
                    
                    if (rcx_17 != 0)
                        r8_1 = sub_140a74f90(rcx_17)
                
                rbx_1 = (rbx_1 + 1) & 0x3fff
            while (i_1 s> 0)
        
        result = *(rsi + 0x2a)
        arg1[0x95].w = result

return result
