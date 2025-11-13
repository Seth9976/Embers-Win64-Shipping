// 函数: sub_141a3bc60
// 地址: 0x141a3bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
void** arg_8 = arg1
int64_t var_84 = -1
int64_t* rbx = arg3
int64_t* var_a0 = rbx
void* var_90 = &arg3[0xb]
int32_t rax_2 = data_1439d284c
int32_t* rdi = arg2
int32_t var_88 = rax_2
int32_t var_7c = rax_2
void** rsi = arg1
int64_t var_78 = -1
int64_t* var_58 = nullptr
int32_t var_50 = 0
void** var_68 = nullptr
int32_t var_60 = 0
void* var_c8
sub_141a43c80(&arg1[0x1b], &arg1[0xd], &var_68, &var_58, var_c8.b)
int64_t* rax_3 = var_58
int64_t* r14 = rax_3
void* r12_2 = &rax_3[sx.q(var_50) * 2]
int64_t (* var_b8)(int64_t* arg1, int64_t, char* arg3, int32_t* arg4)
int32_t var_b0
void* zmm2_1

if (rax_3 != r12_2)
    do
        int64_t rcx_1 = sx.q(rsi[0x30].d)
        int64_t rsi_1 = sx.q(r14[1].d)
        var_c8 = *r14
        int32_t r9_1 = var_c8.d
        int32_t var_c0_1 = rsi_1.d
        
        if (rcx_1.d != 0)
            void* rax_4 = rsi[0x2f]
            int64_t rbx_1 = rcx_1 << 2
            void* r10_1 = &rsi[0x2b]
            
            if (rax_4 != 0)
                r10_1 = rax_4
            
            int64_t r11_1 = 0
            uint64_t rbx_2 = rbx_1 u>> 2
            
            if (r10_1 u> rbx_1 + r10_1)
                rbx_2 = 0
            
            if (rbx_2 != 0)
                do
                    int32_t rax_6 = *r10_1
                    
                    if (r9_1 != 0)
                        int32_t r9_3 = (r9_1 - rax_6) ^ rax_6 u>> 0xd
                        int32_t r8_3 = (0x9e3779b9 - r9_3 - rax_6) ^ r9_3 << 8
                        int32_t r9_7 = (rax_6 - r8_3 - r9_3) ^ r8_3 u>> 0xd
                        int32_t rdx_4 = (r9_3 - r8_3 - r9_7) ^ r9_7 u>> 0xc
                        int32_t r8_6 = (r8_3 - rdx_4 - r9_7) ^ rdx_4 << 0x10
                        int32_t r9_10 = (r9_7 - r8_6 - rdx_4) ^ r8_6 u>> 5
                        int32_t rdx_7 = (rdx_4 - r8_6 - r9_10) ^ r9_10 u>> 3
                        int32_t r8_9 = (r8_6 - rdx_7 - r9_10) ^ rdx_7 << 0xa
                        r9_1 = (r9_10 - r8_9 - rdx_7) ^ r8_9 u>> 0xf
                    else
                        r9_1 = rax_6
                    
                    r10_1 += 4
                    r11_1 += 1
                while (r11_1 != rbx_2)
        
        int32_t* rbx_3 = *(rdi + 0x100)
        int32_t i_6 = rdi[0x42]
        int32_t r8_11 = 0
        var_c8.d = r9_1
        int32_t i = i_6
        
        if (i_6 s> 0)
            int32_t* r11_2 = arg2
            
            if (rbx_3 != 0)
                r11_2 = rbx_3
            
            do
                int32_t rcx_7 = i & 0x80000001
                
                if (rcx_7 s< 0)
                    rcx_7 = ((rcx_7 - 1) | 0xfffffffe) + 1
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(i)
                int32_t i_4 = (temp1_1 - temp0_1) s>> 1
                i = i_4
                int32_t rax_22 = i_4 + r8_11
                
                if (r11_2[sx.q(rax_22) * 8] u< r9_1)
                    r8_11 = rax_22 + rcx_7
            while (i s> 0)
        
        rdi = arg2
        
        if (r8_11 s>= i_6)
            rbx = arg_18
        else
            int64_t rcx_12 = sx.q(r8_11)
            int32_t* rdx_10 = rdi
            
            if (rbx_3 != 0)
                rdx_10 = rbx_3
            
            if (r9_1 u< rdx_10[rcx_12 * 8] || r8_11 == 0xffffffff)
                rbx = arg_18
            else
                int64_t rcx_13 = rcx_12 << 5
                
                if (&rdx_10[2] == neg.q(rcx_13))
                    rbx = arg_18
                else
                    int64_t* r10_4 = *(rdx_10 + 8 + rcx_13 + 8)
                    int64_t rcx_14 = sx.q(var_c8:4.d)
                    int32_t* rdx_14
                    
                    if (r10_4[1].d == *(r10_4 + 0x34))
                    label_141a3bf1e:
                        rdx_14 = nullptr
                    else
                        void* rdx_11 = r10_4[8]
                        void* r9_13 = &r10_4[7]
                        
                        if (rdx_11 != 0)
                            r9_13 = rdx_11
                        
                        int32_t rax_26 = *(r9_13 + (((sx.q(r10_4[9].d) - 1) & rcx_14) << 2))
                        
                        if (rax_26 == 0xffffffff)
                        label_141a3bf1e_1:
                            rdx_14 = nullptr
                        else
                            while (true)
                                rdx_14 = sx.q(rax_26) * 0x108 + *r10_4
                                
                                if (*rdx_14 == rcx_14.d)
                                    break
                                
                                rax_26 = rdx_14[0x40]
                                
                                if (rax_26 == 0xffffffff)
                                    goto label_141a3bf1e_2
                            
                            if (rax_26 == 0xffffffff)
                            label_141a3bf1e_2:
                                rdx_14 = nullptr
                    
                    void* r11_3 = &rdx_14[2]
                    
                    if (rdx_14 == 0)
                        r11_3 = nullptr
                    
                    if (r11_3 == 0)
                        int32_t* rdx_18
                        
                        if (r10_4[0xb].d == *(r10_4 + 0x84))
                        label_141a3bf9c:
                            rdx_18 = nullptr
                        else
                            void* r9_15 = &r10_4[0x11]
                            void* rdx_15 = *(r9_15 + 8)
                            
                            if (rdx_15 != 0)
                                r9_15 = rdx_15
                            
                            int32_t rax_28 = *(r9_15 + (((sx.q(r10_4[0x13].d) - 1) & rcx_14) << 2))
                            
                            if (rax_28 == 0xffffffff)
                            label_141a3bf9c_1:
                                rdx_18 = nullptr
                            else
                                while (true)
                                    rdx_18 = sx.q(rax_28) * 0x108 + r10_4[0xa]
                                    
                                    if (*rdx_18 == rcx_14.d)
                                        break
                                    
                                    rax_28 = rdx_18[0x40]
                                    
                                    if (rax_28 == 0xffffffff)
                                        goto label_141a3bf9c_2
                                
                                if (rax_28 == 0xffffffff)
                                label_141a3bf9c_2:
                                    rdx_18 = nullptr
                        
                        r11_3 = &rdx_18[2]
                        
                        if (rdx_18 == 0)
                            r11_3 = nullptr
                    
                    int32_t rbx_4
                    
                    if (r10_4[0xb].d != *(r10_4 + 0x84))
                        void* r9_17 = &r10_4[0x11]
                        void* rdx_19 = *(r9_17 + 8)
                        
                        if (rdx_19 != 0)
                            r9_17 = rdx_19
                        
                        rbx_4 = *(r9_17 + (((sx.q(r10_4[0x13].d) - 1) & rcx_14) << 2))
                    
                    if (r10_4[0xb].d == *(r10_4 + 0x84) || rbx_4 == 0xffffffff)
                    label_141a3c00d:
                        rbx_4 = -1
                    else
                        int64_t r8_21 = r10_4[0xa]
                        
                        while (true)
                            int32_t* rdx_20 = sx.q(rbx_4) * 0x108
                            
                            if (*(rdx_20 + r8_21) == rcx_14.d)
                                break
                            
                            rbx_4 = *(rdx_20 + r8_21 + 0x100)
                            
                            if (rbx_4 == 0xffffffff)
                                goto label_141a3c00d
                    
                    zmm2_1 = var_c8
                    var_88.q = zmm2_1
                    var_b0 = rsi_1.d
                    var_84:4.d = 0xffffffff
                    int32_t* rdx_23
                    
                    if (rsi_1.d != 0xffffffff)
                        var_7c.q = zmm2_1
                        var_78:4.d = rsi_1.d
                        
                        if (r11_3 != 0 && rsi_1.d s>= 0 && rsi_1.d s< *(r11_3 + 0xa8))
                            int64_t* rcx_17 = rsi_1 * 0x88 + *(r11_3 + 0xa0)
                            char rax_33 = rcx_17[0x10].b
                            
                            if ((rax_33 & 1) != 0)
                                if ((rax_33 & 2) == 0)
                                    rcx_17 = *rcx_17
                                
                                if ((rcx_17[1].b & 2) != 0)
                                    (*(*rcx_17 + 0x18))(rcx_17, &var_a0, arg_18)
                        
                        rdx_23 = &var_7c
                    else
                        if (r11_3 != 0 && (*(r11_3 + 0xe0) & 1) != 0)
                            void* rcx_15 = r11_3 + 0xb0
                            
                            if ((*(rcx_15 + 0x30) & 2) == 0)
                                rcx_15 = *rcx_15
                            
                            if ((*(rcx_15 + 8) & 2) != 0)
                                (*(*rcx_15 + 0x18))(rcx_15, &var_a0, arg_18)
                        
                        rdx_23 = &var_88
                    
                    sub_141a60ef0(&arg3[1], rdx_23)
                    
                    if (rbx_4 == 0xffffffff || arg4 == 0)
                        rbx = arg_18
                        char var_a8_1 = 0
                        sub_141a651c0(&rbx[0x1f], rbx, &var_c8, &var_b8)
                    else
                        int64_t rdi_1 = sx.q(*(arg4 + 0x10))
                        int32_t rax_35 = (rdi_1 + 1).d
                        *(arg4 + 0x10) = rax_35
                        
                        if (rax_35 s> *(arg4 + 0x14))
                            sub_14083a7e0(arg4 + 8)
                        
                        int64_t rax_36 = *(arg4 + 8)
                        int64_t rcx_20 = rdi_1 * 3
                        rdi = arg2
                        *(rax_36 + (rcx_20 << 2)) = var_c8
                        *(rax_36 + (rcx_20 << 2) + 8) = rsi_1.d
                        rbx = arg_18
        
        r14 = &r14[2]
    while (r14 != r12_2)
    
    rsi = arg_8

