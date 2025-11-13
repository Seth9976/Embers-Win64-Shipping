// 函数: sub_140a819a0
// 地址: 0x140a819a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int64_t* var_c8 = arg1
uint64_t var_80 = 0
int32_t i_26 = 0
uint64_t r15 = 0
int32_t i_28 = 0
int32_t i_17 = 0
int16_t** var_a0

if ((arg2 & 0x24) != 0)
    int64_t* rax_1 = sub_140a67b40(&var_c8, &var_a0)
    int64_t rbx_1 = sx.q(rax_1[1].d)
    int32_t temp0_1 = rbx_1.d
    
    if (temp0_1 != 0)
        if (temp0_1 s> 0)
            sub_14061cd70(&var_80, rbx_1.d)
            i_17 = i_28
            r15 = var_80
        
        memmove((sx.q(i_17) << 4) + r15, *rax_1, (rbx_1 << 4).d)
        i_17 += rbx_1.d
        rax_1[1].d = 0
        i_26 = i_17
    
    arg4 = sub_140597000(&var_a0)

var_a0 = nullptr
var_c8.d = 0
int32_t var_98 = 0
int32_t i_24 = 0
int32_t i_30 = 0
int32_t var_94 = 0
uint64_t var_c0 = 0
int32_t var_b4 = 0
int64_t* var_128

if ((arg2 & 2) != 0)
    sub_140a680f0(&var_c0, sub_140b19760())
    sub_140a680f0(&var_c0, sub_140b1b440())
    void* rcx_8 = data_143ddb400
    var_128 = &data_143de57c0
    char var_108 = 0
    
    if (sub_140af2fd0(rcx_8, Internationalization", ShouldUseLocalizedPropertyNames", &var_108, 
            &data_143de57c0) == 0)
        var_128 = &data_143de5780
        sub_140af2fd0(data_143ddb400, Internationalization", ShouldUseLocalizedPropertyNames", 
            &var_108, &data_143de5780)
    
    if (var_108 == 0)
        arg4 = sub_140a680f0(&var_a0, sub_140b1ab30())
        var_c8.d = var_98
    else
        arg4 = sub_140a680f0(&var_c0, sub_140b1ab30())
    
    i_24 = i_30

uint64_t var_90 = 0
int32_t i_25 = 0
int32_t i_31 = 0
int32_t var_84 = 0

if ((arg2 & 8) != 0)
    arg4 = sub_140a680f0(&var_90, sub_140b199f0())
    i_25 = i_31

void* var_b0 = nullptr
int32_t i_27 = 0

if ((arg2 & 0x10) != 0)
    char rsi = 0
    int32_t rdx_8 = data_14399fd20
    int32_t rcx_14 = data_14399fd2c + 1
    data_14399fd2c = rcx_14
    int64_t rdi_2 = sx.q(rdx_8 - 1)
    
    if (rdx_8 - 1 s>= 0)
        int64_t rbx_3 = rdi_2 << 4
        int64_t temp2_1
        
        do
            int64_t rax_12 = data_14399fd18
            
            if (*(rbx_3 + rax_12 + 8) == 0)
                rsi = 1
            else
                int64_t* rcx_15 = *(rbx_3 + rax_12)
                
                if (rcx_15 == 0)
                    rsi = 1
                else
                    char rax_14
                    rax_14, arg4 = (*(*rcx_15 + 0x50))(rcx_15, &var_b0)
                    
                    if (rax_14 == 0)
                        rsi = 1
            
            rbx_3 -= 0x10
            temp2_1 = rdi_2
            rdi_2 -= 1
        while (temp2_1 - 1 s>= 0)
        rcx_14 = data_14399fd2c
        rdx_8 = data_14399fd20
    
    data_14399fd2c = rcx_14 - 1
    
    if (rsi != 0 && rcx_14 - 1 s<= 0)
        int32_t rsi_1 = rdx_8
        int32_t rbx_4 = 0
        
        if (rdx_8 s> 0)
            int64_t* rdi_3 = nullptr
            
            do
                int64_t rax_15 = data_14399fd18
                
                if (*(rdi_3 + rax_15 + 8) == 0)
                    arg4.b = 1
                    arg4 = sub_1405a4880(&data_14399fd18, rbx_4, 1, arg4.b)
                else
                    int64_t* rcx_17 = *(rdi_3 + rax_15)
                    
                    if (rcx_17 == 0)
                        arg4.b = 1
                        arg4 = sub_1405a4880(&data_14399fd18, rbx_4, 1, arg4.b)
                    else
                        char rax_17
                        rax_17, arg4 = (*(*rcx_17 + 0x20))(rcx_17)
                        
                        if (rax_17 != 0)
                            arg4.b = 1
                            arg4 = sub_1405a4880(&data_14399fd18, rbx_4, 1, arg4.b)
                        else
                            rbx_4 += 1
                            rdi_3 = &rdi_3[2]
                
                rdx_8 = data_14399fd20
            while (rbx_4 s< rdx_8)
        
        int32_t rax_18 = rdx_8 * 2
        
        if (rax_18 s<= 2)
            rax_18 = 2
        
        data_14399fd28 = rax_18
        
        if (rsi_1 s> rax_18 && data_14399fd24 != rdx_8)
            arg4 = sub_1405a5410(&data_14399fd18, rdx_8)

