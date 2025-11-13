// 函数: sub_1421945d0
// 地址: 0x1421945d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t rcx = sx.q(*(arg1 + 0xe8))
int32_t var_a0

if (rcx.d s> 0)
    int64_t rax_2 = *arg3
    var_a0 = 0
    (*(rax_2 + 0x158))(arg3, &var_a0, rcx)

int64_t r12

if ((*(arg3 + 0x29) & 1) != 0)
    r12.b = 0
else
    int64_t rdx_1 = arg3[0x15]
    
    if (rdx_1 s< arg3[0x14])
        char r8_2 = *(sx.q((rdx_1 s>> 3).d) + arg3[0x12])
        arg3[0x15] = rdx_1 + 1
        
        if ((r8_2 & 1 << (rdx_1.b & 7)) == 0)
            r12.b = 0
        else
            r12.b = 1
    else
        sub_140b55370(arg3)
        r12.b = 0

void* var_b0
void** result = &var_b0

if (arg1 + 0x60 != &var_b0)
    *(arg1 + 0x60) = 0
    int64_t* rsi_1 = *(arg1 + 0x68)
    
    if (rsi_1 != 0)
        *(arg1 + 0x68) = 0
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            result = (**rsi_1)(rsi_1)
            int32_t temp1_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rsi_1 + 8))(rsi_1, 1)

if (r12.b != 0)
    int128_t var_58
    int128_t* var_c8_1 = &var_58
    var_a0.q = 0x3ff0000000000000
    int64_t var_88
    int64_t* var_d0_1 = &var_88
    char var_b7 = 0
    int64_t* var_d8_1 = &var_a0
    char var_b8 = 0
    
    if (sub_142196bf0(arg1, arg3, &var_b7, &var_b8, arg4, var_d8_1, var_d0_1, var_c8_1) == 0)
        *(arg3 + 0x29) |= 1
        result = *(arg1 + 8)
        void* rcx_22 = result[2]
        
        if (rcx_22 != 0)
            *(rcx_22 + 0xc) += 1
    else
        result = *(arg1 + 8)
        
        if (result[1].b == 1)
            double zmm3 = var_a0.q
            
            if (zmm3 != 0.0)
                result = *(arg1 + 0x28)
                
                if (result != 0)
                    arg4.o = zx.o(result[0x43])
                    double zmm2 = zmm3 f- *(arg1 + 0x58)
                    arg4.q = arg4.q f- zmm3
                    
                    if (arg4.q f< 0.0 || arg4.q f>= 40.0)
                        result.b = 0
                    else
                        result.b = 1
                    
                    char r8_3 = var_b8
                    bool rcx_6
                    
                    if (r8_3 != *(arg1 + 0x50))
                        rcx_6 = zmm2 <= 0.0
                    else
                        rcx_6 = zmm2 >= 0.0
                    
                    if (result.b != 0 && rcx_6 != 0)
                        var_b0 = *arg2
                        int64_t* rax_13 = arg2[1]
                        
                        if (rax_13 != 0)
                            rax_13[1].d += 1
                            zmm3 = var_a0.q
                        
                        int64_t var_70
                        int512_t zmm1
                        result, zmm1 = sub_14218f7c0(arg1, &var_b0, r8_3, zmm3, arg4, &var_70)
                        int64_t rcx_12 = var_88
                        
                        if (rcx_12 == var_70)
                            void** result_1
                            result = result_1
                            int32_t var_78
                            int64_t var_68
                            int32_t var_60
                            
                            if (result == var_68 && var_78 == var_60)
                                char r8_4 = var_b7
                                
                                if (r8_4 == 0)
                                    int32_t rax_15 = sx.d(var_88:2.w)
                                    int128_t zmm0_1 = var_88.o
                                    *(arg1 + 0x70) = rcx_12.d & 0x3fff
                                    *(arg1 + 0x74) = rax_15 & 0x3fff
                                    *(arg1 + 0xb5) = zmm0_1
                                    *(arg1 + 0xc5) = var_78
                                else
                                    *(arg1 + 0xb5) = var_58
                                    int32_t var_48
                                    *(arg1 + 0xc5) = var_48
                                
                                *(arg1 + 0xb4) = r8_4
                                int64_t* rcx_14 = *arg2
                                int64_t* rax_18 = (*(*rcx_14 + 0x98))(rcx_14, &var_b0)
                                int64_t* rbx_1 = rax_18[1]
                                
                                if (rbx_1 != 0)
                                    rbx_1[1].d += 1
                                
                                void var_98
                                
                                if (arg1 + 0x60 == &var_98)
                                label_1421948db:
                                    
                                    if (rbx_1 != 0)
                                        rbx_1[1].d -= 1
                                        
                                        if (rbx_1[1].d == 1)
                                            (**rbx_1)(rbx_1)
                                            int32_t temp4_1 = *(rbx_1 + 0xc)
                                            *(rbx_1 + 0xc) -= 1
                                            
                                            if (temp4_1 == 1)
                                                (*(*rbx_1 + 8))(rbx_1, 1)
                                else
                                    *(arg1 + 0x60) = *rax_18
                                    int64_t* rsi_2 = *(arg1 + 0x68)
                                    
                                    if (rbx_1 == rsi_2)
                                        goto label_1421948db
                                    
                                    *(arg1 + 0x68) = rbx_1
                                    
                                    if (rsi_2 != 0)
                                        rsi_2[1].d -= 1
                                        
                                        if (rsi_2[1].d == 1)
                                            (**rsi_2)(rsi_2)
                                            int32_t temp7_1 = *(rsi_2 + 0xc)
                                            *(rsi_2 + 0xc) -= 1
                                            
                                            if (temp7_1 == 1)
                                                (*(*rsi_2 + 8))(rsi_2, 1)
                                
                                if (rax_13 != 0)
                                    rax_13[1].d -= 1
                                    
                                    if (rax_13[1].d == 1)
                                        (**rax_13)(rax_13)
                                        int32_t temp6_1 = *(rax_13 + 0xc)
                                        *(rax_13 + 0xc) -= 1
                                        
                                        if (temp6_1 == 1)
                                            (*(*rax_13 + 8))(rax_13, 1)
                                
                                var_b0 = *arg2
                                void* rax_25 = arg2[1]
                                void* var_a8_3 = rax_25
                                
                                if (rax_25 != 0)
                                    *(rax_25 + 8) += 1
                                
                                result = sub_14219ae80(arg1, &var_b0, arg1 + 0xb5, zmm1)
            else
                var_b0 = *arg2
                void* rax_7 = arg2[1]
                void* var_a8_1 = rax_7
                
                if (rax_7 != 0)
                    *(rax_7 + 8) += 1
                
                result = sub_14219b390(arg1, &var_b0, arg4)
else if ((*(arg3 + 0x29) & 1) == 0)
    var_b0 = *arg2
    void* rax_27 = arg2[1]
    void* var_a8_4 = rax_27
    
    if (rax_27 != 0)
        *(rax_27 + 8) += 1
    
    result = sub_14219b860(arg1, &var_b0)

__security_check_cookie(rax_1 ^ &var_f8)
return result
