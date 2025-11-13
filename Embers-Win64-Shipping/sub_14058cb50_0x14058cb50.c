// 函数: sub_14058cb50
// 地址: 0x14058cb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_80
__builtin_memset(&var_80, 0, 0x18)
sub_14058e110(&var_80)
int32_t r15 = 0
void* rax = var_80.q
int32_t r12_3 = ((var_80:8.q - rax) s>> 3).d * -0x55555555

if (r12_3 s> 0)
    int64_t* rsi_1 = rax + 8
    
    do
        int64_t rdi_1 = *rsi_1
        void* rdx_1 = rsi_1[-1]
        int64_t rcx_4 = ((rdi_1 - rdx_1) s>> 3) * -0x5555555555555555
        
        if (rcx_4 u> 0x80)
            int64_t* rbx_1 = rdx_1 + 0xc00
            
            if (rdx_1 + 0xc00 != rdi_1)
                do
                    void* rcx_7 = *rbx_1
                    
                    if (rcx_7 != 0)
                        if ((rbx_1[2] - rcx_7) s>> 3 << 3 u>= 0x1000)
                            void* rax_4 = *(rcx_7 - 8)
                            
                            if (rcx_7 - rax_4 - 8 u> 0x1f)
                                goto label_14058d442
                            
                            rcx_7 = rax_4
                        
                        j_sub_140a74f90(rcx_7)
                        __builtin_memset(rbx_1, 0, 0x18)
                    
                    rbx_1 = &rbx_1[3]
                while (rbx_1 != rdi_1)
            
            *rsi_1 = rdx_1 + 0xc00
        else if (rcx_4 u< 0x80)
            if (((rsi_1[1] - rdx_1) s>> 3) * -0x5555555555555555 u>= 0x80)
                int64_t i_3 = 0x80 - rcx_4
                
                if (0x80 != rcx_4)
                    int64_t i
                    
                    do
                        __builtin_memset(rdi_1, 0, 0x18)
                        rdi_1 += 0x18
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                
                *rsi_1 = rdi_1
            else
                sub_14058df00(&rsi_1[-1], 0x80)
        
        r15 += 1
        rsi_1 = &rsi_1[3]
    while (r15 s< r12_3)

int128_t var_50
__builtin_memset(&var_50, 0, 0x18)
sub_14058dd70(&var_50)
int64_t* r13_1 = var_50.q
int64_t* rax_9 = r13_1
int64_t rcx_10 = var_50:8.q

if (r13_1 != rcx_10)
    do
        *rax_9 = 0
        rax_9 = &rax_9[1]
    while (rax_9 != rcx_10)

__builtin_memcpy(&r13_1[0x40], 
    "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x"
"01\x00\x00\x00\x03\x00\x00\x00\x01\x00\x00\x00\x04\x00\x00\x00\x01\x00\x00\x00\x05\x00\x00\x
        00", 
    0x30)
__builtin_memcpy(&r13_1[0x50], 
    "\x01\x00\x00\x00\x06\x00\x00\x00\x01\x00\x00\x00\x07\x00\x00\x00\x01\x00\x00\x00\x08\x00\x00\x00\x"
"01\x00\x00\x00\x09\x00\x00\x00\x01\x00\x00\x00\x0a\x00\x00\x00\x01\x00\x00\x00\x0b\x00\x00\x00\x01"
"00\x00\x00\x0c\x00\x00\x00\x01\x00\x00\x00\x0d\x00\x00\x00\x01\x00\x00\x00\x0e\x00\x00\x00\x01\x00"
"00\x00\x0f\x00\x00\x00\x01\x00\x00\x00\x10\x00\x00\x00", 
    0x58)
r13_1[0x7a].d = 1
*(r13_1 + 0x3d4) = 0x11
int128_t var_68
__builtin_memset(&var_68, 0, 0x18)
int64_t i_4 = 0x12
sub_14058df00(&var_68, 0x12)
int128_t var_98
__builtin_memset(&var_98, 0, 0x18)
sub_14058db80(&var_98)
void* r14_2 = var_68.q
int64_t* rbx_2 = r14_2 + 8
int64_t* r12_5 = var_98.q - r14_2
int64_t i_1

