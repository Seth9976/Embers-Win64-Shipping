// 函数: sub_1423f0ea0
// 地址: 0x1423f0ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f5b2ac == 0)
    data_143f5b2ac = 1
    __builtin_memset(&data_143a30298, 0xff, 0x20)
else if (arg1[1].d != 0)
    int64_t* rax_1 = *arg1
    int16_t* const rcx
    
    if (rax_1[1].d == 0)
        rcx = &data_142d40450
    else
        rcx = *rax_1
    
    if (sub_140a54510(rcx, u"default") == 0)
        data_143f5b2ac = 1
        __builtin_memset(&data_143a30298, 0xff, 0x20)

if (arg1[1].d s> 1)
    int64_t* rdi_1 = nullptr
    int32_t i = 1
    
    do
        int64_t rax_3 = *arg1
        int16_t* rcx_1
        
        if (*(rdi_1 + rax_3 + 0x18) == 0)
            rcx_1 = &data_142d40450
        else
            rcx_1 = *(rdi_1 + rax_3 + 0x10)
        
        int32_t rax_4 = sub_140b1ba10(rcx_1)
        uint64_t rsi_1 = zx.q(rax_4)
        int64_t rax_5 = *arg1
        
        if (rax_4 == 0)
            rsi_1 = -1
        
        int16_t* const rcx_2
        
        if (*(rdi_1 + rax_5 + 8) == 0)
            rcx_2 = &data_142d40450
        else
            rcx_2 = *(rdi_1 + rax_5)
        
        if (sub_140a54510(rcx_2, &data_14333f1dc) != 0)
            int64_t rax_7 = *arg1
            int16_t* const rcx_3
            
            if (*(rdi_1 + rax_7 + 8) == 0)
                rcx_3 = &data_142d40450
            else
                rcx_3 = *(rdi_1 + rax_7)
            
            if (sub_140a54510(rcx_3, &data_142e51b14) != 0)
                int64_t rax_9 = *arg1
                int16_t* const rcx_4
                
                if (*(rdi_1 + rax_9 + 8) == 0)
                    rcx_4 = &data_142d40450
                else
                    rcx_4 = *(rdi_1 + rax_9)
                
                if (sub_140a54510(rcx_4, &data_142ffb2e8) != 0)
                    int64_t rax_11 = *arg1
                    int16_t* const rcx_5
                    
                    if (*(rdi_1 + rax_11 + 8) == 0)
                        rcx_5 = &data_142d40450
                    else
                        rcx_5 = *(rdi_1 + rax_11)
                    
                    int32_t rax_12 = sub_140a54510(rcx_5, u"Task")
                    uint64_t rcx_6 = data_143a30298
                    
                    if (rax_12 == 0)
                        rcx_6 = rsi_1
                    
                    data_143a30298 = rcx_6
                else
                    data_143a302b0 = rsi_1
            else
                data_143a302a8 = rsi_1
        else
            data_143a302a0 = rsi_1
        
        i += 2
        rdi_1 = &rdi_1[4]
    while (i s< arg1[1].d)

data_143f5b550
data_143f5b550 = 0
int64_t* rax_14 = sub_140a242a0()
int64_t rdx = *rax_14
int32_t rax_15 = (*(rdx + 0x18))(rax_14, rdx)
data_143f5b550
data_143f5b550 += rax_15
int32_t r14_1 = 0
int64_t* rax_17 = sub_140a242a0()
int64_t rdx_1 = *rax_17

if ((*(rdx_1 + 0x18))(rax_17, rdx_1) s> 0)
    int32_t rax_26
    
    do
        void*** rax_19 = sub_140a84c80(0, 0x20, 0)
        void*** var_118 = rax_19
        void*** rdi_2 = rax_19
        
        if (rax_19 != 0)
            *rax_19 = &data_142d40dc0
            rax_19[1] = sub_1423ef860
            rdi_2[3] = sub_140a387b0()
            *rdi_2 = &data_142d40e18
        
        void var_c8
        int64_t* rax_21 = sub_140958da0(&var_c8, nullptr, 0xff)
        int64_t* rbx_2 = *rax_21 + 0x10
        *rbx_2 = 0
        rbx_2[1].d = 0
        
        if (&var_118 != rbx_2 && rdi_2 != 0)
            void** r8_1 = *rdi_2
            r8_1[8](rdi_2, rbx_2, r8_1)
        
        rbx_2[2].d = 0x2ff
        void* rcx_11 = *rax_21
        int32_t r8_2 = rax_21[2].d
        int64_t* rdx_3 = rax_21[1]
        int64_t* rbx_3 = *(rcx_11 + 0x30)
        int64_t* arg_10 = rbx_3
        int32_t* rsi_3 = &rbx_3[9]
        
        if (rbx_3 != 0)
            *rsi_3 += 1
            rdi_2 = var_118
            rbx_3 = arg_10
        
        sub_140978a40(rcx_11, rdx_3, r8_2, 1)
        
        if (rbx_3 != 0)
            int32_t rax_22 = *rsi_3
            *rsi_3 -= 1
            
            if (rax_22 == 1)
                sub_140a2f6e0(arg_10)
            
            rdi_2 = var_118
        
        if (rdi_2 != 0)
            (*rdi_2)[7](rdi_2, 0)
            void*** rax_24 = sub_140a84c80(rdi_2, 0, 0)
            var_118 = rax_24
            
            if (rax_24 != 0)
                sub_140a74f90(rax_24)
        
        r14_1 += 1
        int64_t* rax_25 = sub_140a242a0()
        int64_t rdx_4 = *rax_25
        rax_26 = (*(rdx_4 + 0x18))(rax_25, rdx_4)
    while (r14_1 s< rax_26)

