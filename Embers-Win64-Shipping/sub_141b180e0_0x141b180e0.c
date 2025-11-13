// 函数: sub_141b180e0
// 地址: 0x141b180e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rax_2 = *(arg3 + 0x24)
int32_t var_b0
int32_t var_a8
int64_t rdx
int64_t rbx

if (rax_2 == 0x80000000)
    int64_t* rbx_1 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        rbx_1 = 4
    
    rbx = *(rbx_1 + arg3)
    rdx = rbx
else
    var_b0 = rax_2
    int32_t var_ac_1 = 0
    rbx = var_b0.q
    var_a8 = rax_2
    int32_t var_a4_1 = 0
    rdx = var_a8.q

int32_t result
int128_t zmm0
int512_t zmm6
result, zmm0, zmm6 = sub_141a47d70(arg1, rdx)
int32_t rcx = *(arg1 + 0x2c8)
zmm6.o = zmm0
int64_t* var_a0
int64_t var_68
int64_t r14
bool cond:6_1

if (rcx == 2)
    int32_t rsi_5 = 0
    int64_t* r15_3 = &var_68
    r14.b = 0
    int32_t var_60_1 = 0
    int64_t rdi_3 = *sub_141aeeec0(arg1, &var_a8, arg4 + 0x60)
    char rax_19 = *(arg1 + 0x2cc)
    void* r12_3 = arg1 + 0x48
    int32_t zmm6_3
    
    do
        var_b0 = 0
        result, zmm6_3 = sub_141a467f0(r12_3, rbx, &var_b0)
        
        if (result.b != 0)
            *r15_3 = var_b0
            result = 1 << r14.b
            rsi_5 = var_60_1 | result
            var_60_1 = rsi_5
        
        r14.b += 1
        r12_3 += 0xa0
        r15_3 += 4
    while (r14.b u< 2)
    
    if (rsi_5 != 0)
        char var_98
        char var_98_1 = var_98 & 0xfc
        int64_t** rax_20 = sub_140a82f30(0x18, 8)
        uint128_t zmm0_6 = zx.o(var_68)
        char result_2 = var_98_1 | 1
        var_a0 = rax_20
        int64_t** rcx_21 = &var_a0
        
        if ((result_2 & 2) == 0)
            rcx_21 = rax_20
        
        rcx_21[1] = zmm0_6.q
        *rcx_21 = &data_14305dbd0
        rcx_21[2].d = rsi_5
        char var_78_1 = rax_19
        uint128_t var_90 = *(arg4 + 0x124)
        int32_t var_80_1 = *(arg4 + 0x188)
        int32_t var_7c_1 = zmm6_3
        sub_141aec7b0(sub_1405a8fd0(arg4 + 0xb0, sub_1405be5b0(arg4 + 0x110), arg4 + 0x110), rdi_3, 
            &var_a0)
        result = zx.d(result_2)
        
        if ((result.b & 1) != 0)
            int64_t* rcx_25 = &var_a0
            
            if ((result.b & 2) == 0)
                rcx_25 = var_a0
            
            result.b &= 0xfe
            char var_98_3 = result.b
            result = (**rcx_25)(rcx_25, 0)
            cond:6_1 = (var_98_3 & 2) != 0
        label_141b18539:
            
            if (not(cond:6_1))
                result = sub_140a74f90(var_a0)
else
    char result_1
    char var_78
    
    if (rcx == 3)
        int32_t rsi_3 = 0
        int64_t* r15_2 = &var_68
        r14.b = 0
        int32_t var_5c_1 = 0
        int64_t rdi_2 = *sub_141aef380(arg1, &var_a8, arg4 + 0x60)
        char rax_12 = *(arg1 + 0x2cc)
        void* r12_2 = arg1 + 0x48
        int32_t zmm6_2
        
        do
            var_b0 = 0
            result, zmm6_2 = sub_141a467f0(r12_2, rbx, &var_b0)
            
            if (result.b != 0)
                *r15_2 = var_b0
                result = 1 << r14.b
                rsi_3 = var_5c_1 | result
                var_5c_1 = rsi_3
            
            r14.b += 1
            r12_2 += 0xa0
            r15_2 += 4
        while (r14.b u< 3)
        
        if (rsi_3 != 0)
            result_1 &= 0xfc
            int64_t** rax_13 = sub_140a82f30(0x18, 8)
            int128_t zmm0_4 = var_68.o
            char result_4 = result_1 | 1
            var_a0 = rax_13
            result_1 = result_4
            int64_t** rcx_14 = &var_a0
            
            if ((result_4 & 2) == 0)
                rcx_14 = rax_13
            
            *rcx_14 = &data_14305dbe0
            *(rcx_14 + 8) = zmm0_4
            char var_70_2 = rax_12
            var_78.d = *(arg4 + 0x188)
            result_1:8.o = *(arg4 + 0x124)
            int32_t var_74_2 = zmm6_2
            sub_141aecad0(sub_1405a8fd0(arg4 + 0xb0, sub_1405be5b0(arg4 + 0x110), arg4 + 0x110), 
                rdi_2, &var_a0)
        label_141b182b4:
            result = zx.d(result_1)
            
            if ((result.b & 1) != 0)
                int64_t* rcx_10 = &var_a0
                
                if ((result.b & 2) == 0)
                    rcx_10 = var_a0
                
                result.b &= 0xfe
                result_1 = result.b
                result = (**rcx_10)(rcx_10, 0)
                cond:6_1 = (result_1 & 2) != 0
                goto label_141b18539
    else if (rcx == 4)
        int32_t rsi_1 = 0
        int64_t* r15_1 = &var_68
        r14.b = 0
        int32_t var_58_1 = 0
        int64_t rdi_1 = *sub_141aef120(arg1, &var_a8, arg4 + 0x60)
        char rax_4 = *(arg1 + 0x2cc)
        void* r12_1 = arg1 + 0x48
        int32_t zmm6_1
        
        do
            var_b0 = 0
            result, zmm6_1 = sub_141a467f0(r12_1, rbx, &var_b0)
            
            if (result.b != 0)
                *r15_1 = var_b0
                result = 1 << r14.b
                rsi_1 = var_58_1 | result
                var_58_1 = rsi_1
            
            r14.b += 1
            r12_1 += 0xa0
            r15_1 += 4
        while (r14.b u< 4)
        
        if (rsi_1 != 0)
            result_1 &= 0xfc
            int64_t* rax_5 = sub_140a82f30(0x20, 8)
            int128_t zmm0_2 = var_68.o
            var_a0 = rax_5
            char result_3 = result_1 | 1
            result_1 = result_3
            int64_t* rcx_6 = &var_a0
            
            if ((result_3 & 2) == 0)
                rcx_6 = rax_5
            
            *(rcx_6 + 8) = zmm0_2
            *rcx_6 = &data_14305dbf0
            rcx_6[3].d = rsi_1
            char var_70_1 = rax_4
            result_1:8.o = *(arg4 + 0x124)
            var_78.d = *(arg4 + 0x188)
            int32_t var_74_1 = zmm6_1
            sub_141aec940(sub_1405a8fd0(arg4 + 0xb0, sub_1405be5b0(arg4 + 0x110), arg4 + 0x110), 
                rdi_1, &var_a0)
            goto label_141b182b4
__security_check_cookie(rax_1 ^ &var_d8)
return result
