// 函数: sub_141dac120
// 地址: 0x141dac120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
void var_38

if (arg1 + 0x2f8 != &var_38)
    *(arg1 + 0x2f8) = 0
    int64_t* rdi_1 = *(arg1 + 0x300)
    
    if (rdi_1 != 0)
        *(arg1 + 0x300) = 0
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int32_t var_70 = 6
void** const var_78 = &data_1432388c8
int64_t var_68
__builtin_memset(&var_68, 0, 0x1c)

if (arg4 != 0)
    int64_t* rcx_3 = *arg3
    
    if ((*(*rcx_3 + 0x40))(rcx_3) == 0xc8)
        int64_t* rcx_4 = *arg3
        int64_t var_48
        (*(*rcx_4 + 0x48))(rcx_4, &var_48)
        void** const rax_6 = &data_14323a0b0
        int64_t rsi_1 = var_48
        void** const var_f8 = &data_14323a0b0
        void* var_f0 = nullptr
        int32_t var_e8_1 = 0
        uint64_t var_88 = 0
        int32_t var_40
        int32_t var_80_1 = var_40
        
        if (var_40 != 0)
            sub_1405a4c70(&var_88, var_40, 0)
            memcpy(var_88, rsi_1, var_40 * 2)
            rax_6 = var_f8
        else
            int32_t var_7c_1 = 0
        
        char rax_7 = rax_6[5](&var_f8, &var_88)
        uint64_t rcx_8 = var_88
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        if (rax_7 != 0)
            int32_t r14_1 = 0
            int32_t var_70_1 = 0
            
            if (var_e8_1 s> 0)
                int64_t rsi_2 = 0
                
                do
                    void* rcx_11 = var_f0
                    int64_t var_d8
                    __builtin_memset(&var_d8, 0, 0x39)
                    int32_t r8_2 = 0
                    int64_t* rax_9 = rcx_11 + 0x18 + rsi_2
                    int32_t var_9c_1 = 0
                    char var_98_1 = 0
                    int64_t var_c0_1
                    
                    if (&var_d8 != rax_9)
                        int32_t rdi_4 = rax_9[1].d
                        int64_t r15_1 = *rax_9
                        int64_t var_d0_1
                        var_d0_1.d = rdi_4
                        
                        if (rdi_4 != 0)
                            sub_1405a4c70(&var_d8, rdi_4, 0)
                            memcpy(var_d8, r15_1, rdi_4 * 2)
                            rcx_11 = var_f0
                            r8_2 = var_c0_1:4.d
                    
                    void* rax_11 = rcx_11 + 0x28 + rsi_2
                    int64_t var_c8
                    
                    if (&var_c8 != rax_11)
                        int32_t rdi_5 = *(rax_11 + 8)
                        int64_t r15_2 = *rax_11
                        var_c0_1.d = rdi_5
                        
                        if (rdi_5 != 0 || r8_2 != 0)
                            sub_1405a4c70(&var_c8, rdi_5, r8_2)
                            memcpy(var_c8, r15_2, rdi_5 * 2)
                            rcx_11 = var_f0
                        else
                            var_c0_1:4.d = 0
                    
                    int64_t var_60_1
                    int64_t rdi_6 = sx.q(var_60_1.d)
                    int128_t var_b8_1
                    var_b8_1.q = *(rsi_2 + rcx_11 + 0x38)
                    var_b8_1:8.q = sx.q(*(rsi_2 + rcx_11 + 0x40))
                    int64_t var_a8_1
                    var_a8_1.d = *(rsi_2 + rcx_11 + 0x44)
                    var_a8_1:4.d = *(rsi_2 + rcx_11 + 0x48)
                    char rax_16 = *(rsi_2 + rcx_11 + 0x4c)
                    int32_t rax_17 = *(rsi_2 + rcx_11 + 0x50)
                    char rax_18 = *(rsi_2 + rcx_11 + 0x54)
                    int32_t rax_19 = (rdi_6 + 1).d
                    var_60_1.d = rax_19
                    
                    if (rax_19 s> var_60_1:4.d)
                        sub_140775520(&var_68)
                    
                    int64_t* rdi_7 = var_68 + rdi_6 * 0x48
                    sub_140596d10(rdi_7, &var_d8)
                    sub_140596d10(&rdi_7[2], &var_c8)
                    int64_t rcx_18 = var_c8
                    rdi_7[4] = var_b8_1.q
                    rdi_7[5] = var_b8_1:8.q
                    rdi_7[6].d = var_a8_1.d
                    *(rdi_7 + 0x34) = var_a8_1:4.d
                    rdi_7[7].b = rax_16
                    *(rdi_7 + 0x3c) = rax_17
                    rdi_7[8].b = rax_18
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                    
                    int64_t rcx_19 = var_d8
                    
                    if (rcx_19 != 0)
                        sub_140a74f90(rcx_19)
                    
                    r14_1 += 1
                    rsi_2 += 0x58
                while (r14_1 s< var_e8_1)
        
        var_f8 = &data_14323a0b0
        sub_141da59f0(&var_f0)
        int64_t rcx_21 = var_48
        var_f8 = &data_142e1f570
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)

if (arg5[1].d != 0)
    rbx = *arg5

(*(*rbx + 0x48))(rbx, &var_78)
int32_t i_2
int32_t i_1 = i_2
int64_t* var_58
int64_t* rbx_1 = var_58

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_23 = *rbx_1
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_58

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

sub_141d8e6b0(&var_68)
int64_t* rbx_2 = *(arg2 + 8)
var_78 = &data_142d5a028

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rdi_8 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_8 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_8))

return sub_140745b20(arg5)
