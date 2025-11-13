// 函数: sub_1426d76e0
// 地址: 0x1426d76e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(*(*(arg1 + 0x110) + sx.q(*(arg1 + 0x2c)) * 0x30 + 0x10))
*(arg1 + 0x138) = *(arg1 + 8)
sub_1426e82e0(arg1 + 0x128, 0)
*(arg1 + 0x13e) &= 0xfe
int32_t rsi = 0
int32_t rax_3 = *(arg1 + 0x138)

if (rax_3 s> 0)
    if (rax_3 s> *(arg1 + 0x134))
        sub_1405a5410(arg1 + 0x128, rax_3)
        rax_3 = *(arg1 + 0x138)
    
    int32_t i = 0
    
    if (rax_3 s> 0)
        int64_t count = r12 << 2
        int64_t count_1 = count
        
        do
            int64_t var_38 = 0
            int64_t rdi_1 = 0
            int32_t var_2c_1 = 0
            int32_t rbp_1 = r12.d
            int32_t var_30_1 = r12.d
            
            if (r12.d s> 0)
                sub_1406105e0(&var_38)
                rsi = var_2c_1
                rbp_1 = var_30_1
                rdi_1 = var_38
            
            memset(rdi_1, 0, count)
            int64_t r15_2 = sx.q(*(arg1 + 0x130))
            int32_t rax_4 = (r15_2 + 1).d
            *(arg1 + 0x130) = rax_4
            
            if (rax_4 s> *(arg1 + 0x134))
                sub_1405a4f90(arg1 + 0x128)
            
            var_38 = 0
            count = count_1
            i += 1
            int64_t* rax_7 = (r15_2 << 4) + *(arg1 + 0x128)
            *rax_7 = rdi_1
            *(rax_7 + 0xc) = rsi
            rsi = 0
            rax_7[1].d = rbp_1
            var_30_1.q = 0
        while (i s< *(arg1 + 0x138))

int64_t rax_20

if (*(arg1 + 0x10) == 0)
    rax_20 = 0
else
    void* rax_8 = sub_14273b6f0()
    
    if (rax_8 == 0)
        rax_20 = 0
    else
        void* rdx_5 = *(arg1 + 0x10)
        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
        int64_t rax_10
        
        if (rax_9.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
            rax_10 = 0
        else
            rax_10.b = 1
        
        if (rax_10.b == 0 || rdx_5 == 0)
            rax_20 = 0
        else
            void* rax_11 = sub_14273b020()
            void* rdx_6 = *(arg1 + 0x10)
            void* const rax_14
            
            if (rdx_6 == 0)
                rax_14 = nullptr
            else
                void* const rax_12 = sub_14273b6f0()
                rdx_6 = *(arg1 + 0x10)
                
                if (rax_12 != 0)
                    int64_t rax_13 = sx.q(*(rax_12 + 0x38))
                    
                    if (rax_13.d s> *(rdx_6 + 0x38)
                            || *(*(rdx_6 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
                        rax_12 = nullptr
                    else
                        rax_12.b = 1
                
                rax_14 = rdx_6
                
                if (rax_12.b == 0)
                    rax_14 = nullptr
            
            if (rax_11 == 0)
                rax_20 = 0
            else
                int64_t rcx_7 = sx.q(*(rax_11 + 0x38))
                
                if (rcx_7.d s> *(rax_14 + 0x38)
                        || *(*(rax_14 + 0x30) + (rcx_7 << 3)) != rax_11 + 0x30)
                    rax_20 = 0
                else
                    int64_t* rdi_3
                    
                    if (rdx_6 == 0)
                        rdi_3 = nullptr
                    else
                        void* rax_16 = sub_14273b6f0()
                        
                        if (rax_16 == 0)
                            rdi_3 = nullptr
                        else
                            rdi_3 = *(arg1 + 0x10)
                            int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                            int64_t rax_18
                            
                            if (rax_17.d s> rdi_3[7].d
                                    || *(rdi_3[6] + (rax_17 << 3)) != rax_16 + 0x30)
                                rax_18 = 0
                            else
                                rax_18.b = 1
                            
                            if (rax_18.b == 0)
                                rdi_3 = nullptr
                    
                    rax_20 = rdi_3[0x23]
                    
                    if (rax_20 == 0)
                        (*(*rdi_3 + 0x390))(rdi_3)
                        rax_20 = rdi_3[0x23]

*(arg1 + 0x158) = rax_20

if (*(arg1 + 0x10) != 0)
    rax_20 = sub_14273b6f0()
    
    if (rax_20 != 0)
        void* rdx_8 = *(arg1 + 0x10)
        int64_t r8_5 = rax_20 + 0x30
        rax_20 = sx.q(*(rax_20 + 0x38))
        
        if (rax_20.d s<= *(rdx_8 + 0x38))
            int64_t rcx_10 = rax_20
            rax_20 = *(rdx_8 + 0x30)
            
            if (*(rax_20 + (rcx_10 << 3)) == r8_5 && rdx_8 != 0)
                rax_20 = sub_14273b0e0()
                int64_t rdi_4 = rax_20
                void* const rdx_9
                
                if (*(arg1 + 0x10) == 0)
                    rdx_9 = nullptr
                else
                    rax_20 = sub_14273b6f0()
                    
                    if (rax_20 == 0)
                        rdx_9 = nullptr
                    else
                        rdx_9 = *(arg1 + 0x10)
                        int64_t r8_6 = rax_20 + 0x30
                        rax_20 = sx.q(*(rax_20 + 0x38))
                        
                        if (rax_20.d s> *(rdx_9 + 0x38))
                            rdx_9 = nullptr
                        else
                            int64_t rcx_11 = rax_20
                            rax_20 = *(rdx_9 + 0x30)
                            
                            if (*(rax_20 + (rcx_11 << 3)) != r8_6)
                                rdx_9 = nullptr
                
                if (rdi_4 != 0)
                    rax_20 = sx.q(*(rdi_4 + 0x38))
                    
                    if (rax_20.d s<= *(rdx_9 + 0x38))
                        int64_t rcx_12 = rax_20
                        rax_20 = *(rdx_9 + 0x30)
                        
                        if (*(rax_20 + (rcx_12 << 3)) == rdi_4 + 0x30)
                            int64_t* rdi_6
                            
                            if (*(arg1 + 0x10) == 0)
                                rdi_6 = nullptr
                            else
                                void* rax_21 = sub_14273b6f0()
                                
                                if (rax_21 == 0)
                                    rdi_6 = nullptr
                                else
                                    rdi_6 = *(arg1 + 0x10)
                                    int64_t rax_22 = sx.q(*(rax_21 + 0x38))
                                    
                                    if (rax_22.d s> rdi_6[7].d
                                            || *(rdi_6[6] + (rax_22 << 3)) != rax_21 + 0x30)
                                        rdi_6 = nullptr
                            
                            int64_t rax_25 = rdi_6[0x23]
                            
                            if (rax_25 == 0)
                                (*(*rdi_6 + 0x390))(rdi_6)
                                rax_25 = rdi_6[0x23]
                            
                            *(arg1 + 0x160) = rax_25
                            return rax_25

*(arg1 + 0x160) = 0
return rax_20