void** r13_1 = var_68
void** r14_1 = r13_1
void* r12_5 = &r13_1[sx.q(var_60) * 2]

if (r13_1 != r12_5)
    do
        int64_t rcx_21 = sx.q(rsi[0x30].d)
        int64_t rsi_2 = sx.q(r14_1[1].d)
        var_c8 = *r14_1
        int32_t r9_18 = var_c8.d
        
        if (rcx_21.d != 0)
            void* rax_37 = rsi[0x2f]
            int64_t rbx_5 = rcx_21 << 2
            void* r10_5 = &rsi[0x2b]
            int64_t r11_4 = 0
            
            if (rax_37 != 0)
                r10_5 = rax_37
            
            uint64_t rbx_6 = rbx_5 u>> 2
            
            if (r10_5 u> rbx_5 + r10_5)
                rbx_6 = 0
            
            if (rbx_6 != 0)
                do
                    int32_t rax_39 = *r10_5
                    
                    if (r9_18 != 0)
                        int32_t r9_21 = (r9_18 - rax_39) ^ rax_39 u>> 0xd
                        int32_t r8_27 = (0x9e3779b9 - r9_21 - rax_39) ^ r9_21 << 8
                        int32_t r9_25 = (rax_39 - r8_27 - r9_21) ^ r8_27 u>> 0xd
                        int32_t rdx_29 = (r9_21 - r8_27 - r9_25) ^ r9_25 u>> 0xc
                        int32_t r8_30 = (r8_27 - rdx_29 - r9_25) ^ rdx_29 << 0x10
                        int32_t r9_28 = (r9_25 - r8_30 - rdx_29) ^ r8_30 u>> 5
                        int32_t rdx_32 = (rdx_29 - r8_30 - r9_28) ^ r9_28 u>> 3
                        int32_t r8_33 = (r8_30 - rdx_32 - r9_28) ^ rdx_32 << 0xa
                        r9_18 = (r9_28 - r8_33 - rdx_32) ^ r8_33 u>> 0xf
                    else
                        r9_18 = rax_39
                    
                    r10_5 += 4
                    r11_4 += 1
                while (r11_4 != rbx_6)
        
        int32_t* rbx_7 = *(rdi + 0x100)
        int32_t r8_35 = 0
        int32_t i_7 = rdi[0x42]
        int32_t i_1 = i_7
        var_c8.d = r9_18
        
        if (i_7 s> 0)
            int32_t* r11_5 = arg2
            
            if (rbx_7 != 0)
                r11_5 = rbx_7
            
            do
                int32_t rcx_28 = i_1 & 0x80000001
                
                if (rcx_28 s< 0)
                    rcx_28 = ((rcx_28 - 1) | 0xfffffffe) + 1
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(i_1)
                int32_t i_5 = (temp3_1 - temp2_1) s>> 1
                i_1 = i_5
                int32_t rax_55 = i_5 + r8_35
                
                if (*((sx.q(rax_55) << 5) + r11_5) u< r9_18)
                    r8_35 = rax_55 + rcx_28
            while (i_1 s> 0)
        
        rdi = arg2
        int64_t rax_57
        int32_t* rcx_33
        
        if (r8_35 s< i_7)
            rcx_33 = rdi
            
            if (rbx_7 != 0)
                rcx_33 = rbx_7
            
            rax_57 = sx.q(r8_35) << 5
        
        void* r10_7
        
        if (r8_35 s>= i_7 || r9_18 u< rcx_33[sx.q(r8_35) * 8] || r8_35 == 0xffffffff)
            r10_7 = 8
        else
            r10_7 = rax_57 + 0x10 + rcx_33
        
        int64_t* r10_8 = *r10_7
        int64_t rcx_34 = sx.q(var_c8:4.d)
        int32_t* rdx_38
        
        if (r10_8[1].d == *(r10_8 + 0x34))
        label_141a3c363:
            rdx_38 = nullptr
        else
            void* rdx_35 = r10_8[8]
            void* r9_31 = &r10_8[7]
            
            if (rdx_35 != 0)
                r9_31 = rdx_35
            
            int32_t rax_59 = *(r9_31 + (((sx.q(r10_8[9].d) - 1) & rcx_34) << 2))
            
            if (rax_59 == 0xffffffff)
            label_141a3c363_1:
                rdx_38 = nullptr
            else
                while (true)
                    rdx_38 = sx.q(rax_59) * 0x108 + *r10_8
                    
                    if (*rdx_38 == rcx_34.d)
                        break
                    
                    rax_59 = rdx_38[0x40]
                    
                    if (rax_59 == 0xffffffff)
                        goto label_141a3c363_2
                
                if (rax_59 == 0xffffffff)
                label_141a3c363_2:
                    rdx_38 = nullptr
        
        void* r8_39 = &rdx_38[2]
        
        if (rdx_38 == 0)
            r8_39 = nullptr
        
        if (r8_39 != 0)
        label_141a3c3ea:
            zmm2_1 = var_c8
            var_88.q = zmm2_1
            var_b0 = rsi_2.d
            var_84:4.d = 0xffffffff
            
            if (rsi_2.d != 0xffffffff)
                if (rsi_2.d s< 0 || rsi_2.d s>= *(r8_39 + 0xa8))
                    rbx = arg_18
                else
                    int64_t rcx_36 = rsi_2 * 0x88
                    
                    if ((*(rcx_36 + *(r8_39 + 0xa0) + 0x80) & 1) == 0)
                        rbx = arg_18
                    else
                        var_7c.q = zmm2_1
                        var_78:4.d = rsi_2.d
                        void** rcx_37 = rcx_36 + *(r8_39 + 0xa0)
                        
                        if ((rcx_37[0x10].b & 2) == 0)
                            rcx_37 = *rcx_37
                        
                        rbx = arg_18
                        
                        if ((rcx_37[1].b & 1) != 0)
                            (*(*rcx_37 + 0x10))(rcx_37, &var_a0, rbx)
            else if ((*(r8_39 + 0xe0) & 1) == 0)
                rbx = arg_18
            else
                void* rcx_35 = r8_39 + 0xb0
                
                if ((*(rcx_35 + 0x30) & 2) == 0)
                    rcx_35 = *rcx_35
                
                rbx = arg_18
                
                if ((*(rcx_35 + 8) & 1) != 0)
                    (*(*rcx_35 + 0x10))(rcx_35, &var_a0, rbx)
        else
            int32_t* rdx_42
            
            if (r10_8[0xb].d == *(r10_8 + 0x84))
            label_141a3c3d3:
                rdx_42 = nullptr
            else
                void* r9_33 = &r10_8[0x11]
                void* rdx_39 = *(r9_33 + 8)
                
                if (rdx_39 != 0)
                    r9_33 = rdx_39
                
                int32_t rax_61 = *(r9_33 + (((sx.q(r10_8[0x13].d) - 1) & rcx_34) << 2))
                
                if (rax_61 == 0xffffffff)
                label_141a3c3d3_1:
                    rdx_42 = nullptr
                else
                    while (true)
                        rdx_42 = sx.q(rax_61) * 0x108 + r10_8[0xa]
                        
                        if (*rdx_42 == rcx_34.d)
                            break
                        
                        rax_61 = rdx_42[0x40]
                        
                        if (rax_61 == 0xffffffff)
                            goto label_141a3c3d3_2
                    
                    if (rax_61 == 0xffffffff)
                    label_141a3c3d3_2:
                        rdx_42 = nullptr
            
            r8_39 = &rdx_42[2]
            
            if (rdx_42 == 0)
                r8_39 = nullptr
            
            if (r8_39 != 0)
                goto label_141a3c3ea
            
            rbx = arg_18
        
        r14_1 = &r14_1[2]
    while (r14_1 != r12_5)

