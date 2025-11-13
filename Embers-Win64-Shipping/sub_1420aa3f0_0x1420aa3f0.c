// 函数: sub_1420aa3f0
// 地址: 0x1420aa3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t* var_100 = arg2
int32_t r15 = 0
arg1[0x57].d = 0
int64_t* r12 = arg2
int64_t* rdi = arg1

if (*(arg1 + 0x2bc) s<= 0xffffffff)
    sub_1405c5570(&arg1[0x56], 0)

int32_t* r14 = rdi[0x54]
void* i_8 = &r14[sx.q(rdi[0x55].d) * 8]
void* i_3 = i_8

if (r14 != i_8)
    int32_t rax_2 = r12[1].d
    
    do
        rdi.b = 0
        int32_t rsi_1 = rax_2 - 1
        
        if (rsi_1 s>= 0)
            int32_t temp2_1
            
            do
                if (sub_141ffdd30(r14, (*r12)[sx.q(rsi_1)]) != 0)
                    if (rdi.b == 0)
                        int64_t rdi_1 = sx.q(arg1[0x57].d)
                        int32_t rax_5 = (rdi_1 + 1).d
                        arg1[0x57].d = rax_5
                        
                        if (rax_5 s> *(arg1 + 0x2bc))
                            sub_1405a4d70(&arg1[0x56])
                        
                        *(arg1[0x56] + (rdi_1 << 3)) = r14
                        rdi = 1
                    
                    if (r14[6].b == 0)
                        break
                    
                    int32_t rdx_3 = r12[1].d
                    int32_t rax_9 = rdx_3 - rsi_1 - 1
                    
                    if (rax_9 s>= 1)
                        rax_9 = 1
                    
                    if (rax_9 != 0)
                        int64_t rcx_3 = *r12
                        memcpy(rcx_3 + (sx.q(rsi_1) << 3), rcx_3 + (sx.q(rdx_3 - rax_9) << 3), 
                            rax_9 << 3)
                        rdx_3 = r12[1].d
                    
                    r12[1].d = rdx_3 - 1
                    sub_1405c53d0(r12)
                
                temp2_1 = rsi_1
                rsi_1 -= 1
            while (temp2_1 - 1 s>= 0)
            i_8 = i_3
        
        rax_2 = r12[1].d
        
        if (rax_2 == 0)
            break
        
        r14 = &r14[8]
    while (r14 != i_8)
    
    rdi = arg1
    r15 = 0

void* var_98 = nullptr
int32_t var_90 = 0
int32_t var_6c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int32_t i_4 = 0xffffffff
int32_t var_64 = 0
void* var_58 = nullptr
int32_t var_50 = 0
sub_1417d6d70(&var_98, &rdi[0x58])
uint64_t r14_1 = arg1[0x56]
int64_t* rsi_2 = nullptr
int64_t rax_12 = sx.q(arg1[0x57].d)
int64_t* var_130 = nullptr
i_3.d = 0
int32_t var_124 = 0
int64_t r13_2 = r14_1 + (rax_12 << 3)
int64_t* var_78

