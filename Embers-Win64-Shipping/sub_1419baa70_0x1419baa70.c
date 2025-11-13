// 函数: sub_1419baa70
// 地址: 0x1419baa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x10)

for (void* r12 = &i[sx.q(*(arg1 + 0x18))]; i != r12; i = &i[1])
    int32_t rbx_1 = 0
    uint128_t zmm0 = *(*i + 0x20)
    void* rdi_1 = _mm_bsrli_si128(zmm0, 8).q
    int32_t rsi_1 = *(rdi_1 + 0x10)
    
    if (rsi_1 != 0)
        do
            void* r10_1 = *(rdi_1 + 8)
            int64_t rdx_2 = r10_1 s>> 1
            char r9_1 = *(rdi_1 + 8) & 1
            void* r8_2
            
            if (r9_1 == 0)
                r8_2 = r10_1
            else
                r8_2 = rdi_1 + 8 + rdx_2
            
            int64_t rax_2 = sx.q(rbx_1)
            char r8_3 = *(r8_2 + (rax_2 << 2) + 2)
            void* rax_4 = rdx_2 + 8 + rdi_1
            
            if (r9_1 == 0)
                rax_4 = r10_1
            
            int64_t* rax_6 = zx.q(*(rax_4 + (rax_2 << 2))) + zmm0.q
            
            if (r8_3 u<= 0x10 && test_bit(0x13200, zx.d(r8_3)))
                void* rcx_2 = *rax_6
                
                if (rcx_2 != 0)
                    *(rcx_2 + 0x1c) += 1
            else
                void* rax_8
                
                if (((r8_3 - 0xa) & 0xfa) == 0)
                    int64_t* rcx_4 = *rax_6
                    
                    if (rcx_4 != 0)
                        rax_8 = (*(*rcx_4 + 8))(rcx_4)
                        *(rax_8 + 0x1c) += 1
                else if (r8_3 == 0x14)
                    for (int32_t j = 0; j u< 8; )
                        void* rcx_5 = *rax_6
                        
                        if (rcx_5 == 0)
                            break
                        
                        *(rcx_5 + 0x1c) += 1
                        j += 1
                        rax_6 = &rax_6[2]
                    
                    rax_8 = rax_6[0x10]
                    
                    if (rax_8 != 0)
                        *(rax_8 + 0x1c) += 1
            
            rbx_1 += 1
        while (rbx_1 u< rsi_1)

int64_t* rdx_3 = *(arg1 + 0x160)
void* r8_5 = &rdx_3[sx.q(*(arg1 + 0x168)) * 3]

while (rdx_3 != r8_5)
    void* rax_10 = *rdx_3
    rdx_3 = &rdx_3[3]
    *(rax_10 + 0x1c) += 1

int64_t* rdx_4 = *(arg1 + 0x170)
void* r8_6 = &rdx_4[sx.q(*(arg1 + 0x178)) * 3]

while (rdx_4 != r8_6)
    void* rax_12 = *rdx_4
    rdx_4 = &rdx_4[3]
    *(rax_12 + 0x1c) += 1

