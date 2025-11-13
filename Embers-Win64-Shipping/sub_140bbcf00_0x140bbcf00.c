// 函数: sub_140bbcf00
// 地址: 0x140bbcf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t var_48 = __security_cookie ^ &var_2d8
int16_t var_250 = 0x100
void var_248
void* var_268 = &var_248
void* var_260 = &var_248
int64_t* var_258 = &var_48
int16_t* var_2a8
int128_t var_278 = *sub_140a1dfc0(arg1, &var_2a8)
sub_140bac470(&var_278, &var_268)

if (*var_260 != 0)
    *var_260 = 0

void* rcx_1 = var_268
void* var_290 = rcx_1

if (rcx_1 == 0)
    int32_t var_288 = 0
else
    int64_t rax_4 = -1
    
    do
        rax_4 += 1
    while (*(rcx_1 + (rax_4 << 1)) != 0)
    
    var_288 = rax_4.d

void var_298
char rax_5 = sub_140a24010(&var_290, 0x2e, &var_298)
char rax_6 = sub_140a24010(&var_290, 0x5c, &var_298)
char rax_7 = sub_140a24010(&var_290, 0x3a, &var_298)
int64_t* rbx

if (rax_5 != 0 || rax_6 != 0 || rax_7 != 0)
    if (sub_140b1d530(arg1) == 0)
    label_140bbd095:
        
        if (arg3 != 0)
            var_2a8 = nullptr
            int32_t var_2a0_1 = 0
            
            if (rax_5 != 0)
                sub_140a20ba0(&var_2a8, &data_142d404c4, 1)
            
            if (rax_6 != 0)
                sub_140a20ba0(&var_2a8, &(*U"{}[\nt")[3], 1)
            
            if (rax_7 != 0)
                sub_140a20ba0(&var_2a8, &data_142d84ee0, 1)
            
            int16_t* const r8_3 = &data_142d40450
            int16_t* const rax_13 = &data_142d40450
            
            if (var_2a0_1 != 0)
                rax_13 = var_2a8
            
            if (arg1[1].d != 0)
                r8_3 = *arg1
            
            int16_t* const var_2b0_1 = rax_13
            void* var_2b8_1 = var_290
            sub_140a2e390(&var_278, 
                FilenameToLongPackageName failed to convert '%s'. Attempt result was '%.*s', but the "
            "path contains ille", r8_3)
            
            if (arg3 == &var_278)
                int64_t rcx_17 = var_278.q
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
            else
                int64_t rcx_16 = *arg3
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                *arg3 = var_278.q
                arg3[1].d = var_278:8.d
                *(arg3 + 0xc) = var_278:0xc.d
            
            int16_t* rcx_18 = var_2a8
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
        
        rbx.b = 0
    else
        sub_140b11c80(&var_2a8, arg1)
        int32_t var_2a0
        
        if (sub_140b1d530(&var_2a8) != 0 || var_2a0 == 0 || var_2a0 - 1 s<= 1)
        label_140bbd083:
            int16_t* rcx_11 = var_2a8
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            goto label_140bbd095
        
        if (sub_140bbcf00(&var_2a8, arg2, 0) == 0)
            goto label_140bbd083
        
        int16_t* rcx_10 = var_2a8
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rbx.b = 1
else
    sub_140a1d810(arg2, &var_290)
    rbx.b = 1

sub_140b301c0(&var_268)
__security_check_cookie(var_48 ^ &var_2d8)
return zx.q(rbx.b)