if (r14_1 != r13_2)
    int32_t r12_1 = 0
    
    do
        int32_t rax_13 = rdi[0x59].d
        void* i = *(*r14_1 + 0x10)
        i_3 = i
        
        if (rax_13 == *(rdi + 0x2f4))
        label_1420aa628:
            int64_t* rcx_11 = rsi_2
            void* rdx_11 = &rsi_2[sx.q(r12_1)]
            
            if (rsi_2 != rdx_11)
                while (*rcx_11 != i)
                    rcx_11 = &rcx_11[1]
                    
                    if (rcx_11 == rdx_11)
                        goto label_1420aa852
            
            if (rsi_2 == rdx_11 || ((rcx_11 - rsi_2) s>> 3).d == 0xffffffff)
            label_1420aa852:
                int64_t rsi_4 = sx.q(r12_1)
                r12_1 = (rsi_4 + 1).d
                
                if (r12_1 s> r15)
                    sub_1405a4d70(&var_130)
                    r15 = var_124
                
                rsi_2 = var_130
                rsi_2[rsi_4] = i
        else
            int32_t rax_15 = sub_140b5ead0(i.d) + i_3:4.d
            void* r8_3 = &rdi[0x5f]
            void* rcx_8 = *(r8_3 + 8)
            
            if (rcx_8 != 0)
                r8_3 = rcx_8
            
            int32_t rax_17 = *(r8_3 + (((sx.q(rdi[0x61].d) - 1) & sx.q(rax_15)) << 2))
            
            if (rax_17 == 0xffffffff)
                goto label_1420aa628
            
            int64_t rdx_10 = rdi[0x58]
            
            while (true)
                int64_t rcx_10 = sx.q(rax_17) * 2
                
                if (*(rdx_10 + (rcx_10 << 3)) == i)
                    break
                
                rax_17 = *(rdx_10 + (rcx_10 << 3) + 8)
                
                if (rax_17 == 0xffffffff)
                    goto label_1420aa628
            
            if (rax_17 == 0xffffffff)
                goto label_1420aa628
            
            if (var_90 != var_64)
                void var_60
                void* r8_4 = &var_60
                int64_t rax_22 = sx.q(sub_140b5ead0(i.d) + (i u>> 0x20).d)
                int64_t rsi_3 = sx.q(var_50 - 1)
                
                if (var_58 != 0)
                    r8_4 = var_58
                
                int32_t i_1 = *(r8_4 + ((rax_22 & rsi_3) << 2))
                
                if (i_1 != 0xffffffff)
                    void* rdx_12 = var_98
                    
                    do
                        int64_t i_6 = sx.q(i_1)
                        int64_t rax_25 = i_6 * 2
                        
                        if (*(rdx_12 + (rax_25 << 3)) == i)
                            int32_t r11_2 = var_64
                            
                            if (var_90 != r11_2)
                                int64_t r10_3 = i_6 * 2
                                void* r8_6 =
                                    r8_4 + ((sx.q(*(rdx_12 + (r10_3 << 3) + 0xc)) & rsi_3) << 2)
                                
                                for (int32_t j = *r8_6; j != 0xffffffff; j = *r8_6)
                                    if (j == i_1)
                                        *r8_6 = *(rdx_12 + (r10_3 << 3) + 8)
                                        r11_2 = var_64
                                        rdx_12 = var_98
                                        break
                                    
                                    r8_6 = rdx_12 + 8 + (sx.q(j) << 4)
                            
                            int32_t r8_8 = rol.d(1, i_1.b)
                            
                            if (r11_2 != 0)
                                *(rdx_12 + sx.q(i_4) * 0x10) = i_1
                                rdx_12 = var_98
                            
                            int64_t r9_1 = i_6 * 2
                            int32_t i_7 = -1
                            *(rdx_12 + (r9_1 << 3)) = 0xffffffff
                            
                            if (var_64 s> 0)
                                i_7 = i_4
                            
                            *(rdx_12 + (r9_1 << 3) + 4) = i_7
                            int64_t* rdx_17 = &var_88
                            var_64 += 1
                            i_4 = i_1
                            
                            if (var_78 != 0)
                                rdx_17 = var_78
                            
                            if (i_1 s< 0)
                                i_1 += 0x1f
                            
                            int64_t rax_43 = sx.q(i_1 s>> 5)
                            *(rdx_17 + (rax_43 << 2)) &= not.d(r8_8)
                            break
                        
                        i_1 = *(rdx_12 + (rax_25 << 3) + 8)
                    while (i_1 != 0xffffffff)
                
                rsi_2 = var_130
        
        r14_1 += 8
    while (r14_1 != r13_2)
    
    i_3.d = r12_1
    r12 = var_100

int64_t var_10c = 0
int32_t var_11c = 1
int64_t* var_118 = &var_88
int32_t rcx_18 = 0
int32_t var_120 = 0
int32_t var_110 = 0xffffffff
int32_t r8_5 = 0
int32_t var_70