if (data_14399e5cc != 0)
    int32_t r14_2 = 0
    int64_t* rax_27 = sub_140a242a0()
    int64_t rdx_5 = *rax_27
    
    if ((*(rdx_5 + 0x18))(rax_27, rdx_5) s> 0)
        int32_t rax_36
        
        do
            void*** rax_29 = sub_140a84c80(0, 0x20, 0)
            void*** var_108 = rax_29
            void*** rdi_3 = rax_29
            
            if (rax_29 != 0)
                *rax_29 = &data_142d40dc0
                rax_29[1] = sub_1423ef860
                rdi_3[3] = sub_140a387b0()
                *rdi_3 = &data_142d40e18
            
            void var_b0
            int64_t* rax_31 = sub_140958da0(&var_b0, nullptr, 0xff)
            int64_t* rbx_5 = *rax_31 + 0x10
            *rbx_5 = 0
            rbx_5[1].d = 0
            
            if (&var_108 != rbx_5 && rdi_3 != 0)
                void** r8_3 = *rdi_3
                r8_3[8](rdi_3, rbx_5, r8_3)
            
            rbx_5[2].d = 0x6ff
            void* rcx_20 = *rax_31
            int32_t r8_4 = rax_31[2].d
            int64_t* rdx_7 = rax_31[1]
            int64_t* rbx_6 = *(rcx_20 + 0x30)
            int64_t* arg_18 = rbx_6
            int32_t* rsi_5 = &rbx_6[9]
            
            if (rbx_6 != 0)
                *rsi_5 += 1
                rdi_3 = var_108
                rbx_6 = arg_18
            
            sub_140978a40(rcx_20, rdx_7, r8_4, 1)
            
            if (rbx_6 != 0)
                int32_t rax_32 = *rsi_5
                *rsi_5 -= 1
                
                if (rax_32 == 1)
                    sub_140a2f6e0(arg_18)
                
                rdi_3 = var_108
            
            if (rdi_3 != 0)
                (*rdi_3)[7](rdi_3, 0)
                void*** rax_34 = sub_140a84c80(rdi_3, 0, 0)
                var_108 = rax_34
                
                if (rax_34 != 0)
                    sub_140a74f90(rax_34)
            
            r14_2 += 1
            int64_t* rax_35 = sub_140a242a0()
            int64_t rdx_8 = *rax_35
            rax_36 = (*(rdx_8 + 0x18))(rax_35, rdx_8)
        while (r14_2 s< rax_36)

if (data_14399e5c8 != 0)
    int32_t r14_3 = 0
    int64_t* rax_37 = sub_140a242a0()
    int64_t rdx_9 = *rax_37
    
    if ((*(rdx_9 + 0x18))(rax_37, rdx_9) s> 0)
        int32_t rax_46
        
        do
            void*** rax_39 = sub_140a84c80(0, 0x20, 0)
            void*** var_f8 = rax_39
            void*** rdi_4 = rax_39
            
            if (rax_39 != 0)
                *rax_39 = &data_142d40dc0
                rax_39[1] = sub_1423ef860
                rdi_4[3] = sub_140a387b0()
                *rdi_4 = &data_142d40e18
            
            void var_98
            int64_t* rax_41 = sub_140958da0(&var_98, nullptr, 0xff)
            int64_t* rbx_8 = *rax_41 + 0x10
            *rbx_8 = 0
            rbx_8[1].d = 0
            
            if (&var_f8 != rbx_8 && rdi_4 != 0)
                void** r8_5 = *rdi_4
                r8_5[8](rdi_4, rbx_8, r8_5)
            
            rbx_8[2].d = 0xaff
            void* rcx_29 = *rax_41
            int32_t r8_6 = rax_41[2].d
            int64_t* rdx_11 = rax_41[1]
            int64_t* rbx_9 = *(rcx_29 + 0x30)
            int64_t* arg_20 = rbx_9
            int32_t* rsi_7 = &rbx_9[9]
            
            if (rbx_9 != 0)
                *rsi_7 += 1
                rdi_4 = var_f8
                rbx_9 = arg_20
            
            sub_140978a40(rcx_29, rdx_11, r8_6, 1)
            
            if (rbx_9 != 0)
                int32_t rax_42 = *rsi_7
                *rsi_7 -= 1
                
                if (rax_42 == 1)
                    sub_140a2f6e0(arg_20)
                
                rdi_4 = var_f8
            
            if (rdi_4 != 0)
                (*rdi_4)[7](rdi_4, 0)
                void*** rax_44 = sub_140a84c80(rdi_4, 0, 0)
                var_f8 = rax_44
                
                if (rax_44 != 0)
                    sub_140a74f90(rax_44)
            
            r14_3 += 1
            int64_t* rax_45 = sub_140a242a0()
            int64_t rdx_12 = *rax_45
            rax_46 = (*(rdx_12 + 0x18))(rax_45, rdx_12)
        while (r14_3 s< rax_46)

