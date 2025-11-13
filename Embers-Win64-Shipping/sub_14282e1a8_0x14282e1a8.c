// 函数: sub_14282e1a8
// 地址: 0x14282e1a8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char* var_98 = arg2
int32_t rdx = *arg1

if (rdx == 0)
    *(arg2 + 0x10) = 0
    *(arg2 + 0x18) = 0
    sub_140593830(arg2, &arg1[0xa])
else
    char exceptionObject
    int64_t var_78_2
    char var_70
    int64_t var_58
    
    if (rdx == 1)
        int64_t var_80_3 = 0
        var_78_2 = 0xf
        exceptionObject = 0
        SimpleString::operator=(&exceptionObject, U"!")
        int128_t* rax_6
        char r9_3
        rax_6, r9_3 = sub_142826880(arg3, &var_70, &exceptionObject)
        sub_140687b70(arg2, rax_6, &arg1[0xa], r9_3)
        
        if (var_58 u>= 0x10)
            sub_14058ba50(var_70.q, var_58 + 1)
        
        int64_t var_60_3 = 0
        int64_t var_58_3 = 0xf
        var_70 = 0
    label_14282e39f:
        
        if (var_78_2 u>= 0x10)
            sub_14058ba50(exceptionObject.q, var_78_2 + 1)
    else
        if (rdx == 2)
            int64_t var_80_2 = 0
            var_78_2 = 0xf
            exceptionObject = 0
            SimpleString::operator=(&exceptionObject, "!!")
            void** rax_5
            char r9_2
            rax_5, r9_2 = sub_142826880(arg3, &var_70, &exceptionObject)
            sub_140687b70(arg2, rax_5, &arg1[0xa], r9_2)
            
            if (var_58 u>= 0x10)
                sub_14058ba50(var_70.q, var_58 + 1)
            
            int64_t var_60_2 = 0
            int64_t var_58_2 = 0xf
            var_70 = 0
            goto label_14282e39f
        
        if (rdx == 3)
            void* var_50
            int128_t* rax_4
            char r9_1
            rax_4, r9_1 = sub_142826880(arg3, &exceptionObject, 
                sub_14281d2a0(&var_70, sub_140895a80(&var_50, &data_142e5e874, &arg1[2]), !"))
            sub_140687b70(arg2, rax_4, &arg1[0xa], r9_1)
            int64_t var_78
            
            if (var_78 u>= 0x10)
                sub_14058ba50(exceptionObject.q, var_78 + 1)
            
            int64_t var_80_1 = 0
            int64_t var_78_1 = 0xf
            exceptionObject = 0
            
            if (var_58 u>= 0x10)
                sub_14058ba50(var_70.q, var_58 + 1)
            
            int64_t var_60_1 = 0
            int64_t var_58_1 = 0xf
            var_70 = 0
            int64_t var_38
            
            if (var_38 u>= 0x10)
                sub_14058ba50(var_50, var_38 + 1)
        else
            if (rdx != 4)
                sub_14058e8a0(&exceptionObject, "yaml-cpp: internal error, bad tag type")
                _CxxThrowException(&exceptionObject, &data_143945fb8)
                noreturn
            
            *(arg2 + 0x10) = 0
            *(arg2 + 0x18) = zx.q(rdx + 0xb)
            *arg2 = 0
            SimpleString::operator=(arg2, U"!")

__security_check_cookie(rax_1 ^ &var_b8)
return arg2
