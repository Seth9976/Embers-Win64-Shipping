// 函数: sub_141f09f30
// 地址: 0x141f09f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rax_2 = nullptr
int32_t* rbx = nullptr
int32_t r9 = 0
int32_t i = 0
int32_t rsi = 0
void* var_128 = arg1
int32_t* var_120 = nullptr
int32_t var_114 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_110
int16_t* var_e8
int64_t* var_68

if (*(arg1 + 0x440) s> 0)
    int64_t* rdx_1 = nullptr
    int64_t* var_e0_1 = nullptr
    
    do
        int64_t r15_1 = 0
        int32_t r9_1 = 0
        var_110.q = 0
        int32_t r14_1 = 0
        int64_t var_108
        var_108:4.d = 0
        int32_t j = 0
        int16_t* r13_1 = *(rdx_1 + *(arg1 + 0x438))
        
        if (*(r13_1 + 0x20) s> 0)
            void* rax_4 = nullptr
            int16_t* var_f0_1 = nullptr
            
            do
                void* r8_1 = *(arg1 + 0x410)
                void* r15_2 = *(r13_1 + 0x18)
                
                if (*(*(r8_1 + 0x68)
                        + sx.q(*((zx.q(*(r15_2 + rax_4)) << 6) + *(r8_1 + 0x28) + 0x14)) * 0x50)
                        == *(r13_1 + 0x10))
                    int64_t rbx_3 = sx.q(r14_1)
                    r14_1 = (rbx_3 + 1).d
                    var_108.d = r14_1
                    
                    if (r14_1 s> r9_1)
                        sub_140594770(&var_110)
                        r14_1 = var_108.d
                    
                    r15_1 = var_110.q
                    *(r15_1 + (rbx_3 << 1)) = *(var_f0_1 + r15_2)
                    rbx = var_120
                else
                    var_e8 = r13_1
                    sub_141f00b00(&var_88, r15_2 + (sx.q(j) << 1), &var_e8)
                    int32_t* rax_8 = rbx
                    void* rdx_5 = &rbx[sx.q(rsi)]
                    
                    if (rbx != rdx_5)
                        while (*rax_8 != i)
                            rax_8 = &rax_8[1]
                            
                            if (rax_8 == rdx_5)
                                goto label_141f0a07b
                    
                    if (rbx == rdx_5 || ((rax_8 - rbx) s>> 2).d == 0xffffffff)
                    label_141f0a07b:
                        int64_t rbx_1 = sx.q(rsi)
                        rsi = (rbx_1 + 1).d
                        
                        if (rsi s> var_114)
                            sub_1405a4cf0(&var_120)
                        
                        rbx = var_120
                        rbx[rbx_1] = i
                    
                    r15_1 = var_110.q
                
                j += 1
                r9_1 = var_108:4.d
                rax_4 = &var_f0_1[1]
                arg1 = var_128
                var_f0_1 = rax_4
            while (j s< *(r13_1 + 0x20))
        
        if (&r13_1[0xc] != &var_110)
            int32_t r8_3 = *(r13_1 + 0x24)
            *(r13_1 + 0x20) = r14_1
            
            if (r14_1 != 0 || r8_3 != 0)
                sub_1405a4c70(&r13_1[0xc], r14_1, r8_3)
                memcpy(*(r13_1 + 0x18), r15_1, r14_1 * 2)
            else
                *(r13_1 + 0x24) = r14_1
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        i += 1
        arg1 = var_128
        rdx_1 = &var_e0_1[1]
        rbx = var_120
        var_e0_1 = rdx_1
    while (i s< *(arg1 + 0x440))
    
    int32_t var_60
    r9 = var_60
    rax_2 = var_68

int32_t rcx_11 = 0
int32_t var_10c = 1
int32_t r8_6 = 0
var_110 = 0
int32_t var_100 = 0xffffffff
int64_t var_78
int64_t* var_108_1 = &var_78
int64_t var_fc = 0

