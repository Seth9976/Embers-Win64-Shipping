// 函数: sub_14188dac0
// 地址: 0x14188dac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int32_t* i_8 = nullptr
int32_t* i_7 = nullptr
EnterCriticalSection(arg1 + 0x148)
int32_t rdi = 0
int32_t* i = nullptr

if (&i_8 != arg1 + 0x170)
    i_7 = *(arg1 + 0x170)
    *(arg1 + 0x170) = 0
    i = i_7
    rdi = *(arg1 + 0x178)
    *(arg1 + 0x178) = 0
    i_8 = i_7

LeaveCriticalSection(arg1 + 0x148)
int64_t var_128 = 0
int32_t var_120 = 0
int32_t var_fc = 0x80
int64_t var_118
__builtin_memset(&var_118, 0, 0x1c)
int32_t var_f8 = 0xffffffff
int32_t var_f4 = 0
void* var_e8 = nullptr
int32_t var_e0 = 0
EnterCriticalSection(arg1 + 0xd0)
void* r14

for (r14 = &i[sx.q(rdi)]; i != r14; i = &i[1])
    void var_190
    
    if (sub_141892ab0(arg1 + 0xf8, *i) s> 0)
        sub_14077a5e0(&var_128, &var_190, i, nullptr)

LeaveCriticalSection(arg1 + 0xd0)
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x2c)
int32_t var_ac = 0x80
int32_t var_a8 = 0xffffffff
int32_t var_a4 = 0
int64_t var_98 = 0
int32_t var_90 = 0
EnterCriticalSection(arg1 + 0x180)

if (i_7 != r14)
    do
        int64_t r9_1 = sx.q(*i_7)
        
        if (*(arg1 + 0x1b0) != *(arg1 + 0x1dc))
            void* r8_2 = arg1 + 0x1e0
            void* rcx_7 = *(r8_2 + 8)
            
            if (rcx_7 != 0)
                r8_2 = rcx_7
            
            int32_t i_4 = *(r8_2 + (((sx.q(*(arg1 + 0x1f0)) - 1) & r9_1) << 2))
            int32_t i_1 = i_4
            
            if (i_4 != 0xffffffff)
                int64_t r8_3 = *(arg1 + 0x1a8)
                
                do
                    int64_t rdx_7 = sx.q(i_1) << 5
                    
                    if (*(rdx_7 + r8_3) == r9_1.d)
                        if (i_1 != 0xffffffff)
                            int32_t* rcx_10
                            
                            if (i_4 == 0xffffffff)
                            label_14188dcbe:
                                rcx_10 = nullptr
                            else
                                while (true)
                                    rcx_10 = (sx.q(i_4) << 5) + r8_3
                                    
                                    if (*rcx_10 == r9_1.d)
                                        break
                                    
                                    i_4 = rcx_10[6]
                                    
                                    if (i_4 == 0xffffffff)
                                        goto label_14188dcbe_1
                                
                                if (i_4 == 0xffffffff)
                                label_14188dcbe_1:
                                    rcx_10 = nullptr
                            
                            int64_t* rcx_11 = *(rcx_10 + 8)
                            (*(*rcx_11 + 0xb0))(rcx_11)
                            void var_18c
                            sub_14077a5e0(&var_d8, &var_18c, i_7, nullptr)
                        
                        break
                    
                    i_1 = *(rdx_7 + r8_3 + 0x18)
                while (i_1 != 0xffffffff)
        
        int64_t r9_2 = sx.q(*i_7)
        
        if (*(arg1 + 0x200) != *(arg1 + 0x22c))
            void* r8_5 = arg1 + 0x230
            void* rcx_13 = *(r8_5 + 8)
            
            if (rcx_13 != 0)
                r8_5 = rcx_13
            
            int32_t i_5 = *(r8_5 + (((sx.q(*(arg1 + 0x240)) - 1) & r9_2) << 2))
            int32_t i_2 = i_5
            
            if (i_5 != 0xffffffff)
                int64_t r10_1 = *(arg1 + 0x1f8)
                
                do
                    int64_t r8_6 = sx.q(i_2) * 3
                    
                    if (*(r10_1 + (r8_6 << 3)) == r9_2.d)
                        if (i_2 != 0xffffffff)
                            void* const rcx_15
                            
                            if (i_5 == 0xffffffff)
                            label_14188dd80:
                                rcx_15 = nullptr
                            else
                                while (true)
                                    int64_t rdx_13 = sx.q(i_5) * 3
                                    rcx_15 = r10_1 + (rdx_13 << 3)
                                    
                                    if (*(r10_1 + (rdx_13 << 3)) == r9_2.d)
                                        break
                                    
                                    i_5 = *(rcx_15 + 0x10)
                                    
                                    if (i_5 == 0xffffffff)
                                        goto label_14188dd80_1
                                
                                if (i_5 == 0xffffffff)
                                label_14188dd80_1:
                                    rcx_15 = nullptr
                            
                            void* rcx_16 = *(rcx_15 + 8)
                            *(rcx_16 + 0x10)
                            *(rcx_16 + 0x10) = 1
                            void var_188
                            sub_14077a5e0(&var_d8, &var_188, i_7, nullptr)
                        
                        break
                    
                    i_2 = *(r10_1 + (r8_6 << 3) + 0x10)
                while (i_2 != 0xffffffff)
        
        i_7 = &i_7[1]
    while (i_7 != r14)
    
    i_7 = i_8