int32_t i_22 = 0
uint64_t rcx_18 = 0
uint64_t var_e8 = 0
int32_t rax_19 = 0
int32_t var_dc = 0
int32_t i_16 = 0
int32_t i_23 = 0

if (i_17 != 0)
    if (i_17 s> 0)
        arg4 = sub_14061cd70(&var_e8, i_17)
        i_16 = i_23
        rcx_18 = var_e8
        i_22 = i_16
    
    int64_t rax_21 = sx.q(i_16) << 4
    int64_t* rdi_4 = rax_21 + rcx_18
    void* rbx_8 = r15 - rax_21 - rcx_18 + rdi_4
    int64_t rax_22 = rax_21 - r15
    int32_t i
    
    do
        *rdi_4 = 0
        int32_t rsi_2 = *(rbx_8 + 8)
        int64_t r15_1 = *rbx_8
        *(rbx_8 + rax_22 + rcx_18 + 8) = rsi_2
        
        if (rsi_2 != 0)
            sub_1405a4c70(rdi_4, rsi_2, 0)
            arg4 = memcpy(*rdi_4, r15_1, rsi_2 * 2)
        else
            *(rax_22 + rcx_18 + rbx_8 + 0xc) = 0
        
        rdi_4 = &rdi_4[2]
        rbx_8 += 0x10
        i = i_17
        i_17 -= 1
    while (i != 1)
    i_16 = i_22 + i_26
    rax_19 = var_dc
    i_22 = i_16
    i_23 = i_16

if (i_24 != 0)
    int32_t rdx_14 = i_24 + i_16
    
    if (rdx_14 s> rax_19)
        arg4 = sub_14061cd70(&var_e8, rdx_14)
        i_16 = i_23
        i_22 = i_16
    
    uint64_t rcx_23 = var_e8
    int32_t i_18 = i_24
    int64_t rax_24 = sx.q(i_16) << 4
    int64_t rdi_5 = rax_24 + rcx_23
    int64_t rbx_13 = var_c0 - rax_24 - rcx_23 + rdi_5
    int64_t rax_25 = rax_24 - var_c0
    int32_t i_1
    
    do
        *rdi_5 = 0
        int32_t rsi_3 = *(rbx_13 + 8)
        int64_t r15_2 = *rbx_13
        *(rbx_13 + rax_25 + rcx_23 + 8) = rsi_3
        
        if (rsi_3 != 0)
            sub_1405a4c70(rdi_5, rsi_3, 0)
            arg4 = memcpy(*rdi_5, r15_2, rsi_3 * 2)
        else
            *(rax_25 + rcx_23 + rbx_13 + 0xc) = 0
        
        rdi_5 += 0x10
        rbx_13 += 0x10
        i_1 = i_18
        i_18 -= 1
    while (i_1 != 1)
    i_16 = i_22 + i_24
    i_22 = i_16
    i_23 = i_16

