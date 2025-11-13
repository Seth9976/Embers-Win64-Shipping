// 函数: sub_141dca570
// 地址: 0x141dca570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158

if (arg2[1].d != *(arg2 + 0x34))
    int32_t rax_3 = *(arg2 + 0xc)
    arg2[1].d = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_1405a5410(arg2, 0)
    
    arg2[6].d = 0xffffffff
    *(arg2 + 0x34) = 0
    sub_140774790(&arg2[2])
    int64_t rcx_2 = sx.q(arg2[9].d)
    void* rdi_1 = &arg2[7]
    void* rax_4 = *(rdi_1 + 8)
    
    if (rcx_2 s> 0)
        if (rax_4 != 0)
            rdi_1 = rax_4
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_2 << 2)

int64_t* r11_1 = arg1 + 0x1a0
uint64_t var_88 = 0
int32_t* r13 = &r11_1[2]
int32_t var_80 = 0
int32_t rcx_3 = 0
int32_t rdi_2 = 0
int32_t var_5c = 0x80
int64_t var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t r9 = r13[6]
int32_t var_138 = 0
int32_t var_134 = 1
int32_t* var_130 = r13
int32_t var_128 = 0xffffffff
int64_t var_124 = 0

if (r9 != 0)
    int32_t* rax_5 = *(r13 + 0x10)
    int32_t* r8 = r13
    
    if (rax_5 != 0)
        r8 = rax_5
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r9 - 1)
    int32_t rdx_2 = *r8
    
    if (rdx_2 != 0)
    label_141dca6b7:
        int32_t rax_12 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_134_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_124.d = rdi_2 - rax_13 + 0x1f
        
        if (rdi_2 - rax_13 + 0x1f s> r9)
            var_124.d = r9
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_3)
            rdi_2 += 0x20
            rcx_3 += 1
            var_124:4.d = rdi_2
            var_138 = rcx_3
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r8[rdx_3 + 1]
            int32_t var_128_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141dca6b7
        
        var_124.d = r9

int32_t r12 = r11_1[5].d
int128_t var_110 = var_138.o
int32_t r8_2 = r12 & 0xffffffe0
int64_t var_100 = 0xffffffff
int32_t rdi_5 = r12 s>> 5
int64_t var_c0 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int128_t zmm1 = var_110
int128_t var_e0 = r11_1.o
int128_t var_d0 = zmm1
int32_t rax_16

