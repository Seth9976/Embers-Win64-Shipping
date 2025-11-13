// 函数: sub_140a4a2c0
// 地址: 0x140a4a2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
sub_140a4dc10()
int64_t* rax_2 = sub_140af5690(data_143ddb400, u"CrashReportClient", 0, 1, &data_143de5780)
int64_t var_228

if (rax_2 != 0)
    void var_168
    sub_140ae6a10(&var_168)
    int64_t var_208
    sub_140a3b500(&var_208, rax_2)
    int32_t var_220_1 = 0
    var_228 = 0
    int32_t var_21c_1 = 0
    sub_1405947f0(&var_228, 0x12)
    int32_t r14_1 = var_21c_1
    int32_t rbx_1 = var_220_1 + 0x12
    
    if (rbx_1 s> r14_1)
        sub_140594770(&var_228)
        r14_1 = var_21c_1
    
    int64_t rdi_1 = var_228
    __builtin_memcpy(rdi_1, u"CrashReportClient", 0x24)
    int32_t var_218
    sub_140a3f040(&var_168, &var_218)
    int64_t* var_210
    *var_210 = rdi_1
    var_210[1].d = rbx_1
    *(var_210 + 0xc) = r14_1
    sub_140a3b500(&var_210[2], &var_208)
    int64_t rbx_2 = -1
    var_210[0x16].d = 0xffffffff
    int32_t rax_3 = var_210[1].d
    int16_t* rdx_5
    
    if (rax_3 == 0)
        rdx_5 = &data_142d40450
    else
        rdx_5 = *var_210
    
    int32_t rcx_7 = rax_3 - 1
    
    if (rax_3 == 0)
        rcx_7 = 0
    
    int32_t rax_4 = sub_1405969c0(rcx_7, rdx_5)
    int64_t* var_238
    var_238.d = var_218
    sub_140a42a90(&var_168, &var_228, rax_4, var_210, var_238.d, nullptr)
    char var_118_1 = 1
    var_218.q = 0
    int64_t var_210_1 = 0
    sub_140a46e10()
    var_228 = 0
    int32_t rdx_7 = 0
    int32_t var_220_3 = 0
    int32_t rcx_10 = 0
    int32_t var_21c_2 = 0
    
    if (data_143db32b0 != 0)
        do
            rbx_2 += 1
        while ((&data_143db32b0)[rbx_2] != 0)
        
        if (rbx_2.d + 1 s> 0)
            sub_1405947f0(&var_228, rbx_2.d + 1)
            rcx_10 = var_21c_2
            rdx_7 = var_220_3
        
        int32_t rax_5 = rbx_2.d + 1 + rdx_7
        int32_t var_220_4 = rax_5
        
        if (rax_5 s> rcx_10)
            sub_140594770(&var_228)
        
        memcpy(var_228, &data_143db32b0, (rbx_2.d + 1) * 2)
    
    sub_140b030b0(&var_168, &var_228, 1, &var_218)
    int64_t rcx_15 = var_228
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int64_t rcx_16 = var_218.q
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int32_t var_170_1 = 0
    int64_t var_178
    
    if (var_178 != 0)
        sub_140a74f90(var_178)
    
    uint64_t var_1b8[0x4]
    sub_1407547c0(&var_1b8, 0)
    int64_t var_198
    
    if (var_198 != 0)
        sub_140a74f90(var_198)
    
    uint64_t rcx_20 = var_1b8[0]
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    int32_t var_1c0_1 = 0
    int64_t var_1c8
    
    if (var_1c8 != 0)
        sub_140a74f90(var_1c8)
    
    sub_140a42d40(&var_208, 0)
    int64_t var_1e8
    
    if (var_1e8 != 0)
        sub_140a74f90(var_1e8)
    
    int64_t rcx_24 = var_208
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    sub_140ae7280(&var_168)

sub_140a54f30()
sub_140af2fd0(data_143ddb400, /Script/UnrealEd.CrashReportsPrivacySettings", 
    bSendUnattendedBugReports", &data_143db3541, &data_143de57c0)
sub_140af2fd0(data_143ddb400, /Script/UnrealEd.AnalyticsPrivacySettings", bSendUsageData", 
    &data_143db3542, &data_143de57c0)
int64_t* rbx_4 = sub_140aae970() + 0x128
void*** rax_7 = sub_140a84c80(0, 0x20, 0)

if (rax_7 != 0)
    *rax_7 = &data_142d40dc0
    rax_7[1] = sub_140a54f30
    rax_7[3] = sub_140a387b0()
    *rax_7 = &data_142d40e18
    sub_140599630(rbx_4, 1)
    (*rax_7)[6](rax_7, &var_228)
    int64_t rsi_2 = sx.q(rbx_4[1].d)
    int32_t rax_10 = (rsi_2 + 1).d
    rbx_4[1].d = rax_10
    
    if (rax_10 s> *(rbx_4 + 0xc))
        sub_1405a4f90(rbx_4)
    
    void**** rax_13 = (rsi_2 << 4) + *rbx_4
    *rax_13 = rax_7
    rax_13[1].d = 2

void** result = sub_140a52b20()
__security_check_cookie(rax_1 ^ &var_258)
return result
