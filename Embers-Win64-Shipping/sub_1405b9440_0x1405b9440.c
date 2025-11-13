// 函数: sub_1405b9440
// 地址: 0x1405b9440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* result = sub_141d79720()
void* result_2 = result

if (result != 0)
    void* rax_2 = sub_141d828c0()
    void* rcx = *(result_2 + 0x10)
    result = rax_2 + 0x30
    int64_t rdx_1 = sx.q(*(result + 8))
    
    if (rdx_1.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rdx_1 << 3)) == result)
        if (*(result_2 + 0x50) == 2 || *((zx.q((data_143de5458).d) & 1) + result_2 + 0x51) == 1)
            result.b = 1
        else
            result.b = 0
        
        if (result.b != 0)
            int32_t rcx_2 = *(arg1 + 0x30)
            char var_e8
            char result_1 = (var_e8 & 0xfe) | 3
            int64_t* var_128
            int64_t* rax_4 = &var_128
            
            if ((result_1 & 2) == 0)
                rax_4 = var_128
            
            *(rax_4 + 8) = *(arg1 + 0x20)
            rax_4[3].d = rcx_2
            *rax_4 = &data_142d4c330
            void var_e0
            int128_t* rax_5 =
                sub_1405ab790(&var_e0, &arg2[0x22], arg2 + 0x124, &arg2[0x27], &var_128)
            int64_t rbx = sx.q(arg2[1].d)
            int32_t rcx_4 = (rbx + 1).d
            arg2[1].d = rcx_4
            
            if (rcx_4 s> *(arg2 + 0xc))
                sub_1405c5190(arg2)
            
            sub_1405ab620(rbx * 0xc8 + *arg2, rax_5)
            char var_20
            
            if ((var_20 & 1) != 0)
                int64_t* var_60
                int64_t* rcx_8 = &var_60
                
                if ((var_20 & 2) == 0)
                    rcx_8 = var_60
                
                (**rcx_8)(rcx_8, 0)
                
                if ((var_20 & 2) == 0)
                    sub_140a74f90(var_60)
            
            int64_t var_80
            
            if (var_80 != 0)
                sub_140a74f90(var_80)
            
            result = zx.q(result_1)
            
            if ((result.b & 1) != 0)
                int64_t* rcx_11 = &var_128
                
                if ((result.b & 2) == 0)
                    rcx_11 = var_128
                
                result.b &= 0xfe
                char var_e8_2 = result.b
                result = (**rcx_11)(rcx_11, 0)
                
                if ((var_e8_2 & 2) == 0)
                    result = sub_140a74f90(var_128)

__security_check_cookie(rax_1 ^ &var_158)
return result
