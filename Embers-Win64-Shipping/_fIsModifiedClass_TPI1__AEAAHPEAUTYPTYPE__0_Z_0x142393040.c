// 函数: ?fIsModifiedClass@TPI1@@AEAAHPEAUTYPTYPE@@0@Z
// 地址: 0x142393040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t var_88 = 0
int32_t* r9 = arg1 + 0x20
int32_t var_80 = 0
int32_t rcx = 0
int32_t var_5c = 0x80
int64_t* rsi = nullptr
int64_t var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t r13 = 0
int32_t r14 = 0
int32_t var_58 = 0xffffffff
int32_t r8 = 0
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t r11 = r9[6]
int64_t* var_e8 = nullptr
int32_t var_f8 = 0
int32_t var_dc = 0
int32_t var_138 = 0
int32_t var_134 = 1
int32_t* var_130 = r9
int32_t var_128 = 0xffffffff
int64_t var_124 = 0

if (r11 != 0)
    int32_t* rax_2 = *(r9 + 0x10)
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_14239314b:
        int32_t rax_9 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_134_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_124.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_124.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_124:4.d = r8
            var_138 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9[rdx_4 + 1]
            var_128 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14239314b
        
        var_124.d = r11

double zmm4[0x2] = var_128.o
int64_t* var_a8 = arg1 + 0x10
int16_t var_100 = 0
double zmm3[0x2] = var_138.o
double rax_12 = zmm3[0]
var_128.o = zmm3
var_138.o = (arg1 + 0x10).o
double rcx_2 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_b8[0x2] = zmm4
int32_t i_4
int64_t* var_f0

if ((rcx_2 u>> 0x20).d s< *(rax_12 i+ 0x18))
    int32_t i = i_4
    
    do
        int64_t* rdx_10 = var_138.q
        int64_t rcx_5 = sx.q(i) * 0x28
        void* rdi_1 = *(rcx_5 + *rdx_10 + 0x18)
        int32_t rax_15 = *(rdi_1 + 0x28)
        int32_t rsi_1 = rax_15 - 1
        
        if (rsi_1 s>= 0)
            int64_t r14_2 = sx.q(rsi_1) << 4
            int64_t r15_1 = r14_2
            int32_t temp5_1
            
            do
                int64_t* rcx_6 = *(rdi_1 + 0x20)
                int64_t* rbx_1 = *(rcx_6 + r14_2 + 8)
                
                if (rbx_1 == 0)
                    goto label_14239325d
                
                int32_t rax_16 = rbx_1[1].d
                
                if (rax_16 == 0)
                    rbx_1 = nullptr
                label_14239325d:
                    int64_t* rcx_7 = *(r15_1 + *(rdi_1 + 0x20) + 8)
                    
                    if (rcx_7 != 0)
                        int32_t temp4_1 = *(rcx_7 + 0xc)
                        *(rcx_7 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rcx_7 + 8))(rcx_7, 1)
                    
                    int32_t rdx_9 = *(rdi_1 + 0x28)
                    int32_t rcx_10 = rdx_9 - rsi_1 - 1
                    
                    if (rcx_10 s>= 1)
                        rcx_10 = 1
                    
                    if (rcx_10 != 0)
                        int64_t rax_20 = *(rdi_1 + 0x20)
                        memcpy(rax_20 + r15_1, (sx.q(rdx_9 - rcx_10) << 4) + rax_20, rcx_10 << 4)
                        rdx_9 = *(rdi_1 + 0x28)
                    
                    *(rdi_1 + 0x28) = rdx_9 - 1
                else
                    rbx_1[1].d = rax_16 + 1
                    
                    if (rbx_1 == 0 || *(rcx_6 + r14_2) == 0)
                        goto label_14239325d
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp7_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                r15_1 -= 0x10
                r14_2 -= 0x10
                temp5_1 = rsi_1
                rsi_1 -= 1
            while (temp5_1 - 1 s>= 0)
            rax_15 = *(rdi_1 + 0x28)
            i = i_4
            r13 = var_f8
            rdx_10 = var_138.q
            r14 = var_dc
        
        if (rax_15 != 0)
            rsi = var_e8
        else
            sub_141e4c4c0(&var_88, &var_f0, *rdx_10 + rcx_5, nullptr)
            int64_t rbx_2 = sx.q(r13)
            r13 = (rbx_2 + 1).d
            var_f8 = r13
            
            if (r13 s> r14)
                sub_1405a4d70(&var_e8)
                r14 = var_dc
                var_f8 = r13
            
            rsi = var_e8
            int64_t* rcx_16 = zmm4[1]
            rsi[rbx_2] = rdi_1
            sub_141e84750(rcx_16, i)
            var_100.b = 1
        
        var_124:4.d &= not.d(var_130:4.d)
        sub_14059bdd0(&var_130)
        i = i_4
    while (i s< *(var_128.q + 0x18))
    
    if (var_100.b != 0 && var_100:1.b != 0)
        sub_142387060(arg1 + 0x10, *(arg1 + 0x18) - *(arg1 + 0x44), 1)

int64_t* rdi_2 = rsi
int64_t r13_1 = 0
var_f0 = rsi
void* rcx_19 = &rsi[sx.q(r13)]
uint64_t r15_5 = (rcx_19 - rsi + 7) u>> 3

if (rsi u> rcx_19)
    r15_5 = 0

uint64_t var_d8_2 = r15_5

