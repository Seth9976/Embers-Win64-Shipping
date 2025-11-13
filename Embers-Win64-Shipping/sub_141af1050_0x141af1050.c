// 函数: sub_141af1050
// 地址: 0x141af1050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* r12 = arg7
int32_t r14 = 0
int32_t var_38 = 0
int32_t var_b0
void* var_a0
int64_t* var_80
int64_t* var_70
int64_t var_68

if (sub_141aefd50(sub_141a500a0(arg8, arg4), arg3) == 0)
    sub_141a312f0(&var_80)
    int64_t* rax_4 = sub_140596d10(&var_a0, &arg2[1])
    int64_t var_c8_1 = arg2[4]
    int512_t zmm1 = sub_141a54490(&var_80, *arg2, rax_4, arg2[3])
    void*** rax_6 = j_sub_140a82f30(0x60)
    void*** rbx_1 = rax_6
    
    if (rax_6 == 0)
        rbx_1 = nullptr
    else
        rax_6[1].d = 1
        *(rax_6 + 0xc) = 1
        *rbx_1 = &data_142d4cbc0
        __builtin_memset(&rbx_1[3], 0, 0x20)
        rbx_1[7] = var_68
        rbx_1[2] = &data_143051df0
        rbx_1[8] = &data_142d4c6c0
        int64_t var_78
        rbx_1[9] = var_78
        rbx_1[0xa] = var_70
        
        if (var_70 != 0)
            var_70[1].d += 1
        
        rbx_1[0xb] = var_68
    
    int64_t* rsi_1 = &rbx_1[3]
    
    if (rbx_1 == -0x10)
        rsi_1 = nullptr
    
    if (rsi_1 != 0)
        void* rax_11
        
        if (*rsi_1 != 0)
            rax_11 = rsi_1[1]
        
        if (*rsi_1 == 0 || rax_11 == 0 || *(rax_11 + 8) s<= 0)
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            *rsi_1 = &rbx_1[2]
            int64_t* rcx_5 = rsi_1[1]
            
            if (rbx_1 != rcx_5)
                if (rbx_1 != 0)
                    *(rbx_1 + 0xc) += 1
                    rcx_5 = rsi_1[1]
                
                if (rcx_5 != 0)
                    int32_t temp8_1 = *(rcx_5 + 0xc)
                    *(rcx_5 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rcx_5 + 8))(rcx_5, 1)
                
                rsi_1[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp7_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*rbx_1)[1](rbx_1, 1)
    
    var_a0 = &rbx_1[2]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    var_b0.q = arg3
    sub_1405a72d0(sub_141a500a0(arg8, zmm1), &var_b0, &var_a0)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp6_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_70 + 8))(var_70, 1)

int128_t var_48
int32_t* r15_2 = &var_48
void*** rsi
rsi.b = 0
uint32_t result
int512_t zmm1_1

do
    var_b0 = 0
    result, zmm1_1 = sub_141a467f0(r12, arg6, &var_b0)
    
    if (result.b != 0)
        *r15_2 = var_b0
        result = 1 << rsi.b
        r14 = var_38 | result
        var_38 = r14
    
    rsi.b += 1
    r12 += 0xa0
    r15_2 = &r15_2[1]
while (rsi.b u< 4)

if (r14 != 0)
    var_70.b &= 0xfc
    int64_t* rax_22 = sub_140a82f30(0x20, 8)
    int128_t zmm0_2 = var_48
    char rcx_18 = var_70.b | 1
    var_80 = rax_22
    var_70.b = rcx_18
    int64_t* rcx_19 = &var_80
    int64_t var_ac_1 = -1
    
    if ((rcx_18 & 2) == 0)
        rcx_19 = rax_22
    
    char var_a4_1 = 0
    *(rcx_19 + 8) = zmm0_2
    rcx_19[3].d = r14
    *rcx_19 = &data_14305dbf0
    int32_t rax_23 = data_1439e5888
    char r9
    char var_50_1 = r9
    int32_t var_54_1 = arg5.d
    var_68.d = rax_23
    var_68 = -1
    char var_5c_1 = 0
    int32_t var_58_1 = 0
    var_b0 = rax_23
    __builtin_memset(&var_a0, 0, 0x14)
    void* rax_24 = sub_141a500a0(arg8, zmm1_1)
    var_68.o = var_b0.o
    int32_t var_58_2 = *(arg1 + 0x50)
    sub_141aec940(sub_1405a8fd0(rax_24 + 0x50, sub_1405be5b0(&var_a0), &var_a0), arg3, &var_80)
    result = zx.d(var_70.b)
    
    if ((result.b & 1) != 0)
        int64_t* rcx_26 = &var_80
        
        if ((result.b & 2) == 0)
            rcx_26 = var_80
        
        result.b &= 0xfe
        var_70.b = result.b
        result = (**rcx_26)(rcx_26, 0)
        
        if ((var_70.b & 2) == 0)
            result = sub_140a74f90(var_80)

__security_check_cookie(rax_1 ^ &var_e8)
return result