do
    int64_t rdi_2 = *rbx_2
    int64_t rcx_13 = rbx_2[-1]
    int64_t rdx_5 = (rdi_2 - rcx_13) s>> 3
    
    if (rdx_5 u> 0x10)
        rdi_2 = rcx_13 + 0x80
        *rbx_2 = rdi_2
    else if (rdx_5 u< 0x10)
        if ((rbx_2[1] - rcx_13) s>> 3 u>= 0x10)
            int64_t rcx_15 = rdi_2
            int64_t count = (0x10 - rdx_5) << 3
            rdi_2 += count
            memset(rcx_15, 0, count)
            *rbx_2 = rdi_2
        else
            sub_14058bc70(&rbx_2[-1], 0x10)
            rdi_2 = *rbx_2
    
    int64_t rcx_16 = rbx_2[-1]
    uint64_t r8_5 = (rdi_2 - rcx_16 + 7) u>> 3
    
    if (rcx_16 u> rdi_2)
        r8_5 = 0
    
    if (r8_5 != 0)
        memset(rcx_16, 0, r8_5 << 3)
    
    int64_t rdi_3 = *(r12_5 + rbx_2)
    void* rsi_2 = r12_5 + rbx_2
    int64_t rcx_17 = *(rsi_2 - 8)
    int64_t rdx_8 = (rdi_3 - rcx_17) s>> 2
    
    if (rdx_8 u> 0x10)
        rdi_3 = rcx_17 + 0x40
        *(r12_5 + rbx_2) = rdi_3
    else if (rdx_8 u< 0x10)
        if ((*(r12_5 + rbx_2 + 8) - rcx_17) s>> 2 u>= 0x10)
            int64_t rcx_19 = rdi_3
            int64_t count_1 = (0x10 - rdx_8) << 2
            rdi_3 += count_1
            memset(rcx_19, 0, count_1)
            *(r12_5 + rbx_2) = rdi_3
        else
            sub_14058da10(rsi_2 - 8, 0x10)
            rdi_3 = *(r12_5 + rbx_2)
    
    int64_t rcx_20 = *(rsi_2 - 8)
    uint64_t r8_11 = (rdi_3 - rcx_20 + 3) u>> 2
    
    if (rcx_20 u> rdi_3)
        r8_11 = 0
    
    if (r8_11 != 0)
        memset(rcx_20, 0xffffffff, r8_11 << 2)
    
    rbx_2 = &rbx_2[3]
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
int32_t rbx_3 = 0
int32_t arg_10 = 0
int32_t i_2 = 0
int64_t* rdx_9 = arg1
int64_t rcx_21 = *rdx_9
int64_t* r14_3 = var_68.q

