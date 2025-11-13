// 函数: sub_141226720
// 地址: 0x141226720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t* r15 = arg2
void* rdi = arg1
int64_t* var_c8
int32_t i_5
int128_t zmm6

if (data_1439b6350 != 0)
    void* rcx = arg1
    int32_t i = 0
    int64_t* rdi_1 = nullptr
    var_c8 = nullptr
    int32_t i_7 = 0
    int32_t var_bc_1 = 0
    int32_t r9_1 = 0
    i_5 = 0
    
    if (*(rcx + 0xa8) s> 0)
        int64_t r12_1 = 0
        
        do
            int64_t r13_1 = *(rcx + 0xa0)
            int32_t j = 0
            
            if (*(r12_1 + r13_1 + 0x16f0) s> 0)
                int64_t* r15_1 = nullptr
                
                do
                    int64_t* rcx_1 = rdi_1
                    int64_t k = *(r15_1 + *(r12_1 + r13_1 + 0x16e8))
                    void* rdx = &rdi_1[sx.q(i_7)]
                    
                    if (rdi_1 != rdx)
                        while (*rcx_1 != k)
                            rcx_1 = &rcx_1[1]
                            
                            if (rcx_1 == rdx)
                                goto label_1412267ec
                    
                    if (rdi_1 == rdx || ((rcx_1 - rdi_1) s>> 3).d == 0xffffffff)
                    label_1412267ec:
                        int64_t i_8 = sx.q(i_7)
                        i_7 = (i_8 + 1).d
                        
                        if (i_7 s> r9_1)
                            zmm6 = sub_14083a310(&var_c8, i_8.d)
                            r9_1 = var_bc_1
                            rdi_1 = var_c8
                        
                        rdi_1[i_8] = k
                    
                    j += 1
                    r15_1 = &r15_1[1]
                while (j s< *(r12_1 + r13_1 + 0x16f0))
                
                i = i_5
                rsi = 0
                rcx = arg1
            
            i += 1
            r12_1 += 0x5240
            i_5 = i
        while (i s< *(rcx + 0xa8))
        
        if (i_7 s> 0)
            uint64_t i_6 = zx.q(i_7)
            uint64_t i_1
            
            do
                int64_t* rcx_5 = *(*rdi_1 + 8)
                (*(*rcx_5 + 0x78))(rcx_5, rcx + 0x10, &arg2[4])
                rdi_1 = &rdi_1[1]
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
        
        r15 = arg2
    
    rdi = arg1

void* rax_5 = *(rdi + 8)
int64_t* r14_2 = &r15[0x10]
int32_t rdx_5 = *(rax_5 + 0xef0) - *(rax_5 + 0xf1c) + r15[6]
r14_2[1].d = 0

if (*(r14_2 + 0xc) != rdx_5)
    zmm6 = sub_1410b3bb0(r14_2, rdx_5)

int32_t rax_6

if ((*(rdi + 0x3c) & 1) != 0)
    rax_6 = sub_14148c700()
    i_5.b = 1

if ((*(rdi + 0x3c) & 1) == 0 || rax_6 == 0)
    i_5.b = 0

int64_t var_98
sub_1407453e0(&var_98, *(rdi + 8) + 0xee8)
int32_t i_4
int32_t i_2 = i_4
void* var_88

