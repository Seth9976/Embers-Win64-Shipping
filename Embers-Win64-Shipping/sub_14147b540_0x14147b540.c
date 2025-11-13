// 函数: sub_14147b540
// 地址: 0x14147b540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t i = 0
int64_t* result = arg3
uint64_t rsi = arg2
void* rdi = arg1
int64_t* result_1 = result
int32_t i_1 = 0

if (arg3[1].d s> 0)
    int64_t r13_1 = 0
    
    do
        int64_t rbx_1 = sx.q(*(arg1 + 0x318))
        void* r15_1 = *(*result + r13_1)
        int32_t rax_3 = (rbx_1 + 1).d
        *(arg1 + 0x318) = rax_3
        
        if (rax_3 s> *(arg1 + 0x31c))
            sub_14149c2e0(arg1 + 0x310, rbx_1.d)
        
        int64_t rax_4 = *(arg1 + 0x310)
        int64_t rcx_1 = rbx_1 * 9
        char var_c0_1 = 0
        char var_c8_1 = 0
        *(rax_4 + (rcx_1 << 3) + 0x20) = 0
        *(rax_4 + (rcx_1 << 3) + 0x28) = 0
        *(rax_4 + (rcx_1 << 3) + 0x2c) = 4
        *(rax_4 + (rcx_1 << 3) + 0x30) = 0
        *(rax_4 + (rcx_1 << 3) + 0x38) = 0
        *(rax_4 + (rcx_1 << 3) + 0x40) = 0
        int32_t r8 = *(r15_1 + 0x548)
        int32_t rdx_1 = *(r15_1 + 0x54c)
        char var_d0_1 = 1
        void* rbp_3 = *(arg1 + 0x310) + ((sx.q(*(arg1 + 0x318)) * 9 - 9) << 3)
        int32_t var_78_1 = 1
        int16_t var_70_1 = 1
        int16_t var_60_1 = 0
        int32_t rcx_2 = *(r15_1 + 0x550) * 2
        int128_t var_98 = data_1439c7b38
        int32_t var_88_1 = data_1439c7b48
        int32_t var_84_1 = r8 + rcx_2
        int32_t var_80_1 = rdx_1 + rcx_2
        int32_t var_7c_1 = 0
        int32_t var_74_1 = 0x10000
        int64_t var_6c_1 = 0xc
        int32_t var_64_1 = 0xc
        wchar16 const* const var_58_1 = u"UnknownTexture2D"
        int16_t var_50_1 = 0
        char var_4e_1 = 0
        sub_1419a0ce0(&data_1439c9260, rsi, &var_98, rbp_3 + 0x30, CachedShadowDepthMap", var_d0_1, 
            var_c8_1, var_c0_1)
        void* r10_1 = *(rdi + 8)
        int32_t* rcx_8
        
        if (*(r10_1 + 0x1ac0) == *(r10_1 + 0x1aec))
        label_14147b764:
            rcx_8 = nullptr
        else
            void* r8_3 = r10_1 + 0x1af0
            void* rdx_4 = *(r8_3 + 8)
            int64_t r9_2 = sx.q(*(*(r15_1 + 0x5c0) + 0x28))
            
            if (rdx_4 != 0)
                r8_3 = rdx_4
            
            int32_t rax_11 = *(r8_3 + (((sx.q(*(r10_1 + 0x1b00)) - 1) & r9_2) << 2))
            
            if (rax_11 == 0xffffffff)
            label_14147b764_1:
                rcx_8 = nullptr
            else
                while (true)
                    rcx_8 = sx.q(rax_11) * 0x290 + *(r10_1 + 0x1ab8)
                    
                    if (*rcx_8 == r9_2.d)
                        break
                    
                    rax_11 = rcx_8[0xa0]
                    
                    if (rax_11 == 0xffffffff)
                        goto label_14147b764_2
                
                if (rax_11 == 0xffffffff)
                label_14147b764_2:
                    rcx_8 = nullptr
        
        if (&rcx_8[0x90] != rbp_3)
            void* rax_12 = *(rcx_8 + 0x260)
            void* rbx_2 = &rcx_8[0x90]
            int32_t j_2 = rcx_8[0x9a]
            
            if (rax_12 != 0)
                rbx_2 = rax_12
            
            if (j_2 != 0)
                int32_t j
                
                do
                    int64_t* rcx_9 = *rbx_2
                    
                    if (rcx_9 != 0)
                        (*(*rcx_9 + 0x38))(rcx_9)
                    
                    rbx_2 += 8
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            int32_t j_3 = *(rbp_3 + 0x28)
            void* r14 = *(rbp_3 + 0x20)
            int32_t r8_5 = rcx_8[0x9b]
            rcx_8[0x9a] = j_3
            
            if (j_3 != 0 || r8_5 != 0)
                sub_14085a010(&rcx_8[0x90], j_3, r8_5)
                void* rax_14 = *(rcx_8 + 0x260)
                void* rbx_3 = rbp_3
                
                if (r14 != 0)
                    rbx_3 = r14
                
                void* r14_1 = &rcx_8[0x90]
                
                if (rax_14 != 0)
                    r14_1 = rax_14
                
                if (j_3 != 0)
                    void* r14_2 = r14_1 - rbx_3
                    int32_t j_1
                    
                    do
                        int64_t* rcx_11 = *rbx_3
                        *(r14_2 + rbx_3) = rcx_11
                        
                        if (rcx_11 != 0)
                            (*(*rcx_11 + 0x30))()
                        
                        rbx_3 += 8
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
            else
                rcx_8[0x9b] = 4
            
            i = i_1
        
        int64_t* rcx_12 = *(rbp_3 + 0x30)
        int64_t* rbx_4 = *(rcx_8 + 0x270)
        *(rcx_8 + 0x270) = rcx_12
        
        if (rcx_12 != 0)
            (*(*rcx_12 + 0x30))()
        
        if (rbx_4 != 0)
            (*(*rbx_4 + 0x38))(rbx_4)
        
        *(r15_1 + 0x570) |= 1
        *(r15_1 + 0x540) = 0
        int32_t rsi_2 = 0
        int64_t rdi_1 = sx.q(*(rbp_3 + 0x28))
        *(r15_1 + 0x30) = 0
        
        if (*(r15_1 + 0x34) != rdi_1.d)
            sub_14083ad10(r15_1 + 0x28, rdi_1.d)
            rsi_2 = *(r15_1 + 0x30)
        
        int32_t rax_18 = rdi_1.d + rsi_2
        *(r15_1 + 0x30) = rax_18
        
        if (rax_18 s> *(r15_1 + 0x34))
            sub_14083a440(r15_1 + 0x28, rsi_2)
        
        memset(*(r15_1 + 0x28) + (sx.q(rsi_2) << 3), 0, rdi_1 << 3)
        int64_t r8_7 = 0
        
        if (rdi_1 s> 0)
            do
                void* rax_20 = *(rbp_3 + 0x20)
                void* rdx_8 = rbp_3
                
                if (rax_20 != 0)
                    rdx_8 = rax_20
                
                *(*(r15_1 + 0x28) + (r8_7 << 3)) = *(rdx_8 + (r8_7 << 3))
                r8_7 += 1
            while (r8_7 s< rdi_1)
        
        rdi = arg1
        rsi = arg2
        *(r15_1 + 0x38) = *(rbp_3 + 0x30)
        sub_1414a2f50(r15_1, rsi, rdi)
        int64_t rbx_5 = sx.q(*(rbp_3 + 0x40))
        int32_t rax_23 = (rbx_5 + 1).d
        *(rbp_3 + 0x40) = rax_23
        
        if (rax_23 s> *(rbp_3 + 0x44))
            sub_14083a310(rbp_3 + 0x38, rbx_5.d)
        
        i += 1
        r13_1 += 8
        i_1 = i
        *(*(rbp_3 + 0x38) + (rbx_5 << 3)) = r15_1
        result = result_1
    while (i s< result[1].d)

__security_check_cookie(rax_1 ^ &var_f8)
return result