if (i_25 != 0)
    int32_t rdx_17 = i_25 + i_16
    
    if (rdx_17 s> var_dc)
        arg4 = sub_14061cd70(&var_e8, rdx_17)
        i_16 = i_23
        i_22 = i_16
    
    uint64_t rcx_27 = var_e8
    int32_t i_19 = i_25
    int64_t rax_27 = sx.q(i_16) << 4
    int64_t rdi_6 = rax_27 + rcx_27
    int64_t rbx_18 = var_90 - rax_27 - rcx_27 + rdi_6
    int64_t rax_28 = rax_27 - var_90
    int32_t i_2
    
    do
        *rdi_6 = 0
        int32_t rsi_4 = *(rbx_18 + 8)
        int64_t r15_3 = *rbx_18
        *(rbx_18 + rax_28 + rcx_27 + 8) = rsi_4
        
        if (rsi_4 != 0)
            sub_1405a4c70(rdi_6, rsi_4, 0)
            arg4 = memcpy(*rdi_6, r15_3, rsi_4 * 2)
        else
            *(rax_28 + rcx_27 + rbx_18 + 0xc) = 0
        
        rdi_6 += 0x10
        rbx_18 += 0x10
        i_2 = i_19
        i_19 -= 1
    while (i_2 != 1)
    i_16 = i_22 + i_25
    i_23 = i_16

if (i_27 != 0)
    int32_t rdx_20 = i_27 + i_16
    
    if (rdx_20 s> var_dc)
        arg4 = sub_14061cd70(&var_e8, rdx_20)
        i_16 = i_23
    
    void* rdi_7 = var_b0
    int32_t i_20 = i_27
    int64_t rbx_21 = (sx.q(i_16) << 4) + var_e8
    int32_t i_3
    
    do
        *rbx_21 = 0
        int32_t rsi_5 = *(rdi_7 + 8)
        int64_t r15_4 = *rdi_7
        *(rbx_21 + 8) = rsi_5
        
        if (rsi_5 != 0)
            sub_1405a4c70(rbx_21, rsi_5, 0)
            arg4 = memcpy(*rbx_21, r15_4, rsi_5 * 2)
        else
            *(rbx_21 + 0xc) = 0
        
        rbx_21 += 0x10
        rdi_7 += 0x10
        i_3 = i_20
        i_20 -= 1
    while (i_3 != 1)
    i_16 += i_27

uint64_t r15_5 = 0
uint64_t var_f8 = 0
int32_t i_21 = 0
int64_t var_f0 = 0

if ((arg2 & 1) != 0)
    var_128.d = 0
    arg4 = sub_1405967a0(&var_f8, var_e8, i_16, 0, 0)
    int64_t rax_29 = sx.q(var_c8.d)
    int16_t** rdi_8
    void* r12_7
    
    if (rax_29.d s> 0)
        rdi_8 = var_a0
        r12_7 = &rdi_8[rax_29 * 2]
    
    if (rax_29.d s<= 0 || rdi_8 == r12_7)
        i_21 = var_f0.d
        r15_5 = var_f8
    else
        i_21 = var_f0.d
        r15_5 = var_f8
        
        do
            uint64_t rbx_22 = r15_5
            int64_t rsi_8 = (sx.q(i_21) << 4) + r15_5
            
            if (r15_5 != rsi_8)
                while (true)
                    int16_t* rdx_24
                    
                    if (rdi_8[1].d == 0)
                        rdx_24 = &data_142d40450
                    else
                        rdx_24 = *rdi_8
                    
                    int16_t* const rcx_34
                    
                    if (*(rbx_22 + 8) == 0)
                        rcx_34 = &data_142d40450
                    else
                        rcx_34 = *rbx_22
                    
                    int32_t rax_30
                    rax_30, arg4 = sub_140a54510(rcx_34, rdx_24)
                    
                    if (rax_30 == 0)
                        break
                    
                    rbx_22 += 0x10
                    
                    if (rbx_22 == rsi_8)
                        goto label_140a82006
            
            if (r15_5 == rsi_8 || ((rbx_22 - r15_5) s>> 4).d == 0xffffffff)
            label_140a82006:
                int64_t i_29 = sx.q(i_21)
                i_21 = (i_29 + 1).d
                var_f0.d = i_21
                
                if (i_21 s> var_f0:4.d)
                    sub_1405a4f90(&var_f8)
                    i_21 = var_f0.d
                    r15_5 = var_f8
                
                arg4 = sub_140596d10((i_29 << 4) + r15_5, rdi_8)
            
            rdi_8 = &rdi_8[2]
        while (rdi_8 != r12_7)

