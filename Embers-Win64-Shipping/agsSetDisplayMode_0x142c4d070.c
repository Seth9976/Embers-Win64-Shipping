// 函数: agsSetDisplayMode
// 地址: 0x142c4d070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t r14 = sx.q(arg3)
uint64_t result

if (arg1 == 0 || *(arg1 + 8) == 0 || arg4 == 0 || arg2 s< 0 || arg2 s>= *(arg1 + 0x3f8)
        || arg3 s< 0)
    result = 2
else
    void* rsi_2 = sx.q(arg2) * 0x78 + *(arg1 + 0x3f0)
    
    if (r14.d s>= *(rsi_2 + 0x48))
        result = 2
    else
        int64_t r15_1 = *(arg1 + 0xe0)
        
        if (r15_1 != 0)
            int32_t var_c4
            memset(&var_c4, 0, 0x74)
            int64_t rax_3 = sx.q(*arg4)
            int32_t var_c8 = 2
            
            if (rax_3.d u> 5)
                result = 2
            else
                switch (rax_3)
                    case 0
                        var_c4 = 1
                        int32_t var_c0_1 = 1
                    case 1
                        var_c4 = 4
                        int32_t var_c0_2 = 8
                    case 2, 3
                        var_c4 = 0x20
                        int32_t var_c0_4 = 0x40
                    case 4
                        var_c4 = 0x80
                        int32_t var_c0_3 = 0x80
                    case 5
                        var_c4 = 0x40
                        int32_t var_c0_5 = 0x200
                
                int32_t rax_4 = 0
                int128_t var_98_1 = *(arg4 + 8)
                
                if ((arg4[0x1a].b & 1) != 0)
                    rax_4 = 1
                
                int32_t var_58_1 = rax_4
                int128_t var_b8_1 = *(arg4 + 0x18)
                int128_t var_a8_1 = *(arg4 + 0x28)
                int128_t var_88_1 = *(arg4 + 0x38)
                int128_t var_78_1 = *(arg4 + 0x48)
                int128_t var_68_1 = *(arg4 + 0x58)
                int32_t rax_6 = r15_1(*(arg1 + 8), 
                    zx.q(*(sx.q(*(rsi_2 + 0x70)) * 0x624 + *(arg1 + 0x400) + 4)), 
                    zx.q(*(r14 * 0x1d0 + *(rsi_2 + 0x50) + 0x1c8)), &var_c8)
                int32_t rax_7 = neg.d(rax_6)
                result = zx.q(sbb.d(rax_7, rax_7, rax_6 != 0)) & 7
        else
            result = zx.q((r15_1 + 5).d)

__security_check_cookie(rax_1 ^ &var_e8)
return result
