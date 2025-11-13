// 函数: sub_140bae810
// 地址: 0x140bae810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = -1
void* r13 = arg1

if (data_143e1a80c == 0 && data_143de5452 != 0)
    data_143e1a80c = 1
    sub_140bbbba0()

int64_t* r14 = nullptr
int64_t r15
r15.b = 1
uint64_t var_f8 = 0
int64_t var_f0 = 0

if (sub_140bacf70(arg2, 1, nullptr) == 0)
    char rax_2 = sub_140a236f0(arg2, &data_143e1a410, 1)
    char rax_3
    
    if (rax_2 == 0)
        rax_3 = sub_140a236f0(arg2, &data_143e1a420, 1)
    
    char rax_4
    
    if (rax_2 != 0 || rax_3 != 0)
        rax_4 = sub_140bbcf00(arg2, &var_f8, nullptr)
    
    if ((rax_2 == 0 && rax_3 == 0) || rax_4 == 0)
        int64_t var_e8 = 0
        int64_t var_e0_1 = 0
        char rax_5 = sub_140baf910(&var_f8, &var_e8, &var_f8)
        int64_t rcx_11 = var_e8
        r15 = 1
        
        if (rax_5 == 0)
            r15 = 0
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
else if (&var_f8 != arg2)
    int32_t rbx_1 = arg2[1].d
    int64_t r13_1 = *arg2
    int32_t r8 = var_f0:4.d
    var_f0.d = rbx_1
    
    if (rbx_1 != 0 || r8 != 0)
        sub_1405a4c70(&var_f8, rbx_1, r8)
        memcpy(var_f8, r13_1, rbx_1 * 2)
    
    r13 = arg1

int16_t* var_108 = nullptr
int32_t rcx_3 = 0
int32_t var_100 = 0
int32_t r8_3 = 0
int32_t var_fc = 0

if (arg4 != 0 && *arg4 != 0)
    int64_t rbx_2 = -1
    
    do
        rbx_2 += 1
    while (arg4[rbx_2] != 0)
    
    if (rbx_2.d + 1 s> 0)
        sub_1405947f0(&var_108, rbx_2.d + 1)
        r8_3 = var_fc
        rcx_3 = var_100
    
    int32_t rax_1 = rcx_3 + rbx_2.d + 1
    var_100 = rax_1
    
    if (rax_1 s> r8_3)
        sub_140594770(&var_108)
    
    UnDecorator::getReferenceType(var_108, arg4, (rbx_2.d + 1) * 2)
    r8_3 = var_fc
    rcx_3 = var_100

int64_t* r15_1