int64_t* rax_66 = (*(*rbx + 0x58))(rbx)
int64_t* r10_9 = &arg1[0xd]
int64_t (* r14_2)(int64_t* arg1, int64_t, char* arg3, int32_t* arg4) = nullptr
var_b8 = nullptr
int32_t result_1 = 0
int32_t r9_35 = 0
int32_t var_ac = 0
int32_t i_2 = 0
int32_t i_3 = 0

while (i_2 s>= 0)
    if (i_2 s>= arg1[0x1c].d)
        break
    
    if (i_3 s< 0)
        break
    
    if (i_3 s>= r10_9[1].d)
        break
    
    int32_t rax_68 = *(arg1[0x1b] + (sx.q(i_2) << 2))
    int32_t rbx_8 = *(*r10_9 + (sx.q(i_3) << 2))
    
    if (rax_68 == rbx_8)
        i_2 += 1
        i_3 += 1
    else if (rax_68 u<= rbx_8)
        i_2 += 1
    else
        int64_t result_3 = sx.q(result_1)
        result_1 = (result_3 + 1).d
        
        if (result_1 s> r9_35)
            sub_1405a4cf0(&var_b8)
            r9_35 = var_ac
            r10_9 = &arg1[0xd]
            r14_2 = var_b8
        
        *(r14_2 + (result_3 << 2)) = rbx_8
        i_3 += 1