if (var_70 != 0)
    int64_t* r11_1 = &var_88
    
    if (var_78 != 0)
        r11_1 = var_78
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_70 - 1)
    int32_t rdx_15 = *r11_1
    
    if (rdx_15 != 0)
    label_1420aa76c:
        int32_t rax_33 = neg.d(rdx_15) & rdx_15
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_33)
        int32_t var_11c_1 = rax_33
        int32_t rax_34
        
        if (rax_33 == 0)
            rax_34 = 0x20
        else
            rax_34 = 0x1f - temp0_2
        
        int32_t rax_45 = r8_5 - rax_34 + 0x1f
        
        if (rax_45 s> var_70)
            rax_45 = var_70
        
        var_10c.d = rax_45
    else
        while (true)
            int64_t rdx_16 = sx.q(rcx_18)
            r8_5 += 0x20
            rcx_18 += 1
            var_10c:4.d = r8_5
            var_120 = rcx_18
            
            if (rdx_16.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_10c.d = var_70
                break
            
            rdx_15 = *(r11_1 + (rdx_16 << 2) + 4)
            int32_t var_110_1 = 0xffffffff
            
            if (rdx_15 != 0)
                goto label_1420aa76c

var_10c.d = var_70
int128_t var_b0 = 0xffffffff
int128_t var_c0 = var_120.o
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_f0 = (&var_98).o
int128_t var_e0 = var_c0
int64_t var_d0 = temp0_3

while (true)
    int64_t rax_46 = sx.q(var_e0:0xc.d)
    int64_t* rbx_2 = var_f0.q
    
    if (rax_46.d == ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d && var_e0.q == &var_88
            && rbx_2 == &var_98)
        int64_t* rsi_7 = var_130
        int64_t rbx_5 = 0
        void* rcx_37 = &rsi_7[sx.q(i_3.d)]
        uint64_t r14_7 = (rcx_37 - rsi_7 + 7) u>> 3
        
        if (rsi_7 u> rcx_37)
            r14_7 = 0
        
        if (r14_7 != 0)
            do
                int64_t* rdx_21 = *rsi_7
                int64_t rax_69 = *arg1
                var_100 = rdx_21
                (*(rax_69 + 0x648))(arg1, rdx_21)
                sub_1407d1800(&rdi[0x58], &i_3, &var_100, nullptr)
                rbx_5 += 1
                rsi_7 = &rsi_7[1]
            while (rbx_5 != r14_7)
        
        int64_t* rcx_40 = var_130
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
        
        int32_t var_50_1 = 0
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        var_90 = 0
        int32_t var_68 = 0xffffffff
        int32_t var_64_1 = 0
        void* result = sub_14059a8e0(&var_88, 0)
        
        if (var_78 != 0)
            result = sub_140a74f90(var_78)
        
        void* rcx_45 = var_98
        
        if (rcx_45 != 0)
            result = sub_140a74f90(rcx_45)
        
        int64_t rcx_46 = *r12
        
        if (rcx_46 != 0)
            result = sub_140a74f90(rcx_46)
        
        __security_check_cookie(rax_1 ^ &var_158)
        return result
    
    int64_t rbx_4 = *(*rbx_2 + rax_46 * 0x10)
    (*(*arg1 + 0x650))(arg1, rbx_4)
    
    if (rdi[0x59].d != *(rdi + 0x2f4))
        int32_t rax_50 = sub_140b5ead0(rbx_4.d)
        void* r11_3 = &rdi[0x5f]
        int64_t rsi_6 = sx.q(rdi[0x61].d) - 1
        void* rcx_30 = rdi[0x60]
        
        if (rcx_30 != 0)
            r11_3 = rcx_30
        
        int32_t i_2 = *(r11_3 + ((sx.q(rax_50 + (rbx_4 u>> 0x20).d) & rsi_6) << 2))
        
        if (i_2 != 0xffffffff)
            void* r9_3 = rdi[0x58]
            
            do
                int64_t i_5 = sx.q(i_2)
                int64_t rax_55 = i_5 * 2
                
                if (*(r9_3 + (rax_55 << 3)) == rbx_4)
                    if (rdi[0x59].d != *(rdi + 0x2f4))
                        int64_t r10_5 = i_5 * 2
                        int64_t rax_58 = sx.q(*(r9_3 + (r10_5 << 3) + 0xc)) & rsi_6
                        void* rcx_31 = r11_3 + (rax_58 << 2)
                        
                        for (int32_t j_1 = *(r11_3 + (rax_58 << 2)); j_1 != 0xffffffff; 
                                j_1 = *rcx_31)
                            if (j_1 == i_2)
                                *rcx_31 = *(r9_3 + (r10_5 << 3) + 8)
                                break
                            
                            rcx_31 = r9_3 + 8 + (sx.q(j_1) << 4)
                    
                    void* r10_6 = &rdi[0x5a]
                    int32_t r9_4 = rol.d(1, i_2.b)
                    
                    if (*(rdi + 0x2f4) != 0)
                        *(rdi[0x58] + sx.q(rdi[0x5e].d) * 0x10) = i_2
                    
                    int32_t* r8_12 = (i_5 << 4) + rdi[0x58]
                    *r8_12 = 0xffffffff
                    int32_t rax_63
                    
                    if (*(rdi + 0x2f4) s<= 0)
                        rax_63 = -1
                    else
                        rax_63 = rdi[0x5e].d
                    
                    r8_12[1] = rax_63
                    *(rdi + 0x2f4) += 1
                    rdi[0x5e].d = i_2
                    void* rax_64 = *(r10_6 + 0x10)
                    
                    if (rax_64 != 0)
                        r10_6 = rax_64
                    
                    if (i_2 s< 0)
                        i_2 += 0x1f
                    
                    int64_t rax_65 = sx.q(i_2 s>> 5)
                    *(r10_6 + (rax_65 << 2)) &= not.d(r9_4)
                    break
                
                i_2 = *(r9_3 + (rax_55 << 3) + 8)
            while (i_2 != 0xffffffff)
    
    var_e0:8.d &= not.d(var_f0:0xc.d)
    sub_14059bdd0(&var_f0:8)
