// 函数: sub_142c496e0
// 地址: 0x142c496e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
HLOCAL result_2 = nullptr
HLOCAL result

if (arg2 == 0)
    result = result_2
else
    void var_228
    memset(&var_228, 0, 0x20a)
    HMODULE hModule
    
    if (data_14401a890 == 0)
        hModule = sub_142c4ad10(u"Shell32.dll", 0)
        data_14401a890 = hModule
    
    int64_t rax_2
    
    if (data_14401a890 != 0 || hModule == 0)
        rax_2 = data_14401a898
    else
        rax_2 = GetProcAddress(hModule, "SHGetFolderPathW")
        data_14401a898 = rax_2
    
    if (rax_2 != 0)
        if (rax_2(0, zx.q(arg1), 0, 0, &var_228) != 0)
            result = result_2
        else
            int64_t rax_4 = -1
            int64_t rcx_2 = -1
            
            do
                rcx_2 += 1
            while (*(arg2 + (rcx_2 << 1)) != 0)
            
            bool cond:0_1
            
            do
                int16_t var_226[0x107]
                cond:0_1 = var_226[rax_4] != 0
                rax_4 += 1
            while (cond:0_1)
            int64_t rsi_2 = rax_4 + 2 + rcx_2
            HLOCAL result_1 = LocalAlloc(LMEM_ZEROINIT, rsi_2 * 2)
            
            if (result_1 == 0)
                result = nullptr
            else
                sub_142c4b4a0(result_1, rsi_2, &var_228)
                sub_142c4b310(result_1, rsi_2, &data_1436b0194)
                sub_142c4b310(result_1, rsi_2, arg2)
                result = result_1
    else
        result = nullptr

__security_check_cookie(rax_1 ^ &var_258)
return result
