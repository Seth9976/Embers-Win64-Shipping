// 函数: sub_142187150
// 地址: 0x142187150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x37) &= 0xf1
*(arg1 + 0x36) = 0
sub_140865470(arg1 + 0x60, 0)
sub_140865470(arg1 + 0xb0, 0)
sub_140865470(arg1 + 0x100, 0)
int64_t* r15 = nullptr
*(arg1 + 0x198) = 0

if (*(arg1 + 0x19c) != 0)
    sub_1405c5570(arg1 + 0x190, 0)

void* r14 = arg1 + 0x1a0
*(r14 + 8) = 0

if (*(r14 + 0xc) != 0)
    sub_1405c5570(r14, 0)

void* r12 = arg1 + 0x150
*(r12 + 8) = 0

if (*(r12 + 0xc) != 0)
    sub_1405c5570(r12, 0)

*(arg1 + 0x160) = 0
*(arg1 + 0x168) = 0
*(arg1 + 0x170) = 0x80
*(arg1 + 0x178) = 0xbf000000
*(arg1 + 0x17c) = 0xbf000000
*(arg1 + 0x180) = 0
*(arg1 + 0x184) = 0xffffffff
*(arg1 + 0x1b0) = 0
void* rdi

if (*(arg1 + 0x48) s> 0)
    rdi = **(arg1 + 0x40)
else
    rdi = nullptr

int64_t* rsi = *(rdi + 0x48)
void* var_b8 = rdi
int64_t* var_a8 = rsi

if (rsi != 0)
    int32_t rax_3 = (*(*rsi + 0x280))(rsi, 0)
    
    if (rax_3 != 0)
        int32_t rcx_7 = *(arg1 + 0x170)
        *(arg1 + 0x170) = rax_3 + rcx_7
        *(arg1 + 0x180) = rcx_7
    
    int32_t rax_6 = (*(*rsi + 0x288))(rsi)
    
    if (rax_6 != 0)
        int32_t rcx_9 = *(arg1 + 0x174)
        *(arg1 + 0x174) = rax_6 + rcx_9
        *(arg1 + 0x184) = rcx_9

int32_t i = 0
void* result = 8

if (*(*(rdi + 0x30) + 0x58) - 3 u> 1)
    result = nullptr

*(arg1 + 0x37) &= 0xf7
*(arg1 + 0x37) |= result.b

