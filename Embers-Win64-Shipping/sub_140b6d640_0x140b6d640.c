// 函数: sub_140b6d640
// 地址: 0x140b6d640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_728
int64_t rax_1 = __security_cookie ^ &var_728
int64_t var_668 = 0x11c
int64_t var_660 = 0
int32_t var_658 = 0
void var_654
memset(&var_654, 0, 0x100)
int32_t var_554 = 0
int32_t var_550 = 0x10000
BOOL result

if (VerifyVersionInfoW(&var_668, VER_PRODUCT_TYPE, VerSetConditionMask(0, VER_PRODUCT_TYPE, 1))
        == 0)
    result.b = 1
else
    wchar16 var_248[0x108]
    GetModuleFileNameW(nullptr, &var_248, 0x103)
    
    if (CoInitialize(nullptr) u> 1)
        result.b = 0
    else
        int64_t* ppv
        HRESULT rax_3 =
            CoCreateInstance(&data_142e7d828, 0, CLSCTX_INPROC_SERVER, &data_142e7d838, &ppv)
        int32_t var_6d0 = 1
        BSTR bstrString = SysAllocString(&var_248)
        
        if (rax_3 s>= 0)
            int64_t* ppv_3 = ppv
            
            if (ppv_3 != 0)
                int64_t r9_1 = *ppv_3
                (*(r9_1 + 0x30))(ppv_3, bstrString, &var_6d0, r9_1)
        
        sub_140af2b60()
        int128_t var_688
        wchar16 const* const rdx_52
        
        if (sub_140b21a10(&data_143dbb3f0, u"installge") != 0)
            if (var_6d0 == 0 || ppv == 0)
                rdx_52 =
                    GameExplorer installation failed because you don't have access (check parental "
                goto label_140b6e00f
            
            sub_140b65060()
            BSTR bstrString_1 = SysAllocString(&data_143e189c0)
            int64_t* ppv_4 = ppv
            var_688 = data_142e7d848
            int64_t rbx_2 = *ppv_4
            sub_140af2b60()
            int32_t r9_2
            r9_2.b = sub_140b21a10(&data_143dbb3f0, u"allusers") != 0
            int32_t rax_6 =
                (*(rbx_2 + 0x18))(ppv, bstrString, bstrString_1, zx.q(r9_2 + 2), &var_688)
            int16_t* var_6b8
            HRESULT rax_13
            
            if (rax_6 s>= 0)
                SHGetFolderPathW(nullptr, 0x801c, nullptr, 0, &var_668)
                wchar16 lpsz[0x108]
                StringFromGUID2(&data_142e7d848, &lpsz, 0x103)
                int16_t* r15_1 = nullptr
                int16_t* var_6e8 = nullptr
                int32_t rsi_1 = 0
                int64_t var_6e0_1 = 0
                int32_t r14_1 = 0
                int64_t rdi_2 = -1
                int32_t rax_7
                
                if (var_668.w == 0)
                    rax_7 = 1
                else
                    int64_t rbx_3 = -1
                    
                    do
                        rbx_3 += 1
                    while (*(&var_668 + (rbx_3 << 1)) != 0)
                    
                    if (rbx_3.d + 1 s> 0)
                        sub_1405947f0(&var_6e8, rbx_3.d + 1)
                        r14_1 = var_6e0_1:4.d
                        rsi_1 = var_6e0_1.d
                        r15_1 = var_6e8
                    
                    rsi_1 += rbx_3.d + 1
                    var_6e0_1.d = rsi_1
                    
                    if (rsi_1 s> r14_1)
                        sub_140594770(&var_6e8)
                        r14_1 = var_6e0_1:4.d
                        rsi_1 = var_6e0_1.d
                        r15_1 = var_6e8
                    
                    UnDecorator::getReferenceType(r15_1, &var_668, (rbx_3.d + 1) * 2)
                    rax_7 = 0
                    
                    if (rsi_1 == 0)
                        rax_7 = 1
                
                var_6e8 = r15_1
                int32_t rdx_9 = rsi_1 + 0x20 + rax_7
                var_6e0_1.d = rsi_1
                var_6e0_1:4.d = r14_1
                
                if (rdx_9 s> r14_1)
                    sub_1405947f0(&var_6e8, rdx_9)
                
                sub_140a20ba0(&var_6e8, u"\Microsoft\Windows\GameExplorer\", 0x20)
                int32_t rcx_9 = var_6e0_1:4.d
                int16_t* r15_2 = var_6e8
                int32_t rsi_2 = var_6e0_1.d
                int64_t var_6e0_2 = 0
                var_6e8 = nullptr
                
                if (lpsz[0] != 0)
                    do
                        rdi_2 += 1
                    while (lpsz[rdi_2] != 0)
                    
                    int32_t rax_8
                    
                    if (rsi_2 == 0)
                        rax_8 = rsi_2 + 1
                    
                    if (rsi_2 != 0 || rdi_2.d == 0)
                        rax_8 = 0
                    
                    var_6b8 = r15_2
                    int32_t rdx_11 = rax_8 + rdi_2.d + rsi_2
                    int32_t var_6ac_1 = rcx_9
                    
                    if (rdx_11 s> rcx_9)
                        sub_1405947f0(&var_6b8, rdx_11)
                    
                    rcx_9 = sub_140a20ba0(&var_6b8, &lpsz, rdi_2.d)
                    r15_2 = var_6b8
                
                int16_t* var_6f8 = nullptr
                sub_1405a4c70(&var_6f8, sbb.d(rcx_9, rcx_9, rsi_2 != 0) + 0xb + rsi_2, 0)
                memcpy(var_6f8, r15_2, rsi_2 * 2)
                int32_t rcx_16 = sub_140a20ba0(&var_6f8, u"\PlayTasks", 0xa)
                var_6b8 = nullptr
                sub_1405a4c70(&var_6b8, sbb.d(rcx_16, rcx_16, rsi_2 != 0) + 0xe + rsi_2, 0)
                memcpy(var_6b8, r15_2, rsi_2 * 2)
                sub_140a20ba0(&var_6b8, u"\SupportTasks", 0xd)
                sub_140a464c0()
                int16_t* const r14_2 = &data_142d40450
                int16_t* r13_1 = var_6f8
                int16_t* const rdx_19 = &data_142d40450
                int64_t r8_9
                r8_9.b = 1
                char const (* r9_4)[0x4] = data_14399ea08
                
                if (rsi_2 != 0)
                    rdx_19 = r13_1
                
                (*(r9_4 + 0x58))(&data_14399ea08, rdx_19, r8_9, r9_4)
                sub_140a464c0()
                int16_t* const rdx_20 = &data_142d40450
                int64_t r8_10
                r8_10.b = 1
                char const (* r9_5)[0x4] = data_14399ea08
                
                if (rsi_2 != 0)
                    rdx_20 = var_6b8
                
                (*(r9_5 + 0x58))(&data_14399ea08, rdx_20, r8_10, r9_5)
                int64_t* ppv_1
                rax_13 = CoCreateInstance(&data_1434cb1f0, 0, CLSCTX_INPROC_SERVER, 
                    &data_1434cb190, &ppv_1)
                int64_t* ppv_5 = ppv_1
                int64_t r9_6 = *ppv_5
                int64_t* var_6c0
                (*r9_6)(ppv_5, &data_1434cb220, &var_6c0, r9_6)
                int64_t* ppv_6 = ppv_1
                int64_t r8_12 = *ppv_6
                (*(r8_12 + 0xa0))(ppv_6, &var_248, r8_12)
                int64_t* ppv_7 = ppv_1
                int64_t r8_13 = *ppv_7
                (*(r8_13 + 0x58))(ppv_7, &data_142d40450, r8_13)
                int64_t* ppv_8 = ppv_1
                (*(*ppv_8 + 0x38))(ppv_8, u"Play")
                int32_t rdx_22 = sub_140a464c0()
                var_6f8 = nullptr
                sub_1405a4c70(&var_6f8, sbb.d(rdx_22, rdx_22, rsi_2 != 0) + 3 + rsi_2, 0)
                memcpy(var_6f8, r13_1, rsi_2 * 2)
                sub_140a20ba0(&var_6f8, &data_142e7d91c, 2)
                int16_t* rcx_25 = var_6f8
                int64_t r8_16
                r8_16.b = 1
                var_6f8 = nullptr
                char const (* rax_16)[0x4] = data_14399ea08
                int32_t var_6f0_2
                var_6f0_2.q = 0
                int16_t* const rdx_27 = &data_142d40450
                
                if (rsi_2 != 0)
                    rdx_27 = rcx_25
                
                var_6e8 = rcx_25
                (*(rax_16 + 0x58))(&data_14399ea08, rdx_27, r8_16)
                int16_t* rcx_26 = var_6e8
                
                if (rcx_26 != 0)
                    rcx_26 = sub_140a74f90(rcx_26)
                
                var_6f8 = nullptr
                sub_1405a4c70(&var_6f8, sbb.d(rcx_26.d, rcx_26.d, rsi_2 != 0) + 0xc + rsi_2, 0)
                memcpy(var_6f8, r13_1, rsi_2 * 2)
                sub_140a20ba0(&var_6f8, u"\0\Play.lnk", 0xb)
                int16_t* rbx_6 = var_6f8
                var_6f8 = nullptr
                int16_t* const rdx_31 = &data_142d40450
                int32_t var_6f0_3
                var_6f0_3.q = 0
                
                if (rsi_2 != 0)
                    rdx_31 = rbx_6
                
                int64_t* rcx_31 = var_6c0
                (*(*rcx_31 + 0x30))(rcx_31, rdx_31, 1)
                
                if (rbx_6 != 0)
                    sub_140a74f90(rbx_6)
                
                int64_t* ppv_9 = ppv_1
                (*(*ppv_9 + 0x58))(ppv_9, u"editor")
                int64_t* ppv_10 = ppv_1
                (*(*ppv_10 + 0x38))(ppv_10, u"Editor")
                int32_t rdx_32 = sub_140a464c0()
                var_6f8 = nullptr
                sub_1405a4c70(&var_6f8, sbb.d(rdx_32, rdx_32, rsi_2 != 0) + 3 + rsi_2, 0)
                memcpy(var_6f8, r13_1, rsi_2 * 2)
                sub_140a20ba0(&var_6f8, &data_142e7d950, 2)
                int16_t* rcx_37 = var_6f8
                int64_t r8_21
                r8_21.b = 1
                var_6f8 = nullptr
                char const (* rax_24)[0x4] = data_14399ea08
                int32_t var_6f0_4
                var_6f0_4.q = 0
                int16_t* rdx_37 = &data_142d40450
                
                if (rsi_2 != 0)
                    rdx_37 = rcx_37
                
                var_6e8 = rcx_37
                (*(rax_24 + 0x58))(&data_14399ea08, rdx_37, r8_21)
                int16_t* rcx_38 = var_6e8
                
                if (rcx_38 != 0)
                    rcx_38 = sub_140a74f90(rcx_38)
                
                var_6f8 = nullptr
                sub_1405a4c70(&var_6f8, sbb.d(rcx_38.d, rcx_38.d, rsi_2 != 0) + 0xe + rsi_2, 0)
                memcpy(var_6f8, r13_1, rsi_2 * 2)
                sub_140a20ba0(&var_6f8, u"\1\Editor.lnk", 0xd)
                int16_t* rbx_7 = var_6f8
                int64_t* rcx_43 = var_6c0
                int16_t* const rdx_41 = &data_142d40450
                var_6f8 = nullptr
                
                if (rsi_2 != 0)
                    rdx_41 = rbx_7
                
                int32_t var_6f0_5
                var_6f0_5.q = 0
                (*(*rcx_43 + 0x30))(rcx_43, rdx_41, 1)
                
                if (rbx_7 != 0)
                    sub_140a74f90(rbx_7)
                
                int64_t* rcx_45 = var_6c0
                (*(*rcx_45 + 0x10))(rcx_45)
                int64_t* ppv_11 = ppv_1
                (*(*ppv_11 + 0x10))(ppv_11)
                int64_t* ppv_2
                CoCreateInstance(&data_1434cb180, 0, CLSCTX_INPROC_SERVER, &data_1434cb1b0, &ppv_2)
                int64_t* ppv_12 = ppv_2
                (**ppv_12)(ppv_12, &data_1434cb220, &var_6c0)
                int64_t* ppv_13 = ppv_2
                (*(*ppv_13 + 0x18))(ppv_13, u"http://www.unrealtournament3.com/", 0)
                int32_t r9_7 = sub_140a464c0()
                var_6f8 = nullptr
                sub_1405a4c70(&var_6f8, sbb.d(r9_7, r9_7, rsi_2 != 0) + 3 + rsi_2, 0)
                int16_t* rdi_4 = var_6b8
                memcpy(var_6f8, rdi_4, rsi_2 * 2)
                sub_140a20ba0(&var_6f8, &data_142e7d91c, 2)
                int16_t* rcx_50 = var_6f8
                int64_t r8_27
                r8_27.b = 1
                var_6f8 = nullptr
                char const (* rax_34)[0x4] = data_14399ea08
                int32_t var_6f0_6
                var_6f0_6.q = 0
                int16_t* rdx_45 = &data_142d40450
                
                if (rsi_2 != 0)
                    rdx_45 = rcx_50
                
                var_6e8 = rcx_50
                (*(rax_34 + 0x58))(&data_14399ea08, rdx_45, r8_27)
                int16_t* rcx_51 = var_6e8
                
                if (rcx_51 != 0)
                    rcx_51 = sub_140a74f90(rcx_51)
                
                var_6f8 = nullptr
                sub_1405a4c70(&var_6f8, sbb.d(rcx_51.d, rcx_51.d, rsi_2 != 0) + 0xb + rsi_2, 0)
                memcpy(var_6f8, rdi_4, rsi_2 * 2)
                sub_140a20ba0(&var_6f8, u"\0\UT3.url", 0xa)
                int16_t* rbx_8 = var_6f8
                var_6f8 = nullptr
                int32_t var_6f0_7
                var_6f0_7.q = 0
                
                if (rsi_2 != 0)
                    r14_2 = rbx_8
                
                int64_t* rcx_56 = var_6c0
                (*(*rcx_56 + 0x30))(rcx_56, r14_2, 1)
                
                if (rbx_8 != 0)
                    sub_140a74f90(rbx_8)
                
                int64_t* rcx_58 = var_6c0
                (*(*rcx_58 + 0x10))(rcx_58)
                int64_t* ppv_14 = ppv_2
                (*(*ppv_14 + 0x10))(ppv_14)
                
                if (rdi_4 != 0)
                    sub_140a74f90(rdi_4)
                
                if (r13_1 != 0)
                    sub_140a74f90(r13_1)
                
                if (r15_2 != 0)
                    sub_140a74f90(r15_2)
            
            int16_t* rdx_50
            
            if (rax_6 s< 0 || rax_13 s< 0)
                rdx_50 = u"GameExplorer installation was a failure, quitting now."
            else
                rdx_50 = u"GameExplorer installation was successful, quitting now."
            
            sub_140b21610(0, _vfprintf_p_l(&var_6b8, rdx_50, u"WindowsPlatform"), nullptr)
            sub_1405970a0(&var_6b8)
            SysFreeString(bstrString_1)
            goto label_140b6e031
        
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"uninstallge") == 0)
            SysFreeString(bstrString)
            int64_t* ppv_17 = ppv
            
            if (ppv_17 != 0)
                (*(*ppv_17 + 0x10))(ppv_17)
                ppv = nullptr
            
            CoUninitialize()
            
            if (var_6d0 != 0)
                result.b = 1
            else
                sub_140b21610(0, 
                    _vfprintf_p_l(&var_688, 
                        The current level of parental controls do not allow you to run this game.", 
                    UnrealEd"), nullptr)
                sub_1405970a0(&var_688)
                result.b = 0
        else
            int64_t* ppv_15 = ppv
            int64_t* rcx_65
            
            if (ppv_15 == 0)
                rdx_52 =
                    GameExplorer uninstallation failed because you are probably not running Vista."
            label_140b6e00f:
                rcx_65 = &var_688
            else
                int128_t zmm0_2 = data_142e7d848
                int64_t rax_43 = *ppv_15
                var_688 = zmm0_2
                rcx_65 = &var_688
                
                if ((*(rax_43 + 0x20))(zmm0_2, &var_688) s< 0)
                    rdx_52 = u"GameExplorer uninstallation was a failure, quitting now."
                else
                    rdx_52 = u"GameExplorer uninstallation was successful, quitting now."
            
            sub_140b21610(0, _vfprintf_p_l(rcx_65, rdx_52, u"WindowsPlatform"), nullptr)
            sub_1405970a0(&var_688)
        label_140b6e031:
            SysFreeString(bstrString)
            int64_t* ppv_16 = ppv
            
            if (ppv_16 != 0)
                (*(*ppv_16 + 0x10))(ppv_16)
                ppv = nullptr
            
            CoUninitialize()
            result.b = 0

__security_check_cookie(rax_1 ^ &var_728)
return result