int32_t r14_4 = data_14399e5dc
void*** rax_47 = sub_140a84c80(0, 0x20, 0)
void*** var_e8 = rax_47
void*** rdi_5 = rax_47

if (rax_47 != 0)
    *rax_47 = &data_142d40dc0
    rax_47[1] = sub_1423ef860
    rdi_5[3] = sub_140a387b0()
    *rdi_5 = &data_142d40e18

void var_80
int64_t* rax_49 = sub_140958da0(&var_80, nullptr, 0xff)
int64_t* rbx_11 = *rax_49 + 0x10
*rbx_11 = 0
rbx_11[1].d = 0

if (&var_e8 != rbx_11 && rdi_5 != 0)
    void** r8_7 = *rdi_5
    r8_7[8](rdi_5, rbx_11, r8_7)

rbx_11[2].d = r14_4
void* rcx_37 = *rax_49
int32_t r8_8 = rax_49[2].d
int64_t* rdx_14 = rax_49[1]
int64_t* rbx_12 = *(rcx_37 + 0x30)
int64_t* var_128 = rbx_12
int32_t* rsi_9 = &rbx_12[9]

if (rbx_12 != 0)
    *rsi_9 += 1
    rdi_5 = var_e8
    rbx_12 = var_128

sub_140978a40(rcx_37, rdx_14, r8_8, 1)

if (rbx_12 != 0)
    int32_t rax_50 = *rsi_9
    *rsi_9 -= 1
    
    if (rax_50 == 1)
        sub_140a2f6e0(var_128)
    
    rdi_5 = var_e8

if (rdi_5 != 0)
    (*rdi_5)[7](rdi_5, 0)
    void*** rax_52 = sub_140a84c80(rdi_5, 0, 0)
    var_e8 = rax_52
    
    if (rax_52 != 0)
        sub_140a74f90(rax_52)

if (data_143db7ab0 != 0)
    void*** rax_53 = sub_140a84c80(0, 0x20, 0)
    void*** var_d8 = rax_53
    void*** rdi_6 = rax_53
    
    if (rax_53 != 0)
        *rax_53 = &data_142d40dc0
        rax_53[1] = sub_1423ef860
        rdi_6[3] = sub_140a387b0()
        *rdi_6 = &data_142d40e18
    
    void var_68
    int64_t* rax_55 = sub_140958da0(&var_68, nullptr, 0xff)
    int64_t* rbx_14 = *rax_55 + 0x10
    *rbx_14 = 0
    rbx_14[1].d = 0
    
    if (&var_d8 != rbx_14 && rdi_6 != 0)
        void** r8_9 = *rdi_6
        r8_9[8](rdi_6, rbx_14, r8_9)
    
    rbx_14[2].d = 0
    void* rcx_44 = *rax_55
    int32_t r8_10 = rax_55[2].d
    int64_t* rdx_16 = rax_55[1]
    int64_t* rbx_15 = *(rcx_44 + 0x30)
    int64_t* var_120_1 = rbx_15
    int32_t* rsi_11 = &rbx_15[9]
    
    if (rbx_15 != 0)
        *rsi_11 += 1
        rdi_6 = var_d8
        rbx_15 = var_120_1
    
    sub_140978a40(rcx_44, rdx_16, r8_10, 1)
    
    if (rbx_15 != 0)
        int32_t r15_1 = *rsi_11
        *rsi_11 -= 1
        
        if (r15_1 == 1)
            sub_140a2f6e0(var_120_1)
        
        rdi_6 = var_d8
    
    if (rdi_6 != 0)
        (*rdi_6)[7](rdi_6, 0)
        int64_t rax_57 = sub_140a84c80(rdi_6, 0, 0)
        
        if (rax_57 != 0)
            sub_140a74f90(rax_57)

sub_1423ef860()
sub_1419a21e0(0)
sub_140b19e60()
jump(*(data_1439a8bd0 + 0x48))