if (((rdx_9[1] - rcx_21) s>> 3).d s> 0)
    int64_t r15_1 = 0
    int64_t r12_6 = var_80.q
    
    do
        int64_t* r8_13 = *(rcx_21 + (r15_1 << 3))
        int64_t* arg_18 = r8_13
        void* rcx_22 = r8_13[6]
        
        if (rcx_22 != 0)
            r8_13[6] = 0
            sub_14058ca70(rcx_22)
            rdx_9 = arg1
        
        if (r8_13[1] - *r8_13 == 3)
            char* rcx_23 = *r8_13
            
            if ((*rcx_23 & 0xf0) != 0x90 || rcx_23[2] == 0)
                char rax_27 = *rcx_23 & 0xf0
                
                if (rax_27 == 0x80 || (rax_27 == 0x90 && rcx_23[2] == 0))
                    void* rax_55 = r8_13[1] - rcx_23
                    int32_t rax_56
                    uint32_t r9_3
                    
                    if (rax_55 u>= 2)
                        r9_3 = zx.d(rcx_23[1])
                        rax_56 = zx.d(*rcx_23) & 0xf
                    else
                        r9_3 = -1
                        
                        if (rax_55 u>= 1)
                            rax_56 = zx.d(*rcx_23) & 0xf
                        else
                            rax_56 = -1
                    
                    int64_t r10_2 = sx.q(r9_3) * 0x18
                    void* r11_2 = *(r12_6 + sx.q(rax_56) * 0x18)
                    void* rcx_36 = *(r11_2 + r10_2 + 8)
                    
                    if ((rcx_36 - *(r11_2 + r10_2)) s>> 3 != 0)
                        void* r9_4 = *(rcx_36 - 8)
                        *(r11_2 + r10_2 + 8) = rcx_36 - 8
                        void* rcx_37 = r8_13[6]
                        
                        if (rcx_37 != 0)
                            r8_13[6] = 0
                            sub_14058ca70(rcx_37)
                        
                        void* rcx_39 = *(r9_4 + 0x30)
                        
                        if (rcx_39 != 0)
                            void* rdx_19 = *(rcx_39 + 0x30)
                            
                            if (rdx_19 != 0)
                                *(rcx_39 + 0x30) = 0
                                sub_14058ca70(rdx_19)
                                rcx_39 = *(r9_4 + 0x30)
                            
                            if (rdx_19 == 0 || rcx_39 != 0)
                                *(r9_4 + 0x30) = 0
                                sub_14058ca70(rcx_39)
                        
                        r8_13[6] = r9_4
                        *(r9_4 + 0x30) = r8_13
                        rbx_3 += 1
                        arg_10 = rbx_3
                    
                    rdx_9 = arg1
                else
                    uint32_t rdx_12 = zx.d(*rcx_23)
                    
                    if ((rdx_12.b & 0xf0) != 0xb0)
                        rdx_9 = arg1
                    else
                        uint64_t rax_29 = zx.q(rcx_23[1])
                        
                        if (r13_1[rax_29].d == 0)
                            rdx_9 = arg1
                        else
                            uint32_t r9_1 = zx.d(rcx_23[2])
                            int32_t r10_1
                            r10_1.b = r9_1 s>= 0x40
                            int64_t r11_1 = sx.q(*(&r13_1[rax_29] + 4)) * 0x18
                            uint64_t rcx_28 = zx.q(rdx_12) & 0xf
                            uint64_t rbx_4 = rcx_28 << 2
                            int64_t rdi_4 = var_98.q
                            int32_t rdx_13 = *(rbx_4 + *(r11_1 + rdi_4))
                            
                            if (rdx_13 == 0xffffffff && r9_1 s>= 0x40)
                                *(r14_3[sx.q(*(&r13_1[rax_29] + 4)) * 3] + (rcx_28 << 3)) = r8_13
                                *(rbx_4 + *(r11_1 + rdi_4)) = r10_1
                                rbx_3 = arg_10
                                rdx_9 = arg1
                            else if (rdx_13 == r10_1)
                                rbx_3 = arg_10
                                rdx_9 = arg1
                            else if (rdx_13 != 0)
                                if (rdx_13 == 1 && r9_1 s< 0x40)
                                    void** rdi_6 = rcx_28 << 3
                                    void* r9_2 = *(rdi_6 + r14_3[sx.q(*(&r13_1[rax_29] + 4)) * 3])
                                    void* rcx_31 = r8_13[6]
                                    
                                    if (rcx_31 != 0)
                                        r8_13[6] = 0
                                        sub_14058ca70(rcx_31)
                                    
                                    void* rcx_33 = *(r9_2 + 0x30)
                                    
                                    if (rcx_33 != 0)
                                        void* rdx_17 = *(rcx_33 + 0x30)
                                        
                                        if (rdx_17 != 0)
                                            *(rcx_33 + 0x30) = 0
                                            sub_14058ca70(rdx_17)
                                            rcx_33 = *(r9_2 + 0x30)
                                        
                                        if (rdx_17 == 0 || rcx_33 != 0)
                                            *(r9_2 + 0x30) = 0
                                            sub_14058ca70(rcx_33)
                                    
                                    r8_13[6] = r9_2
                                    *(r9_2 + 0x30) = r8_13
                                    *(rbx_4 + *(r11_1 + var_98.q)) = r10_1
                                    *(rdi_6 + r14_3[sx.q(*(&r13_1[rax_29] + 4)) * 3]) = r8_13
                                
                                rbx_3 = arg_10
                                rdx_9 = arg1
                            else
                                rdx_9 = arg1
                                
                                if (r9_1 s>= 0x40)
                                    *(r14_3[sx.q(*(&r13_1[rax_29] + 4)) * 3] + (rcx_28 << 3)) =
                                        r8_13
                                    *(rbx_4 + *(r11_1 + rdi_4)) = r10_1
                                
                                rbx_3 = arg_10
            else
                int64_t* rcx_25 = *(r12_6 + (zx.q(*rcx_23) & 0xf) * 0x18) + zx.q(rcx_23[1]) * 0x18
                int64_t** rdx_11 = rcx_25[1]
                
                if (rdx_11 == rcx_25[2])
                    sub_14058d7f0(rcx_25, rdx_11, &arg_18)
                else
                    *rdx_11 = r8_13
                    rcx_25[1] += 8
                
                rdx_9 = arg1
        
        i_2 += 1
        r15_1 += 1
        rcx_21 = *rdx_9
    while (i_2 s< ((rdx_9[1] - rcx_21) s>> 3).d)

