// 函数: sub_1422b5970
// 地址: 0x1422b5970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
char r13 = *(arg1 + 0x21)
int32_t i = arg2[1].d
int32_t rbp = 0

if (r13 == 0)
    rbp = *(arg1 + 0x24) * i
else
    sub_1422b8f40(arg1 + 0x48)
    int64_t* rcx_1 = *(arg1 + 0x70)
    *(arg1 + 0x80) = i
    (*(*rcx_1 + 8))(rcx_1, zx.q(i), 0)
    int64_t rax_4
    
    if (*(arg1 + 0x80) == 0)
        rax_4 = 0
    else
        int64_t* rcx_2 = *(arg1 + 0x70)
        rax_4 = (*(*rcx_2 + 0x30))(rcx_2)
    
    *(arg1 + 0x78) = rax_4
    uint64_t r9_1 = 0
    i = arg2[1].d
    
    if (i s> 0)
        int64_t r10_1 = 0
        
        do
            void* rdx_2 = *arg2 + r10_1
            int32_t rax_5
            rax_5.b = *(rdx_2 + 0x18) u> 0
            int32_t rcx_3 = rax_5 + 1
            
            if (*(rdx_2 + 0x19) u<= 0)
                rcx_3 = rax_5
            
            int32_t rax_6 = rcx_3 + 1
            
            if (*(rdx_2 + 0x1a) u<= 0)
                rax_6 = rcx_3
            
            int32_t rcx_4 = rax_6 + 1
            
            if (*(rdx_2 + 0x1b) u<= 0)
                rcx_4 = rax_6
            
            int32_t rax_7 = rcx_4 + 1
            
            if (*(rdx_2 + 0x1c) u<= 0)
                rax_7 = rcx_4
            
            int32_t rcx_5 = rax_7 + 1
            
            if (*(rdx_2 + 0x1d) u<= 0)
                rcx_5 = rax_7
            
            int32_t rax_8 = rcx_5 + 1
            
            if (*(rdx_2 + 0x1e) u<= 0)
                rax_8 = rcx_5
            
            int32_t rcx_6 = rax_8 + 1
            
            if (*(rdx_2 + 0x1f) u<= 0)
                rcx_6 = rax_8
            
            int32_t rax_9 = rcx_6 + 1
            
            if (*(rdx_2 + 0x20) u<= 0)
                rax_9 = rcx_6
            
            int32_t rcx_7 = rax_9 + 1
            
            if (*(rdx_2 + 0x21) u<= 0)
                rcx_7 = rax_9
            
            int32_t rax_10 = rcx_7 + 1
            
            if (*(rdx_2 + 0x22) u<= 0)
                rax_10 = rcx_7
            
            uint64_t rcx_8 = zx.q((r9_1 << 2).d)
            int32_t r8_1 = rax_10 + 1
            
            if (*(rdx_2 + 0x23) u<= 0)
                r8_1 = rax_10
            
            int32_t rdx_3
            rdx_3.b = *(arg1 + 0x28) != 0
            r9_1 = zx.q(r9_1.d + 1)
            r10_1 += 0x24
            int32_t rdx_5 = (rdx_3 + 2) * rbp
            rbp += r8_1
            *(rcx_8 + *(arg1 + 0x78)) = rdx_5 << 8 | r8_1
            i = arg2[1].d
        while (r9_1.d s< i)

int64_t* rcx_9 = *(arg1 + 0x30)

if (rcx_9 != 0)
    (**rcx_9)(rcx_9, 1)
    *(arg1 + 0x30) = 0

int64_t* rax_13 = j_sub_140a82f30(0x28)
int64_t* rcx_10 = rax_13

if (rax_13 == 0)
    rcx_10 = nullptr
else
    char rax_14 = *(arg1 + 0x20)
    rcx_10[2] = 0
    rcx_10[3] = 0
    rcx_10[4].b = rax_14
    rcx_10[1] = &data_142dd5b70
    *rcx_10 = &data_1433176d0

*(arg1 + 0x30) = rcx_10
bool cond:0 = *(arg1 + 0x28) != 0
*(arg1 + 0x44) = rbp
int32_t rdx_8
rdx_8.b = cond:0
*(arg1 + 0x40) = i
(*(*rcx_10 + 8))(rcx_10, zx.q((rdx_8 + 2) * rbp), 0)

if (*(arg1 + 0x44) u> 0)
    int64_t* rcx_11 = *(arg1 + 0x30)
    *(arg1 + 0x38) = (*(*rcx_11 + 0x30))(rcx_11)

uint64_t r10_2 = 0

