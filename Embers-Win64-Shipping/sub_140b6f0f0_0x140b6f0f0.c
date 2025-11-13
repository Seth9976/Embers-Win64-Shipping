// 函数: sub_140b6f0f0
// 地址: 0x140b6f0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

PWSTR* arg_8 = arg1
uint32_t lpcbData = 0
int64_t r12 = 0
int32_t rdi = 0
int16_t* var_128 = nullptr
uint64_t rbx
rbx.b = 0
int32_t var_120 = 0
int32_t r15 = 0
int64_t var_98 = 0
int64_t* var_168

while (true)
    if (rbx.b == 0)
        int32_t r9_1 = 0x100
        HKEY hKey_1 = nullptr
        
        if (r15 == 0)
            r9_1 = 0x200
        
        enum WIN32_ERROR rax_1
        rax_1, arg1 = RegOpenKeyExW(-0xffffffff80000001, 
            Software\Microsoft\Windows\Shell\Associations\UrlAssociations\http\UserChoice", 0, 
            r9_1 | 0x20019, &hKey_1)
        
        if (rax_1 == NO_ERROR)
            HKEY hKey = hKey_1
            var_168 = nullptr
            lpcbData = 0
            
            if (RegQueryValueExW(hKey, u"Progid", nullptr, nullptr, nullptr, &lpcbData) == NO_ERROR)
                uint32_t lpcbData_1 = lpcbData
                
                if (lpcbData_1 != 0)
                    int64_t* lpData = j_sub_140a82f30(zx.q(lpcbData_1))
                    
                    if (RegQueryValueExW(hKey_1, Progid", nullptr, nullptr, lpData, &lpcbData)
                            == NO_ERROR)
                        int32_t rax_4 = 0
                        rbx = zx.q(lpcbData u>> 1)
                        int64_t rsi_1 = 0
                        int64_t var_118 = 0
                        rdi = 0
                        int32_t var_110_1 = 0
                        int32_t var_10c_1 = 0
                        
                        if (lpData != 0 && *lpData != 0 && rbx.d u> 1)
                            if (rbx.d != 0)
                                sub_1405947f0(&var_118, rbx.d)
                                rax_4 = var_10c_1
                                rdi = var_110_1
                                rsi_1 = var_118
                            
                            rdi += rbx.d
                            
                            if (rdi s> rax_4)
                                sub_140594770(&var_118)
                                rsi_1 = var_118
                            
                            UnDecorator::getReferenceType(rsi_1, lpData, (rbx << 1).d - 2)
                            *(rsi_1 + (sx.q(rdi) << 1) - 2) = 0
                        
                        if (r12 != 0)
                            sub_140a74f90(r12)
                        
                        r12 = rsi_1
                        var_98 = rsi_1
                        var_118 = 0
                        var_110_1.q = 0
                        rbx.b = 1
                    
                    j_sub_140a74f90(lpData)
            
            arg1 = RegCloseKey(hKey_1)
        
        r15 += 1
        
        if (r15 s< 2)
            continue
        else if (rbx.b == 0)
            break
    
    PWSTR var_b8 = nullptr
    sub_1405a4c70(&var_b8, sbb.d(arg1.d, arg1.d, rdi != 0) + 0x14 + rdi, 0)
    memcpy(var_b8, r12, rdi * 2)
    sub_140a20ba0(&var_b8, u"\shell\open\command", 0x13)
    PWSTR rbx_2 = var_b8
    PWSTR rdx_6 = &data_142d40450
    
    if (rdi != 0)
        rdx_6 = rbx_2
    
    sub_140b71990(-0xffffffff80000000, rdx_6, nullptr, &var_128)
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    break

int64_t* result
uint64_t* r14_6

if (var_120 s> 1)
label_140b6f3ac:
    int32_t r15_1 = 0
    var_168.d = 0xffffffff
    int16_t* var_108 = nullptr
    int32_t var_100_1 = 0
    int16_t* rsi_2 = nullptr
    int32_t rax_8 = sub_140a23cf0(&var_128, &data_142d4056c, 1, 0, 0xffffffff)
    int32_t rax_9
    
    if (rax_8 != 0xffffffff)
        var_168.d = rax_8 + 1
        rax_9 = sub_140a23cf0(&var_128, &data_142d4056c, 1, 0, var_168.d)
    
    int16_t* rdi_3
    
    if (rax_8 == 0xffffffff || rax_9 == 0xffffffff)
        r14_6 = arg2
    label_140b6f811:
        rdi_3 = var_108
    label_140b6f821:
        
        if (rdi_3 != 0)
            sub_140a74f90(rdi_3)
        
        if (rsi_2 == 0)
            goto label_140b6f858
        
        sub_140a74f90(rsi_2)
        goto label_140b6f858
    
    int32_t rdx_7 = var_120
    int32_t r9_6 = rax_9 - rax_8
    int32_t r12_1 = 0
    
    if (r9_6 - 1 s>= 0)
        int32_t rbx_4 = rdx_7 - 1
        
        if (rdx_7 == 0)
            rbx_4 = 0
        
        int32_t rcx_15
        
        if (rax_8 + 1 s>= 0)
            rcx_15 = rbx_4
            
            if (rax_8 + 1 s< rbx_4)
                rcx_15 = rax_8 + 1
        else
            rcx_15 = 0
        
        int64_t r8_5 = sx.q(rax_8 + 1) + sx.q(r9_6 - 1)
        int64_t r10_1 = sx.q(rcx_15)
        
        if (r8_5 s< r10_1)
            rbx_4 = rcx_15
        else if (r8_5 s< sx.q(rbx_4))
            rbx_4 = r8_5.d
        
        int16_t* var_d8 = nullptr
        int16_t* const rax_12 = &data_142d40450
        int32_t var_d0_1 = 0
        
        if (rdx_7 != 0)
            rax_12 = var_128
        
        int32_t rbx_5 = rbx_4 - rcx_15
        void* rdi_2 = &rax_12[r10_1]
        int32_t rax_13 = 0
        int32_t var_cc_1 = 0
        
        if (rdi_2 != 0 && *rdi_2 != 0 && rbx_5 s> 0)
            if (rbx_5 + 1 s> 0)
                sub_1405947f0(&var_d8, rbx_5 + 1)
                rax_13 = var_cc_1
                r12_1 = var_d0_1
                rsi_2 = var_d8
            
            r12_1 += rbx_5 + 1
            
            if (r12_1 s> rax_13)
                sub_140594770(&var_d8)
                rsi_2 = var_d8
            
            UnDecorator::getReferenceType(rsi_2, rdi_2, rbx_5 * 2)
            rsi_2[sx.q(r12_1) - 1] = 0
            rdx_7 = var_120
    
    int32_t rbx_6 = rdx_7 - 1
    
    if (rdx_7 == 0)
        rbx_6 = 0
    
    int32_t rcx_19
    
    if (rax_9 + 1 s>= 0)
        rcx_19 = rbx_6
        
        if (rax_9 + 1 s< rbx_6)
            rcx_19 = rax_9 + 1
    else
        rcx_19 = 0
    
    int64_t r9_8 = sx.q(rcx_19)
    
    if (sx.q(rax_9 + 1) + 0x7fffffff s< r9_8)
        rbx_6 = rcx_19
    else if (sx.q(rax_9 + 1) + 0x7fffffff s< sx.q(rbx_6))
        rbx_6 = rax_9 - -0x80000000
    
    int16_t* var_f8 = nullptr
    int16_t* rax_17 = &data_142d40450
    int64_t var_f0_1 = 0
    
    if (rdx_7 != 0)
        rax_17 = var_128
    
    rdi_3 = nullptr
    int32_t rbx_7 = rbx_6 - rcx_19
    int32_t r14_3 = 0
    void* rax_18 = &rax_17[r9_8]
    void* var_90 = rax_18
    
    if (rax_18 != 0 && *rax_18 != 0 && rbx_7 s> 0)
        if (rbx_7 + 1 s> 0)
            sub_1405947f0(&var_f8, rbx_7 + 1)
            r15_1 = var_f0_1:4.d
            r14_3 = var_f0_1.d
            rdi_3 = var_f8
        
        r14_3 += rbx_7 + 1
        var_f0_1.d = r14_3
        
        if (r14_3 s> r15_1)
            sub_140594770(&var_f8)
            r15_1 = var_f0_1:4.d
            r14_3 = var_f0_1.d
            rdi_3 = var_f8
        
        UnDecorator::getReferenceType(rdi_3, var_90, rbx_7 * 2)
        rdi_3[sx.q(r14_3) - 1] = 0
    
    int16_t* rcx_23 = var_108
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    var_108 = rdi_3
    var_100_1 = r14_3
    
    if (r12_1 s<= 1)
        r14_6 = arg2
        goto label_140b6f821
    
    WCHAR* r8_12
    
    if (arg_8[1].d == 0)
        r8_12 = &data_142d40450
    else
        r8_12 = *arg_8
    
    if (sub_140a306e0(&var_108, &data_142e7e878, r8_12, 1) == 0)
        int32_t rax_21 = arg_8[1].d
        int32_t rbx_9 = rax_21 - 1
        
        if (rax_21 == 0)
            rbx_9 = 0
        
        int32_t* var_e8 = nullptr
        int32_t* r15_2 = nullptr
        int64_t var_e0_1 = 0
        int32_t rdx_14 = 0
        int32_t r14_5 = 0
        
        if (rbx_9 + 3 s> 0)
            sub_1405947f0(&var_e8, rbx_9 + 3)
            rdx_14 = var_e0_1.d
            r14_5 = var_e0_1:4.d
            r15_2 = var_e8
        
        int32_t rdi_5 = rbx_9 + 3 + rdx_14
        var_e0_1.d = rdi_5
        
        if (rdi_5 s> r14_5)
            sub_140594770(&var_e8)
            r14_5 = var_e0_1:4.d
            rdi_5 = var_e0_1.d
            r15_2 = var_e8
        
        *r15_2 = 0x220020
        int64_t rbx_10 = sx.q(rbx_9)
        memcpy(&r15_2[1], *arg_8, rbx_10.d * 2)
        int32_t* var_c8 = r15_2
        *(r15_2 + (rbx_10 << 1) + 4) = 0
        int32_t rax_23
        rax_23.b = rdi_5 == 0
        int32_t var_bc_1 = r14_5
        int32_t rdx_19 = rax_23 + 1 + rdi_5
        
        if (rdx_19 s> r14_5)
            sub_1405947f0(&var_c8, rdx_19)
        
        sub_140a20ba0(&var_c8, &data_142d4056c, 1)
        int32_t* rbx_11 = var_c8
        var_c8 = nullptr
        int32_t var_c0_1
        var_c0_1.q = 0
        int32_t r8_14 = rdi_5 - 1
        
        if (rdi_5 == 0)
            r8_14 = 0
        
        sub_140a20ba0(&var_108, rbx_11, r8_14)
        
        if (rbx_11 != 0)
            sub_140a74f90(rbx_11)
    
    int16_t* const r8_15 = &data_142d40450
    
    if (r15_1 != 0)
        r8_15 = var_108
    
    int16_t* const rdx_21 = &data_142d40450
    
    if (r12_1 != 0)
        rdx_21 = rsi_2
    
    result = sub_140b65ff0(&var_90, rdx_21, r8_15, 1, 0, 0, nullptr, 0, nullptr, 0, 0)
    
    if (*result == 0)
        r14_6 = arg2
        
        if (r14_6 == 0)
            goto label_140b6f811
        
        void var_78
        sub_140597df0(r14_6, sub_140ac6680(_vfprintf_p_l(&var_78, Failed launching URL", Core")))
        int64_t* var_70
        
        if (var_70 == 0)
            goto label_140b6f811
        
        var_70[1].d -= 1
        
        if (var_70[1].d != 1)
            goto label_140b6f811
        
        (**var_70)(var_70)
        int32_t rax_29 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (rax_29 != 1)
            goto label_140b6f811
        
        (*(*var_70 + 8))(var_70, 1)
        rdi_3 = var_108
        goto label_140b6f821
    
    int16_t* rcx_33 = var_108
    
    if (rcx_33 != 0)
        result = sub_140a74f90(rcx_33)
    
    if (rsi_2 != 0)
        result = sub_140a74f90(rsi_2)
else
    sub_140b71990(-0xffffffff80000000, u"http\shell\open\command", nullptr, &var_128)
    
    if (var_120 s> 1)
        goto label_140b6f3ac
    
    r14_6 = arg2
label_140b6f858:
    char rax_31 = sub_140a32ae0(arg_8, u"http://", 1)
    
    if (rax_31 == 0)
        result = sub_140a32ae0(arg_8, u"https://", 1)
    
    if (rax_31 != 0 || result.b != 0)
        PWSTR lpFile
        
        if (arg_8[1].d == 0)
            lpFile = &data_142d40450
        else
            lpFile = *arg_8
        
        result = ShellExecuteW(nullptr, u"open", lpFile, nullptr, nullptr, SW_SHOWNORMAL)
        
        if (r14_6 != 0)
            uint64_t var_a8
            int64_t var_88
            int64_t* rdx_23
            int32_t rbx_15
            
            if (result s> 0x20)
                var_88 = 0
                rdx_23 = &var_88
                int64_t var_80_1 = 0
                rbx_15 = 4
            else
                void var_60
                int64_t* rax_33 = sub_140ac6680(_vfprintf_p_l(&var_60, Failed launching URL", Core")
                    )
                var_a8 = 0
                int32_t rbx_14 = rax_33[1].d
                int64_t rdi_6 = *rax_33
                int32_t var_a0_1 = rbx_14
                
                if (rbx_14 != 0)
                    sub_1405a4c70(&var_a8, rbx_14, 0)
                    memcpy(var_a8, rdi_6, rbx_14 * 2)
                    rdx_23 = &var_a8
                    rbx_15 = 3
                else
                    int32_t var_9c_1 = 0
                    rdx_23 = &var_a8
                    rbx_15 = 3
            
            result = sub_140597df0(r14_6, rdx_23)
            
            if ((rbx_15.b & 4) != 0)
                int64_t rcx_49 = var_88
                rbx_15 &= 0xfffffffb
                
                if (rcx_49 != 0)
                    result = sub_140a74f90(rcx_49)
            
            if ((rbx_15.b & 2) != 0)
                uint64_t rcx_50 = var_a8
                rbx_15 &= 0xfffffffd
                
                if (rcx_50 != 0)
                    result = sub_140a74f90(rcx_50)
            
            int64_t* var_58
            
            if ((rbx_15.b & 1) != 0 && var_58 != 0)
                result = zx.q(var_58[1].d)
                var_58[1].d -= 1
                
                if (result.d == 1)
                    result = (**var_58)(var_58)
                    int32_t r13_1 = *(var_58 + 0xc)
                    *(var_58 + 0xc) -= 1
                    
                    if (r13_1 == 1)
                        result = (*(*var_58 + 8))(var_58, zx.q(r13_1))

if (var_98 != 0)
    result = sub_140a74f90(var_98)

int16_t* rcx_54 = var_128

if (rcx_54 == 0)
    return result

return sub_140a74f90(rcx_54)