void** r13_3 = var_68

while (i_3 s>= 0)
    if (i_3 s>= r10_9[1].d)
        break
    
    int64_t result_2 = sx.q(result_1)
    result_1 = (result_2 + 1).d
    int32_t* rsi_3 = *r10_9 + (sx.q(i_3) << 2)
    
    if (result_1 s> r9_35)
        sub_1405a4cf0(&var_b8)
        r9_35 = var_ac
        r10_9 = &arg1[0xd]
        r14_2 = var_b8
    
    i_3 += 1
    *(r14_2 + (result_2 << 2)) = *rsi_3

int64_t result = sx.q(result_1)
int64_t (* rbx_9)(int64_t* arg1, int64_t, char* arg3, int32_t* arg4) = r14_2
void* rsi_4 = r14_2 + (result << 2)

if (r14_2 != rsi_4)
    void** rdi_2 = arg_8
    int64_t* r13_4 = arg_18
    void*** var_b0_1 = &arg_8
    var_b8 = sub_141a3ba40
    
    do
        int64_t rdx_48 = sx.q(rdi_2[0x30].d)
        int32_t rax_71 = *rbx_9
        
        if (rdx_48.d != 0)
            void* rcx_44 = rdi_2[0x2f]
            int64_t r11_6 = rdx_48 << 2
            void* r9_36 = &rdi_2[0x2b]
            int64_t r10_10 = 0
            
            if (rcx_44 != 0)
                r9_36 = rcx_44
            
            uint64_t r11_7 = r11_6 u>> 2
            
            if (r9_36 u> r11_6 + r9_36)
                r11_7 = 0
            
            if (r11_7 != 0)
                do
                    int32_t rcx_46 = *r9_36
                    
                    if (rax_71 != 0)
                        int32_t rax_73 = (rax_71 - rcx_46) ^ rcx_46 u>> 0xd
                        int32_t r8_47 = (0x9e3779b9 - rcx_46 - rax_73) ^ rax_73 << 8
                        int32_t rax_78 = (rcx_46 - r8_47 - rax_73) ^ r8_47 u>> 0xd
                        int32_t rdx_54 = (rax_73 - r8_47 - rax_78) ^ rax_78 u>> 0xc
                        int32_t r8_50 = (r8_47 - rdx_54 - rax_78) ^ rdx_54 << 0x10
                        int32_t rax_81 = (rax_78 - r8_50 - rdx_54) ^ r8_50 u>> 5
                        int32_t rdx_57 = (rdx_54 - r8_50 - rax_81) ^ rax_81 u>> 3
                        int32_t r8_53 = (r8_50 - rdx_57 - rax_81) ^ rdx_57 << 0xa
                        rax_71 = (rax_81 - r8_53 - rdx_57) ^ r8_53 u>> 0xf
                    else
                        rax_71 = rcx_46
                    
                    r9_36 += 4
                    r10_10 += 1
                while (r10_10 != r11_7)
        
        arg_18.d = rax_71
        arg_8 = &arg_18
        result = sub_141a43860(rax_66, r13_4, &var_b8)
        rbx_9 += 4
    while (rbx_9 != rsi_4)
    
    r13_3 = var_68

if (r14_2 != 0)
    result = sub_140a74f90(r14_2)

if (r13_3 != 0)
    result = sub_140a74f90(r13_3)

int64_t* rcx_62 = var_58

if (rcx_62 == 0)
    return result

return sub_140a74f90(rcx_62)
