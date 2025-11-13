// 函数: sub_140f18650
// 地址: 0x140f18650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*arg2)
int64_t* r12 = arg1
int64_t r13 = sx.q(arg2[1])
int32_t arg_20 = r13.d
int32_t var_1a0 = rax.d

if (rax.d s< 0 || rax.d s>= arg1[4].d)
    rax.b = 0
    return rax

int64_t rcx = rax * 0x70
int64_t* r15_1 = r12[3] + rcx
int64_t* rax_1 = j_sub_140a82f30(0x10)
int16_t* const rsi = &data_142d40450
uint64_t* rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    int64_t* rdi_1 = *r15_1
    int16_t* rdi_2
    
    if (rdi_1[1].d == 0)
        rdi_2 = &data_142d40450
    else
        rdi_2 = *rdi_1
    
    *rax_1 = 0
    rax_1[1] = 0
    
    if (rdi_2 != 0 && *rdi_2 != 0 && r13.d s> 0)
        int32_t rax_2 = (r13 + 1).d
        int32_t rdx = 0
        
        if (rax_2 s> 0)
            sub_1405947f0(rbx, rax_2)
            rdx = rbx[1].d
        
        int32_t rax_4 = (r13 + 1).d + rdx
        rbx[1].d = rax_4
        
        if (rax_4 s> *(rbx + 0xc))
            sub_140594770(rbx)
        
        UnDecorator::getReferenceType(*rbx, rdi_2, r13.d * 2)
        *(*rbx + (sx.q(rbx[1].d) << 1) - 2) = 0

void*** rax_6 = j_sub_140a82f30(0x18)

if (rax_6 == 0)
    rax_6 = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rax_6 = &data_142ee2130
    rax_6[2] = rbx

uint64_t* var_1c0 = rbx
void* var_168
sub_140ee1d80(&var_168, &var_1c0)

if (rax_6 != 0)
    rax_6[1].d -= 1
    
    if (rax_6[1].d == 1)
        (**rax_6)(rax_6)
        int32_t temp1_1 = *(rax_6 + 0xc)
        *(rax_6 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rax_6)[1](rax_6, 1)

uint64_t* rax_9 = j_sub_140a82f30(0x10)
uint64_t* rbx_2 = rax_9

if (rax_9 == 0)
    rbx_2 = nullptr
else
    int16_t** rax_10 = *r15_1
    int32_t rcx_8 = rax_10[1].d
    
    if (rcx_8 != 0)
        rsi = *rax_10
    
    *rbx_2 = 0
    int32_t rdi_3 = rcx_8 - 1
    rbx_2[1] = 0
    
    if (rcx_8 == 0)
        rdi_3 = 0
    
    void* rsi_1 = &rsi[r13]
    int32_t rdi_4 = rdi_3 - r13.d
    
    if (rsi_1 != 0 && *rsi_1 != 0 && rdi_4 s> 0)
        int32_t rdx_5 = 0
        
        if (rdi_4 + 1 s> 0)
            sub_1405947f0(rbx_2, rdi_4 + 1)
            rdx_5 = rbx_2[1].d
        
        int32_t rax_13 = rdx_5 + 1 + rdi_4
        rbx_2[1].d = rax_13
        
        if (rax_13 s> *(rbx_2 + 0xc))
            sub_140594770(rbx_2)
        
        UnDecorator::getReferenceType(*rbx_2, rsi_1, rdi_4 * 2)
        *(*rbx_2 + (sx.q(rbx_2[1].d) << 1) - 2) = 0

int64_t* rax_15 = j_sub_140a82f30(0x18)

if (rax_15 == 0)
    rax_15 = nullptr
else
    rax_15[1].d = 1
    *(rax_15 + 0xc) = 1
    *rax_15 = &data_142ee2130
    rax_15[2] = rbx_2

var_1c0 = rbx_2
void var_e8
sub_140ee1d80(&var_e8, &var_1c0)