uint64_t r12_8 = var_e8
var_f8 = *arg3
var_f0.d = arg3[1].d
int128_t zmm0 = var_f8.o
int64_t var_110 = arg5
var_f8 = 0
var_f0.d = 0
int64_t* var_118 = arg_20
int128_t var_68 = zmm0
zmm0 = var_f8.o
var_f8 = r12_8
var_f0.d = i_16
int128_t var_58 = zmm0
zmm0 = var_f8.o
var_f8 = r15_5
var_f0.d = i_21
var_e8.o = zmm0
var_f8.o = var_f8.o
var_128.b = arg2
int64_t result = sub_140a82600(arg1, &var_f8, &var_e8, arg4, var_128, &var_68)
uint64_t rdi_9 = r15_5

if (i_21 != 0)
    int32_t i_4
    
    do
        int64_t rbx_25 = *rdi_9
        
        if (rbx_25 != 0)
            int64_t* rcx_41 = data_143ddb3f0
            
            if (rcx_41 == 0)
                sub_140a750a0()
                rcx_41 = data_143ddb3f0
            
            result = (*(*rcx_41 + 0x30))(rcx_41, rbx_25)
        
        rdi_9 += 0x10
        i_4 = i_21
        i_21 -= 1
    while (i_4 != 1)

if (r15_5 != 0)
    int64_t* rcx_42 = data_143ddb3f0
    
    if (rcx_42 == 0)
        sub_140a750a0()
        rcx_42 = data_143ddb3f0
    
    result = (*(*rcx_42 + 0x30))(rcx_42, r15_5)

uint64_t rdi_10 = r12_8

if (i_16 != 0)
    int32_t i_5
    
    do
        int64_t rbx_26 = *rdi_10
        
        if (rbx_26 != 0)
            int64_t* rcx_43 = data_143ddb3f0
            
            if (rcx_43 == 0)
                sub_140a750a0()
                rcx_43 = data_143ddb3f0
            
            result = (*(*rcx_43 + 0x30))(rcx_43, rbx_26)
        
        rdi_10 += 0x10
        i_5 = i_16
        i_16 -= 1
    while (i_5 != 1)

if (r12_8 != 0)
    int64_t* rcx_44 = data_143ddb3f0
    
    if (rcx_44 == 0)
        sub_140a750a0()
        rcx_44 = data_143ddb3f0
    
    result = (*(*rcx_44 + 0x30))(rcx_44, r12_8)

int32_t i_11 = i_27
void* rbx_27 = var_b0

if (i_11 != 0)
    int32_t i_6
    
    do
        int64_t rdi_11 = *rbx_27
        
        if (rdi_11 != 0)
            int64_t* rcx_45 = data_143ddb3f0
            
            if (rcx_45 == 0)
                sub_140a750a0()
                rcx_45 = data_143ddb3f0
            
            result = (*(*rcx_45 + 0x30))(rcx_45, rdi_11)
        
        rbx_27 += 0x10
        i_6 = i_11
        i_11 -= 1
    while (i_6 != 1)
    rbx_27 = var_b0

