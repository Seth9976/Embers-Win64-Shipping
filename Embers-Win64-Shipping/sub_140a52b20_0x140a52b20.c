// 函数: sub_140a52b20
// 地址: 0x140a52b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (data_143d796d4 != 0)
    int64_t var_68 = 0
    int64_t var_60_1 = 0
    sub_1405947f0(&var_68, 0x8001)
    sub_140a20ba0(&var_68, u"<?xml version="1.0" encoding="UTF-8"?>\r\n", 0x28)
    sub_140a20ba0(&var_68, &data_142e5cee0, 1)
    sub_140a20ba0(&var_68, u"FGenericCrashContext", 0x14)
    sub_140a20ba0(&var_68, &data_142e5cee4, 1)
    sub_140a20ba0(&var_68, &data_142d6acb4, 2)
    sub_140a51fb0(&var_68)
    bool cond:0_1 = data_143db3540 != 0
    wchar16 const* const r14_1 = u"false"
    int16_t* var_58 = nullptr
    wchar16 const* const r15_1 = u"false"
    int64_t var_50_1 = 0
    
    if (cond:0_1)
        r15_1 = u"true"
    
    int16_t* rsi_1 = nullptr
    int32_t rax = 0
    int32_t rdx_1 = 0
    int64_t rbx_1 = -1
    int16_t* const r8_3
    int32_t r12_1
    
    if (*r15_1 != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (r15_1[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&var_58, rdi_1.d + 1)
            rax = var_50_1:4.d
            rdx_1 = var_50_1.d
            rsi_1 = var_58
        
        r12_1 = rdx_1 + rdi_1.d + 1
        var_50_1.d = r12_1
        
        if (r12_1 s> rax)
            sub_140594770(&var_58)
            r12_1 = var_50_1.d
            rsi_1 = var_58
        
        memcpy(rsi_1, r15_1, (rdi_1.d + 1) * 2)
        r8_3 = rsi_1
    
    if (*r15_1 == 0 || r12_1 == 0)
        r8_3 = &data_142d40450
    
    sub_140a3e8b0(&var_68, u"NoDialog", r8_3)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    wchar16 const* const rsi_2 = u"false"
    
    if (data_143db3541 != 0)
        rsi_2 = u"true"
    
    int16_t* r15_2 = nullptr
    int32_t rdx_4 = 0
    var_58 = nullptr
    int32_t rax_1 = 0
    int64_t var_50_2 = 0
    int32_t r12_2
    
    if (*rsi_2 != 0)
        int64_t rdi_3 = -1
        
        do
            rdi_3 += 1
        while (rsi_2[rdi_3] != 0)
        
        if (rdi_3.d + 1 s> 0)
            sub_1405947f0(&var_58, rdi_3.d + 1)
            rax_1 = var_50_2:4.d
            rdx_4 = var_50_2.d
            r15_2 = var_58
        
        r12_2 = rdi_3.d + 1 + rdx_4
        var_50_2.d = r12_2
        
        if (r12_2 s> rax_1)
            sub_140594770(&var_58)
            r12_2 = var_50_2.d
            r15_2 = var_58
        
        memcpy(r15_2, rsi_2, (rdi_3.d + 1) * 2)
    
    int16_t* r8_6
    int16_t* r12_3
    
    if (*rsi_2 == 0 || r12_2 == 0)
        r12_3 = &data_142d40450
        r8_6 = &data_142d40450
    else
        r8_6 = r15_2
        r12_3 = &data_142d40450
    
    sub_140a3e8b0(&var_68, u"SendUnattendedBugReports", r8_6)
    
    if (r15_2 != 0)
        sub_140a74f90(r15_2)
    
    if (data_143db3542 != 0)
        r14_1 = u"true"
    
    int16_t* rsi_3 = nullptr
    int32_t rdx_7 = 0
    var_58 = nullptr
    int32_t rax_2 = 0
    int64_t var_50_3 = 0
    int16_t* r8_9
    int32_t r15_3
    
    if (*r14_1 != 0)
        int64_t rdi_5 = -1
        
        do
            rdi_5 += 1
        while (r14_1[rdi_5] != 0)
        
        if (rdi_5.d + 1 s> 0)
            sub_1405947f0(&var_58, rdi_5.d + 1)
            rax_2 = var_50_3:4.d
            rdx_7 = var_50_3.d
            rsi_3 = var_58
        
        r15_3 = rdi_5.d + 1 + rdx_7
        var_50_3.d = r15_3
        
        if (r15_3 s> rax_2)
            sub_140594770(&var_58)
            r15_3 = var_50_3.d
            rsi_3 = var_58
        
        memcpy(rsi_3, r14_1, (rdi_5.d + 1) * 2)
        r8_9 = rsi_3
    
    if (*r14_1 == 0 || r15_3 == 0)
        r8_9 = &data_142d40450
    
    sub_140a3e8b0(&var_68, u"SendUsageData", r8_9)
    
    if (rsi_3 != 0)
        sub_140a74f90(rsi_3)
    
    sub_140a20ba0(&var_68, &data_142e5cee0, 1)
    sub_140a20ba0(&var_68, u"LogFilePath", 0xb)
    sub_140a20ba0(&var_68, &data_142e5cee4, 1)
    sub_140a3f2f0(&var_68, &data_143db3544)
    sub_140a20ba0(&var_68, &data_142e5cee8, 2)
    sub_140a20ba0(&var_68, u"LogFilePath", 0xb)
    sub_140a20ba0(&var_68, &data_142e5cee4, 1)
    sub_140a20ba0(&var_68, &data_142d6acb4, 2)
    sub_140a20ba0(&var_68, &data_142e5cee8, 2)
    sub_140a20ba0(&var_68, u"FGenericCrashContext", 0x14)
    sub_140a20ba0(&var_68, &data_142e5cee4, 1)
    sub_140a20ba0(&var_68, &data_142d6acb4, 2)
    int16_t* var_38
    sub_140a2e390(&var_38, u"UECrashContext-%u.xml", zx.q(data_143db1908))
    int16_t* rax_3 = sub_140b73e20()
    int32_t var_30
    int32_t rcx_36 = var_30
    int32_t r13_1
    
    if (rcx_36 == 0)
        r13_1 = 0
    else
        r13_1 = rcx_36 - 1
    
    int16_t* r15_4 = nullptr
    int32_t rdi_7 = 0
    int32_t r14_2 = 0
    var_58 = nullptr
    int64_t var_50_4 = 0
    
    if (rax_3 != 0 && *rax_3 != 0)
        do
            rbx_1 += 1
        while (rax_3[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_58, rbx_1.d + 1)
            r14_2 = var_50_4:4.d
            rdi_7 = var_50_4.d
            r15_4 = var_58
        
        rdi_7 += rbx_1.d + 1
        var_50_4.d = rdi_7
        
        if (rdi_7 s> r14_2)
            sub_140594770(&var_58)
            r14_2 = var_50_4:4.d
            rdi_7 = var_50_4.d
            r15_4 = var_58
        
        memcpy(r15_4, rax_3, (rbx_1.d + 1) * 2)
        rcx_36 = var_30
    
    int32_t rax_5
    
    if (rax_3 == 0 || *rax_3 == 0 || rdi_7 == 0)
        rax_5 = 2
    
    if ((rax_3 != 0 && *rax_3 != 0 && rdi_7 != 0) || r13_1 == 0xffffffff)
        rax_5 = 1
    
    int32_t rdx_14 = rdi_7 + r13_1 + rax_5
    int16_t* var_48 = r15_4
    int32_t var_3c_1 = r14_2
    
    if (rdx_14 s> r14_2)
        sub_1405947f0(&var_48, rdx_14)
        rcx_36 = var_30
    
    int32_t r8_13
    
    if (rcx_36 == 0)
        r8_13 = 0
    else
        r8_13 = rcx_36 - 1
    
    sub_140a2cf70(&var_48, var_38, r8_13)
    int16_t* rcx_42 = var_38
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    if (rdi_7 != 0)
        r12_3 = var_48
    
    sub_140a464c0()
    result = sub_140b27210(&var_68, r12_3, 0, &data_14399ea08, 0)
    int16_t* rcx_44 = var_48
    
    if (rcx_44 != 0)
        result = sub_140a74f90(rcx_44)
    
    int64_t rcx_45 = var_68
    
    if (rcx_45 != 0)
        return sub_140a74f90(rcx_45)

return result
