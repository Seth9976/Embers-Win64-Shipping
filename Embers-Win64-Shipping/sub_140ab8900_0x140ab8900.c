// 函数: sub_140ab8900
// 地址: 0x140ab8900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x818)
void* r12 = arg1 + 0x820

if (rbx s> *(r12 + 8) - *(r12 + 0x34))
    sub_1409d93a0(r12, rbx)
    int32_t rdx_3
    
    if (rbx u< 4)
        rdx_3 = 1
    else
        uint32_t rbx_1 = rbx u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_1 + 8)
        int32_t rcx_1
        
        if (rbx_1 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_1 + 7)
        char rdx_2
        
        if (rcx_3 == 0)
            rdx_2 = 0x20
        else
            rdx_2 = 0x1f - temp0_3
        
        rdx_3 = 1 << ((not.d(rcx_3)).b & (0x20 - rdx_2))
    
    int32_t rax_5 = *(r12 + 0x48)
    
    if (rax_5 == 0 || rax_5 s< rdx_3)
        *(r12 + 0x48) = rdx_3
        sub_1405c1850(r12)

char** rax_6 = *(arg1 + 0x810)
char** rdi = arg1 + 0x10

if (rax_6 != 0)
    rdi = rax_6

int32_t rbx_3 = 0
int64_t rsi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x818)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(arg1 + 0x818))])
    r14_1 = 0

if (r14_1 != 0)
    do
        sub_140aa2110(arg1, *rdi)
        rsi += 1
        rdi = &rdi[1]
    while (rsi != r14_1)

*(arg1 + 0x818) = 0

if (*(arg1 + 0x81c) != 0)
    sub_140ac0f90(arg1 + 0x10, 0)

int64_t* rax_9 = sub_140af5690(data_143ddb400, u"Core.Log", 0, 1, &data_143de5780)
int32_t var_e8
int128_t var_98
char var_5f
double zmm3_1[0x2]
double zmm4_1[0x2]