if (rbx_27 != 0)
    int64_t* rcx_46 = data_143ddb3f0
    
    if (rcx_46 == 0)
        sub_140a750a0()
        rcx_46 = data_143ddb3f0
    
    result = (*(*rcx_46 + 0x30))(rcx_46, rbx_27)

uint64_t r14 = var_90
int32_t i_12 = i_25
uint64_t rdi_12 = r14

if (i_12 != 0)
    int32_t i_7
    
    do
        int64_t rbx_28 = *rdi_12
        
        if (rbx_28 != 0)
            int64_t* rcx_47 = data_143ddb3f0
            
            if (rcx_47 == 0)
                sub_140a750a0()
                rcx_47 = data_143ddb3f0
            
            result = (*(*rcx_47 + 0x30))(rcx_47, rbx_28)
        
        rdi_12 += 0x10
        i_7 = i_12
        i_12 -= 1
    while (i_7 != 1)

if (r14 != 0)
    int64_t* rcx_48 = data_143ddb3f0
    
    if (rcx_48 == 0)
        sub_140a750a0()
        rcx_48 = data_143ddb3f0
    
    result = (*(*rcx_48 + 0x30))(rcx_48, r14)

uint64_t r14_1 = var_c0
int32_t i_13 = i_24
uint64_t rdi_13 = r14_1

if (i_13 != 0)
    int32_t i_8
    
    do
        int64_t rbx_29 = *rdi_13
        
        if (rbx_29 != 0)
            int64_t* rcx_49 = data_143ddb3f0
            
            if (rcx_49 == 0)
                sub_140a750a0()
                rcx_49 = data_143ddb3f0
            
            result = (*(*rcx_49 + 0x30))(rcx_49, rbx_29)
        
        rdi_13 += 0x10
        i_8 = i_13
        i_13 -= 1
    while (i_8 != 1)

if (r14_1 != 0)
    int64_t* rcx_50 = data_143ddb3f0
    
    if (rcx_50 == 0)
        sub_140a750a0()
        rcx_50 = data_143ddb3f0
    
    result = (*(*rcx_50 + 0x30))(rcx_50, r14_1)

int16_t** r14_2 = var_a0
int32_t i_14 = var_c8.d
int16_t** rdi_14 = r14_2

if (i_14 != 0)
    int32_t i_9
    
    do
        int16_t* rbx_30 = *rdi_14
        
        if (rbx_30 != 0)
            int64_t* rcx_51 = data_143ddb3f0
            
            if (rcx_51 == 0)
                sub_140a750a0()
                rcx_51 = data_143ddb3f0
            
            result = (*(*rcx_51 + 0x30))(rcx_51, rbx_30)
        
        rdi_14 = &rdi_14[2]
        i_9 = i_14
        i_14 -= 1
    while (i_9 != 1)

if (r14_2 != 0)
    int64_t* rcx_52 = data_143ddb3f0
    
    if (rcx_52 == 0)
        sub_140a750a0()
        rcx_52 = data_143ddb3f0
    
    result = (*(*rcx_52 + 0x30))(rcx_52, r14_2)

uint64_t r14_3 = var_80
int32_t i_15 = i_26
uint64_t rdi_15 = r14_3

if (i_15 != 0)
    int32_t i_10
    
    do
        int64_t rbx_31 = *rdi_15
        
        if (rbx_31 != 0)
            int64_t* rcx_53 = data_143ddb3f0
            
            if (rcx_53 == 0)
                sub_140a750a0()
                rcx_53 = data_143ddb3f0
            
            result = (*(*rcx_53 + 0x30))(rcx_53, rbx_31)
        
        rdi_15 += 0x10
        i_10 = i_15
        i_15 -= 1
    while (i_10 != 1)

if (r14_3 == 0)
    return result

int64_t* rcx_54 = data_143ddb3f0

if (rcx_54 == 0)
    sub_140a750a0()
    rcx_54 = data_143ddb3f0

return (*(*rcx_54 + 0x30))(rcx_54, r14_3)
