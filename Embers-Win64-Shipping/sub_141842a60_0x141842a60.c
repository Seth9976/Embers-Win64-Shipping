// 函数: sub_141842a60
// 地址: 0x141842a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rax_3 = (*(*arg2 + 0x20))(arg2)
int64_t r9 = *arg2
int64_t rax_4 = (*(r9 + 0x28))(arg2, arg4, arg5, r9)
int32_t var_98 = 3
int64_t var_94 = 0x42
int64_t var_8c = 0
int64_t var_70
__builtin_memset(&var_70, 0, 0x1c)
int64_t var_84 = 0
int32_t var_7c = 0x100000
int16_t var_78 = 0x100
sub_141824b20(arg2, &var_98, arg4)
int32_t rcx_4 = var_94.d + var_84:4.d
void*** result

if ((var_84.d | var_8c:4.d | var_94:4.d | var_8c.d) == 0)
    *arg3 = 3
    result = nullptr
else if (var_78:1.b == 0)
    *arg3 = 6
    result = nullptr
else if (zx.q(rcx_4) s> rax_4 - rax_3)
    *arg3 = 4
    result = nullptr
else if ((var_78.b & 2) != 0)
    *arg3 = 5
    result = nullptr
else
    void*** result_2 = sub_141830ce0(rcx_4)
    void*** result_1 = result_2
    void** r9_1 = *result_2
    int128_t* var_c8
    char* var_c0
    r9_1[1](result_2, &var_c0, &var_c8, r9_1)
    int128_t* rcx_6 = var_c8
    *rcx_6 = var_98.o
    arg4.o = var_8c:4.o
    rcx_6[1] = arg4.o
    rcx_6[2] = var_78.o
    int64_t var_68
    arg4.o = var_68.o
    rcx_6[3] = arg4.o
    int32_t var_58
    rcx_6[4].q = var_58.q
    int64_t r9_2 = *arg2
    (*(r9_2 + 0x150))(arg2, var_c0, zx.q(*(var_c8 + 0x18)), r9_2)
    
    if ((*(arg2 + 0x29) & 1) != 0)
        *arg3 = 7
    else
        int128_t* rdx_3 = var_c8
        *arg3 = 0
        char* r10_1
        
        if ((rdx_3[2].b & 1) == 0)
            r10_1 = var_c0
        else
            void*** result_3 = sub_141830ce0(*(rdx_3 + 0x1c))
            void** r9_3 = *result_3
            uint128_t* var_b8
            char* var_a8
            r9_3[1](result_3, &var_a8, &var_b8, r9_3)
            void var_a0
            int32_t* rax_11 = sub_140b5e500(&var_a0, 0x101)
            int32_t var_d8_1 = 0
            int128_t* rcx_12 = var_c8
            int32_t var_ac_1 = 0
            
            if (sub_140b02330((*rax_11).q, var_a8, *(rcx_12 + 0x1c), var_c0, *(rcx_12 + 0x18), 0)
                    == 0)
                *arg3 = 8
                (*result_3)[3](result_3)
                (**result_3)(result_3, 1)
                rdx_3 = var_c8
                r10_1 = var_c0
            else
                int128_t* rax_14 = var_c8
                uint128_t* rcx_14 = var_b8
                *rcx_14 = *rax_14
                rcx_14[1] = rax_14[1]
                rcx_14[2] = rax_14[2]
                rcx_14[3] = rax_14[3]
                rcx_14[4].q = rax_14[4].q
                var_b8[2].b = 0
                *(var_b8 + 0x18) = *(var_c8 + 0x1c)
                (*result_1)[3](result_1)
                (**result_1)(result_1, 1)
                rdx_3 = var_b8
                result_1 = result_3
                r10_1 = var_a8
                var_c8 = rdx_3
                var_c0 = r10_1
        
        char r11_1 = *arg3
        char rax_22 = r11_1
        
        if (r11_1 == 0 && (*(rdx_3 + 0x21) & 1) != 0)
            uint64_t i_1 = zx.q(*(rdx_3 + 0x1c))
            
            if (*(rdx_3 + 0x18) != i_1.d)
                *arg3 = 9
                rax_22 = 9
            else
                int64_t rcx_20 = 0
                
                if (i_1.d != 0)
                    char* r8_4 = r10_1
                    uint64_t i
                    
                    do
                        uint64_t rax_23 = zx.q(*r8_4)
                        r8_4 = &r8_4[1]
                        rcx_20 = rol.q(rcx_20, 1) ^ *(&data_143efa090 + (rax_23 << 3))
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    rax_22 = r11_1
                
                if (*(rdx_3 + 0x28) != rcx_20)
                    *arg3 = 9
                    rax_22 = 9
        
        int64_t var_48
        __builtin_memset(&var_48, 0, 0x14)
        
        if (rax_22 == 0 && (*(rdx_3 + 0x21) & 2) != 0)
            sub_140b3f690(r10_1, zx.q(*(rdx_3 + 0x1c)), &var_48)
            int128_t* rcx_23 = var_c8
            int64_t var_40
            int32_t var_38
            
            if (var_48 != rcx_23[3].q || var_40 != *(rcx_23 + 0x38) || var_38 != rcx_23[4].d)
                *arg3 = 9
    
    if (result_1 != 0)
        (*result_1)[3](result_1)
    
    if (result_1 == 0 || *arg3 == 0)
        result = result_1
    else
        void** r8_7 = *result_1
        (*r8_7)(result_1, 1, r8_7)
        result = nullptr

__security_check_cookie(rax_1 ^ &var_108)
return result
