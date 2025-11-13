// 函数: sub_141460150
// 地址: 0x141460150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg1 + 0x18)
int32_t i = 0
void* r13 = *(arg1 + 0x20)

if (*(arg1 + 0x450) s> 0)
    void* r9_1 = arg1 + 0x454
    
    do
        void* rax_1 = *(r15 + 0x15c8)
        void* r8_1 = r15 + 0x15b8
        int32_t rcx = *r9_1
        
        if (rax_1 != 0)
            r8_1 = rax_1
        
        int32_t rax_2 = rcx
        
        if (rcx s< 0)
            rax_2 = rcx + 0x1f
        
        int64_t rdx_1 = sx.q(rax_2 s>> 5)
        i += 1
        r9_1 += 4
        *(r8_1 + (rdx_1 << 2)) &= not.d(1 << (rcx.b & 0x1f))
    while (i s< *(arg1 + 0x450))

*(r15 + 0x4980) |= *(arg1 + 0x38730)
int32_t rax_7 = *(r15 + 0x497c)
int32_t rcx_7 = (((zx.d(*(arg1 + 0x38732)) << 7 | rax_7) ^ rax_7) & 0x80) ^ rax_7
*(r15 + 0x497c) = rcx_7
int32_t rcx_8 = rcx_7 ^ (((zx.d(*(arg1 + 0x38733)) << 8 | rcx_7) ^ rcx_7) & 0x100)
*(r15 + 0x497c) = rcx_8
int32_t rcx_9 = rcx_8 ^ (((zx.d(*(arg1 + 0x38734)) << 9 | rcx_8) ^ rcx_8) & 0x200)
*(r15 + 0x497c) = rcx_9
int32_t rcx_10 = rcx_9 ^ (((zx.d(*(arg1 + 0x38735)) << 0xa | rcx_9) ^ rcx_9) & 0x400)
*(r15 + 0x497c) = rcx_10
int32_t rcx_11 = rcx_10 ^ (((zx.d(*(arg1 + 0x38737)) << 0xf | rcx_10) ^ rcx_10) & 0x8000)
*(r15 + 0x497c) = rcx_11
int32_t rcx_12 = rcx_11 ^ (((zx.d(*(arg1 + 0x38738)) << 0x10 | rcx_11) ^ rcx_11) & 0x10000)
*(r15 + 0x497c) = rcx_12
*(r15 + 0x497c) = (((zx.d(*(arg1 + 0x38739)) << 0x11 | rcx_12) ^ rcx_12) & 0x20000) ^ rcx_12
int64_t rbp = sx.q(*(arg1 + 0x850))
int64_t rsi = sx.q(*(r15 + 0x16f0))
int32_t rax_39 = (rsi + rbp).d
*(r15 + 0x16f0) = rax_39

if (rax_39 s> *(r15 + 0x16f4))
    sub_14083a310(r15 + 0x16e8, rsi.d)

memcpy(*(r15 + 0x16e8) + (rsi << 3), arg1 + 0x858, (rbp << 3).d)
*(r15 + 0x16f8) += *(arg1 + 0xc50)
*(r15 + 0x16fc) += *(arg1 + 0xc54)
*(r15 + 0x1890) += *(arg1 + 0xc5c)
*(r15 + 0x18a0) |= *(arg1 + 0xc6c)
*(r15 + 0x18a4) |= *(arg1 + 0xc70)
*(r15 + 0x1894) += *(arg1 + 0xc60)
*(r15 + 0x18a1) |= *(arg1 + 0xc6d)
*(r15 + 0x18a5) |= *(arg1 + 0xc71)
*(r15 + 0x1898) += *(arg1 + 0xc64)
*(r15 + 0x18a2) |= *(arg1 + 0xc6e)
*(r15 + 0x18a6) |= *(arg1 + 0xc72)
*(r15 + 0x189c) += *(arg1 + 0xc68)
*(r15 + 0x18a3) |= *(arg1 + 0xc6f)
*(r15 + 0x18a7) |= *(arg1 + 0xc73)
*(r15 + 0x18a8) |= *(arg1 + 0xc74)
*(r15 + 0x18a9) |= *(arg1 + 0xc75)
int32_t rax_57 = *(r15 + 0x497c)
*(r15 + 0x497c) = (((zx.d(*(arg1 + 0x38736)) << 0xc | rax_57) ^ rax_57) & 0x1000) ^ rax_57
int64_t rbp_1 = sx.q(*(arg1 + 0x1078))
int64_t rsi_1 = sx.q(*(r15 + 0x1750))
int32_t rax_58 = (rsi_1 + rbp_1).d
*(r15 + 0x1750) = rax_58

if (rax_58 s> *(r15 + 0x1754))
    sub_14083a310(r15 + 0x1748, rsi_1.d)

memcpy(*(r15 + 0x1748) + (rsi_1 << 3), arg1 + 0x1080, (rbp_1 << 3).d)
int64_t rsi_2 = sx.q(*(arg1 + 0x1880))

