// 函数: sub_141af0c70
// 地址: 0x141af0c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* r12 = arg7
int32_t r14 = 0
int32_t var_70 = 0
int32_t var_a0
void* var_98
int64_t* var_68
int64_t var_60
int64_t* var_58
int64_t var_50

if (sub_141aefc80(sub_141a500a0(arg8, arg4), arg3) == 0)
    sub_141a312f0(&var_68)
    int64_t* rax_4 = sub_140596d10(&var_98, &arg2[1])
    int64_t var_b8_1 = arg2[4]
    int512_t zmm1 = sub_141a54490(&var_68, *arg2, rax_4, arg2[3])
    void*** rax_6 = j_sub_140a82f30(0x60)
    void*** rbx_1 = rax_6
    
    if (rax_6 == 0)
        rbx_1 = nullptr
    else
        rax_6[1].d = 1
        *(rax_6 + 0xc) = 1
        *rbx_1 = &data_142d4cbc0
        __builtin_memset(&rbx_1[3], 0, 0x20)
        rbx_1[7] = var_50
        rbx_1[2] = &data_143051d60
        rbx_1[8] = &data_142d4c6c0
        rbx_1[9] = var_60
        rbx_1[0xa] = var_58
        
        if (var_58 != 0)
            var_58[1].d += 1
        
        rbx_1[0xb] = var_50
    
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
    
    var_98 = &rbx_1[2]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    var_a0.q = arg3
    sub_1405a72d0(sub_141a500a0(arg8, zmm1), &var_a0, &var_98)
    
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
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            (**var_58)(var_58)
            int32_t temp6_1 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_58 + 8))(var_58, 1)

int64_t var_78
int64_t* r15_2 = &var_78
void*** rsi
rsi.b = 0
int32_t result
int512_t zmm1_1

do
    var_a0 = 0
    result, zmm1_1 = sub_141a467f0(r12, arg6, &var_a0)
    
    if (result.b != 0)
        *r15_2 = var_a0
        result = 1 << rsi.b
        r14 = var_70 | result
        var_70 = r14
    
    rsi.b += 1
    r12 += 0xa0
    r15_2 += 4
while (rsi.b u< 2)

if (r14 != 0)
    var_60.b &= 0xfc
    int64_t* rax_22 = sub_140a82f30(0x18, 8)
    int64_t zmm0_2 = var_78
    char rcx_18 = var_60.b | 1
    var_60.b = rcx_18
    var_68 = rax_22
    int64_t* rcx_19 = &var_68
    
    if ((rcx_18 & 2) == 0)
        rcx_19 = rax_22
    
    var_78 = -1
    char var_6c_1 = 0
    rcx_19[1] = zmm0_2
    rcx_19[2].d = r14
    *rcx_19 = &data_14305dbd0
    int32_t rax_23 = data_1439e5888
    char r9
    char var_40_1 = r9
    int32_t var_44_1 = arg5.d
    var_58.d = rax_23
    var_58 = -1
    var_50:4.b = 0
    int32_t var_48_1 = 0
    var_78.d = rax_23
    __builtin_memset(&var_98, 0, 0x14)
    void* rax_24 = sub_141a500a0(arg8, zmm1_1)
    var_58.o = var_78.o
    int32_t var_48_2 = *(arg1 + 0x50)
    sub_141aec7b0(sub_1405a8fd0(rax_24 + 0x50, sub_1405be5b0(&var_98), &var_98), arg3, &var_68)
    result = zx.d(var_60.b)
    
    if ((result.b & 1) != 0)
        int64_t* rcx_26 = &var_68
        
        if ((result.b & 2) == 0)
            rcx_26 = var_68
        
        result.b &= 0xfe
        var_60.b = result.b
        result = (**rcx_26)(rcx_26, 0)
        
        if ((var_60.b & 2) == 0)
            result = sub_140a74f90(var_68)

__security_check_cookie(rax_1 ^ &var_d8)
return result