if (r15.b != 0)
    if (rcx_3 s<= 1)
        int32_t rbx_4 = var_f0.d
        uint64_t rdi_1 = var_f8
        var_100 = rbx_4
        
        if (rbx_4 != 0 || r8_3 != 0)
            sub_1405a4c70(&var_108, var_f0.d, r8_3)
            memcpy(var_108, rdi_1, rbx_4 * 2)
        else
            int32_t var_fc_1 = 0
    
    void var_58
    uint128_t zmm0_1 = *sub_140a1dfc0(&var_108, &var_58)
    int16_t* i = zmm0_1.q
    uint128_t var_48_1 = zmm0_1
    
    for (void* rax_8 = &i[sx.q(_mm_bsrli_si128(zmm0_1, 8).d)]; i != rax_8; i = &i[1])
        if (*i == 0x2f)
            int64_t* j = data_14399faf0
            int64_t rdx_10 = sx.q(data_14399faf8)
            
            for (; j != &j[rdx_10 * 2]; j = &j[2])
                if (j[1].d != 0 && *j != 0)
                    int32_t rax_9 = (rdx_10 - 1).d
                    int32_t rcx_20 = data_14399fb04 + 1
                    int64_t rbx_6 = sx.q(rax_9)
                    r15.b = 0
                    data_14399fb04 = rcx_20
                    
                    if (rax_9 s>= 0)
                        int64_t rdi_3 = rbx_6 << 4
                        int64_t temp1_1
                        
                        do
                            int64_t rax_10 = data_14399faf0
                            
                            if (*(rdi_3 + rax_10 + 8) == 0)
                                r15.b = 1
                            else
                                int64_t* rcx_21 = *(rdi_3 + rax_10)
                                
                                if (rcx_21 == 0)
                                    r15.b = 1
                                else if ((*(*rcx_21 + 0x50))(rcx_21, arg2) == 0)
                                    r15.b = 1
                            
                            rdi_3 -= 0x10
                            temp1_1 = rbx_6
                            rbx_6 -= 1
                        while (temp1_1 - 1 s>= 0)
                        rcx_20 = data_14399fb04
                        rdx_10 = zx.q(data_14399faf8)
                    
                    data_14399fb04 = rcx_20 - 1
                    
                    if (r15.b != 0 && rcx_20 - 1 s<= 0)
                        int32_t rsi_1 = rdx_10.d
                        int32_t k = 0
                        
                        if (rdx_10.d s> 0)
                            int64_t* rdi_4 = nullptr
                            
                            do
                                int64_t rax_13 = data_14399faf0
                                
                                if (*(rdi_4 + rax_13 + 8) == 0)
                                    sub_1405a4880(&data_14399faf0, k, 1, 1)
                                else
                                    int64_t* rcx_23 = *(rdi_4 + rax_13)
                                    
                                    if (rcx_23 == 0)
                                        sub_1405a4880(&data_14399faf0, k, 1, 1)
                                    else if ((*(*rcx_23 + 0x20))(rcx_23) != 0)
                                        sub_1405a4880(&data_14399faf0, k, 1, 1)
                                    else
                                        k += 1
                                        rdi_4 = &rdi_4[2]
                                
                                rdx_10 = zx.q(data_14399faf8)
                            while (k s< rdx_10.d)
                        
                        int32_t rax_16 = (rdx_10 * 2).d
                        
                        if (rax_16 s<= 2)
                            rax_16 = 2
                        
                        data_14399fb00 = rax_16
                        
                        if (rsi_1 s> rax_16 && data_14399fafc != rdx_10.d)
                            sub_1405a5410(&data_14399faf0, rdx_10.d)
                    
                    break
            
            int32_t rax_17 = data_143e1a4ac
            data_143e1a4ac += 1
            r12 = rax_17 + 1
            sub_140b9b210(r13 - 8, rax_17 + 1)
            r15_1 = arg5
            int64_t* rsi_2 = nullptr
            int64_t* arg_20 = nullptr
            
            if (r15_1[1].d != 0)
                int64_t* rcx_25 = *r15_1
                
                if (rcx_25 != 0 && (*(*rcx_25 + 0x28))(rcx_25) != 0)
                    int64_t* rax_20 = j_sub_140a82f30(0x10)
                    rsi_2 = rax_20
                    
                    if (rax_20 == 0)
                        rsi_2 = nullptr
                    else
                        *rax_20 = 0
                        rax_20[1].d = 0
                        
                        if (r15_1 != rax_20 && r15_1[1].d != 0)
                            int64_t* rcx_26 = *r15_1
                            
                            if (rcx_26 != 0)
                                (*(*rcx_26 + 0x40))(rcx_26, rsi_2)
                    
                    arg_20 = rsi_2
            
            int128_t* r13_2
            
            if (arg3 == 0)
                int64_t var_d8 = 0
                r13_2 = &var_d8
                int64_t var_d0_1 = 0
            else
                int128_t var_b0
                r13_2 = &var_b0
                var_b0 = *arg3
            
            int16_t* const rbx_7 = &data_142d40450
            uint64_t rdx_15 = &data_142d40450
            
            if (var_f0.d != 0)
                rdx_15 = var_f8
            
            int64_t var_c8
            sub_140b58260(&var_c8, rdx_15, 1)
            
            if (var_100 != 0)
                rbx_7 = var_108
            
            void var_c0
            int64_t* rax_23 = sub_140b58260(&var_c0, rbx_7, 1)
            int64_t rbx_8 = var_c8
            int64_t* var_70 = rsi_2
            int64_t rdi_5 = *rax_23
            
            if (((rdi_5 u>> 0x20).d == 0 & sub_140b5b8a0(rdi_5.d, 0)) != 0)
                rdi_5 = rbx_8
            
            void* rdi_6 = arg1
            EnterCriticalSection(rdi_6 + 0x50)
            *(rdi_6 + 0x2b0) += 1
            int32_t* rax_25 = j_sub_140a82f30(0x40)
            int32_t* rbx_9 = rax_25
            
            if (rax_25 == 0)
                rbx_9 = nullptr
                r14 = var_70
            else
                int128_t zmm0_3 = *r13_2
                *rax_25 = r12
                *(rbx_9 + 4) = rbx_8
                *(rbx_9 + 0xc) = rdi_5
                *(rbx_9 + 0x14) = zmm0_3
                *(rbx_9 + 0x28) = nullptr
                rbx_9[0xc] = arg6
                rbx_9[0xd] = arg8
                rbx_9[0xe] = arg7
                
                if (&rbx_9[0xa] == &var_70)
                    r14 = var_70
                else
                    int64_t* rdi_7 = *(rbx_9 + 0x28)
                    *(rbx_9 + 0x28) = arg_20
                    
                    if (rdi_7 != 0)
                        sub_140745b20(rdi_7)
                        j_sub_140a74f90(rdi_7)
                    
                    rdi_6 = arg1
            
            int64_t rsi_3 = sx.q(*(rdi_6 + 0x48))
            int32_t rax_32 = (rsi_3 + 1).d
            *(rdi_6 + 0x48) = rax_32
            
            if (rax_32 s> *(rdi_6 + 0x4c))
                sub_1405a4d70(rdi_6 + 0x40)
            
            *(*(rdi_6 + 0x40) + (rsi_3 << 3)) = rbx_9
            
            if (arg1 != -0x50)
                LeaveCriticalSection(arg1 + 0x50)
            
            int64_t* rcx_37 = *(arg1 + 0x20)
            (*(*rcx_37 + 0x10))(rcx_37)
            
            if (r14 != 0)
                sub_140745b20(r14)
                j_sub_140a74f90(r14)
            
            goto label_140baee04

int16_t* rbx_5

if (arg2[1].d == 0)
    rbx_5 = &data_142d40450
else
    rbx_5 = *arg2

r15_1 = arg5
void var_b8
sub_140ba57c0(r15_1, sub_140b58260(&var_b8, rbx_5, 1), 0, 0)
label_140baee04:
int16_t* rcx_42 = var_108

if (rcx_42 != 0)
    sub_140a74f90(rcx_42)

uint64_t rcx_43 = var_f8

if (rcx_43 != 0)
    sub_140a74f90(rcx_43)

sub_140745b20(r15_1)
return zx.q(r12)