if (*(rdi + 0x40) s> 0)
    int64_t* var_c0_1 = nullptr
    
    do
        int64_t* rcx_11 = *(r15 + *(rdi + 0x38))
        int64_t* var_c8 = rcx_11
        
        if (rcx_11[5].b s>= 0 || (*(rcx_11 + 0x29) & 8) == 0)
            rcx_11.b = 0
        else
            rcx_11.b = 2
        
        char rax_10 = *(arg1 + 0x37)
        rcx_11.b |= rax_10
        rcx_11.b ^= rax_10
        rcx_11.b &= 2
        rcx_11.b ^= rax_10
        *(arg1 + 0x37) = rcx_11.b
        void* rax_11 = sub_142557000()
        int64_t* rcx_12 = var_c8
        void* r8_1 = rcx_12[2]
        int64_t rax_12 = sx.q(*(rax_11 + 0x38))
        
        if (rax_12.d s> *(r8_1 + 0x38) || *(*(r8_1 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
            int32_t rax_15 = (*(*rcx_12 + 0x280))(rcx_12, rsi, r8_1)
            int32_t arg_8
            int64_t* rdx_7
            
            if (rax_15 == 0)
                rdx_7 = var_c8
            else
                int32_t rcx_13 = *(arg1 + 0x170)
                void** var_a0 = &var_c8
                arg_8 = rcx_13
                int32_t* var_98_1 = &arg_8
                void arg_10
                sub_14217f1c0(arg1 + 0x60, &arg_10, &var_a0, nullptr)
                void* rax_16 = sub_142557b30()
                void* rdx_4 = var_c8[2]
                int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                
                if (rax_17.d s<= *(rdx_4 + 0x38)
                        && *(*(rdx_4 + 0x30) + (rax_17 << 3)) == rax_16 + 0x30
                        && *(arg1 + 0x160) == 0)
                    *(arg1 + 0x160) = *(arg1 + 0x170)
                
                void* rax_20 = sub_1425552d0()
                int64_t* rdi_1 = var_c8
                void* rdx_5 = rdi_1[2]
                int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                
                if (rax_21.d s<= *(rdx_5 + 0x38)
                        && *(*(rdx_5 + 0x30) + (rax_21 << 3)) == rax_20 + 0x30
                        && *(arg1 + 0x164) == 0)
                    void* rax_23 = sub_1425552d0()
                    void* rdx_6 = rdi_1[2]
                    int64_t rax_24 = sx.q(*(rax_23 + 0x38))
                    
                    if (rax_24.d s> *(rdx_6 + 0x38)
                            || *(*(rdx_6 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
                        rdi_1 = nullptr
                    
                    *(arg1 + 0x168) = *(rdi_1 + 0x114)
                    *(arg1 + 0x164) = *(arg1 + 0x170)
                
                void* rax_28 = sub_142551350()
                rdx_7 = var_c8
                void* r8_6 = rdx_7[2]
                int64_t rax_29 = sx.q(*(rax_28 + 0x38))
                
                if (rax_29.d s<= *(r8_6 + 0x38)
                        && *(*(r8_6 + 0x30) + (rax_29 << 3)) == rax_28 + 0x30
                        && *(arg1 + 0x16c) == 0)
                    *(arg1 + 0x16c) = *(arg1 + 0x170)
                
                *(arg1 + 0x170) += rax_15
            
            int32_t rax_33 = (*(*rdx_7 + 0x288))(rdx_7)
            
            if (rax_33 s> 0)
                int32_t rcx_21 = *(arg1 + 0x174)
                void** var_90 = &var_c8
                arg_8 = rcx_21
                int32_t* var_88_1 = &arg_8
                void arg_18
                sub_14217f1c0(arg1 + 0xb0, &arg_18, &var_90, nullptr)
                int64_t rdi_2 = sx.q(*(arg1 + 0x198))
                int32_t rax_34 = (rdi_2 + 1).d
                *(arg1 + 0x198) = rax_34
                
                if (rax_34 s> *(arg1 + 0x19c))
                    sub_1405a4d70(arg1 + 0x190)
                
                int32_t j = 1
                *(*(arg1 + 0x190) + (rdi_2 << 3)) = var_c8
                
                if (*(arg1 + 0x48) s> 1)
                    int32_t* var_78_1 = &arg_8
                    int64_t* rdi_3 = 8
                    
                    do
                        void* rcx_24 = *(rdi_3 + *(arg1 + 0x40))
                        arg_8 = *(arg1 + 0x174)
                        int64_t var_80 = *(rcx_24 + 0x38) + (sx.q(i) << 3)
                        void arg_20
                        sub_14217f1c0(arg1 + 0xb0, &arg_20, &var_80, nullptr)
                        j += 1
                        rdi_3 = &rdi_3[1]
                    while (j s< *(arg1 + 0x48))
                    
                    r12 = arg1 + 0x150
                    r14 = arg1 + 0x1a0
                
                *(arg1 + 0x174) += rax_33
            
            if (data_143dbb3b4 != 0 || (*(var_c8 + 0x29) & 4) != 0)
                arg_8 = *(arg1 + 0x174)
                int64_t** var_70 = &var_c8
                int32_t* var_68_1 = &arg_8
                void var_b0
                sub_14217f1c0(arg1 + 0x100, &var_b0, &var_70, nullptr)
                int64_t rdi_4 = sx.q(*(r14 + 8))
                int32_t rax_41 = (rdi_4 + 1).d
                *(r14 + 8) = rax_41
                
                if (rax_41 s> *(r14 + 0xc))
                    sub_1405a4d70(r14)
                
                int32_t j_1 = 1
                *(*r14 + (rdi_4 << 3)) = var_c8
                
                if (*(arg1 + 0x48) s> 1)
                    int32_t* var_58_1 = &arg_8
                    int64_t* rdi_5 = 8
                    
                    do
                        void* rcx_29 = *(rdi_5 + *(arg1 + 0x40))
                        arg_8 = *(arg1 + 0x174)
                        int64_t var_60 = *(rcx_29 + 0x38) + (sx.q(i) << 3)
                        void var_ac
                        sub_14217f1c0(arg1 + 0x100, &var_ac, &var_60, nullptr)
                        j_1 += 1
                        rdi_5 = &rdi_5[1]
                    while (j_1 s< *(arg1 + 0x48))
                
                *(arg1 + 0x174) += 8
            
            r15 = var_c0_1
        
        void* rax_46 = sub_142557420()
        int64_t* rdi_6 = var_c8
        void* rdx_16 = rdi_6[2]
        int64_t rax_47 = sx.q(*(rax_46 + 0x38))
        
        if (rax_47.d s> *(rdx_16 + 0x38) || *(*(rdx_16 + 0x30) + (rax_47 << 3)) != rax_46 + 0x30)
            void* rax_50 = sub_142558280()
            int64_t* rdi_7 = var_c8
            void* rdx_17 = rdi_7[2]
            int64_t rax_51 = sx.q(*(rax_50 + 0x38))
            
            if (rax_51.d s> *(rdx_17 + 0x38)
                    || *(*(rdx_17 + 0x30) + (rax_51 << 3)) != rax_50 + 0x30)
                void* rax_54 = sub_142554870()
                rdi_6 = var_c8
                void* rdx_19 = rdi_6[2]
                int64_t rax_55 = sx.q(*(rax_54 + 0x38))
                
                if (rax_55.d s<= *(rdx_19 + 0x38))
                    result = *(rdx_19 + 0x30)
                
                if (rax_55.d s> *(rdx_19 + 0x38) || *(result + (rax_55 << 3)) != rax_54 + 0x30)
                    void* rax_56 = sub_142556c20()
                    rdi_6 = var_c8
                    void* rdx_22 = rdi_6[2]
                    result = sx.q(*(rax_56 + 0x38))
                    
                    if (result.d s<= *(rdx_22 + 0x38))
                        void* result_2 = result
                        result = *(rdx_22 + 0x30)
                        
                        if (*(result + (result_2 << 3)) == rax_56 + 0x30)
                            void* rax_57 = sub_142556c20()
                            void* rdx_23 = rdi_6[2]
                            int64_t rax_58 = sx.q(*(rax_57 + 0x38))
                            
                            if (rax_58.d s> *(rdx_23 + 0x38)
                                    || *(*(rdx_23 + 0x30) + (rax_58 << 3)) != rax_57 + 0x30)
                                rdi_6 = nullptr
                            
                            result = rdi_6[6]
                            
                            if (result == 0 || *(result + 0x28) == 0 || *(result + 0x48) == 0)
                                result = nullptr
                            
                            *(arg1 + 0x1b0) = result
                            rdi_6 = var_c8
                else if (rdi_6[5].b s< 0)
                    result = &rdi_6[6]
                    
                    if (r12 != result)
                        int64_t rsi_2 = sx.q(*(result + 8))
                        int64_t r14_3 = *result
                        int32_t r8_15 = *(r12 + 0xc)
                        *(r12 + 8) = rsi_2.d
                        
                        if (rsi_2.d != 0 || r8_15 != 0)
                            sub_1405c4a00(r12, rsi_2.d, r8_15)
                            result = memcpy(*r12, r14_3, (rsi_2 << 3).d)
                            rdi_6 = var_c8
                        else
                            *(r12 + 0xc) = rsi_2.d
            else
                void* rax_53 = sub_142558280()
                void* rdx_18 = rdi_7[2]
                result = sx.q(*(rax_53 + 0x38))
                
                if (result.d s> *(rdx_18 + 0x38))
                    rdi_7 = nullptr
                else
                    void* result_1 = result
                    result = *(rdx_18 + 0x30)
                    
                    if (*(result + (result_1 << 3)) != rax_53 + 0x30)
                        rdi_7 = nullptr
                
                *(arg1 + 0x178) = rdi_7[6].d f+ *(arg1 + 0x178)
                *(arg1 + 0x17c) = *(rdi_7 + 0x34) f+ *(arg1 + 0x17c)
                rdi_6 = var_c8
        else
            *(arg1 + 0x37) ^= (rdi_6[5].b u>> 5 ^ *(arg1 + 0x37)) & 4
            result = zx.q(rdi_6[6].b)
            *(arg1 + 0x36) = result.b
        
        if ((*(arg1 + 0x37) & 8) == 0)
            result = (*(*rdi_6 + 0x320))(rdi_6)
            
            if (result.b != 0)
                *(arg1 + 0x37) |= 8
        
        rdi = var_b8
        r14 = arg1 + 0x1a0
        rsi = var_a8
        r15 = &r15[1]
        i += 1
        var_c0_1 = r15
    while (i s< *(rdi + 0x40))

return result
