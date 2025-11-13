// 函数: sub_141a388d0
// 地址: 0x141a388d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
sub_141238070(&var_a8, 0x80)
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(0x48)
int32_t rcx_3 = 0x20 << 0x1a s>> 0x1f
uint64_t rflags_1
char temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(0x47)
char rdx

if (rcx_3 == 0)
    rdx = 0x20
else
    rdx = 0x1f - temp0_1

int32_t rdx_1 = 1 << ((not.d(rcx_3)).b & (0x20 - rdx))

if (var_60 == 0 || var_60 s< rdx_1)
    int32_t var_60_1 = rdx_1
    sub_141a5f980(&var_a8)

int64_t var_138
__builtin_memset(&var_138, 0, 0x14)
var_138.o = var_138.o
sub_141a41190(arg1 + 0xa0, &var_a8, &var_138, arg4)
var_138:4.d = 1
int32_t r11 = *(arg1 + 0x78)
int32_t rcx_8 = 0
var_138.d = 0
int32_t r8_1 = 0
void* var_130 = arg1 + 0x60
int32_t var_128 = 0xffffffff
int64_t var_124 = 0

if (r11 != 0)
    void* rax_7 = *(arg1 + 0x70)
    void* r9_1 = arg1 + 0x60
    
    if (rax_7 != 0)
        r9_1 = rax_7
    
    int32_t temp0_2
    int32_t temp1_1
    temp0_2:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_141a38a6b:
        int32_t rax_14 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_14)
        var_138:4.d = rax_14
        int32_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0x20
        else
            rax_15 = 0x1f - temp0_3
        
        var_124.d = r8_1 - rax_15 + 0x1f
        
        if (r8_1 - rax_15 + 0x1f s> r11)
            var_124.d = r11
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_8)
            r8_1 += 0x20
            rcx_8 += 1
            var_124:4.d = r8_1
            var_138.d = rcx_8
            
            if (rdx_6.d s>= (temp1_1 + (temp0_2 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            var_128 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141a38a6b
        
        var_124.d = r11

int32_t rdx_7 = *(arg1 + 0x78)
double zmm2[0x2] = var_128.o
double var_d0[0x2] = zmm2
int32_t rsi = 0xffffffff << (rdx_7.b & 0x1f)
int128_t var_e0 = var_138.o
int32_t r8_4 = rdx_7 s>> 5
int32_t r9_3 = rdx_7 & 0xffffffe0
int64_t var_f8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_128_1 = rsi
var_124.d = rdx_7
int128_t var_118 = (arg1 + 0x50).o
int128_t var_108 = var_e0

if (rdx_7 != r11)
    void* rax_17 = *(arg1 + 0x70)
    void* r10_1 = arg1 + 0x60
    
    if (rax_17 != 0)
        r10_1 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_4) << 2)) & rsi
    
    if (rdx_11 != 0)
    label_141a38b43:
        int32_t rax_24 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_3
        int32_t temp0_5
        temp0_5, rflags_3 = _bit_scan_reverse(rax_24)
        int32_t rax_25
        
        if (rax_24 == 0)
            rax_25 = 0x20
        else
            rax_25 = 0x1f - temp0_5
        
        var_124.d = r9_3 - rax_25 + 0x1f
        
        if (r9_3 - rax_25 + 0x1f s> r11)
            var_124.d = r11
    else
        while (true)
            int64_t rcx_13 = sx.q(r8_4)
            r9_3 += 0x20
            r8_4 += 1
            
            if (rcx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_13 << 2) + 4)
            var_128_1 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141a38b43
        
        var_124.d = r11

