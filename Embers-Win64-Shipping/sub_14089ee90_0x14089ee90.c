// 函数: sub_14089ee90
// 地址: 0x14089ee90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* var_50 = arg2
int32_t var_90 = 0
int32_t result
int128_t var_88

if (*(arg1 + 0x610) == 0)
    var_88 = *arg2
    int128_t var_78_2 = *(arg2 + 0x10)
    arg2[2] = 0
    arg2[3] = 7
    *arg2 = 0
    result = sub_1405921a0(arg1 + 0x330, &var_88)
else
    uint32_t rax_2
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_2.b == 0))
        void var_68
        void** rax_3 = sub_14089d690(&var_68, nullptr, 0xff)
        void* rcx_4 = *rax_3
        *(rcx_4 + 0x10) = arg1
        sub_140592c90(rcx_4 + 0x18, arg2)
        int32_t r8_1 = rax_3[2].d
        int64_t* rdx_3 = rax_3[1]
        void* rcx_6 = *rax_3
        int64_t* rbx_2 = *(rcx_6 + 0x40)
        int64_t* var_98_2 = rbx_2
        int32_t* rsi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rsi_1 += 1
            rbx_2 = var_98_2
        
        int32_t var_90_1 = 2
        result = sub_14089f2d0(rcx_6, rdx_3, r8_1, 1)
        
        if (rbx_2 != 0)
            result = *rsi_1
            *rsi_1 -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(var_98_2)
    else
        int128_t var_40
        sub_140592c90(&var_40, arg2)
        int64_t var_98_1 = 0
        var_88 = var_40
        int128_t var_30
        int128_t var_78_1 = var_30
        int128_t var_30_1 = data_143702e90
        var_40.w = 0
        result = sub_1405921a0(arg1 + 0x330, &var_88)
int64_t rdx_5 = arg2[3]

if (rdx_5 u>= 8)
    void* rcx_9 = *arg2
    
    if ((rdx_5 << 1) + 2 u>= 0x1000)
        void* r8_2 = *(rcx_9 - 8)
        
        if (rcx_9 - r8_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_9 = r8_2
    
    result = j_sub_140a74f90(rcx_9)

arg2[2] = 0
arg2[3] = 7
*arg2 = 0
__security_check_cookie(rax_1 ^ &var_b8)
return result