if (i_2 s< *(var_88 + 0x18))
    int128_t var_58_1 = zmm6
    int128_t zmm7 = 0x3727c5ac
    
    do
        int64_t* rcx_10 = sx.q(i_2) * 0x30 + *var_98
        var_c8 = rcx_10
        void* r13_2 = rcx_10[4]
        void* r9_2 = *(r13_2 + 0x20)
        uint128_t zmm0_1 = *(r9_2 + 0x30)
        zmm0_1.d = zmm0_1.d f* zmm0_1.d
        
        if (zmm0_1.d f>= zmm7.d)
        label_14122695f:
            char r10_1 = *(r9_2 + 0x138)
            
            if ((r10_1 & 4) == 0)
            label_14122698e:
                int64_t rax_11 = sx.q(*(rdi + 0xa8))
                int64_t r12_2 = 0
                
                if (rax_11.d s> 0)
                    void* r8_3 = *(rdi + 0xa0) + 0xd79
                    
                    do
                        if (((*(r13_2 + 0x64) & 2) == 0
                                || (*(sx.q(*(r13_2 + 0x28)) * 0x78 + *(r8_3 + 0xb57) + 0x40) & 1)
                                != 0) && (*r8_3 == 0 || (r10_1 & 8) != 0)
                                && ((*(r9_2 + 0x13d) & 1) != 0 || (*(r8_3 + 0x3c03) & 0x100) != 0))
                            int64_t rbx_2 = sx.q(r14_2[1].d)
                            int32_t rax_14 = (rbx_2 + 1).d
                            r14_2[1].d = rax_14
                            
                            if (rax_14 s> *(r14_2 + 0xc))
                                sub_1410b38a0(r14_2, rbx_2.d)
                            
                            int32_t* r15_3 = *r14_2 + rbx_2 * 0x18
                            
                            if (r15_3 == 0)
                                r15_3 = nullptr
                            else
                                *(r15_3 + 8) = r13_2
                                r15_3[4] = 0xffffffff
                                *r15_3 = 0x40
                            
                            int32_t rcx_17 = ((var_c8[5].d ^ *r15_3) & 3) ^ *r15_3
                            *r15_3 = rcx_17
                            int32_t rax_18
                            
                            if ((*(rdi + 0x38) & 0x8000000) == 0)
                                rax_18 = 0
                            else
                                int64_t rdx_10 = *(*(r13_2 + 0x20) + 0x130)
                                
                                if (rdx_10 == 0)
                                    rax_18 = 0
                                else
                                    rax_18 = 4
                                    
                                    if (*(rdx_10 + 0x78) == 0)
                                        rax_18 = 0
                            
                            *r15_3 = (rcx_17 & 0xfffffffb) | rax_18
                            int32_t rax_20
                            
                            if (i_5.b == 0)
                                rax_20 = 0
                            else
                                rax_20 = 0x10
                                
                                if (Mod1::fCopySymOutMiniPDB(rdi, r13_2) == 0)
                                    rax_20 = 0
                            
                            *r15_3 &= 0xffffffef
                            *r15_3 |= rax_20
                            int32_t rax_32
                            
                            if ((*(rdi + 0x38) & 0x10000000) == 0)
                                rax_32 = 0
                            else
                                int64_t* rcx_21 = *(*(r13_2 + 0x20) + 0x128)
                                
                                if (rcx_21 == 0)
                                    rax_32 = 0
                                else
                                    void* rax_22 = *(rdi + 8)
                                    int64_t arg_20 = 0
                                    int64_t* rax_24 =
                                        (*(*rcx_21 + 0x40))(rcx_21, zx.q(*(rax_22 + 8)), &arg_20)
                                    int64_t rdx_13 = *rax_24
                                    
                                    if ((*(rdx_13 + 0x90))(rax_24, rdx_13) == 0)
                                        rax_32 = 0
                                    else
                                        int64_t* rcx_23 = *(r13_2 + 0x20)
                                        uint64_t var_b8
                                        (*(*rcx_23 + 0x10))(rcx_23, &var_b8)
                                        void* rax_27 = arg1
                                        int32_t rdi_2 = 0
                                        
                                        if (*(rax_27 + 0xa8) s<= 0)
                                        label_141226ba3:
                                            rdi = arg1
                                            rax_32 = 0
                                        else
                                            int64_t rbx_3 = 0
                                            
                                            while (true)
                                                void* rcx_25 = *(rax_27 + 0xa0) + rbx_3
                                                
                                                if (*(*(r13_2 + 0x20) + 0x13c) == 0)
                                                    var_b8 = *(rcx_25 + 0x60c)
                                                    int32_t var_b0_1 = *(rcx_25 + 0x614)
                                                
                                                if ((*(sx.q(*(r13_2 + 0x28)) * 0x78
                                                        + *(rcx_25 + 0x18d0) + 0x40) & 1) != 0)
                                                    uint128_t var_a8 = var_b8.o
                                                    zmm0_1, zmm6, zmm7 =
                                                        sub_141227530(rcx_25, &var_a8)
                                                    
                                                    if (zmm0_1.d f> zmm6.d)
                                                        rdi = arg1
                                                        rax_32 = 8
                                                        break
                                                
                                                rax_27 = arg1
                                                rdi_2 += 1
                                                rbx_3 += 0x5240
                                                
                                                if (rdi_2 s>= *(rax_27 + 0xa8))
                                                    goto label_141226ba3
                            
                            int32_t rdx_19 = (*r15_3 & 0xfffffff7) | rax_32
                            *r15_3 = rdx_19
                            int32_t rax_35
                            
                            if ((*(r12_2 * 0x5240 + *(rdi + 0xa0) + 0x497c) & 0x100) != 0)
                                rax_35 = 0x60
                            
                            if ((*(r12_2 * 0x5240 + *(rdi + 0xa0) + 0x497c) & 0x100) == 0
                                    || *(*(r13_2 + 0x20) + 0x13d) == 1)
                                rax_35 = 0x40
                            
                            int32_t rdx_21 = (rdx_19 & 0xffffffdf) | rax_35
                            *r15_3 = rdx_21
                            int32_t rax_38
                            
                            if ((rdx_21.b & 0x3c) == 0)
                                rax_38 = var_c8[5].d & 3
                            
                            int32_t rax_40
                            int32_t rcx_27
                            
                            if ((rdx_21.b & 0x3c) != 0 || rax_38 == 0 || rax_38 == 3)
                                rcx_27 = 1
                                rax_40 = 0x80
                            else
                                rcx_27 = 0
                                
                                if ((*(*(r13_2 + 0x20) + 0x13a) & 0x40) == 0)
                                    rax_40 = 0x80
                                else
                                    rax_40 = 0
                            
                            *r15_3 = (((rdx_21 & 0xffffff7f) | rax_40) & 0xfffffeff) | rcx_27 << 8
                            break
                        
                        r12_2 += 1
                        r8_3 += 0x5240
                    while (r12_2 s< rax_11)
            else if (((*(r13_2 + 0x64) & 1) == 0 || *(r13_2 + 0x78) s>= data_1439b6348)
                    && (r10_1 & 8) != 0)
                goto label_14122698e
        else
            zmm0_1 = *(r9_2 + 0x34)
            zmm0_1.d = zmm0_1.d f* zmm0_1.d
            
            if (zmm0_1.d f>= zmm7.d)
                goto label_14122695f
            
            zmm0_1 = *(r9_2 + 0x38)
            zmm0_1.d = zmm0_1.d f* zmm0_1.d
            
            if (not(zmm0_1.d f< zmm7.d))
                goto label_14122695f
        
        int32_t var_8c
        int32_t var_80 = var_80 & not.d(var_8c)
        void var_90
        sub_14059bdd0(&var_90)
        i_2 = i_4
    while (i_2 s< *(var_88 + 0x18))
    
    r15 = arg2