int32_t rcx_8 = 0
uint128_t var_98
var_98:4.d = 1
var_98.d = 0
int32_t r11 = *(arg1 + 0x48)
int32_t r8_7 = 0
var_98:8.q = arg1 + 0x30
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_13 = *(arg1 + 0x40)
    void* r9_2 = arg1 + 0x30
    
    if (rax_13 != 0)
        r9_2 = rax_13
    
    int32_t temp0_2
    int32_t temp1_1
    temp0_2:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_7 = *r9_2
    
    if (rdx_7 != 0)
    label_1419bac98:
        int32_t rax_20 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rax_20)
        var_98:4.d = rax_20
        int32_t rax_21
        
        if (rax_20 == 0)
            rax_21 = 0x20
        else
            rax_21 = 0x1f - temp0_3
        
        var_84.d = r8_7 - rax_21 + 0x1f
        
        if (r8_7 - rax_21 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_8 = sx.q(rcx_8)
            r8_7 += 0x20
            rcx_8 += 1
            var_84:4.d = r8_7
            var_98.d = rcx_8
            
            if (rdx_8.d s>= (temp1_1 + (temp0_2 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r9_2 + (rdx_8 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_1419bac98
        
        var_84.d = r11

int32_t rdx_9 = *(arg1 + 0x48)
int128_t var_38 = 0xffffffff
int32_t rdi_2 = 0xffffffff << (rdx_9.b & 0x1f)
int32_t r8_10 = rdx_9 s>> 5
int32_t r9_4 = rdx_9 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = rdi_2
var_84.d = rdx_9
uint128_t var_78 = (arg1 + 0x20).o
int96_t var_68 = var_98:8.12

if (rdx_9 != r11)
    void* rax_23 = *(arg1 + 0x40)
    void* r10_2 = arg1 + 0x30
    
    if (rax_23 != 0)
        r10_2 = rax_23
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_13 = *(r10_2 + (sx.q(r8_10) << 2)) & rdi_2
    
    if (rdx_13 != 0)
    label_1419bad62:
        int32_t rax_30 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_2
        int32_t temp0_5
        temp0_5, rflags_2 = _bit_scan_reverse(rax_30)
        int32_t rax_31
        
        if (rax_30 == 0)
            rax_31 = 0x20
        else
            rax_31 = 0x1f - temp0_5
        
        var_84.d = r9_4 - rax_31 + 0x1f
        
        if (r9_4 - rax_31 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_13 = sx.q(r8_10)
            r9_4 += 0x20
            r8_10 += 1
            
            if (rcx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_13 = *(r10_2 + (rcx_13 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_1419bad62
        
        var_84.d = r11

while (true)
    int32_t result_1
    int64_t result_2 = sx.q(result_1)
    int64_t* rdx_14 = var_78.q
    
    if (result_2.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x30 && rdx_14 == arg1 + 0x20)
        var_98:4.d = 1
        int32_t r11_1 = *(arg1 + 0x98)
        var_98:8.q = arg1 + 0x80
        int32_t var_88_3 = 0xffffffff
        int32_t rcx_20 = 0
        var_98.d = 0
        int32_t r8_11 = 0
        int64_t var_84_1 = 0
        
        if (r11_1 != 0)
            void* rax_39 = *(arg1 + 0x90)
            void* r9_6 = arg1 + 0x80
            
            if (rax_39 != 0)
                r9_6 = rax_39
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_17 = *r9_6
            
            if (rdx_17 != 0)
            label_1419bae88:
                int32_t rax_46 = neg.d(rdx_17) & rdx_17
                uint64_t rflags_3
                int32_t temp0_6
                temp0_6, rflags_3 = _bit_scan_reverse(rax_46)
                var_98:4.d = rax_46
                int32_t rax_47
                
                if (rax_46 == 0)
                    rax_47 = 0x20
                else
                    rax_47 = 0x1f - temp0_6
                
                var_84_1.d = r8_11 - rax_47 + 0x1f
                
                if (r8_11 - rax_47 + 0x1f s> r11_1)
                    var_84_1.d = r11_1
            else
                while (true)
                    int64_t rdx_18 = sx.q(rcx_20)
                    r8_11 += 0x20
                    rcx_20 += 1
                    var_84_1:4.d = r8_11
                    var_98.d = rcx_20
                    
                    if (rdx_18.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_17 = *(r9_6 + (rdx_18 << 2) + 4)
                    int32_t var_88_4 = 0xffffffff
                    
                    if (rdx_17 != 0)
                        goto label_1419bae88
                
                var_84_1.d = r11_1
        
        int32_t rdx_19 = *(arg1 + 0x98)
        int128_t var_38_1 = 0xffffffff
        int32_t rdi_4 = 0xffffffff << (rdx_19.b & 0x1f)
        int32_t r8_14 = rdx_19 s>> 5
        int32_t r9_8 = rdx_19 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_5 = rdi_4
        var_84_1.d = rdx_19
        var_78 = (arg1 + 0x70).o
        int96_t var_68_1 = var_98:8.12
        
        if (rdx_19 != r11_1)
            void* rax_49 = *(arg1 + 0x90)
            void* r10_3 = arg1 + 0x80
            
            if (rax_49 != 0)
                r10_3 = rax_49
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_23 = *(r10_3 + (sx.q(r8_14) << 2)) & rdi_4
            
            if (rdx_23 != 0)
            label_1419baf52:
                int32_t rax_56 = neg.d(rdx_23) & rdx_23
                uint64_t rflags_4
                int32_t temp0_8
                temp0_8, rflags_4 = _bit_scan_reverse(rax_56)
                int32_t r12_1
                
                if (rax_56 == 0)
                    r12_1 = 0x20
                else
                    r12_1 = 0x1f - temp0_8
                
                var_84_1.d = r9_8 - r12_1 + 0x1f
                
                if (r9_8 - r12_1 + 0x1f s> r11_1)
                    var_84_1.d = r11_1
            else
                while (true)
                    int64_t rcx_25 = sx.q(r8_14)
                    r9_8 += 0x20
                    r8_14 += 1
                    
                    if (rcx_25.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_23 = *(r10_3 + (rcx_25 << 2) + 4)
                    var_88_5 = 0xffffffff
                    
                    if (rdx_23 != 0)
                        goto label_1419baf52
                
                var_84_1.d = r11_1
        
        while (true)
            int64_t result = sx.q(result_1)
            int64_t* rdx_24 = var_78.q
            
            if (result.d == (var_88_5.q u>> 0x20).d && var_68_1.q == arg1 + 0x80
                    && rdx_24 == arg1 + 0x70)
                return result
            
            int64_t rcx_27 = result * 3
            int64_t rax_58 = *rdx_24
            int64_t* rbx_5 = *(rax_58 + (rcx_27 << 3) + 8)
            void* rdi_5 = *(rax_58 + (rcx_27 << 3))
            
            if (rbx_5 != 0)
                rbx_5[0x1a].d += 1
            
            if (*(rdi_5 + 0x1c) == 0)
                if (rbx_5 != 0)
                    rbx_5[0x1a].d -= 1
                    
                    if (rbx_5[0x1a].d == 1)
                        sub_1405d16e0(rbx_5, nullptr)
                        sub_14081d930(&rbx_5[1], nullptr)
                        sub_1405d16e0(&rbx_5[2], nullptr)
                        sub_141096260(&rbx_5[3], 0)
                        sub_141096040(&rbx_5[0xd], 0)
                
                *(rdi_5 + 0x40) = 0
                *(rdi_5 + 0x10) = 0
            else if (rbx_5 != 0)
                rbx_5[0x1a].d -= 1
                
                if (rbx_5[0x1a].d == 1)
                    sub_1405d16e0(rbx_5, nullptr)
                    sub_14081d930(&rbx_5[1], nullptr)
                    sub_1405d16e0(&rbx_5[2], nullptr)
                    sub_141096260(&rbx_5[3], 0)
                    sub_141096040(&rbx_5[0xd], 0)
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    
    int64_t rcx_15 = result_2 * 3
    int64_t rax_33 = *rdx_14
    int64_t* rbx_3 = *(rax_33 + (rcx_15 << 3) + 8)
    void* rdi_3 = *(rax_33 + (rcx_15 << 3))
    
    if (rbx_3 != 0)
        (*(*rbx_3 + 0x30))(rbx_3)
    
    if (*(rdi_3 + 0x1c) == 0)
        if (rbx_3 != 0)
            (*(*rbx_3 + 0x38))(rbx_3)
        
        *(rdi_3 + 0x80) = 0
        *(rdi_3 + 0x10) = 0
    else if (rbx_3 != 0)
        (*(*rbx_3 + 0x38))(rbx_3)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