if (rsi_2.d != 0)
    int32_t rcx_23 = *(r15 + 0x18b8)
    int32_t rdx_6 = rcx_23 + rsi_2.d
    
    if (rdx_6 s> *(r15 + 0x18bc))
        sub_1410b3bb0(r15 + 0x18b0, rdx_6)
        rcx_23 = *(r15 + 0x18b8)
    
    memcpy(*(r15 + 0x18b0) + sx.q(rcx_23) * 0x18, *(arg1 + 0x1878), (rsi_2 * 0x18).d)
    *(r15 + 0x18b8) += rsi_2.d

int64_t rsi_3 = sx.q(*(arg1 + 0x1890))

if (rsi_3.d != 0)
    int32_t rax_62 = *(r15 + 0x18c8)
    int32_t rdx_8 = rax_62 + rsi_3.d
    
    if (rdx_8 s> *(r15 + 0x18cc))
        sub_14083ae30(r15 + 0x18c0, rdx_8)
        rax_62 = *(r15 + 0x18c8)
    
    memcpy((sx.q(rax_62) << 4) + *(r15 + 0x18c0), *(arg1 + 0x1888), (rsi_3 << 4).d)
    *(r15 + 0x18c8) += rsi_3.d

int32_t i_1 = 0

if (*(arg1 + 0x1478) s> 0)
    void* r14_1 = arg1 + 0x1480
    
    do
        void* rbx_2 = *r14_1
        *(rbx_2 + 0x120) |= 2
        *(arg1 + 8)
        sub_1413ae430(rbx_2)
        sub_141184690(*(arg1 + 0x10), *(rbx_2 + 0x110))
        i_1 += 1
        r14_1 += 8
    while (i_1 s< *(arg1 + 0x1478))

int32_t i_2 = 0

if (*(arg1 + 0xc78) s> 0)
    void* rsi_4 = arg1 + 0xc80
    
    do
        void* rcx_33 = *rsi_4
        
        if ((*(rcx_33 + 0x120) & 2) != 0)
            *(arg1 + 8)
            sub_1413ae430(rcx_33)
        
        i_2 += 1
        rsi_4 += 8
    while (i_2 s< *(arg1 + 0xc78))

int32_t i_3 = 0

if (*(arg1 + 0x37f28) s> 0)
    void** rbx_3 = arg1 + 0x37f30
    
    do
        sub_141428a40(r15, *rbx_3, rbx_3[1])
        i_3 += 1
        rbx_3 = &rbx_3[2]
    while (i_3 s< *(arg1 + 0x37f28))

int32_t i_4 = 0

if (*(arg1 + 0x37b28) s> 0)
    void* r8_11 = arg1 + 0x37b2c
    
    do
        int64_t rdx_14 = sx.q(*r8_11)
        i_4 += 1
        int16_t rax_63 = *(r8_11 + 4)
        r8_11 += 8
        *(*(r15 + 0x16c8) + (rdx_14 << 1)) = rax_63
    while (i_4 s< *(arg1 + 0x37b28))

int32_t* rbp_2 = r13 + 0x120
void* rbx_4 = r13 + 0x170
void* rsi_5 = arg1 + 0x2f1c0
int64_t* i_7 = 0x12
void* r14_2 = arg1 + 0x40a0
uint64_t result
int64_t* i_5

do
    int32_t rax_66 = *r14_2
    
    if (rax_66 s> 0)
        int64_t r12_1 = sx.q(*(rbx_4 - 0x168))
        int32_t rax_67 = rax_66 + r12_1.d
        *(rbx_4 - 0x168) = rax_67
        
        if (rax_67 s> *(rbx_4 - 0x164))
            sub_1410b38f0(rbx_4 - 0x170, r12_1.d)
        
        void* rcx_37 = *(r14_2 - 8)
        void* rdx_16 = r14_2 - 0x2808
        
        if (rcx_37 != 0)
            rdx_16 = rcx_37
        
        memcpy(*(rbx_4 - 0x170) + r12_1 * 0x28, rdx_16, *r14_2 * 0x28)
    
    int32_t rax_70 = *rsi_5
    
    if (rax_70 s> 0)
        int64_t r12_2 = sx.q(*rbx_4)
        int32_t rax_71 = rax_70 + r12_2.d
        *rbx_4 = rax_71
        
        if (rax_71 s> *(rbx_4 + 4))
            sub_14083a440(rbx_4 - 8, r12_2.d)
        
        void* rax_72 = *(rsi_5 - 8)
        void* rdx_18 = rsi_5 - 0x808
        
        if (rax_72 != 0)
            rdx_18 = rax_72
        
        memcpy(*(rbx_4 - 8) + (r12_2 << 3), rdx_18, *rsi_5 << 3)
    
    result = zx.q(*(arg1 - r13 + rbp_2 + 0x379b8))
    r14_2 += 0x2810
    *rbp_2 += result.d
    rsi_5 += 0x810
    rbp_2 = &rbp_2[1]
    rbx_4 += 0x10
    i_5 = i_7
    i_7 -= 1
while (i_5 != 1)
int32_t i_6 = i_7.d