if (r12 != r9)
    int32_t* rax_17 = *(r13 + 0x10)
    int32_t* r10_1 = r13
    
    if (rax_17 != 0)
        r10_1 = rax_17
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r9 - 1)
    int32_t rdx_7 = r10_1[sx.q(rdi_5)] & 0xffffffff << (r12 & 0x1f).b
    
    if (rdx_7 != 0)
    label_141dca78f:
        int32_t rax_23 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
        
        if (rax_23 == 0)
            rax_16 = 0x20
        else
            rax_16 = 0x1f - temp0_4
        
        r12 = r8_2 - rax_16 + 0x1f
        
        if (r12 s> r9)
            r12 = r9
    else
        while (true)
            int64_t rcx_7 = sx.q(rdi_5)
            r8_2 += 0x20
            rdi_5 += 1
            
            if (rcx_7.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = r10_1[rcx_7 + 1]
            
            if (rdx_7 != 0)
                goto label_141dca78f
        
        r12 = r9
    
    r11_1 = arg1 + 0x1a0

int64_t* var_68

while (true)
    int64_t rdx_8 = sx.q(var_d0:0xc.d)
    
    if (rdx_8.d != r12 || var_d0.q != r13)
        rax_16.b = 0
    else
        rax_16.b = 1
    
    int64_t* rcx_9 = var_e0.q
    
    if (rax_16.b == 0 || rcx_9 != r11_1)
        rax_16.b = 1
    else
        rax_16.b = 0
    
    if (rax_16.b == 0)
        break
    
    void* rdi_6 = *(*rcx_9 + rdx_8 * 0x10)
    
    if (rdi_6 != 0)
        void* rax_26 = sub_142577430()
        void* rcx_11 = *(rdi_6 + 0x10)
        int64_t rax_27 = sx.q(*(rax_26 + 0x38))
        
        if (rax_27.d s<= *(rcx_11 + 0x38) && *(*(rcx_11 + 0x30) + (rax_27 << 3)) == rax_26 + 0x30)
            sub_141f16960(rdi_6, &var_88, arg3)
            int32_t rax_30 = arg2[1].d - *(arg2 + 0x34)
            int32_t rdi_9 = var_80 - var_54 + rax_30
            
            if (rdi_9 s> rax_30)
                sub_1409d96c0(arg2, rdi_9)
                int32_t rdx_13
                
                if (rdi_9 u< 4)
                    rdx_13 = 1
                else
                    uint32_t rdi_10 = rdi_9 u>> 1
                    uint64_t rflags_3
                    int32_t temp0_5
                    temp0_5, rflags_3 = _bit_scan_reverse(rdi_10 + 8)
                    int32_t rcx_14
                    
                    if (rdi_10 == 0xfffffff8)
                        rcx_14 = 0x20
                    else
                        rcx_14 = 0x1f - temp0_5
                    
                    int32_t rcx_16 = rcx_14 << 0x1a s>> 0x1f
                    uint64_t rflags_4
                    char temp0_6
                    temp0_6, rflags_4 = _bit_scan_reverse(rdi_10 + 7)
                    char rdx_12
                    
                    if (rcx_16 == 0)
                        rdx_12 = 0x20
                    else
                        rdx_12 = 0x1f - temp0_6
                    
                    rdx_13 = 1 << ((not.d(rcx_16)).b & (0x20 - rdx_12))
                
                int32_t rax_35 = arg2[9].d
                
                if (rax_35 == 0 || rax_35 s< rdx_13)
                    arg2[9].d = rdx_13
                    sub_1408370c0(arg2)
            
            int64_t* var_130_1 = &var_78
            int32_t rcx_20 = 0
            int32_t var_138_1 = 0
            int32_t var_128_2 = 0xffffffff
            int32_t rdi_12 = 0
            int32_t var_134_2 = 1
            int64_t var_124_1 = 0
            int32_t var_60
            
            if (var_60 != 0)
                int64_t* r8_6 = &var_78
                
                if (var_68 != 0)
                    r8_6 = var_68
                
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(var_60 - 1)
                int32_t rdx_16 = *r8_6
                
                if (rdx_16 != 0)
                label_141dca946:
                    int32_t rax_43 = neg.d(rdx_16) & rdx_16
                    uint64_t rflags_5
                    int32_t temp0_7
                    temp0_7, rflags_5 = _bit_scan_reverse(rax_43)
                    int32_t var_134_3 = rax_43
                    int32_t rax_44
                    
                    if (rax_43 == 0)
                        rax_44 = 0x20
                    else
                        rax_44 = 0x1f - temp0_7
                    
                    int32_t rax_45 = rdi_12 - rax_44 + 0x1f
                    
                    if (rax_45 s> var_60)
                        rax_45 = var_60
                    
                    var_124_1.d = rax_45
                else
                    while (true)
                        int64_t rdx_17 = sx.q(rcx_20)
                        rdi_12 += 0x20
                        rcx_20 += 1
                        var_124_1:4.d = rdi_12
                        var_138_1 = rcx_20
                        
                        if (rdx_17.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                            var_124_1.d = var_60
                            break
                        
                        rdx_16 = *(r8_6 + (rdx_17 << 2) + 4)
                        int32_t var_128_3 = 0xffffffff
                        
                        if (rdx_16 != 0)
                            goto label_141dca946
            
            var_124_1.d = var_60
            int128_t var_b0_1 = var_138_1.o
            int128_t var_a0_1 = 0xffffffff
            int64_t zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
            int64_t* var_118
            var_118.o = (&var_88).o
            var_110 = var_b0_1
            var_100 = zmm2
            
            while (true)
                int64_t rcx_23 = sx.q(var_100:4.d)
                char rax_47
                
                if (rcx_23.d != ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d
                        || var_110:8.q != &var_78)
                    rax_47 = 0
                else
                    rax_47 = 1
                
                if (rax_47 == 0 || var_118 != &var_88)
                    rax_47 = 1
                else
                    rax_47 = 0
                
                if (rax_47 == 0)
                    break
                
                int64_t rcx_25 = *(*var_118 + rcx_23 * 0x10)
                int64_t var_e8 = rcx_25
                void var_f0
                
                if (rcx_25 != arg1)
                    sub_140812a70(arg2, &var_f0, &var_e8, nullptr)
                var_100.d &= not.d(var_110:4.d)
                sub_14059bdd0(&var_110)
    
    var_d0:8.d &= not.d(var_e0:0xc.d)
    sub_14059bdd0(&var_e0:8)
    r11_1 = arg1 + 0x1a0

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

var_80 = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
void* result = sub_14059a8e0(&var_78, 0)

if (var_68 != 0)
    result = sub_140a74f90(var_68)

uint64_t rcx_33 = var_88

if (rcx_33 != 0)
    result = sub_140a74f90(rcx_33)

__security_check_cookie(rax_1 ^ &var_158)
return result