if (rax_15 != 0)
    rax_15[1].d -= 1
    
    if (rax_15[1].d == 1)
        (**rax_15)(rax_15)
        int32_t temp3_1 = *(rax_15 + 0xc)
        *(rax_15 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rax_15 + 8))(rax_15, 1)

int64_t* rdi_5 = r15_1
int32_t i = 0
char arg_10 = 1
int32_t i_1 = 0
int64_t var_140
int64_t var_c0

if (rdi_5[6].d s> 0)
    int64_t r12_1 = 0
    int64_t var_1b0_1 = 0
    
    do
        int64_t* rbx_6 = r12_1 * 0x30 + rdi_5[5]
        int64_t* rsi_2 = *rbx_6
        int64_t* rbx_7 = rbx_6[1]
        
        if (rbx_7 != 0)
            rbx_7[1].d += 1
        
        int64_t var_1c8
        (*(*rsi_2 + 8))(rsi_2, &var_1c8)
        int64_t rax_19 = var_1c8
        int32_t var_138
        int32_t var_134
        int32_t var_b8
        int32_t var_b4
        
        if (r13.d s< rax_19.d || r13.d s>= var_1c8:4.d)
            if (i == rdi_5[6].d - 1)
                if (arg_10 == 0)
                    goto label_140f19058
                
                goto label_140f1897b
            
            int64_t** rcx_89
            
            if (arg_10 == 0)
            label_140f19058:
                i_1.q = rax_19
                int32_t rdx_32 = *(var_168 + 8)
                int32_t r8_16 = 1 - rdx_32
                
                if (rdx_32 == 0)
                    r8_16 = 0
                
                int32_t i_2 = rax_19.d + r8_16
                
                if (i_2 s<= 0)
                    i_2 = 0
                
                i_1 = i_2
                int32_t rcx_94 = arg3 + r8_16
                
                if (rcx_94 s<= 0)
                    rcx_94 = 0
                
                arg3 = rcx_94
                (*(*rsi_2 + 0x60))(rsi_2, &var_e8, &i_1)
                
                if (rbx_7 != 0)
                    rbx_7[1].d += 1
                
                int64_t rdi_10 = sx.q(var_b8)
                int32_t rax_87 = (rdi_10 + 1).d
                var_b8 = rax_87
                
                if (rax_87 s> var_b4)
                    sub_1405c4f50(&var_c0)
                
                rcx_89 = rdi_10 * 0x30 + var_c0
                goto label_140f18fef
            
            (*(*rsi_2 + 0x60))(rsi_2, &var_168, &var_1c8)
            
            if (rbx_7 != 0)
                rbx_7[1].d += 1
            
            int64_t rdi_9 = sx.q(var_138)
            int32_t rax_83 = (rdi_9 + 1).d
            var_138 = rax_83
            
            if (rax_83 s> var_134)
                sub_1405c4f50(&var_140)
            
            rcx_89 = rdi_9 * 0x30 + var_140
        label_140f18fef:
            *rcx_89 = rsi_2
            rcx_89[1] = rbx_7
            
            if (rbx_7 != 0)
                rbx_7[1].d += 1
            
            __builtin_memset(&rcx_89[2], 0, 0x20)
            
            if (rbx_7 != 0)
                rbx_7[1].d -= 1
                
                if (rbx_7[1].d == 1)
                    (**rbx_7)(rbx_7)
                    int32_t temp16_1 = *(rbx_7 + 0xc)
                    *(rbx_7 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
                
                goto label_140f18daa
        else
        label_140f1897b:
            arg_10 = 0
            int64_t* rsi_3
            int64_t* rdi_6
            int64_t* r12_2
            int64_t* r13_1
            
            if (((*(*rsi_2 + 0x88))(rsi_2) & 1) == 0)
                int32_t rax_34 = var_1c8.d
                
                if (r13.d != rax_34)
                    if (rbx_7 != 0)
                        rbx_7[1].d += 1
                        rax_34 = var_1c8.d
                    
                    int64_t* r12_3 = rbx_7
                    r13_1 = rsi_2
                    
                    if (rbx_7 == 0)
                        r12_3 = nullptr
                    
                    int32_t rdx_19 = *(var_168 + 8)
                    int32_t var_17c = rax_34
                    int32_t rax_44 = rdx_19 - 1
                    
                    if (rdx_19 == 0)
                        rax_44 = 0
                    
                    int32_t var_178_1 = rax_44
                    (*(*rsi_2 + 0x60))(rsi_2, &var_168, &var_17c)
                    int32_t rcx_36 = *(var_168 + 8)
                    var_1c0.d = 0
                    int32_t rdx_21 = rcx_36 - 1
                    
                    if (rcx_36 == 0)
                        rdx_21 = 0
                    
                    var_1c0:4.d = var_1c8:4.d - rdx_21
                    void var_58
                    int64_t* rax_50 = (*(*arg1 + 0x30))(arg1, &var_58, &var_e8, &var_1c0)
                    int64_t* rcx_38 = *rax_50
                    int64_t* rcx_39 = rax_50[1]
                    
                    if (rcx_39 != 0)
                        rcx_39[1].d += 1
                    
                    rsi_3 = nullptr
                    rdi_6 = r12_3
                    
                    if (rcx_39 != 0)
                        rsi_3 = rcx_39
                    
                    int64_t* var_50
                    
                    if (var_50 != 0)
                        var_50[1].d -= 1
                        
                        if (var_50[1].d == 1)
                            (**var_50)(var_50)
                            int32_t temp21_1 = *(var_50 + 0xc)
                            *(var_50 + 0xc) -= 1
                            
                            if (temp21_1 == 1)
                                (*(*var_50 + 8))(var_50, 1)
                    
                    r12_2 = rcx_38
                else
                    int32_t rdx_15 = *(var_168 + 8)
                    int32_t var_18c = rax_34
                    int32_t rax_35 = rdx_15 - 1
                    
                    if (rdx_15 == 0)
                        rax_35 = 0
                    
                    int32_t var_188_1 = rax_35
                    void var_68
                    int64_t** rax_37 = (*(*arg1 + 0x30))(arg1, &var_68, &var_168, &var_18c)
                    int64_t* rcx_29 = rax_37[1]
                    r13_1 = *rax_37
                    
                    if (rcx_29 != 0)
                        rcx_29[1].d += 1
                    
                    rdi_6 = nullptr
                    
                    if (rcx_29 != 0)
                        rdi_6 = rcx_29
                    
                    int64_t* var_60
                    
                    if (var_60 != 0)
                        var_60[1].d -= 1
                        
                        if (var_60[1].d == 1)
                            (**var_60)(var_60)
                            int32_t temp17_1 = *(var_60 + 0xc)
                            *(var_60 + 0xc) -= 1
                            
                            if (temp17_1 == 1)
                                (*(*var_60 + 8))(var_60, 1)
                    
                    if (rbx_7 != 0)
                        rbx_7[1].d += 1
                    
                    r12_2 = rsi_2
                    int32_t rcx_32 = *(var_168 + 8)
                    int32_t rax_41 = var_1c8:4.d
                    int32_t var_184 = 0
                    int32_t rdx_17 = rcx_32 - 1
                    
                    if (rcx_32 == 0)
                        rdx_17 = 0
                    
                    int32_t var_180_1 = rax_41 - rdx_17
                    (*(*rsi_2 + 0x60))(rsi_2, &var_e8, &var_184)
                    rsi_3 = rbx_7
                    
                    if (rbx_7 == 0)
                        rsi_3 = nullptr
            else
                void var_78
                int64_t* rax_23 = (*(*rsi_2 + 0x68))(rsi_2, &var_78)
                int64_t* rcx_21 = rax_23[1]
                r13_1 = *rax_23
                
                if (rcx_21 != 0)
                    rcx_21[1].d += 1
                
                rdi_6 = nullptr
                
                if (rcx_21 != 0)
                    rdi_6 = rcx_21
                
                int64_t* var_70
                
                if (var_70 != 0)
                    var_70[1].d -= 1
                    
                    if (var_70[1].d == 1)
                        (**var_70)(var_70)
                        int32_t temp13_1 = *(var_70 + 0xc)
                        *(var_70 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*var_70 + 8))(var_70, 1)
                
                int32_t rcx_24 = *(var_168 + 8)
                int32_t var_19c = var_1c8.d
                int32_t rax_28 = rcx_24 - 1
                
                if (rcx_24 == 0)
                    rax_28 = 0
                
                int32_t var_198_1 = rax_28
                (*(*r13_1 + 0x60))(r13_1, &var_168, &var_19c)
                
                if (rbx_7 != 0)
                    rbx_7[1].d += 1
                
                r12_2 = rsi_2
                int32_t rdx_13 = *(var_168 + 8)
                int32_t rax_31 = var_1c8:4.d
                int32_t var_194 = 0
                int32_t r8_8 = rdx_13 - 1
                
                if (rdx_13 == 0)
                    r8_8 = 0
                
                int32_t var_190_1 = rax_31 - r8_8
                (*(*rsi_2 + 0x60))(rsi_2, &var_e8, &var_194)
                rsi_3 = rbx_7
                
                if (rbx_7 == 0)
                    rsi_3 = nullptr
            
            if (rdi_6 != 0)
                rdi_6[1].d += 2
            
            int64_t r15_5 = sx.q(var_138)
            int32_t rax_53 = (r15_5 + 1).d
            var_138 = rax_53
            
            if (rax_53 s> var_134)
                sub_1405c4f50(&var_140)
            
            int64_t** rcx_45 = r15_5 * 0x30 + var_140
            *rcx_45 = r13_1
            rcx_45[1] = rdi_6
            
            if (rdi_6 != 0)
                rdi_6[1].d += 1
            
            __builtin_memset(&rcx_45[2], 0, 0x20)
            
            if (rdi_6 != 0)
                rdi_6[1].d -= 1
                
                if (rdi_6[1].d == 1)
                    (**rdi_6)(rdi_6)
                    int32_t temp24_1 = *(rdi_6 + 0xc)
                    *(rdi_6 + 0xc) -= 1
                    
                    if (temp24_1 == 1)
                        (*(*rdi_6 + 8))(rdi_6, 1)
                
                rdi_6[1].d -= 1
                
                if (rdi_6[1].d == 1)
                    (**rdi_6)(rdi_6)
                    int32_t temp25_1 = *(rdi_6 + 0xc)
                    *(rdi_6 + 0xc) -= 1
                    
                    if (temp25_1 == 1)
                        (*(*rdi_6 + 8))(rdi_6, 1)
            
            if (rsi_3 != 0)
                rsi_3[1].d += 2
            
            int64_t r15_6 = sx.q(var_b8)
            int32_t rax_58 = (r15_6 + 1).d
            var_b8 = rax_58
            
            if (rax_58 s> var_b4)
                sub_1405c4f50(&var_c0)
            
            int64_t** rcx_53 = r15_6 * 0x30 + var_c0
            *rcx_53 = r12_2
            rcx_53[1] = rsi_3
            
            if (rsi_3 != 0)
                rsi_3[1].d += 1
            
            __builtin_memset(&rcx_53[2], 0, 0x20)
            
            if (rsi_3 != 0)
                rsi_3[1].d -= 1
                
                if (rsi_3[1].d == 1)
                    (**rsi_3)(rsi_3)
                    int32_t temp29_1 = *(rsi_3 + 0xc)
                    *(rsi_3 + 0xc) -= 1
                    
                    if (temp29_1 == 1)
                        (*(*rsi_3 + 8))(rsi_3, 1)
                
                rsi_3[1].d -= 1
                
                if (rsi_3[1].d == 1)
                    (**rsi_3)(rsi_3)
                    int32_t temp32_1 = *(rsi_3 + 0xc)
                    *(rsi_3 + 0xc) -= 1
                    
                    if (temp32_1 == 1)
                        (*(*rsi_3 + 8))(rsi_3, 1)
                
                rsi_3[1].d -= 1
                
                if (rsi_3[1].d == 1)
                    (**rsi_3)(rsi_3)
                    int32_t temp33_1 = *(rsi_3 + 0xc)
                    *(rsi_3 + 0xc) -= 1
                    
                    if (temp33_1 == 1)
                        (*(*rsi_3 + 8))(rsi_3, 1)
            
            if (rdi_6 != 0)
                rdi_6[1].d -= 1
                
                if (rdi_6[1].d == 1)
                    (**rdi_6)(rdi_6)
                    int32_t temp30_1 = *(rdi_6 + 0xc)
                    *(rdi_6 + 0xc) -= 1
                    
                    if (temp30_1 == 1)
                        (*(*rdi_6 + 8))(rdi_6, 1)
            
            r13 = zx.q(arg_20)
            r12_1 = var_1b0_1
            i = i_1
        label_140f18daa:
            
            if (rbx_7 != 0)
                rbx_7[1].d -= 1
                
                if (rbx_7[1].d == 1)
                    (**rbx_7)(rbx_7)
                    int32_t temp19_1 = *(rbx_7 + 0xc)
                    *(rbx_7 + 0xc) -= 1
                    
                    if (temp19_1 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
        rdi_5 = r15_1
        i += 1
        r12_1 += 1
        i_1 = i
        var_1b0_1 = r12_1
    while (i s< rdi_5[6].d)
    
    r12 = arg1

sub_140ee4a80(rcx + r12[3], &var_168)
int32_t rdi_7 = r12[4].d
r12[4].d = rdi_7 + 1

if (rdi_7 + 1 s> *(r12 + 0x24))
    sub_1405fdd60(&r12[3])

void* rbx_8 = sx.q(var_1a0 + 1) * 0x70
void* rdx_28 = r12[3] + rbx_8
memmove(rdx_28 + 0x70, rdx_28, (rdi_7 - (var_1a0 + 1)) * 0x70)
sub_140ee1bd0(rbx_8 + r12[3], &var_e8)
r12[0x11].b |= 1
void var_90
sub_140d948f0(&var_90)
void var_a0
sub_140d948f0(&var_a0)
int64_t var_b0

if (var_b0 != 0)
    sub_140a74f90(var_b0)

sub_140ee3c10(&var_c0)
int64_t* var_d0

if (var_d0 != 0)
    var_d0[1].d -= 1
    
    if (var_d0[1].d == 1)
        (**var_d0)(var_d0)
        int32_t temp6_1 = *(var_d0 + 0xc)
        *(var_d0 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_d0 + 8))(var_d0, 1)

int64_t* var_e0

if (var_e0 != 0)
    var_e0[1].d -= 1
    
    if (var_e0[1].d == 1)
        (**var_e0)(var_e0)
        int32_t temp7_1 = *(var_e0 + 0xc)
        *(var_e0 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*var_e0 + 8))(var_e0, 1)

void var_110
sub_140d948f0(&var_110)
void var_120
sub_140d948f0(&var_120)
int64_t var_130

if (var_130 != 0)
    sub_140a74f90(var_130)

sub_140ee3c10(&var_140)
int64_t* var_150

if (var_150 != 0)
    var_150[1].d -= 1
    
    if (var_150[1].d == 1)
        (**var_150)(var_150)
        int32_t temp10_1 = *(var_150 + 0xc)
        *(var_150 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_150 + 8))(var_150, 1)

int64_t* var_160

if (var_160 != 0)
    var_160[1].d -= 1
    
    if (var_160[1].d == 1)
        (**var_160)(var_160)
        int32_t temp11_1 = *(var_160 + 0xc)
        *(var_160 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_160 + 8))(var_160, 1)

int64_t rax_77
rax_77.b = 1
return rax_77
