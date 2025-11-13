// 函数: sub_140869a20
// 地址: 0x140869a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
double zmm6[0x2] = arg3
sub_140b33630("Niagara")
int64_t r14 = 0
int32_t var_108
uint128_t var_e8

if (arg2 == 0)
    sub_1407eea90()
    char rax_3 = sub_140d7f150()
    int64_t rcx = *(arg1 + 0x10)
    *(arg1 + 0x520) = rax_3
    *(arg1 + 0x3ec) = 1
    int64_t* rax_4 = sub_1424373a0(rcx, &var_108)
    int32_t rcx_1 = rax_4[1].d
    
    if (rcx_1 s< 0 || rcx_1 s>= *(*rax_4 + 8))
        void* rdi_2 = *(arg1 + 0x10)
        void* rbx_2 = arg1 + 0x3f0
        int64_t rsi_2 = sx.q(*(rdi_2 + 0x110))
        
        if (rsi_2.d != 0)
            int32_t r9_1 = *(rbx_2 + 0x68)
            void* r12_1 = rbx_2 + 0x68
            int32_t rdx_6 = r9_1 + rsi_2.d
            
            if (rdx_6 s> *(rbx_2 + 0x6c))
                sub_140869520(rbx_2, rdx_6)
                r9_1 = *(rbx_2 + 0x68)
            
            void* rcx_10 = *(rbx_2 + 0x60)
            
            if (rcx_10 != 0)
                rbx_2 = rcx_10
            
            memcpy(rbx_2 + sx.q(r9_1) * 0xc, *(rdi_2 + 0x108), (rsi_2 * 0xc).d)
            *r12_1 += rsi_2.d
    else
        sub_1424373a0(*(arg1 + 0x10), &var_108)
        int32_t i_1
        int32_t i = i_1
        
        while (i s>= 0)
            int64_t* rdx_2 = var_108.q
            
            if (i s>= rdx_2[1].d)
                break
            
            int64_t* rax_7 = sub_140d3c6e0(*rdx_2 + (sx.q(i) << 3))
            
            if (rax_7 != 0 && (*(rax_7 + 0x294) & 2) != 0)
                int64_t rdx_3 = *rax_7
                
                if ((*(rdx_3 + 0x6a8))(rax_7, rdx_3) != 0)
                    void* rbx_1 = arg1 + 0x3f0
                    int64_t rsi_1 = sx.q(*(rbx_1 + 0x68))
                    int32_t rax_9 = (rsi_1 + 1).d
                    *(rbx_1 + 0x68) = rax_9
                    
                    if (rax_9 s> *(rbx_1 + 0x6c))
                        sub_14085a560(rbx_1, rsi_1.d)
                    
                    void* rax_10 = *(rbx_1 + 0x60)
                    
                    if (rax_10 != 0)
                        rbx_1 = rax_10
                    
                    void var_90
                    (*(*rax_7 + 0x6f8))(rax_7, rbx_1 + rsi_1 * 0xc, &var_90)
            
            i = i_1 + 1
            i_1 = i
    
    zmm6 = sub_14086a1d0(arg1)
    int32_t var_104_1 = 1
    int32_t r11_1 = *(arg1 + 0x190)
    void* var_100 = arg1 + 0x178
    int32_t rcx_14 = 0
    var_108 = 0
    int32_t r8_4 = 0
    int32_t var_f8_1 = 0xffffffff
    int64_t var_f4_1 = 0
    
    if (r11_1 != 0)
        void* rax_14 = *(arg1 + 0x188)
        void* r9_2 = arg1 + 0x178
        
        if (rax_14 != 0)
            r9_2 = rax_14
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_10 = *r9_2
        
        if (rdx_10 != 0)
        label_140869c5c:
            int32_t rax_21 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_21)
            int32_t var_104_2 = rax_21
            int32_t rax_22
            
            if (rax_21 == 0)
                rax_22 = 0x20
            else
                rax_22 = 0x1f - temp0_1
            
            var_f4_1.d = r8_4 - rax_22 + 0x1f
            
            if (r8_4 - rax_22 + 0x1f s> r11_1)
                var_f4_1.d = r11_1
        else
            while (true)
                int64_t rdx_11 = sx.q(rcx_14)
                r8_4 += 0x20
                rcx_14 += 1
                var_f4_1:4.d = r8_4
                var_108 = rcx_14
                
                if (rdx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r9_2 + (rdx_11 << 2) + 4)
                var_f8_1 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_140869c5c
            
            var_f4_1.d = r11_1
    
    int32_t rdx_12 = *(arg1 + 0x190)
    arg3 = var_f8_1.o
    double var_a0_1[0x2] = arg3
    int32_t r12_2 = 0xffffffff << (rdx_12.b & 0x1f)
    uint128_t var_b0_1 = var_108.o
    int32_t r8_7 = rdx_12 s>> 5
    int32_t r9_4 = rdx_12 & 0xffffffe0
    int64_t var_c8_1 = (_mm_unpackhi_pd(arg3, arg3[0])).q
    int32_t var_f8_2 = r12_2
    var_f4_1.d = rdx_12
    var_e8 = (arg1 + 0x168).o
    uint128_t var_d8_1 = var_b0_1
    
    if (rdx_12 != r11_1)
        void* rax_24 = *(arg1 + 0x188)
        void* r10_1 = arg1 + 0x178
        
        if (rax_24 != 0)
            r10_1 = rax_24
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r11_1 - 1)
        int32_t rdx_16 = *(r10_1 + (sx.q(r8_7) << 2)) & r12_2
        
        if (rdx_16 != 0)
        label_140869d33:
            int32_t rax_31 = neg.d(rdx_16) & rdx_16
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_31)
            int32_t rax_32
            
            if (rax_31 == 0)
                rax_32 = 0x20
            else
                rax_32 = 0x1f - temp0_3
            
            var_f4_1.d = r9_4 - rax_32 + 0x1f
            
            if (r9_4 - rax_32 + 0x1f s> r11_1)
                var_f4_1.d = r11_1
        else
            while (true)
                int64_t rcx_19 = sx.q(r8_7)
                r9_4 += 0x20
                r8_7 += 1
                
                if (rcx_19.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_16 = *(r10_1 + (rcx_19 << 2) + 4)
                var_f8_2 = 0xffffffff
                
                if (rdx_16 != 0)
                    goto label_140869d33
            
            var_f4_1.d = r11_1
    
    while (true)
        int64_t rax_34 = sx.q(var_d8_1:0xc.d)
        int64_t* rdx_17 = var_e8.q
        
        if (rax_34.d == (var_f8_2.q u>> 0x20).d && var_d8_1.q == arg1 + 0x178
                && rdx_17 == arg1 + 0x168)
            break
        
        sub_14083f190(_mm_bsrli_si128(*(*rdx_17 + rax_34 * 0x18), 8).q)
        var_d8_1:8.d &= not.d(var_e8:0xc.d)
        sub_14059bdd0(&var_e8:8)

sub_1407ccb10(arg1 + 0x468, arg2, zmm6[0])
int32_t rax_38

if (arg2 s>= 0)
    rax_38 = 6
    
    if (arg2 s< 6)
        rax_38 = arg2
else
    rax_38 = 0

void* var_60 = nullptr
void* r10_2 = nullptr
int32_t var_58 = 0
int32_t r8_8 = 0
int32_t var_54 = 4
int32_t var_104_3 = 1
void* rsi_5 = arg1 + 0x1b8 + sx.q(rax_38) * 0x50
int32_t var_f8_3 = 0xffffffff
int32_t rbx_6 = *(rsi_5 + 0x28)
void* var_100_1 = rsi_5 + 0x10
int32_t rcx_27 = 0
var_108 = 0
int64_t var_f4_2 = 0

if (rbx_6 != 0)
    void* rax_40 = *(rsi_5 + 0x20)
    void* r9_6 = rsi_5 + 0x10
    
    if (rax_40 != 0)
        r9_6 = rax_40
    
    int32_t temp0_5
    int32_t temp1_1
    temp0_5:temp1_1 = sx.q(rbx_6 - 1)
    int32_t rdx_21 = *r9_6
    
    if (rdx_21 != 0)
    label_140869e8b:
        int32_t rax_47 = neg.d(rdx_21) & rdx_21
        uint64_t rflags_3
        int32_t temp0_6
        temp0_6, rflags_3 = _bit_scan_reverse(rax_47)
        int32_t var_104_4 = rax_47
        int32_t rax_48
        
        if (rax_47 == 0)
            rax_48 = 0x20
        else
            rax_48 = 0x1f - temp0_6
        
        var_f4_2.d = r8_8 - rax_48 + 0x1f
        
        if (r8_8 - rax_48 + 0x1f s> rbx_6)
            var_f4_2.d = rbx_6
    else
        while (true)
            int64_t rdx_22 = sx.q(rcx_27)
            r8_8 += 0x20
            rcx_27 += 1
            var_f4_2:4.d = r8_8
            var_108 = rcx_27
            
            if (rdx_22.d s>= (temp1_1 + (temp0_5 & 0x1f)) s>> 5)
                break
            
            rdx_21 = *(r9_6 + (rdx_22 << 2) + 4)
            var_f8_3 = 0xffffffff
            
            if (rdx_21 != 0)
                goto label_140869e8b
        
        var_f4_2.d = rbx_6

int32_t rdx_23 = *(rsi_5 + 0x28)
double zmm2[0x2] = var_f8_3.o
double var_a0_2[0x2] = zmm2
int32_t r15_1 = 0xffffffff << (rdx_23.b & 0x1f)
uint128_t var_b0_2 = var_108.o
int32_t r8_11 = rdx_23 s>> 5
int32_t r9_8 = rdx_23 & 0xffffffe0
int64_t var_c8_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_f8_4 = r15_1
var_f4_2.d = rdx_23
var_e8 = rsi_5.o
uint128_t var_d8_2 = var_b0_2

if (rdx_23 != rbx_6)
    void* rax_50 = *(rsi_5 + 0x20)
    void* r11_2 = rsi_5 + 0x10
    
    if (rax_50 != 0)
        r11_2 = rax_50
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(rbx_6 - 1)
    int32_t rdx_27 = *(r11_2 + (sx.q(r8_11) << 2)) & r15_1
    
    if (rdx_27 != 0)
    label_140869f63:
        int32_t rax_57 = neg.d(rdx_27) & rdx_27
        uint64_t rflags_4
        int32_t temp0_8
        temp0_8, rflags_4 = _bit_scan_reverse(rax_57)
        int32_t r12_3
        
        if (rax_57 == 0)
            r12_3 = 0x20
        else
            r12_3 = 0x1f - temp0_8
        
        var_f4_2.d = r9_8 - r12_3 + 0x1f
        
        if (r9_8 - r12_3 + 0x1f s> rbx_6)
            var_f4_2.d = rbx_6
    else
        while (true)
            int64_t rcx_32 = sx.q(r8_11)
            r9_8 += 0x20
            r8_11 += 1
            
            if (rcx_32.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_27 = *(r11_2 + (rcx_32 << 2) + 4)
            var_f8_4 = 0xffffffff
            
            if (rdx_27 != 0)
                goto label_140869f63
        
        var_f4_2.d = rbx_6

while (true)
    int64_t rcx_34 = sx.q(var_d8_2:0xc.d)
    int64_t rax_59 = var_e8.q
    void var_80
    
    if (rcx_34.d == (var_f8_4.q u>> 0x20).d && var_d8_2.q == rsi_5 + 0x10 && rax_59 == rsi_5)
        void* rbx_10 = &var_80
        
        if (r10_2 != 0)
            rbx_10 = r10_2
        
        int64_t rdi_6 = sx.q(var_58) << 3
        uint64_t rdi_7 = rdi_6 u>> 3
        
        if (rbx_10 u> rbx_10 + rdi_6)
            rdi_7 = 0
        
        if (rdi_7 != 0)
            do
                sub_140868ad0(rsi_5, *rbx_10)
                r14 += 1
                rbx_10 += 8
            while (r14 != rdi_7)
            
            r10_2 = var_60
        
        if (r10_2 != 0)
            sub_140a74f90(r10_2)
        
        int64_t result = sub_140b37f60("Niagara")
        __security_check_cookie(rax_1 ^ &var_128)
        return result
    
    int64_t* rbx_9 = (rcx_34 << 5) + *rax_59
    void* rdi_4 = rbx_9[1]
    int64_t rax_60
    int64_t rdx_28
    rax_60, rdx_28 = sub_140d3c6e0(rdi_4 + 0x20)
    
    if (rax_60 == 0 || (*(rdi_4 + 0xd68) & 1) == 0 || *(rdi_4 + 0x38) == 0)
        int64_t rdi_5 = sx.q(var_58)
        int32_t rax_61 = (rdi_5 + 1).d
        var_58 = rax_61
        
        if (rax_61 s> var_54)
            sub_140869430(&var_80, rdi_5.d)
        
        void* rdx_30 = &var_80
        
        if (var_60 != 0)
            rdx_30 = var_60
        
        *(rdx_30 + (rdi_5 << 3)) = *rbx_9
    else
        sub_14085fa90(rdi_4, rdx_28, arg4)
    
    var_d8_2:8.d &= not.d(var_e8:0xc.d)
    sub_14059bdd0(&var_e8:8)
    r10_2 = var_60