int64_t* rsi_3 = var_98.q

if (rsi_3 != 0)
    int64_t* rbx_5 = rsi_3
    int64_t rdi_5 = var_98:8.q
    
    if (rsi_3 != rdi_5)
        do
            void* rcx_30 = *rbx_5
            
            if (rcx_30 != 0)
                if ((rbx_5[2] - rcx_30) s>> 2 << 2 u>= 0x1000)
                    void* r8_15 = *(rcx_30 - 8)
                    
                    if (rcx_30 - r8_15 - 8 u> 0x1f)
                        goto label_14058d201
                    
                    rcx_30 = r8_15
                
                j_sub_140a74f90(rcx_30)
                __builtin_memset(rbx_5, 0, 0x18)
            
            rbx_5 = &rbx_5[3]
        while (rbx_5 != rdi_5)
    
    int64_t* rax_45 = rsi_3
    int64_t var_88
    
    if (((var_88 - rsi_3) s>> 3) * 8 u>= 0x1000)
        rsi_3 = rsi_3[-1]
        
        if (rax_45 - rsi_3 - 8 u> 0x1f)
        label_14058d201:
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rsi_3)

if (r14_3 != 0)
    int64_t* rbx_6 = r14_3
    int64_t rdi_7 = var_68:8.q
    
    if (r14_3 != rdi_7)
        do
            sub_14058a310(rbx_6)
            rbx_6 = &rbx_6[3]
        while (rbx_6 != rdi_7)
    
    int64_t* rax_68 = r14_3
    int64_t var_58
    
    if (((var_58 - r14_3) s>> 3) * 8 u>= 0x1000)
        r14_3 = r14_3[-1]
        
        if (rax_68 - r14_3 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(r14_3)

if (r13_1 == 0)
    goto label_14058d452

int64_t* rax_74 = r13_1
int64_t var_40

if ((var_40 - r13_1) s>> 3 << 3 u>= 0x1000)
    r13_1 = r13_1[-1]
    
    if (rax_74 - r13_1 - 8 u<= 0x1f)
        goto label_14058d44c
    
label_14058d442:
    _invalid_parameter_noinfo_noreturn()
    noreturn

label_14058d44c:
j_sub_140a74f90(r13_1)
label_14058d452:
int64_t* rdi_8 = var_80.q

if (rdi_8 != 0)
    int64_t* rbx_7 = rdi_8
    int64_t rsi_4 = var_80:8.q
    
    if (rdi_8 != rsi_4)
        do
            sub_14058d5f0(rbx_7)
            rbx_7 = &rbx_7[3]
        while (rbx_7 != rsi_4)
    
    int64_t* rax_81 = rdi_8
    int64_t var_70
    
    if (((var_70 - rdi_8) s>> 3) * 8 u>= 0x1000)
        rdi_8 = rdi_8[-1]
        
        if (rax_81 - rdi_8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rdi_8)

return zx.q(arg_10)
