// 函数: sub_141931b40
// 地址: 0x141931b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
uint32_t result = data_143f0f1a0

if (result u> 0x18 || not(test_bit(0x100a040, result)))
    result = 0
    int64_t var_38
    __builtin_memset(&var_38, 0, 0x20)
    int64_t var_30_1
    
    if (arg1 == 0x8b30)
        uint32_t i_3 = zx.d(arg3) & 0x7fff
        int32_t rbx_2 = 0
        int64_t rcx_3 = 0
        
        do
            result = zx.d(*(rcx_3 + "out_Target"))
            *(&var_38 + rcx_3) = result.b
            rcx_3 += 1
        while (result.b != 0)
        
        if (i_3 != 0)
            uint32_t i
            
            do
                i = i_3
                
                if ((i_3.b & 1) != 0)
                    if (rbx_2 u>= 0xa)
                        var_30_1:2.b = 0x31
                        var_30_1:4.b = 0
                        var_30_1:3.b = (rbx_2 u% 0xa).b + 0x30
                    else
                        var_30_1:3.b = 0
                        var_30_1:2.b = rbx_2.b + 0x30
                    
                    result = data_143effd70(zx.q(arg2), zx.q(rbx_2), &var_38)
                
                rbx_2 += 1
                i_3 u>>= 1
            while (i u>= 2)
    else if (arg1 == 0x8b31)
        int32_t rbx_1 = 0
        uint32_t i_2 = zx.d(arg3)
        int64_t rcx_1 = 0
        
        do
            result = zx.d(*(rcx_1 + "in_ATTRIBUTE"))
            *(&var_38 + rcx_1) = result.b
            rcx_1 += 1
        while (result.b != 0)
        
        if (i_2 != 0)
            uint32_t i_1
            
            do
                i_1 = i_2
                
                if ((i_2.b & 1) != 0)
                    if (rbx_1 u>= 0xa)
                        var_30_1:4.b = 0x31
                        var_30_1:6.b = 0
                        var_30_1:5.b = (rbx_1 u% 0xa).b + 0x30
                    else
                        var_30_1:5.b = 0
                        var_30_1:4.b = rbx_1.b + 0x30
                    
                    result = data_143effd68(zx.q(arg2), zx.q(rbx_1), &var_38)
                
                rbx_1 += 1
                i_2 u>>= 1
            while (i_1 u>= 2)

__security_check_cookie(rax_1 ^ &var_58)
return result
