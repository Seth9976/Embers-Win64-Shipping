// 函数: sub_140bcada0
// 地址: 0x140bcada0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = nullptr
int32_t var_168
int64_t var_160
char var_158
int64_t var_150
char var_148

if (data_143e1aa80 == 0)
    bool cond:1_1 = data_143e1a338 != 0
    data_143e1aa80 = 1
    
    if (not(cond:1_1))
        void* rax_1 = sub_140cde0b0()
        sub_140d19010(rax_1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        int64_t var_f0_1 = 0
        var_148 = 0
        var_150 = 0
        var_158 = 0
        var_160 = 0
        var_168 = 0
        void* rax_3 = sub_140d2dfc0(sub_140baa6d0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
        data_143e1a338 = rax_3
        int32_t rax_4 = *(rax_3 + 0xc)
        void* const rax_10
        
        if (rax_4 s>= data_143e1d9b4)
            rax_10 = nullptr
        else
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_4)
            uint32_t rdx_2 = zx.d(temp1_1)
            int32_t rax_6 = temp2_1 + rdx_2
            rax_10 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
        
        *(rax_10 + 8) |= 0x40000000

int16_t* const rbx_2 = &data_142d40450
int32_t r15 = -1
int16_t* rdx_4

if (arg2[1].d == 0)
    rdx_4 = &data_142d40450
else
    rdx_4 = *arg2

int64_t var_138
sub_140b58260(&var_138, rdx_4, 1)
int64_t* rax_11
void var_70

if (arg4 == 0)
    int64_t var_b4 = var_138
    rax_11 = &var_b4
else
    rax_11 = sub_140b58260(&var_70, arg4, 1)
int64_t r8_1 = *rax_11
int64_t var_128 = r8_1
int32_t var_130
sub_140bc6ec0(arg1 + 0x278, &var_130, r8_1)
int64_t r8_2 = var_138
int32_t rsi_1 = var_130
int32_t* rax_13
void var_b8

if (r8_2 == var_128)
    int32_t var_120 = rsi_1
    rax_13 = &var_120
else
    rax_13 = sub_140bc6ec0(arg1 + 0x278, &var_b8, r8_2)
int32_t r14_1 = *rax_13

if (rsi_1 == 0xffffffff)
    int64_t var_a0
    sub_140b63b70(&var_128, &var_a0)
    
    if (sub_140bacf70(&var_a0, 0, nullptr) == 0)
        uint64_t var_110 = 0
        int32_t var_108_1 = 0
        
        if (sub_140bbcf00(&var_a0, &var_110, nullptr) != 0)
            int16_t* rdx_10 = &data_142d40450
            
            if (var_108_1 != 0)
                rdx_10 = var_110
            
            int64_t var_e8
            sub_140b58260(&var_e8, rdx_10, 1)
            int32_t var_11c
            sub_140bc6ec0(arg1 + 0x278, &var_11c, var_e8)
            int32_t rax_16 = var_11c
            
            if (rax_16 != rsi_1)
                rsi_1 = rax_16
                var_130 = rax_16
                var_128 = var_e8
        
        uint64_t rcx_15 = var_110
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
    
    int64_t rcx_16 = var_a0
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    if (rsi_1 != 0xffffffff)
        goto label_140bcafcb
    
label_140bcb150:
    
    if (r14_1 == 0xffffffff || rsi_1 == 0xffffffff)
        goto label_140bcb46f
    
    goto label_140bcb163

label_140bcafcb:

if (r14_1 == 0xffffffff)
    int64_t rdi_1 = var_138
    int64_t var_118 = rdi_1
    int64_t var_90
    sub_140b63b70(&var_138, &var_90)
    char rax_18 = sub_140bacf70(&var_90, 0, nullptr)
    
    if (rax_18 == 0)
        uint64_t var_100 = 0
        int32_t var_f8_1 = 0
        
        if (sub_140bbcf00(&var_90, &var_100, nullptr) == 0)
            rbx_2 = zx.q(rax_18)
        else
            if (var_f8_1 != 0)
                rbx_2 = var_100
            
            int64_t var_ac
            sub_140b58260(&var_ac, rbx_2, 1)
            rdi_1 = var_ac
            rbx_2.b = 1
            var_118 = rdi_1
        
        uint64_t rcx_21 = var_100
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
    
    if (rax_18 != 0 || rbx_2.b != 0)
        EnterCriticalSection(arg1 + 0x278)
        
        if ((arg1 + 0x278)->__offset(0x30).d == (arg1 + 0x278)->__offset(0x5c).d)
        label_140bcb0d3:
            r14_1 = (arg1 + 0x278)->__offset(0x30).d - (arg1 + 0x278)->__offset(0x5c).d
            char arg_20
            arg_20.d = r14_1
            int32_t var_80
            sub_140a9e570(arg1 + 0x2a0, &var_80)
            int64_t* var_78
            *var_78 = rdi_1
            var_78[1].d = r14_1
            *(var_78 + 0xc) = 0xffffffff
            var_160 = 0
            int32_t r8_6 = (rdi_1 u>> 0x20).d + sub_140b5ead0(rdi_1.d)
            var_168 = var_80
            sub_14095c550(arg1 + 0x2a0, &var_118, r8_6, var_78, var_168, nullptr)
            
            if (arg1 != -0x278)
                LeaveCriticalSection(arg1 + 0x278)
            
            r15 = -1
        else
            int32_t rax_22 = sub_140b5ead0(rdi_1.d) + var_118:4.d
            void* __offset(_RTL_CRITICAL_SECTION, 0x60) r8_4 = arg1 + 0x2d8
            void* rcx_24 = (r8_4 - 0x60)->__offset(0x68).q
            
            if (rcx_24 != 0)
                r8_4 = rcx_24
            
            int32_t rax_24 =
                *(r8_4 + (((sx.q((arg1 + 0x278)->__offset(0x70).d) - 1) & sx.q(rax_22)) << 2))
            
            if (rax_24 == 0xffffffff)
                goto label_140bcb0d3
            
            int64_t r8_5 = (arg1 + 0x278)->__offset(0x28).q
            int64_t rdx_18
            
            while (true)
                rdx_18 = sx.q(rax_24)
                int64_t rcx_25 = rdx_18 * 5
                
                if (*(r8_5 + (rcx_25 << 2)) == rdi_1)
                    break
                
                rax_24 = *(r8_5 + (rcx_25 << 2) + 0xc)
                
                if (rax_24 == 0xffffffff)
                    goto label_140bcb0d3
            
            if (rax_24 == 0xffffffff)
                goto label_140bcb0d3
            
            void* rax_28 = r8_5 + rdx_18 * 0x14
            
            if (rax_28 == 0 || rax_28 == -8)
                goto label_140bcb0d3
            
            r14_1 = *(rax_28 + 8)
            
            if (arg1 != -0x278)
                LeaveCriticalSection(arg1 + 0x278)
        
        var_138 = rdi_1
    
    int64_t rcx_30 = var_90
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    goto label_140bcb150

int64_t* rdi_5

if (rsi_1 == 0xffffffff)
label_140bcb46f:
    rdi_5 = arg5
    int64_t var_5c_1 = var_138
    int32_t var_64_1 = r14_1
    int32_t var_60_1 = rsi_1
    int64_t var_54_1 = var_128
    int64_t rax_50
    
    if (rdi_5[1].d == 0)
        rax_50.b = 0
    else
        int64_t* rcx_56 = *rdi_5
        
        if (rcx_56 == 0)
            rax_50.b = 0
        else if ((*(*rcx_56 + 0x28))(rcx_56).b == 0)
            rax_50.b = 0
        else
            rax_50.b = 1
    
    if (rax_50.b != 0)
        if (rdi_5[1].d != 0)
            r12 = *rdi_5
        
        (*(*r12 + 0x50))(r12, &var_138, 0, 0, var_168, var_160, var_158, var_150, var_148)
else
label_140bcb163:
    int64_t* i = data_14399faf0
    int64_t rdx_21 = sx.q(data_14399faf8)
    
    for (; i != &i[rdx_21 * 2]; i = &i[2])
        if (i[1].d != 0 && *i != 0)
            int32_t rax_30 = (rdx_21 - 1).d
            int32_t rcx_36 = data_14399fb04 + 1
            int64_t rbx_5 = sx.q(rax_30)
            rsi_1.b = 0
            data_14399fb04 = rcx_36
            
            if (rax_30 s>= 0)
                int64_t rdi_3 = rbx_5 << 4
                int64_t temp3_1
                
                do
                    int64_t rax_31 = data_14399faf0
                    
                    if (*(rdi_3 + rax_31 + 8) == 0)
                        rsi_1.b = 1
                    else
                        int64_t* rcx_37 = *(rdi_3 + rax_31)
                        
                        if (rcx_37 == 0)
                            rsi_1.b = 1
                        else if ((*(*rcx_37 + 0x50))(rcx_37, arg2) == 0)
                            rsi_1.b = 1
                    
                    rdi_3 -= 0x10
                    temp3_1 = rbx_5
                    rbx_5 -= 1
                while (temp3_1 - 1 s>= 0)
                rcx_36 = data_14399fb04
                rdx_21 = zx.q(data_14399faf8)
            
            data_14399fb04 = rcx_36 - 1
            
            if (rsi_1.b != 0 && rcx_36 - 1 s<= 0)
                int32_t rsi_2 = rdx_21.d
                int32_t j = 0
                
                if (rdx_21.d s> 0)
                    int64_t* rdi_4 = nullptr
                    
                    do
                        int64_t rax_34 = data_14399faf0
                        
                        if (*(rdi_4 + rax_34 + 8) == 0)
                            sub_1405a4880(&data_14399faf0, j, 1, 1)
                        else
                            int64_t* rcx_39 = *(rdi_4 + rax_34)
                            
                            if (rcx_39 == 0)
                                sub_1405a4880(&data_14399faf0, j, 1, 1)
                            else if ((*(*rcx_39 + 0x20))(rcx_39) != 0)
                                sub_1405a4880(&data_14399faf0, j, 1, 1)
                            else
                                j += 1
                                rdi_4 = &rdi_4[2]
                        
                        rdx_21 = zx.q(data_14399faf8)
                    while (j s< rdx_21.d)
                
                int32_t rax_37 = (rdx_21 * 2).d
                
                if (rax_37 s<= 2)
                    rax_37 = 2
                
                data_14399fb00 = rax_37
                
                if (rsi_2 s> rax_37 && data_14399fafc != rdx_21.d)
                    sub_1405a5410(&data_14399faf0, rdx_21.d)
            
            break
    
    void* rsi_4 = arg1
    int32_t r15_3 = *(rsi_4 + 0x25c)
    *(rsi_4 + 0x25c) += 1
    r15 = r15_3 + 1
    sub_140bc29f0(rsi_4 - 8, r15)
    rdi_5 = arg5
    int64_t* rbx_6 = nullptr
    char rax_38
    
    if (rdi_5[1].d == 0)
        rax_38 = 0
    else
        int64_t* rcx_41 = *rdi_5
        
        if (rcx_41 == 0)
            rax_38 = 0
        else if ((*(*rcx_41 + 0x28))(rcx_41) == 0)
            rax_38 = 0
        else
            rax_38 = 1
    
    if (rax_38 != 0)
        int64_t* rax_40 = j_sub_140a82f30(0x10)
        
        if (rax_40 != 0)
            *rax_40 = 0
            rax_40[1].d = 0
            
            if (rdi_5 != rax_40 && rdi_5[1].d != 0)
                int64_t* rcx_42 = *rdi_5
                
                if (rcx_42 != 0)
                    (*(*rcx_42 + 0x40))(rcx_42, rax_40)
            
            rbx_6 = rax_40
        
        rsi_4 = arg1
    
    int32_t rax_42 = var_130
    int64_t rax_43 = var_138
    int64_t rax_44 = var_128
    int64_t* var_c0 = rbx_6
    EnterCriticalSection(rsi_4 + 0x58)
    *(rsi_4 + 0x1e8) += 1
    int32_t* rax_45 = j_sub_140a82f30(0x28)
    int32_t* rbx_7 = rax_45
    
    if (rax_45 == 0)
        rbx_7 = nullptr
    else
        *rax_45 = r15
        rax_45[1] = r14_1
        rax_45[2] = rax_42
        *(rax_45 + 0xc) = rax_43
        *(rax_45 + 0x14) = rax_44
        *(rax_45 + 0x20) = nullptr
        
        if (&rax_45[8] != &var_c0)
            *(rax_45 + 0x20) = var_c0
            var_c0 = nullptr
    
    int64_t r14_3 = sx.q(*(rsi_4 + 0x50))
    int32_t rax_47 = (r14_3 + 1).d
    *(rsi_4 + 0x50) = rax_47
    
    if (rax_47 s> *(rsi_4 + 0x54))
        sub_1405a4d70(rsi_4 + 0x48)
    
    *(*(rsi_4 + 0x48) + (r14_3 << 3)) = rbx_7
    
    if (rsi_4 != -0x58)
        LeaveCriticalSection(rsi_4 + 0x58)
    
    sub_140be33e0(arg1 + 0x380)
    int64_t* rbx_8 = var_c0
    
    if (rbx_8 != 0)
        sub_140745b20(rbx_8)
        j_sub_140a74f90(rbx_8)

sub_140745b20(rdi_5)
return zx.q(r15)
