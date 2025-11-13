// 函数: sub_1426bb290
// 地址: 0x1426bb290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg2
void* rdx = *(arg2 + 0x38)
int64_t* rax_1

if (rdx == 0)
label_1426bb2d1:
    rax_1 = *(arg1 + 0xa8)
    
    if (rax_1 == 0)
        rax_1 = sub_141ee69e0(arg1)
    
    void* const rsi_1
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        void* rbx_1 = rax_1[0x27]
        
        if (rbx_1 == 0)
            rsi_1 = nullptr
        else
            void* rax_2 = sub_14272b250()
            void* rdx_1 = *(rbx_1 + 0x10)
            rax_1 = sx.q(*(rax_2 + 0x38))
            
            if (rax_1.d s> *(rdx_1 + 0x38))
                rsi_1 = nullptr
            else if ((*(rdx_1 + 0x30))[rax_1] != rax_2 + 0x30)
                rsi_1 = nullptr
            else
                rsi_1 = *(rbx_1 + 0xa0)
    
    if (rsi_1 != 0)
        int64_t rdx_2 = sx.q(*(arg1 + 0x118))
        void* const i
        int64_t* r10_1
        
        if (rdx_2.d == 0)
            i = nullptr
            r10_1 = nullptr
        else
            i = *(zx.q(*(arg1 + 0x260)) * 0x58 + *(arg1 + 0x110) + 8)
            
            if (i == 0)
                r10_1 = nullptr
            else
                r10_1 = *(i + 0x48)
        
        if (r10_1 != 0)
            int32_t rax_5 = (rdx_2 - 1).d
            
            if (rax_5 s< 0 || rax_5 s>= rdx_2.d)
                rax_5.b = 0
            else
                rax_5.b = 1
            
            if (i != 0)
                int64_t rdx_3 = sx.q(r10_1[0xc].d)
                int32_t r9_1 = 0
                
                if (rdx_3.d s> 0)
                    void* rax_6 = r10_1[0xb]
                    int64_t rcx_4 = 0
                    
                    while (*rax_6 != i)
                        if (*(rax_6 + 8) == i)
                            break
                        
                        r9_1 += 1
                        rcx_4 += 1
                        rax_6 += 0x30
                        
                        if (rcx_4 s>= rdx_3)
                            break
            
            rax_1 = (*(*r10_1 + 0x2b8))(r10_1, arg1)
        
        if (r10_1 == 0 || rax_1.b != 0)
            void* var_a8 = nullptr
            int16_t arg_18 = 0
            
            if (sub_1426b6cf0(rsi_1, r12, &var_a8, &arg_18).b != 0)
                int32_t r9_4 = *(arg1 + 0x118) - 1
                int64_t var_88
                __builtin_memset(&var_88, 0, 0x30)
                int64_t var_50 = 0
                int32_t var_48 = 0
                char rax_8 = sub_1426c28f0(arg1, r12, i, r9_4)
                void* r13 = var_a8
                uint32_t rsi_2 = zx.d(arg_18)
                char var_58 = rax_8
                void* var_98 = r13
                void* rbx_3 = zx.q(rax_8) * 0x38 + *(arg1 + 0x120)
                int64_t var_90 = 0
                char var_57 = 0
                int32_t arg_20 = *(rbx_3 + 0x30)
                int32_t r15 = *(rbx_3 + 0x28)
                
                if (r15 != rsi_2)
                    sub_140820180(rbx_3 + 0x20, rsi_2)
                    *(rbx_3 + 8) = r13
                
                int64_t var_68
                
                if (&var_68 != rbx_3 + 0x20)
                    uint32_t count = *(rbx_3 + 0x28)
                    int64_t r14_1 = *(rbx_3 + 0x20)
                    int64_t var_60
                    var_60.d = count
                    int32_t var_5c
                    
                    if (count != 0 || var_5c != 0)
                        sub_1405da9e0(&var_68, count, var_5c)
                        memcpy(var_68, r14_1, count)
                
                int32_t rax_12
                rax_12.b = r15 == rsi_2
                int128_t zmm6 = sub_1426b4860(&var_98, arg1, r13, &arg_20, rax_12)
                void* r14_2 = arg1 + 0x110
                int64_t rbx_4 = sx.q(*(r14_2 + 8))
                int32_t rax_13 = (rbx_4 + 1).d
                *(r14_2 + 8) = rax_13
                
                if (rax_13 s> *(r14_2 + 0xc))
                    sub_1407755b0(r14_2)
                
                int64_t** r15_1 = nullptr
                int64_t* rcx_14 = rbx_4 * 0x58 + *r14_2
                __builtin_memset(&rcx_14[2], 0, 0x30)
                rcx_14[9] = 0
                rcx_14[0xa].d = 0
                sub_1426a7bc0(rcx_14, &var_98)
                int32_t i_1 = 0
                *(arg1 + 0x260) = *(arg1 + 0x118) - 1
                
                if (*(r13 + 0x70) s> 0)
                    void* rdx_13 = arg1 + 0x140
                    
                    do
                        int64_t* rbx_5 = *(r15_1 + *(r13 + 0x68))
                        int64_t r12_2 =
                            zx.q(*(rbx_5 + 0x52)) + *(zx.q(*(arg1 + 0x260)) * 0x58 + *r14_2 + 0x30)
                        zmm6 = sub_1426b7ce0(rbx_5, rdx_13, zmm6)
                        void* r14_4 = *r14_2 + zx.q(*(arg1 + 0x260)) * 0x58
                        int64_t r13_1 = sx.q(*(r14_4 + 0x18))
                        int32_t rax_19 = (r13_1 + 1).d
                        *(r14_4 + 0x18) = rax_19
                        
                        if (rax_19 s> *(r14_4 + 0x1c))
                            sub_1405a4d70(r14_4 + 0x10)
                        
                        *(*(r14_4 + 0x10) + (r13_1 << 3)) = rbx_5
                        
                        if ((rbx_5[0xb].b & 1) != 0)
                            if ((*(rbx_5 + 0x55) & 4) != 0)
                                rbx_5 = sub_1426b2ab0(rbx_5, arg1, r12_2)
                            
                            if (rbx_5 != 0)
                                (*(*rbx_5 + 0x2b0))(rbx_5, arg1, r12_2)
                        
                        r13 = var_a8
                        r14_2 = arg1 + 0x110
                        i_1 += 1
                        rdx_13 = arg1 + 0x140
                        r15_1 = &r15_1[1]
                    while (i_1 s< *(r13 + 0x70))
                    
                    r12 = arg2
                
                r14_2.b = 0
                int32_t rdx_17 = data_143b58008
                int32_t rcx_22 = data_143b58014 + 1
                data_143b58014 = rcx_22
                int64_t rbx_6 = sx.q(rdx_17 - 1)
                
                if (rdx_17 - 1 s>= 0)
                    int64_t rsi_4 = rbx_6 << 4
                    int64_t temp0_1
                    
                    do
                        int64_t rax_24 = data_143b58000
                        
                        if (*(rsi_4 + rax_24 + 8) == 0)
                            r14_2.b = 1
                        else
                            int64_t* rcx_23 = *(rsi_4 + rax_24)
                            
                            if (rcx_23 == 0)
                                r14_2.b = 1
                            else if ((*(*rcx_23 + 0x50))(rcx_23, arg1, r12) == 0)
                                r14_2.b = 1
                        
                        rsi_4 -= 0x10
                        temp0_1 = rbx_6
                        rbx_6 -= 1
                    while (temp0_1 - 1 s>= 0)
                    rcx_22 = data_143b58014
                    rdx_17 = data_143b58008
                
                data_143b58014 = rcx_22 - 1
                
                if (r14_2.b != 0 && rcx_22 - 1 s<= 0)
                    int32_t r14_5 = rdx_17
                    int32_t rbx_7 = 0
                    
                    if (rdx_17 s> 0)
                        int64_t* rsi_5 = nullptr
                        
                        do
                            int64_t rax_27 = data_143b58000
                            
                            if (*(rsi_5 + rax_27 + 8) == 0)
                                sub_1405a4880(&data_143b58000, rbx_7, 1, 1)
                            else
                                int64_t* rcx_25 = *(rsi_5 + rax_27)
                                
                                if (rcx_25 == 0)
                                    sub_1405a4880(&data_143b58000, rbx_7, 1, 1)
                                else if ((*(*rcx_25 + 0x20))(rcx_25) != 0)
                                    sub_1405a4880(&data_143b58000, rbx_7, 1, 1)
                                else
                                    rbx_7 += 1
                                    rsi_5 = &rsi_5[2]
                            
                            rdx_17 = data_143b58008
                        while (rbx_7 s< rdx_17)
                    
                    int32_t rax_30 = rdx_17 * 2
                    
                    if (rax_30 s<= 2)
                        rax_30 = 2
                    
                    data_143b58010 = rax_30
                    
                    if (r14_5 s> rax_30 && data_143b5800c != rdx_17)
                        sub_1405a5410(&data_143b58000, rdx_17)
                
                char var_b8 = 1
                sub_1426bcb00(arg1, r13, zx.d(*(arg1 + 0x260)), r13, 0, 3)
                sub_140745b20(&var_50)
                int64_t rcx_28 = var_68
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
                
                int64_t var_78
                
                if (var_78 != 0)
                    sub_140a74f90(var_78)
                
                int64_t rcx_30 = var_88
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                uint64_t rax_31
                rax_31.b = 1
                return rax_31
else
    void* rcx = *(arg1 + 0xb8)
    
    if (rcx == 0)
        goto label_1426bb2d1
    
    if (sub_1426b60e0(rcx, rdx).b != 0)
        goto label_1426bb2d1

rax_1.b = 0
return rax_1
