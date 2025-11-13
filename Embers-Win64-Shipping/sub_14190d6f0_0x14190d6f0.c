// 函数: sub_14190d6f0
// 地址: 0x14190d6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t rdi = 0
int64_t* rsi = arg1
int32_t var_148 = 0

if (*arg1 != &data_142d40450)
    int32_t rdx_1 = 0
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != 0)
        sub_1405947f0(arg1, 0)
        rdx_1 = rsi[1].d
    
    rsi[1].d = rdx_1
    
    if (rdx_1 s> *(rsi + 0xc))
        sub_140594770(rsi)

int64_t result = data_143effa50(0x821d, &var_148)

if (var_148 s> 0)
    do
        char* rax_2 = data_143f00190(0x1f03, zx.q(rdi))
        sub_140a20ba0(rsi, &data_142d404d4, 1)
        void var_138
        sub_1405eb940(&var_138, rax_2)
        int64_t r8_1 = -1
        int64_t var_30
        
        do
            r8_1 += 1
        while (*(var_30 + (r8_1 << 1)) != 0)
        
        result = sub_140a20ba0(rsi, var_30, r8_1.d)
        int64_t var_38
        
        if (var_38 != 0)
            result = sub_140a74f90(var_38)
        
        rdi += 1
    while (rdi s< var_148)

__security_check_cookie(rax_1 ^ &var_168)
return result