int32_t i_3 = 0

if (r15[6] s> 0)
    do
        int64_t rdi_3 = sx.q(r14_2[1].d)
        int32_t rax_44 = (rdi_3 + 1).d
        r14_2[1].d = rax_44
        
        if (rax_44 s> *(r14_2 + 0xc))
            sub_1410b38a0(r14_2, rdi_3.d)
        
        int32_t* rdx_27 = *r14_2 + rdi_3 * 0x18
        
        if (rdx_27 == 0)
            rdx_27 = nullptr
        else
            *(rdx_27 + 8) = 0
            rdx_27[4] = i_3
            *rdx_27 = 0
        
        i_3 += 1
        *rdx_27 = (*rdx_27 & 0xfffffe01) | 1
    while (i_3 s< r15[6])

sub_141214980(*r14_2, r14_2[1].d, arg1.b)
*r15 = r14_2[1].d
r15[1] = r14_2[1].d
r15[2] = r14_2[1].d
r15[3] = r14_2[1].d
int32_t result = r14_2[1].d

if (result s> 0)
    int32_t* rdx_29 = nullptr
    
    while (true)
        int64_t r11_3 = *r14_2
        int32_t rcx_33 = *(rdx_29 + r11_3)
        uint8_t r8_7 = (rcx_33 u>> 4).b & 1
        uint8_t r9_4 = (rcx_33 u>> 3).b & 1
        uint8_t r10_3 = (rcx_33 u>> 5).b & 1
        
        if ((rcx_33.b & 0x40) != 0 && *r15 == result)
            *r15 = rsi
            rcx_33 = *(rdx_29 + r11_3)
        
        if (rcx_33.b s< 0)
            result = r14_2[1].d
            
            if (r15[1] == result)
                r15[1] = rsi
                rcx_33 = *(rdx_29 + r11_3)
        
        if (test_bit(rcx_33, 8))
            result = r14_2[1].d
            
            if (r15[2] == result)
                r15[2] = rsi
        
        if (r8_7 != 0 || r9_4 != 0 || r10_3 != 0)
            r15[3] = rsi
            break
        
        result = r14_2[1].d
        rsi += 1
        rdx_29 = &rdx_29[6]
        
        if (rsi s>= result)
            return result
        
        continue

return result
