// 函数: sub_1413e0d20
// 地址: 0x1413e0d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
int64_t var_18 = rdi
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
sub_1419a21e0(0)
int32_t var_5c = 0x80
int64_t var_88 = 0
int32_t var_80 = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int64_t var_d8 = 0
int32_t var_d0 = 0
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x1c)
int32_t var_a4 = 0
int64_t var_98 = 0
int32_t var_90 = 0
int32_t var_58 = 0xffffffff
int32_t var_ac = 0x80
int32_t var_a8 = 0xffffffff
int128_t var_168
sub_1407453e0(&var_168, arg1 + 0xee8)
int32_t var_188
void* var_158
int32_t var_150
int32_t i_1

for (int32_t i = i_1; i s< *(var_158 + 0x18); i = i_1)
    rdi.b = 0
    void* rsi_1 = *(*var_168.q + sx.q(i) * 0x30 + 0x20)
    int64_t rdx_2
    rdx_2.b = 1
    void* j_2 = sub_141226dd0(rsi_1, rdx_2.b)
    void* j = j_2
    
    if (j_2 != 0)
        do
            if (((*(j + 0x34) u>> 4).b & 1) != 0)
                rdi.b = 1
                void var_140
                int64_t var_100
                sub_140a5cad0(&var_d8, &var_140, 
                    sub_140d21830(*(*(j + 8) + 0x118), &var_100, 0, 0), nullptr)
                int64_t rcx_8 = var_100
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
            
            j = *(j + 0x18)
        while (j != 0)
    
    void* j_3 = sub_141226e00(rsi_1, 1)
    void* j_1 = j_3
    
    if (j_3 != 0)
        do
            if (((*(j_1 + 0x34) u>> 4).b & 1) != 0)
                rdi.b = 1
                void var_13c
                int64_t var_f0
                sub_140a5cad0(&var_d8, &var_13c, 
                    sub_140d21830(*(*(j_1 + 8) + 0x118), &var_f0, 0, 0), nullptr)
                int64_t rcx_13 = var_f0
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
            
            j_1 = *(j_1 + 0x18)
        while (j_1 != 0)
    
    if (rdi.b != 0)
        int64_t var_134 = *(*(rsi_1 + 0x20) + 0x140)
        void var_138
        sub_140a5cad0(&var_88, &var_138, sub_140b63b70(&var_134, &var_188), nullptr)
        int64_t rcx_17 = var_188.q
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
    
    var_150 &= not.d(var_168:0xc.d)
    sub_14059bdd0(&var_168:8)

sub_140b1f640(arg2, u"DumpUnbuiltLightIteractions")
sub_140b1f700(arg2, u"Lights with unbuilt interactions: %d", zx.q(var_80 - var_54))
int64_t* var_180 = &var_78
int32_t rcx_21 = 0
var_188 = 0
int32_t var_184 = 1
int32_t r8_6 = 0
int32_t var_178 = 0xffffffff
int64_t var_174 = 0
int32_t var_60

