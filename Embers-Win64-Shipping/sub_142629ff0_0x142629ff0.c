// 函数: sub_142629ff0
// 地址: 0x142629ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rax_2 = *arg2
int64_t* rdi = arg1
uint32_t rbx = zx.d(*(rax_2 + 0x30))
uint32_t rcx = zx.d(*(rax_2 + 0x32))
uint32_t rax_3 = zx.d(*arg5)
int64_t r8_1 = *rdi
uint64_t rsi = zx.q(rax_3 + 1)
uint32_t var_100 = rbx
int32_t var_104 = rsi.d
int64_t* rax_5 = (*(r8_1 + 0x10))(rdi, zx.q((rax_3 + 1) * 0x18), r8_1)
int64_t* r15 = rax_5
int32_t rbx_1

if (rax_5 != 0)
    uint64_t rax_6 = zx.q(rsi.d)
    memset(r15, 0, rsi * 0x18)
    int16_t r14_1 = 0
    uint32_t i = 0
    int64_t var_68
    
    if (rsi.d != 0)
        void* rbx_2 = r15 + 0x14
        
        do
            char var_51 = var_51 & 0xf8
            *(rbx_2 + 3) &= 0xf8
            __builtin_memset(&var_68, 0, 0x14)
            int16_t var_54_1 = i.w
            char var_52_1 = 0
            *(rbx_2 - 4) = 0
            *rbx_2 = i.w
            *(rbx_2 + 2) = 0
            sub_142606520(rbx_2 - 0x14, &var_68)
            sub_142609160(var_68)
            i += 1
            rbx_2 += 0x18
        while (i s< rsi.d)
        
        rbx = var_100
    
    uint32_t rdx_3 = rcx
    int32_t r13_1 = 0
    
    if (rdx_3 != 0)
        char* rcx_5 = nullptr
        int32_t var_f8_1 = 0
        int32_t r8_4 = 0
        char* var_a8_1 = nullptr
        int16_t* r9 = arg6
        int16_t* var_a0_1 = arg6
        
        do
            if (r13_1 == 0 || r13_1 == rdx_3 - 1)
                rdx_3.b = 1
            else
                rdx_3.b = 0
            
            int32_t rbx_3 = 0
            char var_108_1 = rdx_3.b
            
            if (var_100 u> 0)
                char* r12_1 = rcx_5
                int16_t* rcx_6 = r9
                int16_t* var_88_1 = rcx_6
                
                do
                    int16_t rcx_7 = *rcx_6
                    
                    if (rcx_7 != 0 && zx.d(rcx_7) u< rsi.d)
                        uint64_t rcx_8 = zx.q(rcx_7) * 3
                        r15[rcx_8 + 2].d += 1
                        int64_t* rsi_1 = &r15[rcx_8]
                        uint64_t rax_11
                        
                        if (rdx_3.b != 0 || rbx_3 == 0 || rbx_3 == var_100 - 1)
                            rax_11.b = 4
                        else
                            rax_11.b = 0
                        
                        *(rsi_1 + 0x17) |= rax_11.b
                        
                        if (rsi_1[1].d s<= 0)
                            int64_t* rdx_4 = arg2
                            int32_t i_1 = 0
                            int128_t zmm1 = data_14344e350
                            int128_t var_50 = data_142fc59d0
                            var_68.o = zmm1
                            *(rsi_1 + 0x16) = r12_1[rdx_4[3]]
                            void* r15_1 = *rdx_4
                            i = zx.d(*(r15_1 + 0x30))
                            
                            do
                                uint64_t rcx_10 = (zx.q(i_1) & 3) << 2
                                int16_t r11_1 = 0
                                int32_t r10_1 = *(&var_50 + rcx_10)
                                int32_t r8_6 = *(&var_68 + rcx_10) + r13_1
                                int32_t r10_2 = r10_1 + rbx_3
                                int16_t* rcx_12
                                
                                if (r10_1 + rbx_3 s< 0 || r10_2 s>= i || r8_6 s< 0
                                        || r8_6 s>= zx.d(*(r15_1 + 0x32)))
                                    rcx_12 = arg6
                                else
                                    rcx_12 = arg6
                                    bool cond:7_1 = ((1 << i_1.b).b & r12_1[rdx_4[4]]) == 0
                                    rdx_4 = arg2
                                    
                                    if (not(cond:7_1))
                                        r11_1 = rcx_12[sx.q(r10_2 + r8_6 * i)]
                                
                                if (r11_1 != *var_88_1)
                                    if (i_1 != 0xffffffff)
                                        sub_142635270(rbx_3, r13_1, var_f8_1 + rbx_3, i_1, rdx_4, 
                                            rcx_12, rsi_1)
                                    
                                    break
                                
                                i_1 += 1
                            while (i_1 s< 4)
                            
                            r15 = rax_5
                            r14_1 = 0
                        
                        rsi = zx.q(var_104)
                    
                    rbx_3 += 1
                    rdx_3 = zx.d(var_108_1)
                    rcx_6 = &var_88_1[1]
                    r12_1 = &r12_1[1]
                    var_88_1 = rcx_6
                while (rbx_3 s< var_100)
                
                r8_4 = var_f8_1
                rcx_5 = var_a8_1
                r9 = var_a0_1
            
            int64_t rbx_4 = sx.q(var_100)
            r13_1 += 1
            r9 = &r9[sx.q(rbx)]
            r8_4 += rbx_4.d
            rdx_3 = rcx
            rcx_5 = &rcx_5[rbx_4]
            var_f8_1 = r8_4
            var_a8_1 = rcx_5
            var_a0_1 = r9
        while (r13_1 s< rdx_3)
    
    int64_t var_e0 = 0
    int32_t j_3 = 0
    sub_142616290(&var_e0, 0x20)
    int64_t var_b8 = 0
    int32_t var_b0_1 = 0
    sub_142616290(&var_b8, 0x20)
    uint64_t rsi_2 = rax_6
    int32_t rbx_5 = 0
    int32_t var_f8_2 = 0
    
    if (rsi_2 != 0)
        void* r12_2 = r15 + 0x17
        uint64_t var_a8_2 = rsi_2
        void* var_a0_2 = r12_2
        uint64_t i_2
        
        do
            if (*(r12_2 - 3) != 0 && *(r12_2 - 7) != 0 && (*r12_2 & 2) == 0)
                i.b = 0
                int32_t r13_2 = 0
                sub_142616290(&var_e0, 0)
                sub_142616290(&var_b8, 0)
                *r12_2 |= 2
                sub_142616290(&var_e0, j_3 + 1)
                *(var_e0 + (sx.q(j_3 - 1) << 2)) = rbx_5
                int32_t j = j_3
                bool cond:4_1 = j s<= 0
                
                if (j != 0)
                    do
                        if (not(cond:4_1))
                            j -= 1
                            j_3 = j
                        
                        int64_t rbx_6 = sx.q(*(var_e0 + (sx.q(j) << 2)))
                        int64_t rcx_22 = rbx_6 * 3
                        void* r15_2 = &r15[rcx_22]
                        r13_2 += *(r15_2 + 0x10)
                        i.b |= *(&r15[rcx_22] + 0x17) u>> 2 & 1
                        char i_7 = i.b
                        sub_142616290(&var_b8, var_b0_1 + 1)
                        int32_t k = 0
                        *(var_b8 + (sx.q(var_b0_1 - 1) << 2)) = rbx_6.d
                        
                        if (*(r15_2 + 8) s> 0)
                            int64_t rdi_1 = 0
                            
                            do
                                int64_t rax_31 = sx.q(*(*r15_2 + rdi_1)) * 3
                                void* rbx_7 = &rax_5[rax_31]
                                
                                if ((*(&rax_5[rax_31] + 0x17) & 2) == 0)
                                    int16_t r14_3 = *(rbx_7 + 0x14)
                                    
                                    if (r14_3 != 0)
                                        sub_142616290(&var_e0, j_3 + 1)
                                        *(var_e0 + (sx.q(j_3 - 1) << 2)) = zx.d(r14_3)
                                        *(rbx_7 + 0x17) |= 2
                                
                                k += 1
                                rdi_1 += 4
                            while (k s< *(r15_2 + 8))
                            
                            i = zx.d(i_7)
                            r14_1 = 0
                        
                        j = j_3
                        r15 = rax_5
                        cond:4_1 = j s<= 0
                    while (j != 0)
                    
                    r12_2 = var_a0_2
                    rbx_5 = var_f8_2
                    rsi_2 = var_a8_2
                
                if (r13_2 s< arg3 && i.b == 0)
                    int32_t r8_10 = 0
                    
                    if (var_b0_1 s> 0)
                        int64_t rdx_14 = 0
                        
                        do
                            rdx_14 += 4
                            r8_10 += 1
                            r15[sx.q(*(rdx_14 + var_b8 - 4)) * 3 + 2].d = 0
                            *(&r15[sx.q(*(rdx_14 + var_b8 - 4)) * 3] + 0x14) = 0
                        while (r8_10 s< var_b0_1)
            
            rbx_5 += 1
            r12_2 += 0x18
            i_2 = rsi_2
            rsi_2 -= 1
            var_f8_2 = rbx_5
            var_a8_2 = rsi_2
            var_a0_2 = r12_2
        while (i_2 != 1)
        rsi_2 = rax_6
    
    while (true)
        int32_t rax_39 = 0
        int32_t var_104_1 = 0
        
        if (rsi_2 == 0)
            break
        
        uint64_t i_8 = rsi_2
        int32_t var_f0
        var_f0.q = r15
        var_f8_2.q = i_8
        int64_t* r8_11 = r15
        uint64_t i_3
        
        do
            int16_t r13_3 = *(r8_11 + 0x14)
            
            if (r13_3 != 0)
                int32_t rax_40 = r8_11[2].d
                
                if (rax_40 == 0 || (rax_40 s> arg4 && (*(r8_11 + 0x17) & 4) != 0))
                    rax_39 = var_104_1
                else
                    int64_t j_4 = sx.q(r8_11[1].d)
                    int32_t r12_4 = 0xfffffff
                    int16_t rdi_2 = r13_3
                    
                    if (j_4 s> 0)
                        int32_t* rdi_3 = *r8_11
                        int64_t j_1
                        
                        do
                            int64_t rcx_30 = sx.q(*rdi_3) * 3
                            int16_t r14_4 = *(&rax_5[rcx_30] + 0x14)
                            int64_t* rbx_8 = &rax_5[rcx_30]
                            
                            if (r14_4 != 0)
                                int32_t rsi_3 = rbx_8[2].d
                                
                                if (rsi_3 s< r12_4)
                                    if (sub_142622e50(r8_11, rbx_8) == 0)
                                        r8_11 = var_f0.q
                                    else
                                        r8_11 = var_f0.q
                                        
                                        if (sub_142622e50(rbx_8, var_f0.q) != 0)
                                            r12_4 = rsi_3
                                            r13_3 = r14_4
                            
                            rdi_3 = &rdi_3[1]
                            j_1 = j_4
                            j_4 -= 1
                        while (j_1 != 1)
                        rdi_2 = *(r8_11 + 0x14)
                        r14_1 = 0
                        i_8 = var_f8_2.q
                        rsi_2 = rax_6
                    
                    r15 = rax_5
                    
                    if (r13_3 == rdi_2)
                        rax_39 = var_104_1
                    else
                        char rax_46
                        int32_t k_2
                        rax_46, k_2 = sub_14262d360(&r15[zx.q(r13_3) * 3], r8_11)
                        
                        if (rax_46 == 0)
                            r8_11 = var_f0.q
                            i_8 = var_f8_2.q
                            rax_39 = var_104_1
                        else
                            int64_t* r10_3 = r15
                            uint64_t j_2
                            
                            do
                                int16_t rax_47 = *(r10_3 + 0x14)
                                
                                if (rax_47 != 0)
                                    if (rax_47 == rdi_2)
                                        *(r10_3 + 0x14) = r13_3
                                    
                                    k_2.b = 0
                                    int32_t r8_12 = 0
                                    
                                    if (r10_3[1].d s> 0)
                                        void* rdx_18 = nullptr
                                        int32_t k_1
                                        
                                        do
                                            int64_t rax_48 = *r10_3
                                            
                                            if (*(rdx_18 + rax_48) == zx.d(rdi_2))
                                                k_2.b = 1
                                                *(rdx_18 + rax_48) = zx.d(r13_3)
                                            
                                            k_1 = r10_3[1].d
                                            r8_12 += 1
                                            rdx_18 += 4
                                        while (r8_12 s< k_1)
                                        
                                        if (k_2.b != 0)
                                            int32_t r11_3 = 0
                                            
                                            if (k_1 s> 0)
                                                int64_t rbx_9 = 0
                                                
                                                while (k_1 s> 1)
                                                    int32_t* r8_13 = *r10_3
                                                    
                                                    if (*(r8_13 + rbx_9) != r8_13[sx.q(mods.dp.d(
                                                            sx.q(r11_3 + 1), k_1))])
                                                        r11_3 += 1
                                                        rbx_9 += 4
                                                    else
                                                        k_2 = k_1
                                                        int32_t r8_14 = r11_3
                                                        
                                                        if (r11_3 s< k_1 - 1)
                                                            int64_t rdx_22 = rbx_9
                                                            
                                                            do
                                                                int32_t* rcx_37 = *r10_3
                                                                rdx_22 += 4
                                                                r8_14 += 1
                                                                *(rcx_37 + rdx_22 - 4) =
                                                                    *(rcx_37 + rdx_22)
                                                                k_2 = r10_3[1].d
                                                            while (r8_14 s< k_2 - 1)
                                                        
                                                        k_1 = k_2
                                                        
                                                        if (k_2 s> 0)
                                                            k_1 = k_2 - 1
                                                            r10_3[1].d = k_1
                                                    
                                                    if (r11_3 s>= k_1)
                                                        break
                                
                                r10_3 = &r10_3[3]
                                j_2 = rsi_2
                                rsi_2 -= 1
                            while (j_2 != 1)
                            r8_11 = var_f0.q
                            rax_39 = var_104_1 + 1
                            i_8 = var_f8_2.q
                            var_104_1 = rax_39
            
            rsi_2 = rax_6
            r8_11 = &r8_11[3]
            i_3 = i_8
            i_8 -= 1
            var_f0.q = r8_11
            var_f8_2.q = i_8
        while (i_3 != 1)
        
        if (rax_39 s<= 0)
            void* rcx_38 = r15 + 0x17
            uint64_t i_10 = rsi_2
            uint64_t i_4
            
            do
                char rax_56 = *rcx_38 & 0xfe
                *rcx_38 = rax_56
                
                if (*(rcx_38 - 3) != 0)
                    *rcx_38 = rax_56 | 1
                
                rcx_38 += 0x18
                i_4 = i_10
                i_10 -= 1
            while (i_4 != 1)
            break
    
    if (rsi_2 != 0)
        int64_t r8_15 = 0
        void* rdx_23 = r15 + 0x17
        
        do
            if ((*rdx_23 & 1) != 0)
                int16_t r9_1 = *(rdx_23 - 3)
                r14_1 += 1
                
                if (r8_15 s< rsi_2)
                    void* rax_57 = rdx_23
                    int64_t i_9 = rsi_2 - r8_15
                    int64_t i_5
                    
                    do
                        if (*(rax_57 - 3) == r9_1)
                            *(rax_57 - 3) = r14_1
                            *rax_57 &= 0xfe
                        
                        rax_57 += 0x18
                        i_5 = i_9
                        i_9 -= 1
                    while (i_5 != 1)
            
            r8_15 += 1
            rdx_23 += 0x18
        while (r8_15 s< rsi_2)
    
    *arg5 = r14_1
    int32_t rax_60 = rcx * var_100
    int64_t rdx_24 = sx.q(rax_60 - 1)
    
    if (rax_60 - 1 s>= 0)
        int64_t temp5_1
        
        do
            arg6[rdx_24] = *(&r15[zx.q(arg6[rdx_24]) * 3] + 0x14)
            temp5_1 = rdx_24
            rdx_24 -= 1
        while (temp5_1 - 1 s>= 0)
    
    if (rsi_2 != 0)
        int64_t* rbx_10 = r15
        uint64_t i_6
        
        do
            sub_142609160(*rbx_10)
            rbx_10 = &rbx_10[3]
            i_6 = rsi_2
            rsi_2 -= 1
        while (i_6 != 1)
    
    rbx_1 = 0x40000000
    sub_142609160(var_b8)
    sub_142609160(var_e0)
    rdi = arg1
else
    rbx_1 = -0x7ffffffc

int64_t r8_17 = *rdi
(*(r8_17 + 0x18))(rdi, r15, r8_17)
__security_check_cookie(rax_1 ^ &var_148)
return zx.q(rbx_1)