if (rax_9 != 0)
    int32_t r11_1 = rax_9[5].d
    void* r9_1 = &rax_9[2]
    var_e8 = 0
    int32_t rcx_10 = 0
    int32_t var_e4_1 = 1
    int32_t r8_2 = 0
    void* var_e0_1 = r9_1
    int32_t var_d8_1 = 0xffffffff
    int64_t var_d4_1 = 0
    
    if (r11_1 != 0)
        void* rax_10 = *(r9_1 + 0x10)
        
        if (rax_10 != 0)
            r9_1 = rax_10
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_7 = *r9_1
        
        if (rdx_7 != 0)
        label_140ab8adf:
            int32_t rax_17 = neg.d(rdx_7) & rdx_7
            uint64_t rflags_3
            int32_t temp0_4
            temp0_4, rflags_3 = _bit_scan_reverse(rax_17)
            int32_t var_e4_2 = rax_17
            int32_t rax_18
            
            if (rax_17 == 0)
                rax_18 = 0x20
            else
                rax_18 = 0x1f - temp0_4
            
            var_d4_1.d = r8_2 - rax_18 + 0x1f
            
            if (r8_2 - rax_18 + 0x1f s> r11_1)
                var_d4_1.d = r11_1
        else
            while (true)
                int64_t rdx_8 = sx.q(rcx_10)
                r8_2 += 0x20
                rcx_10 += 1
                var_d4_1:4.d = r8_2
                var_e8 = rcx_10
                
                if (rdx_8.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    var_d4_1.d = r11_1
                    break
                
                rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                var_d8_1 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_140ab8adf
    
    zmm4_1 = var_d8_1.o
    int64_t* var_30_1 = rax_9
    char var_60_1 = 0
    zmm3_1 = var_e8.o
    double rax_20 = zmm3_1[0]
    var_98 = rax_9.o
    double rcx_12 = zmm4_1[0]
    zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
    double var_40_1[0x2] = zmm4_1
    double var_78_1[0x2] = zmm4_1
    
    if ((rcx_12 u>> 0x20).d s< *(rax_20 i+ 0x18))
        int32_t i = zmm3_1[1]:4.d
        
        do
            void* const r14_2 = 0x18
            int64_t r9_3 = sx.q(i) * 6
            int64_t r8_4 = *var_98.q
            int32_t rax_23 = *(r8_4 + (r9_3 << 3) + 0x20)
            int32_t rcx_14 = rax_23 - 1
            
            if (rax_23 == 0)
                rcx_14 = 0
            
            if (rcx_14 s<= 0)
                r14_2 = 8
            
            int64_t* r14_3 = r14_2 + r8_4 + (r9_3 << 3)
            int64_t* rax_24 = sub_140b63b70(r8_4 + (r9_3 << 3), &var_e8)
            int64_t rcx_16 = *rax_24
            int32_t rdx_11 = rax_24[1].d
            int32_t rdx_12 = neg.d(rdx_11)
            *rax_24 = 0
            int32_t r8_5 = rax_24[1].d
            int64_t var_c8 = rcx_16
            int32_t rcx_17 = *(rax_24 + 0xc)
            int32_t rdx_15 = sbb.d(rdx_12, rdx_12, rdx_11 != 0) + 2 + r8_5
            rax_24[1] = 0
            
            if (rdx_15 s> rcx_17)
                sub_1405947f0(&var_c8, rdx_15)
            
            int32_t r9_4 = sub_140a20ba0(&var_c8, &data_142d404d4, 1)
            int64_t rsi_1 = var_c8
            var_c8 = 0
            int32_t var_c0_1
            var_c0_1.q = 0
            int64_t var_a8
            int32_t r8_6
            
            if (r8_5 s> 1)
                int32_t rax_25 = r14_3[1].d
                int32_t rdi_3 = rax_25 - 1
                
                if (rax_25 == 0)
                    rdi_3 = 0
                
                int32_t rax_26
                
                if (r8_5 == 0)
                    rax_26 = r8_5 + 1
                
                if (r8_5 != 0 || rdi_3 == 0)
                    rax_26 = 0
                
                int64_t var_b8 = rsi_1
                int32_t rdx_19 = rax_26 + r8_5 + rdi_3
                rsi_1 = 0
                
                if (rdx_19 s> rcx_17)
                    sub_1405947f0(&var_b8, rdx_19)
                
                r8_6, r9_4 = sub_140a20ba0(&var_b8, *r14_3, rdi_3)
                var_a8 = var_b8
                int32_t var_a0_2 = r8_5
                int32_t var_9c_2 = rcx_17
                int32_t var_b0_1
                var_b0_1.q = 0
                var_b8 = 0
            else
                int32_t rdi_2 = r14_3[1].d
                int64_t r14_4 = *r14_3
                var_a8 = 0
                int32_t var_a0_1 = rdi_2
                
                if (rdi_2 != 0)
                    sub_1405a4c70(&var_a8, rdi_2, 0)
                    r8_6, r9_4 = memcpy(var_a8, r14_4, rdi_2 * 2)
                else
                    int32_t var_9c_1 = 0
            
            r8_6.b = 1
            sub_140ab7510(arg1, &var_a8, r8_6.b, r9_4)
            int64_t rcx_26 = var_a8
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            int64_t rcx_28 = var_e8.q
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            zmm3_1[1].d &= not.d(var_98:0xc.d)
            sub_14059bdd0(&var_98:8)
            i = zmm3_1[1]:4.d
        while (i s< *(zmm3_1[0] i+ 0x18))
        
        r12 = arg1 + 0x820
        
        if (var_60_1 != 0 && var_5f != 0)
            sub_140a6d3f0(rax_9, rax_9[1].d - *(rax_9 + 0x34), 1)

int32_t r10 = *(r12 + 0x28)
void* r8_11 = r12 + 0x10
var_e8 = 0
int32_t rcx_31 = 0
int32_t var_e4_3 = 1
void* var_e0_2 = r8_11
int32_t var_d8_2 = 0xffffffff
int64_t var_d4_2 = 0

if (r10 != 0)
    void* rax_33 = *(r8_11 + 0x10)
    
    if (rax_33 != 0)
        r8_11 = rax_33
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r10 - 1)
    int32_t rdx_26 = *r8_11
    
    if (rdx_26 != 0)
    label_140ab8dd7:
        int32_t rax_40 = neg.d(rdx_26) & rdx_26
        uint64_t rflags_4
        int32_t temp0_6
        temp0_6, rflags_4 = _bit_scan_reverse(rax_40)
        int32_t var_e4_4 = rax_40
        int32_t r13_1
        
        if (rax_40 == 0)
            r13_1 = 0x20
        else
            r13_1 = 0x1f - temp0_6
        
        var_d4_2.d = rcx_31 - r13_1 + 0x1f
        
        if (rcx_31 - r13_1 + 0x1f s> r10)
            var_d4_2.d = r10
    else
        while (true)
            int64_t rdx_27 = sx.q(rbx_3)
            rcx_31 += 0x20
            rbx_3 += 1
            var_d4_2:4.d = rcx_31
            var_e8 = rbx_3
            
            if (rdx_27.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_26 = *(r8_11 + (rdx_27 << 2) + 4)
            var_d8_2 = 0xffffffff
            
            if (rdx_26 != 0)
                goto label_140ab8dd7
        
        var_d4_2.d = r10

zmm4_1 = var_d8_2.o
void* var_30_2 = r12
char var_60_2 = 0
zmm3_1 = var_e8.o
double result = zmm3_1[0]
var_98 = r12.o
double rcx_33 = zmm4_1[0]
zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
double var_78_2[0x2] = zmm4_1

if ((rcx_33 u>> 0x20).d s< *(result i+ 0x18))
    int32_t i_1 = zmm3_1[1]:4.d
    
    do
        int64_t rdx_29 = sx.q(i_1) * 3
        int64_t rcx_35 = *var_98.q
        sub_140ac5120(arg1, *(rcx_35 + (rdx_29 << 3) + 8), *(rcx_35 + (rdx_29 << 3)))
        zmm3_1[1].d &= not.d(var_98:0xc.d)
        sub_14059bdd0(&var_98:8)
        result = zmm3_1[0]
        i_1 = zmm3_1[1]:4.d
    while (i_1 s< *(result i+ 0x18))
    
    if (var_60_2 != 0 && var_5f != 0)
        result = sub_1405b6730(r12, *(r12 + 8) - *(r12 + 0x34), 1)

*(arg1 + 0x910) = 1
return result