while (true)
    int64_t rax_27 = sx.q(var_108:0xc.d)
    int64_t rdx_12 = var_118.q
    
    if (rax_27.d == (var_128_1.q u>> 0x20).d && var_108.q == arg1 + 0x60 && rdx_12 == arg1 + 0x50)
        int32_t rcx_20 = 0
        int32_t r8_6 = 0
        var_138.d = 0
        var_138:4.d = 1
        int64_t var_98
        int64_t* var_130_1 = &var_98
        int32_t var_128_3 = 0xffffffff
        int64_t var_124_1 = 0
        int64_t* var_88
        int32_t var_80
        
        if (var_80 != 0)
            int64_t* r9_6 = &var_98
            
            if (var_88 != 0)
                r9_6 = var_88
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(var_80 - 1)
            int32_t rdx_16 = *r9_6
            
            if (rdx_16 != 0)
            label_141a38c6b:
                int32_t rax_38 = neg.d(rdx_16) & rdx_16
                uint64_t rflags_4
                int32_t temp0_6
                temp0_6, rflags_4 = _bit_scan_reverse(rax_38)
                var_138:4.d = rax_38
                int32_t rax_39
                
                if (rax_38 == 0)
                    rax_39 = 0x20
                else
                    rax_39 = 0x1f - temp0_6
                
                int32_t rax_40 = r8_6 - rax_39 + 0x1f
                
                if (rax_40 s> var_80)
                    rax_40 = var_80
                
                var_124_1.d = rax_40
            else
                while (true)
                    int64_t rdx_17 = sx.q(rcx_20)
                    r8_6 += 0x20
                    rcx_20 += 1
                    var_124_1:4.d = r8_6
                    var_138.d = rcx_20
                    
                    if (rdx_17.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        var_124_1.d = var_80
                        break
                    
                    rdx_16 = *(r9_6 + (rdx_17 << 2) + 4)
                    var_128_3 = 0xffffffff
                    
                    if (rdx_16 != 0)
                        goto label_141a38c6b
        
        zmm2 = var_128_3.o
        var_124_1.d = var_80
        double var_d0_1[0x2] = zmm2
        int128_t zmm1 = var_138.o
        zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
        var_118 = (&var_a8).o
        int128_t var_108_1 = zmm1
        int64_t var_f8_1 = zmm2.q
        
        while (true)
            int64_t rcx_24 = sx.q(var_108_1:0xc.d)
            int64_t rax_41 = var_118.q
            
            if (rcx_24.d == ((0xffffffff << (var_80.b & 0x1f)).q u>> 0x20).d
                    && var_108_1.q == &var_98 && rax_41 == &var_a8)
                sub_141a63710(arg1 + 0xa0)
                void* rsi_1 = arg1 + 0x50
                int32_t r11_1 = *(rsi_1 + 0x28)
                void* r15_1 = rsi_1 + 0x10
                var_138:4.d = 1
                int32_t rcx_28 = 0
                var_138.d = 0
                int32_t r8_9 = 0
                void* var_130_2 = r15_1
                int32_t var_128_5 = 0xffffffff
                int64_t var_124_2 = 0
                
                if (r11_1 != 0)
                    void* rax_46 = *(r15_1 + 0x10)
                    void* r9_8 = r15_1
                    
                    if (rax_46 != 0)
                        r9_8 = rax_46
                    
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(r11_1 - 1)
                    int32_t rdx_25 = *r9_8
                    
                    if (rdx_25 != 0)
                    label_141a38e0b:
                        int32_t rax_53 = neg.d(rdx_25) & rdx_25
                        uint64_t rflags_5
                        int32_t temp0_8
                        temp0_8, rflags_5 = _bit_scan_reverse(rax_53)
                        var_138:4.d = rax_53
                        int32_t rax_54
                        
                        if (rax_53 == 0)
                            rax_54 = 0x20
                        else
                            rax_54 = 0x1f - temp0_8
                        
                        var_124_2.d = r8_9 - rax_54 + 0x1f
                        
                        if (r8_9 - rax_54 + 0x1f s> r11_1)
                            var_124_2.d = r11_1
                    else
                        while (true)
                            int64_t rdx_26 = sx.q(rcx_28)
                            r8_9 += 0x20
                            rcx_28 += 1
                            var_124_2:4.d = r8_9
                            var_138.d = rcx_28
                            
                            if (rdx_26.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_25 = *(r9_8 + (rdx_26 << 2) + 4)
                            var_128_5 = 0xffffffff
                            
                            if (rdx_25 != 0)
                                goto label_141a38e0b
                        
                        var_124_2.d = r11_1
                
                int32_t rdx_27 = *(rsi_1 + 0x28)
                zmm2 = var_128_5.o
                double var_d0_2[0x2] = zmm2
                int32_t rdi_2 = 0xffffffff << (rdx_27.b & 0x1f)
                int128_t var_e0_2 = var_138.o
                int32_t r8_12 = rdx_27 s>> 5
                int32_t r9_10 = rdx_27 & 0xffffffe0
                int64_t var_f8_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                int32_t var_128_6 = rdi_2
                var_124_2.d = rdx_27
                var_118 = rsi_1.o
                int128_t var_108_2 = var_e0_2
                
                if (rdx_27 != r11_1)
                    void* rax_56 = *(r15_1 + 0x10)
                    void* r10_3 = r15_1
                    
                    if (rax_56 != 0)
                        r10_3 = rax_56
                    
                    int32_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(r11_1 - 1)
                    int32_t rdx_31 = *(r10_3 + (sx.q(r8_12) << 2)) & rdi_2
                    
                    if (rdx_31 != 0)
                    label_141a38ee3:
                        int32_t rax_63 = neg.d(rdx_31) & rdx_31
                        uint64_t rflags_6
                        int32_t temp0_10
                        temp0_10, rflags_6 = _bit_scan_reverse(rax_63)
                        int32_t r14_1
                        
                        if (rax_63 == 0)
                            r14_1 = 0x20
                        else
                            r14_1 = 0x1f - temp0_10
                        
                        var_124_2.d = r9_10 - r14_1 + 0x1f
                        
                        if (r9_10 - r14_1 + 0x1f s> r11_1)
                            var_124_2.d = r11_1
                    else
                        while (true)
                            int64_t rcx_33 = sx.q(r8_12)
                            r9_10 += 0x20
                            r8_12 += 1
                            
                            if (rcx_33.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_31 = *(r10_3 + (rcx_33 << 2) + 4)
                            var_128_6 = 0xffffffff
                            
                            if (rdx_31 != 0)
                                goto label_141a38ee3
                        
                        var_124_2.d = r11_1
                
                while (true)
                    int64_t rax_65 = sx.q(var_108_2:0xc.d)
                    int64_t rdx_32 = var_118.q
                    
                    if (rax_65.d == (var_128_6.q u>> 0x20).d && var_108_2.q == r15_1
                            && rdx_32 == rsi_1)
                        int32_t var_60_2 = 0
                        
                        if (var_68 != 0)
                            sub_140a74f90(var_68)
                        
                        int64_t result = sub_141a46280(&var_a8, 0)
                        
                        if (var_88 != 0)
                            result = sub_140a74f90(var_88)
                        
                        int64_t rcx_44 = var_a8
                        
                        if (rcx_44 != 0)
                            result = sub_140a74f90(rcx_44)
                        
                        __security_check_cookie(rax_1 ^ &var_178)
                        return result
                    
                    void* rsi_4 = rax_65 * 0x30 + *rdx_32
                    int32_t rax_66 = *(rsi_4 + 0x24)
                    int64_t* rbx_7 = *(rsi_4 + 0x18)
                    int32_t i_2 = *(rsi_4 + 0x20)
                    
                    if (rax_66 s< 0)
                        if (i_2 != 0)
                            int32_t i
                            
                            do
                                char rax_69 = rbx_7[0x10].b
                                
                                if ((rax_69 & 1) != 0)
                                    int64_t* rcx_37 = rbx_7
                                    
                                    if ((rax_69 & 2) == 0)
                                        rcx_37 = *rbx_7
                                    
                                    rbx_7[0x10].b = rax_69 & 0xfe
                                    (**rcx_37)(rcx_37, 0)
                                    
                                    if ((rbx_7[0x10].b & 2) == 0)
                                        sub_140a74f90(*rbx_7)
                                
                                rbx_7 = &rbx_7[0x11]
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                            rax_66 = *(rsi_4 + 0x24)
                        
                        *(rsi_4 + 0x20) = 0
                        
                        if (rax_66 != 0)
                            sub_1405a5390(rsi_4 + 0x18, 0)
                    else
                        if (i_2 != 0)
                            int32_t i_1
                            
                            do
                                char rax_67 = rbx_7[0x10].b
                                
                                if ((rax_67 & 1) != 0)
                                    int64_t* rcx_35 = rbx_7
                                    
                                    if ((rax_67 & 2) == 0)
                                        rcx_35 = *rbx_7
                                    
                                    rbx_7[0x10].b = rax_67 & 0xfe
                                    (**rcx_35)(rcx_35, 0)
                                    
                                    if ((rbx_7[0x10].b & 2) == 0)
                                        sub_140a74f90(*rbx_7)
                                
                                rbx_7 = &rbx_7[0x11]
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                        
                        *(rsi_4 + 0x20) = 0
                    
                    var_108_2:8.d &= not.d(var_118:0xc.d)
                    sub_14059bdd0(&var_118:8)
                    rsi_1 = arg1 + 0x50
            
            int64_t* rdx_21 = (rcx_24 << 6) + *rax_41
            char rax_42 = rdx_21[6].b
            void* rcx_25 = &rdx_21[2]
            
            if ((rax_42 & 1) == 0)
                rcx_25 = nullptr
            else if ((rax_42 & 2) == 0)
                rcx_25 = *rcx_25
            
            (*(*rcx_25 + 8))(rcx_25, *rdx_21, arg1, rdx_21[1], arg2, arg3, arg4)
            var_108_1:8.d &= not.d(var_118:0xc.d)
            sub_14059bdd0(&var_118:8)
    
    int128_t* rcx_17 = rax_27 * 0x30 + *rdx_12
    int32_t var_128_2 = rcx_17[1].d
    var_138.o = *rcx_17
    sub_141a41190(rcx_17 + 0x18, &var_a8, &var_138, arg4)
    var_108:8.d &= not.d(var_118:0xc.d)
    sub_14059bdd0(&var_118:8)
