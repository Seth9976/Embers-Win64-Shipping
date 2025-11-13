// 函数: sub_141b14fc0
// 地址: 0x141b14fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rax_2 = *(arg3 + 0x24)
int32_t var_d8
int64_t rbx

if (rax_2 == 0x80000000)
    int64_t* rbx_1 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        rbx_1 = 4
    
    rbx = *(rbx_1 + arg3)
else
    var_d8 = rax_2
    int32_t var_d4_1 = 0
    rbx = var_d8.q

int128_t var_68
int128_t* rsi = &var_68
int32_t r14 = 0
int32_t var_58 = 0
int64_t rdi
rdi.b = 0
void* r15 = arg1 + 0x48
int32_t result
int32_t zmm6_1

do
    var_d8 = 0
    result, zmm6_1 = sub_141a467f0(r15, rbx, &var_d8)
    
    if (result.b != 0)
        *rsi = var_d8
        result = 1 << rdi.b
        r14 = var_58 | result
        var_58 = r14
    
    rdi.b += 1
    r15 += 0xa0
    rsi += 4
while (rdi.b u< 4)

if (r14 != 0)
    int32_t var_48_1 = zmm6_1
    int64_t var_b8
    sub_141a52640(arg1, &var_b8)
    int64_t rdi_1 = var_b8
    int64_t* var_a0
    char var_90
    
    if (sub_141aefae0(arg4 + 0x60, rdi_1) == 0)
        sub_141a312f0(&var_a0)
        var_d8.q = 0
        int64_t var_c8 = 0
        void var_b0
        int64_t* rax_4 = sub_140596d10(&var_b0, arg1 + 0x28)
        int64_t var_e8_1 = 0
        sub_141a54490(&var_a0, *(arg1 + 0x20), rax_4, 0)
        void*** rax_5 = j_sub_140a82f30(0x60)
        void*** rsi_1 = rax_5
        
        if (rax_5 == 0)
            rsi_1 = nullptr
        else
            rax_5[1].d = 1
            *(rax_5 + 0xc) = 1
            *rsi_1 = &data_142d4cbc0
            __builtin_memset(&rsi_1[3], 0, 0x20)
            int64_t var_88
            rsi_1[7] = var_88
            rsi_1[2] = &data_143054128
            rsi_1[8] = &data_142d4c6c0
            int64_t var_98
            rsi_1[9] = var_98
            void* rax_8 = var_90.q
            rsi_1[0xa] = rax_8
            
            if (rax_8 != 0)
                *(rax_8 + 8) += 1
            
            rsi_1[0xb] = var_88
        
        int64_t* r15_1 = &rsi_1[3]
        
        if (rsi_1 == -0x10)
            r15_1 = nullptr
        
        if (r15_1 != 0)
            void* rax_10
            
            if (*r15_1 != 0)
                rax_10 = r15_1[1]
            
            if (*r15_1 == 0 || rax_10 == 0 || *(rax_10 + 8) s<= 0)
                if (rsi_1 != 0)
                    rsi_1[1].d += 1
                
                *r15_1 = &rsi_1[2]
                int64_t* rcx_7 = r15_1[1]
                
                if (rsi_1 != rcx_7)
                    if (rsi_1 != 0)
                        *(rsi_1 + 0xc) += 1
                        rcx_7 = r15_1[1]
                    
                    if (rcx_7 != 0)
                        int32_t temp8_1 = *(rcx_7 + 0xc)
                        *(rcx_7 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rcx_7 + 8))(rcx_7, 1)
                    
                    r15_1[1] = rsi_1
                
                if (rsi_1 != 0)
                    rsi_1[1].d -= 1
                    
                    if (rsi_1[1].d == 1)
                        (**rsi_1)(rsi_1)
                        int32_t temp7_1 = *(rsi_1 + 0xc)
                        *(rsi_1 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*rsi_1)[1](rsi_1, 1)
        
        var_d8.q = &rsi_1[2]
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        var_c8 = rdi_1
        sub_1405a72d0(arg4 + 0x60, &var_c8, &var_d8)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp2_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rsi_1)[1](rsi_1, 1)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp4_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rsi_1)[1](rsi_1, 1)
        
        int64_t* rsi_2 = var_90.q
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp6_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rsi_2 + 8))(rsi_2, 1)
    
    int32_t zmm0_2 = sub_141a47d70(arg1, rbx)
    char rbx_2 = *(arg1 + 0x2c8)
    char var_90_1 = var_90 & 0xfc
    int64_t* rax_20 = sub_140a82f30(0x20, 8)
    int128_t zmm0_3 = var_68
    char result_1 = var_90_1 | 1
    var_a0 = rax_20
    int64_t* rcx_19 = &var_a0
    
    if ((result_1 & 2) == 0)
        rcx_19 = rax_20
    
    *(rcx_19 + 8) = zmm0_3
    rcx_19[3].d = r14
    *rcx_19 = &data_14305da08
    int32_t var_74_1 = zmm0_2
    char var_70_1 = rbx_2
    int32_t var_78_1 = *(arg4 + 0x188)
    int128_t var_88_1 = *(arg4 + 0x124)
    sub_141aec330(sub_1405a8fd0(arg4 + 0xb0, sub_1405be5b0(arg4 + 0x110), arg4 + 0x110), rdi_1, 
        &var_a0)
    result = zx.d(result_1)
    
    if ((result.b & 1) != 0)
        int64_t* rcx_23 = &var_a0
        
        if ((result.b & 2) == 0)
            rcx_23 = var_a0
        
        result.b &= 0xfe
        char var_90_3 = result.b
        result = (**rcx_23)(rcx_23, 0)
        
        if ((var_90_3 & 2) == 0)
            result = sub_140a74f90(var_a0)

__security_check_cookie(rax_1 ^ &var_108)
return result