LeaveCriticalSection(arg1 + 0x180)
EnterCriticalSection(arg1 + 0x58)
int64_t var_88
sub_141780fd0(&var_128, &var_88, &var_d8)
void var_78
void* var_1d0 = &var_78
int32_t var_1d8 = 0
int32_t var_1c8 = 0xffffffff
int32_t rcx_21 = 0
int32_t var_1d4 = 1
int32_t r8_9 = 0
int64_t var_1c4 = 0
void* var_68
int32_t var_60

if (var_60 != 0)
    void* r9_3 = &var_78
    
    if (var_68 != 0)
        r9_3 = var_68
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(var_60 - 1)
    int32_t rdx_18 = *r9_3
    
    if (rdx_18 != 0)
    label_14188de78:
        int32_t rax_16 = neg.d(rdx_18) & rdx_18
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
        int32_t var_1d4_1 = rax_16
        int32_t rax_17
        
        if (rax_16 == 0)
            rax_17 = 0x20
        else
            rax_17 = 0x1f - temp0_2
        
        int32_t rax_18 = r8_9 - rax_17 + 0x1f
        
        if (rax_18 s> var_60)
            rax_18 = var_60
        
        var_1c4.d = rax_18
    else
        while (true)
            int64_t rdx_19 = sx.q(rcx_21)
            r8_9 += 0x20
            rcx_21 += 1
            var_1c4:4.d = r8_9
            var_1d8 = rcx_21
            
            if (rdx_19.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_1c4.d = var_60
                break
            
            rdx_18 = *(r9_3 + (rdx_19 << 2) + 4)
            int32_t var_1c8_1 = 0xffffffff
            
            if (rdx_18 != 0)
                goto label_14188de78

int64_t* var_1b8 = &var_88
int128_t var_1b0 = var_1d8.o
int128_t zmm0 = var_1b8.o
int128_t var_1a0 = 0xffffffff
int32_t var_134 = var_60
int128_t zmm1 = var_1b0
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_170 = zmm0
int128_t var_160 = zmm1
int64_t var_150 = temp0_3

while (true)
    int64_t rax_19 = sx.q(var_160:0xc.d)
    int64_t* rdx_20 = var_170.q
    
    if (rax_19.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d && var_160.q == &var_78
            && rdx_20 == &var_88)
        int32_t var_40 = 0
        int64_t var_48
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        int32_t var_80 = 0
        int32_t var_7c
        
        if (var_7c != 0)
            sub_140638cc0(&var_88, 0)
        
        int32_t var_58 = 0xffffffff
        int32_t var_54 = 0
        sub_14059a8e0(&var_78, 0)
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rcx_41 = var_88
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        LeaveCriticalSection(arg1 + 0x58)
        int32_t var_90_1 = 0
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        int64_t var_d0
        var_d0.d = 0
        int32_t var_a8_1 = 0xffffffff
        int32_t var_a4_1 = 0
        int64_t var_c8
        sub_14059a8e0(&var_c8, 0)
        int64_t var_b8
        
        if (var_b8 != 0)
            sub_140a74f90(var_b8)
        
        int64_t rcx_47 = var_d8
        
        if (rcx_47 != 0)
            sub_140a74f90(rcx_47)
        
        int32_t var_e0_1 = 0
        
        if (var_e8 != 0)
            sub_140a74f90(var_e8)
        
        var_120 = 0
        int32_t var_f8_1 = 0xffffffff
        int32_t var_f4_1 = 0
        void* result = sub_14059a8e0(&var_118, 0)
        int64_t var_108
        
        if (var_108 != 0)
            result = sub_140a74f90(var_108)
        
        int64_t rcx_52 = var_128
        
        if (rcx_52 != 0)
            result = sub_140a74f90(rcx_52)
        
        if (i_7 != 0)
            result = sub_140a74f90(i_7)
        
        __security_check_cookie(rax_1 ^ &var_1f8)
        return result
    
    int64_t rcx_25 = rax_19 * 3
    int64_t rax_20 = *rdx_20
    int64_t r9_4 = sx.q(*(rax_20 + (rcx_25 << 2)))
    
    if (*(arg1 + 0x88) != *(arg1 + 0xb4))
        void* rcx_26 = *(arg1 + 0xc0)
        void* r8_11 = arg1 + 0xb8
        
        if (rcx_26 != 0)
            r8_11 = rcx_26
        
        int32_t i_6 = *(r8_11 + (((sx.q(*(arg1 + 0xc8)) - 1) & r9_4) << 2))
        int32_t i_3 = i_6
        
        if (i_6 != 0xffffffff)
            int64_t r10_3 = *(arg1 + 0x80)
            
            do
                int64_t r8_13 = sx.q(i_3) * 6
                
                if (*(r10_3 + (r8_13 << 3)) == r9_4.d)
                    if (i_3 != 0xffffffff)
                        int32_t* rbx_2
                        
                        if (i_6 == 0xffffffff)
                        label_14188dfd2:
                            rbx_2 = nullptr
                        else
                            while (true)
                                rbx_2 = sx.q(i_6) * 0x30 + r10_3
                                
                                if (*rbx_2 == r9_4.d)
                                    break
                                
                                i_6 = rbx_2[0xa]
                                
                                if (i_6 == 0xffffffff)
                                    goto label_14188dfd2_1
                            
                            if (i_6 == 0xffffffff)
                            label_14188dfd2_1:
                                rbx_2 = nullptr
                        
                        sub_141881c90(r9_4.d, &rbx_2[2])
                        var_1b8 = nullptr
                        var_1b0.d = 0
                        var_1b0:8.q = 0
                        var_1a0.d = 0
                        sub_1407473e0(&rbx_2[2], &var_1b8)
                        sub_1407473e0(&rbx_2[6], &var_1b0:8)
                        sub_140745b20(&var_1b0:8)
                        sub_140745b20(&var_1b8)
                        int64_t r8_14 = sx.q(*(rax_20 + (rcx_25 << 2)))
                        
                        if (var_120 != var_f4)
                            void var_f0
                            void* rcx_33 = &var_f0
                            
                            if (var_e8 != 0)
                                rcx_33 = var_e8
                            
                            int32_t j = *(rcx_33 + ((sx.q(var_e0 - 1) & r8_14) << 2))
                            
                            if (j != 0xffffffff)
                                int64_t r9_5 = var_128
                                
                                do
                                    int64_t rdx_30 = sx.q(j) * 3
                                    
                                    if (*(r9_5 + (rdx_30 << 2)) == r8_14.d)
                                        if (j != 0xffffffff)
                                            sub_141892740(arg1 + 0x80, r8_14.d)
                                        
                                        break
                                    
                                    j = *(r9_5 + (rdx_30 << 2) + 4)
                                while (j != 0xffffffff)
                    
                    break
                
                i_3 = *(r10_3 + (r8_13 << 3) + 0x28)
            while (i_3 != 0xffffffff)
    
    var_160:8.d &= not.d(var_170:0xc.d)
    sub_14059bdd0(&var_170:8)
