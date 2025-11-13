// 函数: sub_141021a40
// 地址: 0x141021a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* r14 = arg1
void* var_e8 = arg2
uint64_t rbx_1 = zx.q(*(arg3 + 0x18)) * 0x50
int32_t var_e0
sub_140865c40(arg1 + 0xc0 + rbx_1, &var_e0, arg2)
int64_t rax_3 = sx.q(var_e0)
void* const rcx_2

if (rax_3.d == 0xffffffff)
    rcx_2 = nullptr
else
    rcx_2 = *(rbx_1 + r14 + 0xc0) + rax_3 * 0x18

int64_t* rax_5 = rcx_2 + 8

if (rcx_2 == 0)
    rax_5 = nullptr

int32_t* result

if (rax_5 != 0)
    result = *rax_5

if (rax_5 == 0 || result == 0)
    void* rax_6 = j_sub_140a82f30(0x1b8)
    int32_t* result_4
    
    if (rax_6 == 0)
        result_4 = nullptr
    else
        result_4 = sub_14100d450(rax_6)
    
    void* rcx_4 = var_e8
    int32_t i_1 = *(arg3 + 0x18)
    int32_t* result_1 = result_4
    int32_t i_4 = i_1
    int32_t rbx_3
    
    if (*(rcx_4 + 0x790) == 0)
        rbx_3 = 0
    else
        rbx_3 = *(r14 + 0xb0) * *(r14 + 0x98)
    
    int32_t var_c8 = *(rcx_4 + 0x30)
    int32_t var_c4_1 = *(rcx_4 + 0x50)
    int32_t var_c0_1 = *(r14 + 0xbc)
    int32_t var_b8_1 = *(r14 + 0xb8)
    int32_t var_b4_1 = *(rcx_4 + 0x794)
    int32_t var_bc_1 = rbx_3
    int32_t var_b0_1 = *(rcx_4 + 0x798)
    void* r9_1 = sub_141025310(result_4, &var_c8, arg3)
    void* rax_14 = var_e8
    int32_t r8_2 = 0
    int32_t r11_1 = *(rax_14 + 0x30)
    int64_t rdi_1 = *(rax_14 + 0x28)
    
    if (r11_1 s> 0)
        int32_t* result_5 = result_1
        r9_1 = &result_5[0x12]
        
        do
            void* rdx_4 = *r9_1
            uint64_t rax_17 = zx.q((r8_2 << 6) + result_5[6])
            
            if ((rdx_4.b & 1) != 0)
                rdx_4 = (rdx_4 s>> 1) + r9_1
            
            int64_t rcx_6 = sx.q(r8_2)
            r8_2 += 1
            int64_t rcx_7 = rcx_6 << 5
            *(rax_17 + rdx_4) = *(rcx_7 + rdi_1)
            *(rax_17 + rdx_4 + 0x10) = *(rcx_7 + rdi_1 + 0x10)
            result_5[0x18].b = 1
        while (r8_2 s< r11_1)
        
        rax_14 = var_e8
    
    int32_t* result_2 = result_1
    int128_t* r10_1 = *(rax_14 + 0x48)
    int32_t i = 0
    
    if (result_2[4] u> 0)
        r9_1 = &result_2[0x12]
        
        do
            void* rcx_9 = *r9_1
            uint64_t rax_20 = zx.q(i * result_2[0xf] + result_2[7])
            
            if ((rcx_9.b & 1) != 0)
                rcx_9 = (rcx_9 s>> 1) + r9_1
            
            i += 1
            *(rax_20 + rcx_9) = *r10_1
            *(rax_20 + rcx_9 + 0x10) = r10_1[1]
            result_2[0x18].b = 1
        while (i u< result_2[4])
        
        result_2 = result_1
        rax_14 = var_e8
    
    int128_t* r8_3 = *(rax_14 + 0x68)
    void* rcx_10 = *(result_2 + 0x48)
    
    if ((rcx_10.b & 1) != 0)
        rcx_10 = (rcx_10 s>> 1) + &result_2[0x12]
    
    uint64_t rax_22 = zx.q(result_2[8])
    *(rax_22 + rcx_10) = *r8_3
    *(rax_22 + rcx_10 + 0x10) = r8_3[1]
    result_2[0x18].b = 1
    
    if (rbx_3 != 0)
        int32_t rcx_12 = *(r14 + 0x50)
        int32_t rax_23 = 0
        int32_t var_ec_1 = 0
        int32_t r8_4 = 0
        int32_t var_100_1 = 0
        
        if (rcx_12 != 0)
            int32_t* result_3 = result_1
            
            do
                int64_t rdi_2 = sx.q(rax_23)
                void** rax_26 = rdi_2 * 0xa0 + *(r14 + 0x48)
                void* r13_1 = *rax_26
                void* var_98_1 = r13_1
                int32_t rcx_13 = *(r13_1 + 0x1c)
                void* const rdx_5 = *(r13_1 + 0x48)
                int32_t var_f8_1 = rcx_13
                int64_t var_d0_1
                
                if (data_1439c7a34 u<= 1)
                label_141021d77:
                    
                    if (rdx_5 == 0)
                        var_d0_1 = 0
                    else
                        var_d0_1 = *(rdx_5 + 0xb8)
                else
                    if (rdx_5 != 0)
                        while (*(*(rdx_5 + 0x30) + 0x18) != i_1)
                            rdx_5 = *(rdx_5 + 0xe0)
                            
                            if (rdx_5 == 0)
                                break
                        
                        goto label_141021d77
                    
                    rdx_5 = nullptr
                    var_d0_1 = 0
                
                if (rdx_5 != 0)
                    r9_1 = sub_141012560(result_3, *(rdx_5 + 0x80), rdx_5, r9_1.b)
                    r8_4 = var_100_1
                    rcx_13 = var_f8_1
                    result_3 = result_1
                
                int32_t rax_27 = *(r13_1 + 0x38)
                int32_t r10_2 = 0
                int32_t var_f4_1 = 0
                
                if (rax_27 != 0)
                    do
                        int64_t* r15_3 = (sx.q(r10_2) << 5) + *(r13_1 + 0x30)
                        void* rdi_3 = *r15_3
                        
                        if (data_1439c7a34 u> 1)
                            if (rdi_3 != 0)
                                while (*(*(rdi_3 + 0x28) + 0x18) != i_1)
                                    rdi_3 = *(rdi_3 + 0xd8)
                                    
                                    if (rdi_3 == 0)
                                        break
                            else
                                rdi_3 = nullptr
                        
                        void* i_2 = *(rdi_3 + 0x78)
                        int64_t r8_6 = *(result_3 + 0xd0)
                        uint32_t rcx_16 = (i_2 u>> 4).d
                        int32_t rdx_8 = (0x9e3779b9 - rcx_16) ^ rcx_16 << 8
                        int32_t r12_3 = neg.d(rcx_16 + rdx_8) ^ rdx_8 u>> 0xd
                        int32_t rcx_19 = (rcx_16 - rdx_8 - r12_3) ^ r12_3 u>> 0xc
                        int32_t rdx_11 = (rdx_8 - rcx_19 - r12_3) ^ rcx_19 << 0x10
                        int32_t r12_6 = (r12_3 - rdx_11 - rcx_19) ^ rdx_11 u>> 5
                        int32_t rcx_22 = (rcx_19 - rdx_11 - r12_6) ^ r12_6 u>> 3
                        int32_t rdx_14 = (rdx_11 - rcx_22 - r12_6) ^ rcx_22 << 0xa
                        int32_t r12_9 = (r12_6 - rdx_14 - rcx_22) ^ rdx_14 u>> 0xf
                        uint32_t rdx_15
                        rdx_15.b = 0
                        char* r9_3 = zx.q(result_3[0x3a]) & zx.q(r12_9)
                        uint64_t rax_47
                        
                        if (r8_6 != 0)
                            rax_47 = zx.q(r9_3.d)
                        
                        if (r8_6 == 0 || r9_3[r8_6] s< 0)
                        label_141021e77:
                            char var_fc
                            sub_141011ff0(&result_3[0x32], rdx_15.b, &result_3[0x32], r9_3.d, i_2, 
                                r12_9, var_fc)
                            
                            if (i_2 != 0)
                                *(i_2 + 8) += 1
                            
                            int64_t r13_2 = sx.q(result_3[0x40])
                            int32_t rax_48 = (r13_2 + 1).d
                            result_3[0x40] = rax_48
                            
                            if (rax_48 s> result_3[0x41])
                                sub_1405a4d70(&result_3[0x3e])
                            
                            *(*(result_3 + 0xf8) + (r13_2 << 3)) = i_2
                            *(rdi_3 + 8) += 1
                            int64_t r14_1 = sx.q(result_3[0x44])
                            int32_t rax_50 = (r14_1 + 1).d
                            result_3[0x44] = rax_50
                            
                            if (rax_50 s> result_3[0x45])
                                sub_1405a4d70(&result_3[0x42])
                            
                            int64_t rax_51 = *(result_3 + 0x108)
                            int64_t var_a0 = 0
                            *(rax_51 + (r14_1 << 3)) = rdi_3
                            sub_1405d1550(&var_a0)
                            result_3 = result_1
                            r13_1 = var_98_1
                        else
                            while (i_2 != *(*(result_3 + 0xd8) + (rax_47 << 3)))
                                r9_3 = zx.q(r9_3.d + 1)
                                rdx_15.b += 1
                                rax_47 = zx.q(r9_3.d)
                                
                                if (r9_3[r8_6] s< rdx_15.b)
                                    goto label_141021e77
                        
                        r14 = arg1
                        r8_4 = var_100_1
                        int32_t rcx_27 = *(r14 + 0x98)
                        int32_t var_50_1 = 0
                        int32_t var_4c_1 = r8_4
                        int32_t i_3 = 0
                        int64_t var_60_1 = zx.q(*(r15_3 + 0xc)) + *(rdi_3 + 0xb0)
                        r9_1 = zx.q((*((rdi_2 << 2) + *(r14 + 0xa0)) + var_f4_1) * rcx_27)
                        int32_t var_54_1 = *(r15_3 + 0x14) * var_f8_1 * 3 + *(r13_1 + 0x20)
                        
                        if (rcx_27 != 0)
                            int128_t zmm0_1 = (zx.d(r15_3[2].b) << 8 | zx.d(rcx_13.b)).o
                            
                            do
                                void* rax_63 = *(result_3 + 0x48)
                                uint64_t r8_9 =
                                    zx.q(result_3[0xb] + (i_3 + r9_1.d) * result_3[0xf] + 0x20)
                                
                                if ((rax_63.b & 1) != 0)
                                    rax_63 = (rax_63 s>> 1) + &result_3[0x12]
                                
                                *(r8_9 + rax_63) = var_d0_1.o
                                i_3 += 1
                                *(r8_9 + rax_63 + 0x10) = zmm0_1
                                result_3[0x18].b = 1
                                result_3 = result_1
                            while (i_3 u< *(r14 + 0x98))
                            
                            r8_4 = var_100_1
                        
                        i_1 = i_4
                        r10_2 = var_f4_1 + 1
                        var_f4_1 = r10_2
                    while (r10_2 u< rax_27)
                
                r8_4 += rax_26[0xe].d
                rax_23 = var_ec_1 + 1
                var_100_1 = r8_4
                var_ec_1 = rax_23
            while (rax_23 u< rcx_12)
    
    void** var_78 = &var_e8
    int32_t** var_70_1 = &result_1
    void var_a8
    sub_140bd29a0(zx.q(i_1) * 0x50 + 0xc0 + r14, &var_a8, &var_78, nullptr)
    result = result_1

__security_check_cookie(rax_1 ^ &var_148)
return result
