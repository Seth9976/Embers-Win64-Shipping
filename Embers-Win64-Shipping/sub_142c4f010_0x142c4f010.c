// 函数: sub_142c4f010
// 地址: 0x142c4f010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t rax_1 = __security_cookie ^ &var_3c8
HMODULE rax_2 = LoadLibraryA("d3d12.dll")
*(arg1 + 0x1a0) = rax_2
HMODULE rbx_1

if (rax_2 != 0)
    if (arg2 != 0)
        HMODULE rax_4 = LoadLibraryA("gdi32.dll")
        rbx_1 = nullptr
        int32_t rsi_1 = 0
        void libFileName
        memset(&libFileName, 0, 0x208)
        int32_t var_248 = 3
        
        if (rax_4 != 0)
            int64_t rax_5 = GetProcAddress(rax_4, "D3DKMTQueryAdapterInfo")
            int64_t rax_6 = GetProcAddress(rax_4, "D3DKMTOpenAdapterFromLuid")
            
            if (rax_5 != 0 && rax_6 != 0)
                int64_t var_390 = 0
                int32_t var_388_1 = 0
                void var_378
                memset(&var_378, 0, 0x130)
                int64_t r8_1 = *arg2
                (*(r8_1 + 0x40))(arg2, &var_378, r8_1)
                int64_t var_250
                var_390 = var_250
                int32_t rax_8 = rax_6(&var_390)
                rsi_1 = rax_8
                
                if (rax_8 s>= 0)
                    int32_t var_3a8 = var_388_1
                    int32_t* var_3a0_1 = &var_248
                    int64_t var_398_1 = 0x20c
                    int32_t var_3a4_1 = 1
                    rsi_1 = rax_5(&var_3a8)
            
            FreeLibrary(rax_4)
        
        if (rsi_1 == 0)
            rbx_1 = LoadLibraryW(&libFileName)
    else
        rbx_1 = sub_142c51500("amdxc64.dll", "amdxc32.dll")
    
    *(arg1 + 0x1a8) = rbx_1

int64_t result

if (rax_2 == 0 || rbx_1 == 0)
    result = 4
else
    result = 0

__security_check_cookie(rax_1 ^ &var_3c8)
return result
