// 函数: sub_14213f0f0
// 地址: 0x14213f0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[0xa].d s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx = *(rdi_1 + arg1[9])
        (*(*rcx + 0x2d8))(rcx)
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< arg1[0xa].d)

arg1[0xa].d = 0

if (*(arg1 + 0x54) != 0)
    sub_1405c5570(&arg1[9], 0)

sub_14213f9e0(arg1)
void* rcx_3 = arg1[0xb]

if (rcx_3 != 0)
    if (*(rcx_3 + 0x88) == 0)
        sub_142174ce0(rcx_3, arg1)
    else
        *(rcx_3 + 0x88) = 0

int32_t rax_3 = arg1[0xf].d
int64_t rbx = sx.q(rax_3 - 1)

if (rax_3 - 1 s>= 0)
    int64_t temp3_1
    
    do
        int64_t* rcx_4 = *(arg1[0xe] + (rbx << 3))
        
        if (rcx_4 != 0)
            sub_141f83fe0(rcx_4, 1, 0)
        
        temp3_1 = rbx
        rbx -= 1
    while (temp3_1 - 1 s>= 0)

int32_t var_94 = 1
int32_t r11 = arg1[0x288].d
void* var_90 = &arg1[0x285]
int32_t rcx_5 = 0
int32_t var_98 = 0
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_6 = arg1[0x287]
    void* r9_1 = &arg1[0x285]
    
    if (rax_6 != 0)
        r9_1 = rax_6
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_14213f248:
        int32_t rax_13 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_13)
        int32_t var_94_1 = rax_13
        int32_t rax_14
        
        if (rax_13 == 0)
            rax_14 = 0x20
        else
            rax_14 = 0x1f - temp0_1
        
        var_84.d = r8 - rax_14 + 0x1f
        
        if (r8 - rax_14 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_5)
            r8 += 0x20
            rcx_5 += 1
            var_84:4.d = r8
            var_98 = rcx_5
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_14213f248
        
        var_84.d = r11

int32_t rdx_10 = arg1[0x288].d
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_10.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_10 s>> 5
int32_t r9_3 = rdx_10 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int32_t var_88_2 = r14
var_84.d = rdx_10
int128_t var_78 = (&arg1[0x283]).o
int96_t var_68 = var_48:8.12

if (rdx_10 != r11)
    void* rax_16 = arg1[0x287]
    void* r10_1 = &arg1[0x285]
    
    if (rax_16 != 0)
        r10_1 = rax_16
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11 - 1)
    rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_10 != 0)
    label_14213f312:
        int32_t rax_23 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_23)
        int32_t rbx_1
        
        if (rax_23 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_3
        
        var_84.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_10 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_10.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_10 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_14213f312
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rcx_12 = sx.q(var_5c)
    int64_t* rax_25 = var_78.q
    
    if (rcx_12.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg1[0x285] && rax_25 == &arg1[0x283])
        void* r9_5 = arg1[0xb]
        
        if (r9_5 != 0)
            int32_t r10_2 = *(arg1 + 0x1a24)
            
            if (r10_2 != 0)
                void* rax_31 = *(r9_5 + 0x728)
                void* r8_4 = r9_5 + 0x718
                
                if (rax_31 != 0)
                    r8_4 = rax_31
                
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(r10_2)
                void* r8_5 = r8_4 + (sx.q((temp7_1 + (temp6_1 & 0x1f)) s>> 5) << 2)
                *r8_5 &= not.d(1 << (r10_2.b & 0x1f))
                
                if (*(r9_5 + 0x738) u<= r10_2)
                    r10_2 = *(r9_5 + 0x738)
                
                *(r9_5 + 0x738) = r10_2
        
        sub_1417ad930(&arg1[0x283], 0)
        arg1[0xd] = 0
        
        if (data_143de542c != 0)
            int64_t* rcx_20 = arg1[0x13]
            
            if (rcx_20 != 0)
                if ((rcx_20[1].d & 0x18000) == 0)
                    (*(*rcx_20 + 0x3f0))(rcx_20, arg1)
                
                arg1[0x13] = 0
                arg1[6] = 0
            else if (arg1[0x39].d s< 3)
                sub_142003490()
                data_143a2dfa0:0xc.d += 1
                uint32_t r15_1
                r15_1.b = 0
                int32_t rcx_21 = data_143a2dfa0:0xc.d
                int32_t rax_37 = data_143a2dfa0.d
                int64_t rdi_3 = sx.q(rax_37 - 1)
                
                if (rax_37 - 1 s>= 0)
                    int64_t rbx_4 = rdi_3 << 4
                    int64_t temp9_1
                    
                    do
                        int64_t rax_39 = data_143a2df98
                        
                        if (*(rbx_4 + rax_39 + 8) == 0)
                            r15_1.b = 1
                        else
                            int64_t* rcx_22 = *(rbx_4 + rax_39)
                            
                            if (rcx_22 == 0)
                                r15_1.b = 1
                            else if ((*(*rcx_22 + 0x50))(rcx_22, &arg1[0x2c]) == 0)
                                r15_1.b = 1
                        
                        rbx_4 -= 0x10
                        temp9_1 = rdi_3
                        rdi_3 -= 1
                    while (temp9_1 - 1 s>= 0)
                    rcx_21 = data_143a2dfa0:0xc.d
                
                data_143a2dfa0:0xc.d = rcx_21 - 1
                
                if (r15_1.b != 0)
                    sub_140599630(&data_143a2df98, 0)
        
        uint64_t result = sub_140d9e780(&arg1[0x28d], 0)
        int64_t* rcx_24 = arg1[0x28]
        
        if (rcx_24 != 0)
            arg1[0x28] = 0
            result = (**rcx_24)(rcx_24, 1)
        
        bool cond:4 = arg1[0x39].d == 4
        arg1[0xb] = 0
        
        if (not(cond:4))
            arg1[0x39].d = 4
        
        return result
    
    int64_t rax_26 = *rax_25
    int64_t rdi_2 = 0
    int64_t rcx_13 = rcx_12 << 5
    int64_t* rbx_2 = *(rcx_13 + rax_26 + 8)
    uint64_t r14_2 = sx.q(*(rcx_13 + rax_26 + 0x10)) << 3 u>> 3
    
    if (rbx_2 u> &rbx_2[sx.q(*(rcx_13 + rax_26 + 0x10))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            rdx_10.b = 1
            sub_141f83fe0(*rbx_2, rdx_10.b, 0)
            rdi_2 += 1
            rbx_2 = &rbx_2[1]
        while (rdi_2 != r14_2)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
