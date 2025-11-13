// 函数: sub_140b6ce50
// 地址: 0x140b6ce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r12 = &data_142d40450
PWSTR rdx

if (arg1[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg1

WCHAR* rsi = nullptr
PWSTR var_e8

if (sub_140b71990(-0xffffffff80000002, rdx, u"Device Description", &arg2[2]) == 0)
    PWSTR rdx_1
    
    if (arg1[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg1
    
    if (sub_140b71990(-0xffffffff80000002, rdx_1, u"DriverDesc", &arg2[2]) == 0)
        int32_t rdi_1 = arg1[1].d
        int64_t rbx_1 = *arg1
        var_e8 = nullptr
        sub_1405a4c70(&var_e8, sbb.d(0x80000002, 0x80000002, rdi_1 != 0) + 0xa + rdi_1, 0)
        memcpy(var_e8, rbx_1, rdi_1 * 2)
        sub_140a20ba0(&var_e8, u"\Settings", 9)
        PWSTR rbx_2 = var_e8
        PWSTR rdx_5 = &data_142d40450
        
        if (rdi_1 != 0)
            rdx_5 = rbx_2
        
        if (sub_140b71990(-0xffffffff80000002, rdx_5, u"Device Description", &arg2[2]) == 0)
            int32_t var_a8 = 0
            int64_t var_a0
            __builtin_memset(&var_a0, 0, 0x60)
            uint64_t result = sub_140b64400(arg2, &var_a8)
            int64_t var_50
            
            if (var_50 != 0)
                result = sub_140a74f90(var_50)
            
            int64_t var_60
            
            if (var_60 != 0)
                result = sub_140a74f90(var_60)
            
            int64_t var_70
            
            if (var_70 != 0)
                result = sub_140a74f90(var_70)
            
            int64_t var_80
            
            if (var_80 != 0)
                result = sub_140a74f90(var_80)
            
            int64_t var_90
            
            if (var_90 != 0)
                result = sub_140a74f90(var_90)
            
            int64_t rcx_10 = var_a0
            
            if (rcx_10 != 0)
                result = sub_140a74f90(rcx_10)
            
            if (rbx_2 == 0)
                return result
            
            return sub_140a74f90(rbx_2)
        
        if (rbx_2 != 0)
            sub_140a74f90(rbx_2)

PWSTR rdx_7

if (arg1[1].d == 0)
    rdx_7 = &data_142d40450
else
    rdx_7 = *arg1

sub_140b71990(-0xffffffff80000002, rdx_7, u"ProviderName", &arg2[6])
int32_t r13_1 = 1

if (arg2[8] s> 1)
    if (sub_140a23cf0(&arg2[6], u"NVIDIA", 1, 0, 0xffffffff) == 0xffffffff)
        if (sub_140a23cf0(&arg2[6], u"Advanced Micro Devices", 1, 0, 0xffffffff) == 0xffffffff)
            if (sub_140a23cf0(&arg2[6], u"Intel", 1, 0, 0xffffffff) != 0xffffffff)
                *arg2 = 0x8086
        else
            *arg2 = 0x1002
    else
        *arg2 = 0x10de

PWSTR rdx_8

if (arg1[1].d == 0)
    rdx_8 = &data_142d40450
else
    rdx_8 = *arg1

sub_140b71990(-0xffffffff80000002, rdx_8, u"DriverVersion", &arg2[0xa])
sub_140597df0(&arg2[0xe], &arg2[0xa])
int32_t rax_8 = *arg2
WCHAR* var_b8

if (rax_8 == 0x10de)
    int64_t* rax_9 = sub_140b6cc50(arg2, &var_b8)
    
    if (&arg2[0xe] != rax_9)
        WCHAR* rcx_18 = *(arg2 + 0x38)
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        *(arg2 + 0x38) = *rax_9
        *rax_9 = 0
        arg2[0x10] = rax_9[1].d
        arg2[0x11] = *(rax_9 + 0xc)
        rax_9[1] = 0
    
    WCHAR* rcx_45 = var_b8
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)
else if (rax_8 == 0x1002)
    PWSTR rdx_11
    
    if (arg1[1].d == 0)
        rdx_11 = &data_142d40450
    else
        rdx_11 = *arg1
    
    WCHAR* var_f8
    int64_t var_f0
    WCHAR* var_d8
    int32_t var_cc
    
    if (sub_140b71990(-0xffffffff80000002, rdx_11, u"Catalyst_Version", &arg2[0xe]) != 0)
        var_f8 = nullptr
        var_f0 = 0
        sub_1405947f0(&var_f8, 0xa)
        int32_t r13_2 = var_f0.d + 0xa
        var_f0.d = r13_2
        
        if (r13_2 s> 0)
            sub_140594770(&var_f8)
            r13_2 = var_f0.d
        
        WCHAR* rax_13 = var_f8
        WCHAR* arg_10 = rax_13
        UnDecorator::getReferenceType(rax_13, u"Catalyst ", 0x14)
        int32_t rbx_4 = arg2[0x10]
        int32_t rax_14
        PWSTR r13_4
        
        if (r13_2 s> 1)
            int32_t rax_15 = rbx_4 - 1
            
            if (rbx_4 == 0)
                rax_15 = 0
            
            int32_t rdx_15
            
            if (r13_2 == 0)
                rdx_15 = r13_2 + 1
            
            if (r13_2 != 0 || rax_15 == 0)
                rdx_15 = 0
            
            var_d8 = var_f8
            int32_t rdx_17 = rdx_15 + r13_2 + rax_15
            int32_t rcx_26 = var_f0:4.d
            arg_10 = nullptr
            var_cc = rcx_26
            
            if (rdx_17 s> rcx_26)
                sub_1405947f0(&var_d8, rdx_17)
            
            sub_140a20ba0(&var_d8, *(arg2 + 0x38), rax_15)
            rax_14 = var_cc
            r13_4 = var_d8
            rbx_4 = r13_2
            int32_t var_d0_1
            var_d0_1.q = 0
            var_d8 = nullptr
        else
            WCHAR* r13_3 = *(arg2 + 0x38)
            var_e8 = nullptr
            
            if (rbx_4 != 0)
                sub_1405a4c70(&var_e8, rbx_4, 0)
                r13_4 = var_e8
                memcpy(r13_4, r13_3, rbx_4 * 2)
                int32_t var_dc
                rax_14 = var_dc
            else
                rax_14 = 0
                r13_4 = nullptr
        
        if (&arg2[0xe] != &var_e8)
            WCHAR* rcx_29 = *(arg2 + 0x38)
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            *(arg2 + 0x38) = r13_4
            arg2[0x10] = rbx_4
            arg2[0x11] = rax_14
        else if (r13_4 != 0)
            sub_140a74f90(r13_4)
        
        if (arg_10 != 0)
            sub_140a74f90(arg_10)
        
        r13_1 = 1
    
    WCHAR* var_c8 = nullptr
    int32_t var_c0_1 = 0
    PWSTR rdx_19
    
    if (arg1[1].d == 0)
        rdx_19 = &data_142d40450
    else
        rdx_19 = *arg1
    
    char rax_17 = sub_140b71990(-0xffffffff80000002, rdx_19, u"RadeonSoftwareEdition", &var_c8)
    WCHAR* rbx_5 = var_c8
    
    if (rax_17 != 0)
        var_e8 = nullptr
        int32_t var_e0
        var_e0.q = 0
        PWSTR rdx_20
        
        if (arg1[1].d == 0)
            rdx_20 = &data_142d40450
        else
            rdx_20 = *arg1
        
        if (sub_140b71990(-0xffffffff80000002, rdx_20, u"RadeonSoftwareVersion", &var_e8) != 0)
            var_d8 = nullptr
            sub_1405a4c70(&var_d8, sbb.d(0x80000002, 0x80000002, var_c0_1 != 0) + 2 + var_c0_1, 0)
            memcpy(var_d8, var_c8, var_c0_1 * 2)
            sub_140a20ba0(&var_d8, &data_142d404d4, 1)
            WCHAR* rcx_36 = var_d8
            int32_t arg_8
            arg_8.q = rcx_36
            var_d8 = nullptr
            int32_t var_d0_2
            var_d0_2.q = 0
            int32_t rbx_7
            int32_t r13_5
            
            if (var_c0_1 s> 1)
                int32_t rbx_9
                
                if (var_e0 == 0)
                    rbx_9 = 0
                else
                    rbx_9 = var_e0 - 1
                
                if (var_c0_1 != 0 || rbx_9 == 0)
                    r13_1 = 0
                
                var_f8 = rcx_36
                int32_t rdx_27 = var_c0_1 + rbx_9 + r13_1
                arg_8.q = 0
                var_f0.d = var_c0_1
                var_f0:4.d = var_cc
                
                if (rdx_27 s> var_cc)
                    sub_1405947f0(&var_f8, rdx_27)
                
                sub_140a20ba0(&var_f8, var_e8, rbx_9)
                WCHAR* rax_22 = var_f8
                rbx_7 = var_f0.d
                r13_5 = var_f0:4.d
                var_f8 = nullptr
                int64_t var_f0_1 = 0
                rsi = rax_22
            else
                rbx_7 = var_e0
                var_b8 = nullptr
                
                if (rbx_7 != 0)
                    sub_1405a4c70(&var_b8, rbx_7, 0)
                    rsi = var_b8
                    memcpy(rsi, var_e8, rbx_7 * 2)
                    int32_t var_ac
                    r13_5 = var_ac
                else
                    r13_5 = 0
            
            if (&arg2[0xe] != &var_b8)
                WCHAR* rcx_41 = *(arg2 + 0x38)
                
                if (rcx_41 != 0)
                    sub_140a74f90(rcx_41)
                
                *(arg2 + 0x38) = rsi
                arg2[0x10] = rbx_7
                arg2[0x11] = r13_5
            else if (rsi != 0)
                sub_140a74f90(rsi)
            
            int64_t rax_23 = arg_8.q
            
            if (rax_23 != 0)
                sub_140a74f90(rax_23)
            
            rbx_5 = var_c8
        
        PWSTR rax_24 = var_e8
        
        if (rax_24 != 0)
            sub_140a74f90(rax_24)
    
    if (rbx_5 != 0)
        sub_140a74f90(rbx_5)

if (arg1[1].d != 0)
    r12 = *arg1

return sub_140b71990(-0xffffffff80000002, r12, u"DriverDate", &arg2[0x12])
