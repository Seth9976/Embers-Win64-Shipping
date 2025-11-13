// 函数: sub_142b03750
// 地址: 0x142b03750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t _Destination
__builtin_strncpy(&_Destination, "      ", 6)
uint64_t result = sub_142a7dd00(0x98)
*(arg1 + 0x10) = result
uint64_t result_1 = result

if (result == 0)
    *arg3 = 7
else
    char rax_2 = *(arg2 + 8)
    char var_14f
    __builtin_memset(&var_14f, 0, 0x1f)
    int64_t var_158 = 0x28
    char var_150_1 = rax_2
    memset(result_1, 0, 0x98)
    *(result_1 + 0x58) = 0
    *(arg1 + 0x50) = 0
    char* _Source = *(arg2 + 0x20)
    
    if (_Source != 0)
        strncpy(&_Destination, _Source, 6)
    
    uint64_t r14_2 = zx.q(*(arg2 + 0xc)) & 0xf
    *(result_1 + 0x6c) = r14_2.d
    result = zx.q(_Destination.b)
    void var_128
    int512_t zmm1_1
    
    if (result.b == 0x6a)
        result = zx.q(_Destination:1.b)
        
        if (result.b == 0x61 || result.b == 0x70)
            result = zx.q(_Destination:2.b)
            
            if ((result.b == 0x5f || result.b == 0) && r14_2.d u<= 4)
                if ((*(&data_143665c28 + (r14_2 << 1)) & 4) != 0)
                    *(result_1 + 0x10) = sub_142a92100("ISO8859_7", &var_128, &var_158, arg3)
                
                int128_t* rax_4
                rax_4, zmm1_1 = sub_142a92100("Shift-JIS", &var_128, &var_158, arg3)
                bool cond:2_1 = (*(&data_143665c28 + (r14_2 << 1)) & 0x20) == 0
                *(result_1 + 0x20) = rax_4
                
                if (not(cond:2_1))
                    int128_t* rax_5
                    rax_5, zmm1_1 = sub_142a92100("jisx-212", &var_128, &var_158, arg3)
                    *(result_1 + 0x28) = rax_5
                
                if ((*(&data_143665c28 + (r14_2 << 1)) & 0x40) != 0)
                    int128_t* rax_6
                    rax_6, zmm1_1 = sub_142a92100("ibm-5478", &var_128, &var_158, arg3)
                    *(result_1 + 0x30) = rax_6
                
                if ((*(&data_143665c28 + (r14_2 << 1)) & 0x80) != 0)
                    int128_t* rax_7
                    rax_7, zmm1_1 = sub_142a92100("ksc_5601", &var_128, &var_158, arg3)
                    *(result_1 + 0x38) = rax_7
                
                int64_t rcx_2 = -1
                *(arg1 + 0x30) = &data_143665f10
                *(result_1 + 0x8f) = 0x616a
                *(result_1 + 0x91) = 0
                __builtin_strncpy(result_1 + 0x71, "ISO_2022,locale=", 0x10)
                zmm1_1.o = 0x69737265762c616a
                *(result_1 + 0x81) = (zmm1_1.o).q
                *(result_1 + 0x89) = 0x3d6e6f
                bool cond:3_1
                
                do
                    cond:3_1 = *(result_1 + rcx_2 + 0x72) != 0
                    rcx_2 += 1
                while (cond:3_1)
                char rax_8 = *(result_1 + 0x6c) + 0x30
                *(rcx_2 + result_1 + 0x72) = 0
                *(rcx_2 + result_1 + 0x71) = rax_8
            label_142b03c75:
                result = zx.q(*(*(*(arg1 + 0x30) + 0x10) + 0x47))
                *(arg1 + 0x58) = result.b
                
                if (*arg3 s> 0 || *(arg2 + 8) != 0)
                    result = sub_142b03cb0(arg1, zmm1_1)
            else
                *arg3 = 2
        else
            *arg3 = 2
    else if (result.b == 0x6b)
        result = zx.q(_Destination:1.b)
        
        if (result.b == 0x6f || result.b == 0x72)
            result = zx.q(_Destination:2.b)
            
            if ((result.b == 0x5f || result.b == 0) && r14_2.d u<= 1)
                char* rcx_3
                
                if (r14_2.d != 1)
                    rcx_3 = "ibm-949"
                    *(result_1 + 0x6c) = 0
                    r14_2 = 0
                else
                    rcx_3 = "icu-internal-25546"
                
                if (*(arg2 + 8) == 0)
                    void* rax_9
                    rax_9, zmm1_1 = sub_142a84e10(rcx_3, arg3)
                    *(result_1 + 0x50) = rax_9
                    
                    if (*arg3 s<= 0)
                        if (r14_2.d != 1)
                            __builtin_strncpy(result_1 + 0x71, "ISO_2022,locale=", 0x10)
                            zmm1_1.o = 0x69737265762c6f6b
                            *(result_1 + 0x81) = (zmm1_1.o).q
                            __builtin_strncpy(result_1 + 0x89, "on=0", 5)
                        else
                            __builtin_strncpy(result_1 + 0x71, "ISO_2022,locale=", 0x10)
                            zmm1_1.o = 0x69737265762c6f6b
                            *(result_1 + 0x81) = (zmm1_1.o).q
                            __builtin_strncpy(result_1 + 0x89, "on=1", 5)
                            **(arg1 + 0x28) = **(rax_9 + 0x28)
                            *(arg1 + 0x59) = *(*(result_1 + 0x50) + 0x59)
                        
                        if (*(result_1 + 0x6c) == 1)
                            void* rax_13 = *(result_1 + 0x50)
                            *(rax_13 + 0x48) = 0
                            *(rax_13 + 0x40) = 0
                        
                        if (*(arg1 + 0x5b) == 0)
                            *(arg1 + 0x5b) = 4
                            *(arg1 + 0x68) = 0x4329241b
                        
                        if (*(result_1 + 0x6c) == 1)
                            *(*(result_1 + 0x50) + 0x50) = 1
                        
                        *(arg1 + 0x30) = &data_143666040
                        *(result_1 + 0x8f) = 0x6f6b
                        *(result_1 + 0x91) = 0
                        goto label_142b03c75
                    
                    result = sub_142b03cb0(arg1, zmm1_1)
                else
                    sub_142a91ba0(rcx_3, arg3)
                    result = sub_142a7dcd0(*(arg1 + 0x10))
                    *(arg1 + 0x10) = 0
            else
                *arg3 = 2
        else
            *arg3 = 2
    else if (result.b == 0x7a)
        if (_Destination:1.b == 0x68)
            goto label_142b03b2a
        
        *arg3 = 2
    else if (result.b != 0x63 || _Destination:1.b != 0x6e)
        *arg3 = 2
    else
    label_142b03b2a:
        result = zx.q(_Destination:2.b)
        
        if ((result.b == 0x5f || result.b == 0) && r14_2.d u<= 2)
            *(result_1 + 8) = sub_142a92100("ibm-5478", &var_128, &var_158, arg3)
            
            if (r14_2.d == 1)
                *(result_1 + 0x10) = sub_142a92100("iso-ir-165", &var_128, &var_158, arg3)
            
            int128_t* rax_17
            rax_17, zmm1_1 = sub_142a92100("cns-11643-1992", &var_128, &var_158, arg3)
            *(result_1 + 0x18) = rax_17
            *(arg1 + 0x30) = &data_143666170
            *(result_1 + 0x8f) = 0x6e63
            *(result_1 + 0x91) = 0
            
            if (r14_2.d == 0)
                *(result_1 + 0x6c) = 0
                __builtin_strncpy(result_1 + 0x71, "ISO_2022,locale=", 0x10)
                zmm1_1.o = 0x69737265762c687a
                *(result_1 + 0x81) = (zmm1_1.o).q
                __builtin_strncpy(result_1 + 0x89, "on=0", 5)
            else if (r14_2.d != 1)
                *(result_1 + 0x6c) = 2
                __builtin_strncpy(result_1 + 0x71, "ISO_2022,locale=", 0x10)
                zmm1_1.o = 0x69737265762c687a
                *(result_1 + 0x81) = (zmm1_1.o).q
                __builtin_strncpy(result_1 + 0x89, "on=2", 5)
            else
                *(result_1 + 0x6c) = r14_2.d
                __builtin_strncpy(result_1 + 0x71, "ISO_2022,locale=", 0x10)
                zmm1_1.o = 0x69737265762c687a
                *(result_1 + 0x81) = (zmm1_1.o).q
                __builtin_strncpy(result_1 + 0x89, "on=1", 5)
            
            goto label_142b03c75
        
        *arg3 = 2

__security_check_cookie(rax_1 ^ &var_178)
return result
