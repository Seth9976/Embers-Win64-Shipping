// 函数: sub_140940b50
// 地址: 0x140940b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1
void* rdi
rdi.b = 0

if (sub_140b0f6c0(&arg_18, u"RECEIPTS") == 0)
    return 0

int64_t* var_58
(*(*arg1 + 0xa0))(arg1, &var_58)
int64_t* var_68
(*(*arg1 + 0x80))(arg1, &var_68)

if (var_58 != 0 && var_68 != 0)
    int16_t* var_b8
    sub_140b294d0(&var_b8, &arg_18, 0)
    int32_t var_b0
    
    if (var_b0 s> 1)
        int64_t var_78
        sub_140b294d0(&var_78, &arg_18, 0)
        int32_t var_70
        
        if (var_70 s> 1)
            int64_t* rcx_5 = var_68
            int64_t var_98
            (*(*rcx_5 + 0x100))(rcx_5, &var_98, &var_78)
            
            if (var_98 != 0)
                int16_t* const rsi_1 = &data_142d40450
                int16_t* const rcx_6 = &data_142d40450
                
                if (var_b0 != 0)
                    rcx_6 = var_b8
                
                int128_t* i_1
                int64_t (* var_88)(int64_t* arg1, int64_t arg2, int64_t* arg3)
                
                if (sub_140a54510(rcx_6, u"RESTORE") != 0)
                    int16_t* rcx_11 = &data_142d40450
                    
                    if (var_b0 != 0)
                        rcx_11 = var_b8
                    
                    if (sub_140a54510(rcx_11, u"DUMP") != 0)
                        if (var_b0 != 0)
                            rsi_1 = var_b8
                        
                        if (sub_140a54510(rsi_1, u"FINALIZE") == 0)
                            int64_t r14_1 = var_98
                            (*(*arg1 + 0xa0))(arg1, &var_88)
                            int64_t (* rcx_15)(int64_t* arg1, int64_t arg2, int64_t* arg3) = var_88
                            
                            if (rcx_15 != 0)
                                void* var_a8 = nullptr
                                int32_t var_a0_1 = 0
                                (*(*rcx_15 + 0x30))(rcx_15, r14_1, &var_a8)
                                void* rax_13 = var_a8
                                int128_t* i = sx.q(var_a0_1) * 0x30 + rax_13
                                i_1 = i
                                
                                if (rax_13 != i)
                                    int64_t* r12_1 = rax_13 + 0x20
                                    
                                    do
                                        void* rsi_2 = *r12_1
                                        void* r15_3 = (sx.q(r12_1[1].d) << 6) + rsi_2
                                        
                                        if (rsi_2 != r15_3)
                                            do
                                                void* j = *(rsi_2 + 0x30)
                                                
                                                for (rdi = sx.q(*(rsi_2 + 0x38)) * 0x38 + j; 
                                                        j != rdi; j += 0x38)
                                                    if (*(j + 0x30) s> 1)
                                                        int64_t (* rcx_18)(int64_t* arg1, 
                                                            int64_t arg2, int64_t* arg3) = var_88
                                                        (*(*rcx_18 + 0x18))(rcx_18, r14_1, j + 0x18)
                                                
                                                rsi_2 += 0x40
                                            while (rsi_2 != r15_3)
                                            
                                            i = i_1
                                        
                                        r12_1 = &r12_1[6]
                                    while (&r12_1[-4] != i)
                                
                                sub_14091aa80(&var_a8)
                            
                            int32_t var_80
                            int64_t* rbx_1 = var_80.q
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t rax_20 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (rax_20 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            rdi.b = 1
                    else
                        sub_14093e160(arg1, var_98)
                        rdi.b = 1
                else
                    uint128_t zmm1 = var_98.o
                    var_88 = sub_140942200
                    uint128_t var_48 = zmm1
                    void* rax_5 = _mm_bsrli_si128(zmm1, 8).q
                    int32_t var_80_1 = 0
                    int128_t zmm0_1 = var_88.o
                    i_1 = nullptr
                    int32_t var_c0_1 = 0
                    int128_t var_38 = zmm0_1
                    
                    if (rax_5 != 0)
                        *(rax_5 + 8) += 1
                    
                    sub_14093b440(&i_1, arg1, &var_38, &var_48)
                    int64_t* rcx_8 = var_58
                    int64_t r8_2
                    r8_2.b = 1
                    (*(*rcx_8 + 0x28))(rcx_8, var_98, r8_2, &i_1)
                    rdi.b = 1
                    int128_t* i_2
                    
                    if (var_c0_1 == 0)
                        i_2 = i_1
                    label_140940cf0:
                        
                        if (i_2 != 0)
                            sub_140a74f90(i_2)
                    else
                        int128_t* i_3 = i_1
                        
                        if (i_3 != 0)
                            (*(*i_3 + 0x38))(i_3, 0)
                            i_2 = i_1
                            
                            if (i_2 != 0)
                                i_2 = sub_140a84c80(i_2, 0, 0)
                                i_1 = i_2
                            
                            int32_t var_c0_2 = 0
                            goto label_140940cf0
            
            int64_t* var_90
            
            if (var_90 != 0)
                var_90[1].d -= 1
                
                if (var_90[1].d == 1)
                    (**var_90)(var_90)
                    int32_t temp5_1 = *(var_90 + 0xc)
                    *(var_90 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_90 + 8))(var_90, 1)
        
        int64_t rcx_24 = var_78
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
    
    int16_t* rcx_25 = var_b8
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)

int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t rax_28 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rax_28 == 1)
            (*(*var_60 + 8))(var_60, 1)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t r13_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (r13_1 == 1)
            int64_t r8_6 = *var_50
            (*(r8_6 + 8))(var_50, zx.q(r13_1), r8_6)

return zx.q(rdi.b)