if (r9 != 0)
    int64_t* r10_1 = &var_78
    
    if (rax_2 != 0)
        r10_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_13 = *r10_1
    
    if (rdx_13 != 0)
    label_141f0a20b:
        int32_t rax_21 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_21)
        int32_t var_10c_1 = rax_21
        int32_t rax_22
        
        if (rax_21 == 0)
            rax_22 = 0x20
        else
            rax_22 = 0x1f - temp0_2
        
        int32_t rax_23 = r8_6 - rax_22 + 0x1f
        
        if (rax_23 s> r9)
            rax_23 = r9
        
        var_fc.d = rax_23
    else
        while (true)
            int64_t rdx_14 = sx.q(rcx_11)
            r8_6 += 0x20
            rcx_11 += 1
            var_fc:4.d = r8_6
            var_110 = rcx_11
            
            if (rdx_14.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_fc.d = r9
                break
            
            rdx_13 = *(r10_1 + (rdx_14 << 2) + 4)
            var_100 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_141f0a20b

double zmm2[0x2] = var_100.o
int32_t* r15_3 = var_120
double var_a8[0x2] = var_110.o
uint32_t rax_25 = (zmm2[0] u>> 0x20).d
double var_98[0x2] = zmm2
double var_d8[0x2] = (&var_88).o
int64_t var_b8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
void* r13_3

if (rax_25 s>= r9)
    r13_3 = var_128
else
    void* r9_2 = var_128
    int32_t rcx_13 = var_a8[1]:4.d
    void* r12_1 = r9_2 + 0x438
    
    while (true)
        void* rdx_15 = *(r9_2 + 0x410)
        void*** rbx_4 = nullptr
        int64_t* r13_2 = var_d8[0]
        int64_t i_5 = sx.q(*(r9_2 + 0x440))
        int64_t rax_27 = *(rdx_15 + 0x28)
        int64_t rcx_15 = sx.q(rcx_13) * 0x18
        int16_t* r8_9 = *r13_2 + rcx_15
        var_e8 = rcx_15
        void* rdi = *(r8_9 + 8)
        int64_t* r14_4 = sx.q(*((zx.q(*r8_9) << 6) + rax_27 + 0x14)) * 0x50 + *(rdx_15 + 0x68)
        
        if (i_5 s<= 0)
        label_141f0a343:
            void*** rax_34 = j_sub_140a82f30(0x78)
            rbx_4 = rax_34
            
            if (rax_34 == 0)
                rbx_4 = nullptr
            else
                int64_t rcx_24 = *r14_4
                *rbx_4 = &data_143268970
                rbx_4[1] = var_128
                rbx_4[2] = rcx_24
                __builtin_memset(&rbx_4[3], 0, 0x40)
                *(rbx_4 + 0x64) = data_143dbb1f8.q
                int32_t rax_36 = data_143dbb200
                *(rbx_4 + 0x6c) = rax_36
                rbx_4[0xb] = *(rbx_4 + 0x64)
                rbx_4[0xc].d = rax_36
                rbx_4[0xe].b = 0
                *(rbx_4 + 0x30) = *sub_140b214c0(&var_110)
            
            int64_t r14_5 = sx.q(*(r12_1 + 8))
            int32_t rax_38 = (r14_5 + 1).d
            *(r12_1 + 8) = rax_38
            
            if (rax_38 s> *(r12_1 + 0xc))
                sub_140638870(r12_1)
            
            *(*r12_1 + (r14_5 << 3)) = rbx_4
            *(rbx_4 + 0x30) = *(rdi + 0x30)
        else
            int64_t* r8_10 = *r12_1
            int64_t i_1
            
            do
                void*** rdx_16 = *r8_10
                
                if (rdx_16[2] == *r14_4)
                    int32_t rcx_23 = (*(rdx_16 + 0x3c) ^ *(rdi + 0x3c))
                        | (rdx_16[7].d ^ *(rdi + 0x38)) | (*(rdx_16 + 0x34) ^ *(rdi + 0x34))
                        | (rdx_16[6].d ^ *(rdi + 0x30))
                    
                    if (rcx_23 == 0)
                        rbx_4 = rdx_16
                
                r8_10 = &r8_10[1]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            
            if (rbx_4 == 0)
                goto label_141f0a343
        
        int64_t rdi_1 = sx.q(rbx_4[4].d)
        int64_t r14_6 = *r13_2
        int32_t rax_40 = (rdi_1 + 1).d
        rbx_4[4].d = rax_40
        
        if (rax_40 s> *(rbx_4 + 0x24))
            sub_140594770(&rbx_4[3])
        
        r13_3 = var_128
        *(rbx_4[3] + (rdi_1 << 1)) = *(var_e8 + r14_6)
        int32_t* rcx_29 = r15_3
        int32_t i_2 = *(r13_3 + 0x440) - 1
        void* rdx_19 = &r15_3[sx.q(rsi)]
        
        if (r15_3 != rdx_19)
            while (*rcx_29 != i_2)
                rcx_29 = &rcx_29[1]
                
                if (rcx_29 == rdx_19)
                    goto label_141f0a460
        
        if (r15_3 == rdx_19 || ((rcx_29 - r15_3) s>> 2).d == 0xffffffff)
        label_141f0a460:
            int64_t rdi_2 = sx.q(rsi)
            rsi = (rdi_2 + 1).d
            
            if (rsi s> var_114)
                sub_1405a4cf0(&var_120)
                r15_3 = var_120
            
            r15_3[rdi_2] = i_2
        
        var_a8[1].d &= not.d(var_d8[1]:4.d)
        sub_14059bdd0(&var_d8[1])
        rcx_13 = var_a8[1]:4.d
        
        if (rcx_13 s>= *(var_a8[0] i+ 0x18))
            break
        
        r9_2 = r13_3

sub_14213df90(r13_3)
int64_t* rsi_1 = nullptr
int32_t i_3 = 0

if (*(r13_3 + 0x440) s> 0)
    int32_t r14_7 = 1
    
    do
        int64_t rcx_35 = *(r13_3 + 0x438)
        
        if (*(*(rsi_1 + rcx_35) + 0x20) == 0)
            int64_t i_4 = sx.q(i_3)
            int64_t* rcx_36 = *(rcx_35 + (i_4 << 3))
            
            if (rcx_36 != 0)
                (**rcx_36)(rcx_36, 1)
            
            int32_t rcx_39 = *(r13_3 + 0x440)
            int32_t rax_50 = rcx_39 - i_3
            
            if (rax_50 != 1)
                int64_t rcx_37 = *(r13_3 + 0x438)
                memmove(rcx_37 + (i_4 << 3), rcx_37 + (sx.q(r14_7) << 3), (rax_50 - 1) << 3)
                rcx_39 = *(r13_3 + 0x440)
            
            *(r13_3 + 0x440) = rcx_39 - 1
            sub_1405c53d0(r13_3 + 0x438)
            i_3 -= 1
            r14_7 -= 1
            rsi_1 -= 8
        
        i_3 += 1
        r14_7 += 1
        rsi_1 = &rsi_1[1]
    while (i_3 s< *(r13_3 + 0x440))

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t var_80
bool cond:2 = var_80:4.d == 0
var_80.d = 0

if (not(cond:2))
    sub_1405a5130(&var_88, 0)

int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
void* result = sub_14059a8e0(&var_78, 0)

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_45 = var_88

if (rcx_45 != 0)
    result = sub_140a74f90(rcx_45)

if (r15_3 != 0)
    result = sub_140a74f90(r15_3)

__security_check_cookie(rax_1 ^ &var_148)
return result