if (*(arg1 + 0x650) s> i_7.d)
    void* r15_3 = arg1 + 0x654
    
    do
        int64_t r9_2 = sx.q(*r15_3)
        int32_t rax_74 = *(r15 + 0x1760)
        int32_t arg_8 = r9_2.d
        uint64_t* result_2
        int512_t zmm1
        
        if (rax_74 == *(r15 + 0x178c))
        label_14146075b:
            result, zmm1 = sub_141435940(r15 + 0x1758, r9_2.d, &arg_8)
            result_2 = result
        else
            void* rcx_42 = *(r15 + 0x1798)
            void* r8_16 = r15 + 0x1790
            
            if (rcx_42 != 0)
                r8_16 = rcx_42
            
            result = zx.q(*(r8_16 + (((sx.q(*(r15 + 0x17a0)) - 1) & r9_2) << 2)))
            
            if (result.d == 0xffffffff)
                goto label_14146075b
            
            int64_t r8_17 = *(r15 + 0x1758)
            void* rcx_44
            
            while (true)
                int64_t rdx_22 = sx.q(result.d) * 3
                rcx_44 = r8_17 + (rdx_22 << 3)
                
                if (*(r8_17 + (rdx_22 << 3)) == r9_2.d)
                    break
                
                result = zx.q(*(rcx_44 + 0x10))
                
                if (result.d == 0xffffffff)
                    goto label_14146075b
            
            if (result.d == 0xffffffff || rcx_44 == 0)
                goto label_14146075b
            
            result_2 = rcx_44 + 8
        
        if (*result_2 == i_7)
            zmm1.o = data_142d3f660
            int128_t var_88
            __builtin_memcpy(&var_88, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x80\x3f", 
                0x30)
            int128_t var_58
            __builtin_memset(&var_58, 0, 0x20)
            float var_c8[0x4][0x4]
            sub_1414a3270(nullptr, &var_c8)
            int64_t* rcx_46 = data_143f0f180
            int64_t* result_1
            (*(*rcx_46 + 0xf8))(rcx_46, &result_1, &var_c8, &data_143ed9a70, 1, 1)
            result = &result_1
            
            if (result_2 == &result_1)
            label_1414608bb:
                int64_t* result_3 = result_1
                
                if (result_3 != 0)
                    result = zx.q(result_3[1].d)
                    result_3[1].d -= 1
                    
                    if (result.d == 1)
                        char rax_82
                        
                        if (result_3[2].b == i_7.b && data_143f0f1d0 == i_7.b)
                            rax_82 = sub_1405949a0()
                        
                        if (result_3[2].b != i_7.b || (data_143f0f1d0 == i_7.b && rax_82 != 0))
                            result = (**result_3)(result_3, 1)
                        else
                            result = 0
                            bool z_2
                            
                            if (0 == *(result_3 + 0xc))
                                *(result_3 + 0xc) = 1
                                z_2 = true
                            else
                                result = zx.q(*(result_3 + 0xc))
                                z_2 = false
                            
                            if (z_2)
                                int32_t rax_83 = sub_140a20af0()
                                uint64_t rdx_27 = zx.q(rax_83)
                                int64_t* i_9
                                
                                if (rax_83 != 0)
                                    i_9 = *((rdx_27 u>> 0xe << 3) + &data_143cf0bf8)
                                        + (zx.q(rdx_27.d) & 0x3fff) * 0x18
                                else
                                    i_9 = i_7
                                
                                i_9[1] = result_3
                                result, zmm1 = sub_1405a42f0(&data_143f02390, rdx_27.d)
            else
                uint64_t rbx_5 = *result_2
                result = result_1
                *result_2 = result
                result_1 = i_7
                
                if (rbx_5 != 0)
                    result = zx.q(*(rbx_5 + 8))
                    *(rbx_5 + 8) -= 1
                    
                    if (result.d == 1)
                        char rax_76
                        
                        if (*(rbx_5 + 0x10) == i_7.b && data_143f0f1d0 == i_7.b)
                            rax_76 = sub_1405949a0()
                        
                        if (*(rbx_5 + 0x10) != i_7.b || (data_143f0f1d0 == i_7.b && rax_76 != 0))
                            result = (**rbx_5)(rbx_5, 1)
                        else
                            result = 0
                            bool z_1
                            
                            if (0 == *(rbx_5 + 0xc))
                                *(rbx_5 + 0xc) = 1
                                z_1 = true
                            else
                                result = zx.q(*(rbx_5 + 0xc))
                                z_1 = false
                            
                            if (z_1)
                                int32_t rax_77 = sub_140a20af0()
                                uint64_t rdx_26 = zx.q(rax_77)
                                int64_t* i_8
                                
                                if (rax_77 != 0)
                                    i_8 = *((rdx_26 u>> 0xe << 3) + &data_143cf0bf8)
                                        + (zx.q(rdx_26.d) & 0x3fff) * 0x18
                                else
                                    i_8 = i_7
                                
                                i_8[1] = rbx_5
                                result, zmm1 = sub_1405a42f0(&data_143f02390, rdx_26.d)
                    
                    goto label_1414608bb
        
        i_6 += 1
        r15_3 += 4
    while (i_6 s< *(arg1 + 0x650))

return result