if (arg2[1].d s> 0)
    int64_t r15_1 = 0
    
    do
        int128_t* rdi_1 = *arg2 + r15_1
        
        if (r13 == 0)
            uint32_t i_1 = *(arg1 + 0x24)
            uint64_t r9_4 = 0
            
            if (i_1 != 0)
                do
                    int16_t r11_2 = *(rdi_1 + (r9_4 << 1))
                    int32_t rax_35
                    
                    if (*(arg1 + 0x21) == 0)
                        int32_t rax_36
                        rax_36.b = *(arg1 + 0x28) != 0
                        rax_35 = (rax_36 + 2) * i_1 * r10_2.d
                    else
                        int32_t rdx_13 = *(zx.q((r10_2 << 2).d) + *(arg1 + 0x78))
                        rax_35 = rdx_13 u>> 8
                        i_1 = zx.d(rdx_13.b)
                    
                    if (r9_4.d u< i_1)
                        int64_t rcx_24 = zx.q(rax_35) + *(arg1 + 0x38)
                        
                        if (*(arg1 + 0x28) == 0)
                            *(r9_4 + rcx_24) = r11_2.b
                        else
                            *(rcx_24 + (r9_4 << 1)) = r11_2
                    
                    uint32_t rcx_26
                    uint64_t r8_10
                    
                    if (*(arg1 + 0x21) == 0)
                        rcx_26 = *(arg1 + 0x24)
                        int32_t r8_11
                        r8_11.b = *(arg1 + 0x28) != 0
                        r8_10 = zx.q((r8_11 + 2) * rcx_26 * r10_2.d)
                    else
                        int32_t rdx_14 = *(zx.q((r10_2 << 2).d) + *(arg1 + 0x78))
                        r8_10 = zx.q(rdx_14 u>> 8)
                        rcx_26 = zx.d(rdx_14.b)
                    
                    if (r9_4.d u< rcx_26)
                        int32_t rax_40
                        rax_40.b = *(arg1 + 0x28) != 0
                        *(zx.q(rcx_26 * (rax_40 + 1) + r9_4.d) + *(arg1 + 0x38) + r8_10) =
                            *(rdi_1 + r9_4 + 0x18)
                    
                    i_1 = *(arg1 + 0x24)
                    r9_4 = zx.q(r9_4.d + 1)
                while (r9_4.d u< i_1)
        else
            int32_t i_4 = 0
            int128_t zmm1 = rdi_1[1]
            int32_t var_48_1 = rdi_1[2].d
            int128_t var_58
            void* rsi_1 = &var_58:8
            int128_t var_68 = *rdi_1
            int128_t* r14_1 = &var_68
            var_58 = zmm1
            int32_t i_2
            
            do
                i_2 = i_4 + 1
                uint64_t r8_2 = zx.q(i_4)
                int32_t j = i_2
                
                if (i_2 u< 0xc)
                    void* r9_2 = &var_58:8 + zx.q(i_2)
                    
                    do
                        r9_2 += 1
                        int32_t j_1 = j
                        
                        if (*(r9_2 - 1) u<= *(&var_58:8 + zx.q(r8_2.d)))
                            j_1 = r8_2.d
                        
                        j += 1
                        r8_2 = zx.q(j_1)
                    while (j u< 0xc)
                    
                    if (r8_2.d != i_4)
                        int16_t rcx_12 = *r14_1
                        *r14_1 = *(&var_68 + (r8_2 << 1))
                        *(&var_68 + (r8_2 << 1)) = rcx_12
                        char rcx_13 = *rsi_1
                        *rsi_1 = *(&var_58:8 + r8_2)
                        *(&var_58:8 + r8_2) = rcx_13
                
                r14_1 += 2
                rsi_1 += 1
                i_4 = i_2
            while (i_2 u< 0xc)
            uint32_t i_3 = *(arg1 + 0x24)
            uint64_t r9_3 = 0
            uint64_t r11_1 = 0
            
            if (i_3 != 0)
                do
                    char rdi_2 = *(&var_58:8 + r11_1)
                    
                    if (rdi_2 != 0)
                        int16_t r8_3 = *(&var_68 + (r11_1 << 1))
                        uint32_t rax_26
                        
                        if (*(arg1 + 0x21) == 0)
                            int32_t rax_27
                            rax_27.b = *(arg1 + 0x28) != 0
                            rax_26 = (rax_27 + 2) * i_3 * r10_2.d
                        else
                            int32_t rdx_11 = *(zx.q((r10_2 << 2).d) + *(arg1 + 0x78))
                            rax_26 = rdx_11 u>> 8
                            i_3 = zx.d(rdx_11.b)
                        
                        if (r9_3.d u< i_3)
                            int64_t rcx_16 = zx.q(rax_26) + *(arg1 + 0x38)
                            
                            if (*(arg1 + 0x28) == 0)
                                *(rcx_16 + r9_3) = r8_3.b
                            else
                                *(rcx_16 + (r9_3 << 1)) = r8_3
                        
                        uint32_t rcx_18
                        uint64_t r8_5
                        
                        if (*(arg1 + 0x21) == 0)
                            rcx_18 = *(arg1 + 0x24)
                            int32_t r8_6
                            r8_6.b = *(arg1 + 0x28) != 0
                            r8_5 = zx.q((r8_6 + 2) * rcx_18 * r10_2.d)
                        else
                            int32_t rdx_12 = *(zx.q((r10_2 << 2).d) + *(arg1 + 0x78))
                            r8_5 = zx.q(rdx_12 u>> 8)
                            rcx_18 = zx.d(rdx_12.b)
                        
                        if (r9_3.d u< rcx_18)
                            int32_t rax_31
                            rax_31.b = *(arg1 + 0x28) != 0
                            *(zx.q(rcx_18 * (rax_31 + 1) + r9_3.d) + *(arg1 + 0x38) + r8_5) = rdi_2
                        
                        r9_3 = zx.q(r9_3.d + 1)
                    
                    i_3 = *(arg1 + 0x24)
                    r11_1 = zx.q(r11_1.d + 1)
                while (r11_1.d u< i_3)
        
        r10_2 = zx.q(r10_2.d + 1)
        r15_1 += 0x24
    while (r10_2.d s< arg2[1].d)

__security_check_cookie(rax_1 ^ &var_88)
return arg1