if (r15_5 != 0)
    do
        void* rsi_2 = *rdi_2
        
        if (rsi_2 != 0)
            int32_t i_1 = 0
            int64_t* r12_1 = rsi_2 + 0x10
            
            if (*(rsi_2 + 0x18) s> 0)
                int64_t rdx_16 = 0
                
                do
                    rdx_16 += 0x10
                    i_1 += 1
                    void* rcx_20 = *(*r12_1 + rdx_16 - 0x10)
                    *(rcx_20 + 0x5c) -= 1
                while (i_1 s< *(rsi_2 + 0x18))
            
            sub_14095cd40(r12_1, 0)
            int32_t i_2 = 0
            
            if (*(rsi_2 + 0x28) s> 0)
                int64_t r15_6 = 0
                
                do
                    int64_t* rdi_3 = *(rsi_2 + 0x20)
                    int32_t* rbx_3 = *(rdi_3 + r15_6 + 8)
                    
                    if (rbx_3 != 0)
                        int32_t rax_29 = rbx_3[2]
                        
                        if (rax_29 != 0)
                            rbx_3[2] = rax_29 + 1
                            
                            if (rbx_3 != 0)
                                void* rdi_4 = *(rdi_3 + r15_6)
                                
                                if (rdi_4 != 0 && *(rdi_4 + 0x12) == 0)
                                    *(rdi_4 + 0x12) = 1
                                    *(rdi_4 + 0x98) = 0
                                    
                                    if (*(rdi_4 + 0x11) == 0)
                                        rbx_3[2] += 1
                                        int64_t var_98 = 0
                                        int32_t var_90_1 = 0
                                        var_138.q = rdi_4
                                        var_130 = rbx_3
                                        sub_14238bbe0(rdi_4 + 0x28, &var_138, &var_98)
                                        sub_14239b010(rdi_4)
                                    
                                    sub_142392400(rdi_4)
                                
                                int32_t temp8_1 = rbx_3[2]
                                rbx_3[2] -= 1
                                
                                if (temp8_1 == 1)
                                    (**rbx_3)(rbx_3)
                                    int32_t temp9_1 = rbx_3[3]
                                    rbx_3[3] -= 1
                                    
                                    if (temp9_1 == 1)
                                        (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    i_2 += 1
                    r15_6 += 0x10
                while (i_2 s< *(rsi_2 + 0x28))
                
                rdi_2 = var_f0
                r12_1 = rsi_2 + 0x10
                r15_5 = var_d8_2
            
            sub_14238b300(rsi_2 + 0x20, 0)
            sub_140d94cb0(rsi_2 + 0x20)
            sub_140596d80(r12_1)
            j_sub_140a74f90(rsi_2)
        
        rdi_2 = &rdi_2[1]
        r13_1 += 1
        var_f0 = rdi_2
    while (r13_1 != r15_5)
    
    rsi = var_e8

if (var_80 - var_54 s> 0)
    int32_t rcx_31 = 0
    var_138 = 0
    int32_t r10_1 = *(arg1 + 0x88)
    int32_t* r9_1 = arg1 + 0x70
    int32_t var_134_2 = 1
    int32_t r8_8 = 0
    var_130 = r9_1
    int32_t var_128_1 = 0xffffffff
    int64_t var_124_1 = 0
    
    if (r10_1 != 0)
        int32_t* rax_35 = *(r9_1 + 0x10)
        
        if (rax_35 != 0)
            r9_1 = rax_35
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_21 = *r9_1
        
        if (rdx_21 != 0)
        label_1423935fd:
            int32_t rax_42 = neg.d(rdx_21) & rdx_21
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_42)
            int32_t var_134_3 = rax_42
            int32_t rax_43
            
            if (rax_42 == 0)
                rax_43 = 0x20
            else
                rax_43 = 0x1f - temp0_4
            
            var_124_1.d = r8_8 - rax_43 + 0x1f
            
            if (r8_8 - rax_43 + 0x1f s> r10_1)
                var_124_1.d = r10_1
        else
            while (true)
                int64_t rdx_22 = sx.q(rcx_31)
                r8_8 += 0x20
                rcx_31 += 1
                var_124_1:4.d = r8_8
                var_138 = rcx_31
                
                if (rdx_22.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_21 = r9_1[rdx_22 + 1]
                var_128_1 = 0xffffffff
                
                if (rdx_21 != 0)
                    goto label_1423935fd
            
            var_124_1.d = r10_1
    
    zmm4 = var_128_1.o
    void* var_a8_1 = arg1 + 0x60
    int16_t var_100_1 = 0
    zmm3 = var_138.o
    double rax_45 = zmm3[0]
    var_128_1.o = zmm3
    var_138.o = (arg1 + 0x60).o
    double rcx_33 = zmm4[0]
    zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
    
    if ((rcx_33 u>> 0x20).d s< *(rax_45 i+ 0x18))
        int32_t i_3 = i_4
        
        do
            if (*sub_14238ca80(&var_88, &var_f0, *var_138.q + 0x18 + (sx.q(i_3) << 6))
                    != 0xffffffff)
                sub_1423951a0(zmm4[1], i_3)
                var_100_1.b = 1
            
            var_124_1:4.d &= not.d(var_130:4.d)
            sub_14059bdd0(&var_130)
            i_3 = i_4
        while (i_3 s< *(var_128_1.q + 0x18))
        
        if (var_100_1.b != 0 && var_100_1:1.b != 0)
            sub_142387110(arg1 + 0x60, *(arg1 + 0x68) - *(arg1 + 0x94), 1)

if (rsi != 0)
    sub_140a74f90(rsi)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

void* result = sub_140597460(&var_88)
__security_check_cookie(rax_1 ^ &var_158)
return result
