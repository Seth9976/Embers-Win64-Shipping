// 函数: sub_142c71dc0
// 地址: 0x142c71dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
uint64_t result

if (data_14401b0e0 != 0)
    result = 0
else if (sub_142897d70() == 0)
    char* rcx = *(arg1 + 0x738)
    int32_t rax_3
    int512_t zmm2
    int128_t zmm6
    
    if (rcx != 0)
        zmm2, zmm6 = sub_142c8db50(rcx, 0x400)
        rax_3 = sub_142897d70()
    
    if (rcx != 0 && rax_3 != 0)
        result = 0
    else
        int128_t var_38_1 = zmm6
        int128_t zmm7
        zmm7.q = 64.0
        zmm7.q = zmm7.q f* 0.5
        int32_t i
        
        do
            int64_t j = 0
            void var_198
            void* r15_1 = &var_198
            
            do
                uint64_t var_1f0[0x2]
                zmm6 = *sub_142c59600(&var_1f0)
                sub_142c64410(1)
                int32_t rbp_2 = zmm6:8.d * (j + 2).d
                uint64_t var_1e0[0x2]
                uint64_t rbx_1 = zx.q(sub_142c59600(&var_1e0)[1].d)
                int128_t var_208_1
                uint64_t var_1d0[0x2]
                var_208_1.q =
                    (zmm6.q * (j + 1)) ^ ((*sub_142c59600(&var_1d0) + rbx_1) * (j + 3)) << 8
                uint64_t var_1c0[0x2]
                uint64_t* rax_9 = sub_142c59600(&var_1c0)
                uint64_t var_1b0[0x3]
                uint64_t* rax_10 = sub_142c59600(&var_1b0)
                r15_1 += 0x10
                int32_t rcx_12 = (rax_9[1].d + *rax_10) * (j + 4).d
                j += 1
                var_208_1:8.d = rbp_2 ^ rcx_12 << 0x10
                *(r15_1 - 0x10) = var_208_1
            while (j u< 4)
            
            zmm2.o = zmm7
            zmm2 = sub_142897aa0(&var_198, 0x40, zmm2.o)
            i = sub_142897d70()
        while (i == 0)
        char var_158[0x100]
        var_158[0] = 0
        int64_t r8_1 = sub_142c8d8e0(&var_158, 0x100)
        
        if (var_158[0] == 0)
        label_142c72006:
            sub_142c64850(arg1, "libcurl is now using a weak random seed!\n", r8_1, zmm2)
            int32_t result_1 = 0x23
            
            if (sub_142897d70() != 0)
                result_1 = 0
            
            result = zx.q(result_1)
        else
            zmm2 = sub_142c8db50(&var_158, 0x400)
            int32_t rax_12
            rax_12, r8_1 = sub_142897d70()
            
            if (rax_12 == 0)
                goto label_142c72006
            
            result = 0
else
    data_14401b0e0 = 1
    result = 0

__security_check_cookie(rax_1 ^ &var_228)
return result