if (var_60 != 0)
    int64_t* r9_1 = &var_78
    int64_t* var_68
    
    if (var_68 != 0)
        r9_1 = var_68
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_60 - 1)
    int32_t rdx_12 = *r9_1
    
    if (rdx_12 != 0)
    label_1413e0fe7:
        int32_t rax_21 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_21)
        int32_t var_184_1 = rax_21
        int32_t rax_22
        
        if (rax_21 == 0)
            rax_22 = 0x20
        else
            rax_22 = 0x1f - temp0_2
        
        int32_t rax_23 = r8_6 - rax_22 + 0x1f
        
        if (rax_23 s> var_60)
            rax_23 = var_60
        
        var_174.d = rax_23
    else
        while (true)
            int64_t rdx_13 = sx.q(rcx_21)
            r8_6 += 0x20
            rcx_21 += 1
            var_174:4.d = r8_6
            var_188 = rcx_21
            
            if (rdx_13.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_174.d = var_60
                break
            
            rdx_12 = *(r9_1 + (rdx_13 << 2) + 4)
            var_178 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_1413e0fe7

double zmm2[0x2] = var_178.o
double var_110[0x2] = zmm2
var_174.d = var_60
int128_t var_120 = var_188.o
double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
var_168 = (&var_88).o
var_158.o = var_120
int64_t var_148 = temp0_3.q

while (true)
    int64_t i_2 = sx.q(i_1)
    int64_t* rdx_15 = var_168.q
    
    if (i_2.d == ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d && var_158 == &var_78
            && rdx_15 == &var_88)
        sub_140b1f640(arg2, &data_142d40450)
        sub_140b1f700(arg2, u"Primitives with unbuilt interactions: %d", zx.q(var_d0 - var_a4))
        int64_t* var_180_1 = &var_c8
        int32_t rcx_30 = 0
        var_188 = 0
        int32_t r8_11 = 0
        int32_t var_184_2 = 1
        int32_t var_178_2 = 0xffffffff
        int64_t var_174_1 = 0
        int32_t var_b0
        
        if (var_b0 != 0)
            int64_t* r9_2 = &var_c8
            int64_t* var_b8
            
            if (var_b8 != 0)
                r9_2 = var_b8
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(var_b0 - 1)
            int32_t rdx_18 = *r9_2
            
            if (rdx_18 != 0)
            label_1413e1177:
                int32_t rax_34 = neg.d(rdx_18) & rdx_18
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_34)
                int32_t var_184_3 = rax_34
                int32_t rsi_2
                
                if (rax_34 == 0)
                    rsi_2 = 0x20
                else
                    rsi_2 = 0x1f - temp0_4
                
                int32_t rax_35 = r8_11 - rsi_2 + 0x1f
                
                if (rax_35 s> var_b0)
                    rax_35 = var_b0
                
                var_174_1.d = rax_35
            else
                while (true)
                    int64_t rdx_19 = sx.q(rcx_30)
                    r8_11 += 0x20
                    rcx_30 += 1
                    var_174_1:4.d = r8_11
                    var_188 = rcx_30
                    
                    if (rdx_19.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        var_174_1.d = var_b0
                        break
                    
                    rdx_18 = *(r9_2 + (rdx_19 << 2) + 4)
                    var_178_2 = 0xffffffff
                    
                    if (rdx_18 != 0)
                        goto label_1413e1177
        
        zmm2 = var_178_2.o
        int128_t var_120_1 = var_188.o
        var_174_1.d = var_b0
        double var_110_1[0x2] = zmm2
        double temp0_5[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
        var_168 = (&var_d8).o
        var_158.o = var_120_1
        int64_t var_148_1 = temp0_5.q
        
        while (true)
            int64_t i_3 = sx.q(i_1)
            int64_t* rdx_20 = var_168.q
            
            if (i_3.d == ((0xffffffff << (var_b0.b & 0x1f)).q u>> 0x20).d && var_158 == &var_c8
                    && rdx_20 == &var_d8)
                int32_t var_90_1 = 0
                
                if (var_98 != 0)
                    sub_140a74f90(var_98)
                
                sub_140669e00(&var_d8)
                int32_t var_40_1 = 0
                
                if (var_48 != 0)
                    sub_140a74f90(var_48)
                
                void* result = sub_140669e00(&var_88)
                __security_check_cookie(rax_1 ^ &var_1a8)
                return result
            
            int64_t rcx_34 = i_3 * 3
            int64_t rax_36 = *rdx_20
            int16_t* const r8_13
            
            if (*(rax_36 + (rcx_34 << 3) + 8) == 0)
                r8_13 = &data_142d40450
            else
                r8_13 = *(rax_36 + (rcx_34 << 3))
            
            sub_140b1f700(arg2, u"    Primitive %s", r8_13)
            var_150 &= not.d(var_168:0xc.d)
            sub_14059bdd0(&var_168:8)
    
    int64_t rcx_25 = i_2 * 3
    int64_t rax_24 = *rdx_15
    int16_t* const r8_8
    
    if (*(rax_24 + (rcx_25 << 3) + 8) == 0)
        r8_8 = &data_142d40450
    else
        r8_8 = *(rax_24 + (rcx_25 << 3))
    
    sub_140b1f700(arg2, u"    Light %s", r8_8)
    var_150 &= not.d(var_168:0xc.d)
    sub_14059bdd0(&var_168:8)
