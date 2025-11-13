// 函数: sub_140b70100
// 地址: 0x140b70100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t result

if (arg2 == 2)
    UnregisterHotKey(arg1, 0x64)
    UnregisterHotKey(arg1, 0x65)
    
    if (data_143e18660 != 0)
        UnregisterHotKey(arg1, 0x66)
    
    result = 1
else if (arg2 == 0x110)
    RECT rect
    GetWindowRect(arg1, &rect)
    POINT point
    point.x = rect.right
    point.y = rect.bottom
    ScreenToClient(arg1, &point)
    int32_t rax_5 = point.x - 8
    wchar16* var_c0 = nullptr
    int32_t var_104 = rax_5
    int32_t var_b8_1 = 0
    bool cond:0_1 = data_143ddb400 != 0
    int32_t var_108 = point.y - 0xa
    int16_t* var_d0 = nullptr
    int32_t var_c8_1 = 0
    int32_t* var_e0 = nullptr
    int32_t var_d8_1 = 0
    wchar16* var_f0 = nullptr
    int32_t var_e8_1 = 0
    wchar16* var_100 = nullptr
    int32_t var_f8_1 = 0
    
    if (cond:0_1)
        void var_a8
        int64_t* rax_15 = sub_140ac6680(_vfprintf_p_l(&var_a8, u"Cancel", u"UnrealEd"))
        
        if (&var_c0 != rax_15)
            int32_t rbx_1 = rax_15[1].d
            int64_t rsi_1 = *rax_15
            var_b8_1 = rbx_1
            
            if (rbx_1 != 0)
                sub_1405a4c70(&var_c0, rbx_1, 0)
                memcpy(var_c0, rsi_1, rbx_1 * 2)
        
        int64_t* var_a0
        
        if (var_a0 != 0)
            var_a0[1].d -= 1
            
            if (var_a0[1].d == 1)
                (**var_a0)(var_a0)
                int32_t rax_18 = *(var_a0 + 0xc)
                *(var_a0 + 0xc) -= 1
                
                if (rax_18 == 1)
                    (*(*var_a0 + 8))(var_a0, 1)
        
        void var_90
        int64_t* rax_21 = sub_140ac6680(_vfprintf_p_l(&var_90, u"No to All", u"UnrealEd"))
        
        if (&var_d0 != rax_21)
            int32_t rbx_3 = rax_21[1].d
            int64_t rsi_2 = *rax_21
            var_c8_1 = rbx_3
            
            if (rbx_3 != 0)
                sub_1405a4c70(&var_d0, rbx_3, 0)
                memcpy(var_d0, rsi_2, rbx_3 * 2)
        
        int64_t* var_88
        
        if (var_88 != 0)
            var_88[1].d -= 1
            
            if (var_88[1].d == 1)
                (**var_88)(var_88)
                int32_t rax_24 = *(var_88 + 0xc)
                *(var_88 + 0xc) -= 1
                
                if (rax_24 == 1)
                    (*(*var_88 + 8))(var_88, 1)
        
        void var_78
        int64_t* rax_27 = sub_140ac6680(_vfprintf_p_l(&var_78, &data_142e5e440, u"UnrealEd"))
        
        if (&var_e0 != rax_27)
            int32_t rbx_5 = rax_27[1].d
            int64_t rsi_3 = *rax_27
            var_d8_1 = rbx_5
            
            if (rbx_5 != 0)
                sub_1405a4c70(&var_e0, rbx_5, 0)
                memcpy(var_e0, rsi_3, rbx_5 * 2)
        
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t rax_30 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (rax_30 == 1)
                    (*(*var_70 + 8))(var_70, 1)
        
        void var_60
        int64_t* rax_33 = sub_140ac6680(_vfprintf_p_l(&var_60, u"Yes to All", u"UnrealEd"))
        
        if (&var_f0 != rax_33)
            int32_t rbx_7 = rax_33[1].d
            int64_t rsi_4 = *rax_33
            var_e8_1 = rbx_7
            
            if (rbx_7 != 0)
                sub_1405a4c70(&var_f0, rbx_7, 0)
                memcpy(var_f0, rsi_4, rbx_7 * 2)
        
        int64_t* var_58
        
        if (var_58 != 0)
            var_58[1].d -= 1
            
            if (var_58[1].d == 1)
                (**var_58)(var_58)
                int32_t rax_36 = *(var_58 + 0xc)
                *(var_58 + 0xc) -= 1
                
                if (rax_36 == 1)
                    (*(*var_58 + 8))(var_58, 1)
        
        void var_48
        int64_t* rax_39 = sub_140ac6680(_vfprintf_p_l(&var_48, &data_142e5e448, u"UnrealEd"))
        
        if (&var_100 != rax_39)
            int32_t rbx_9 = rax_39[1].d
            int64_t rsi_5 = *rax_39
            var_f8_1 = rbx_9
            
            if (rbx_9 != 0)
                sub_1405a4c70(&var_100, rbx_9, 0)
                memcpy(var_100, rsi_5, rbx_9 * 2)
        
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t rax_42 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (rax_42 == 1)
                    (*(*var_40 + 8))(var_40, 1)
    else
        sub_1405947f0(&var_c0, 7)
        int32_t rax_8 = var_b8_1 + 7
        var_b8_1 = rax_8
        
        if (rax_8 s> 0)
            sub_140594770(&var_c0)
        
        __builtin_wcscpy(var_c0, u"Cancel")
        sub_1405947f0(&var_d0, 0xa)
        int32_t rax_9 = var_c8_1 + 0xa
        var_c8_1 = rax_9
        
        if (rax_9 s> 0)
            sub_140594770(&var_d0)
        
        __builtin_memcpy(var_d0, u"No to All", 0x14)
        sub_1405947f0(&var_e0, 3)
        int32_t rax_10 = var_d8_1 + 3
        var_d8_1 = rax_10
        
        if (rax_10 s> 0)
            sub_140594770(&var_e0)
        
        int32_t* rcx_19 = var_e0
        *rcx_19 = 0x6f004e
        rcx_19[1].w = 0
        sub_1405947f0(&var_f0, 0xb)
        int32_t rax_11 = var_e8_1 + 0xb
        var_e8_1 = rax_11
        
        if (rax_11 s> 0)
            sub_140594770(&var_f0)
        
        __builtin_wcscpy(var_f0, u"Yes to All")
        sub_1405947f0(&var_100, 4)
        int32_t rax_12 = var_f8_1 + 4
        var_f8_1 = rax_12
        
        if (rax_12 s> 0)
            sub_140594770(&var_100)
        
        *var_100 = 0x7300650059
    
    wchar16* rbx_11 = &data_142d40450
    wchar16* rdx_22 = &data_142d40450
    
    if (var_b8_1 != 0)
        rdx_22 = var_c0
    
    sub_140b72820(arg1, rdx_22, 0x3f1, &var_104, &var_108)
    int16_t* const rdx_23 = &data_142d40450
    
    if (var_c8_1 != 0)
        rdx_23 = var_d0
    
    sub_140b72820(arg1, rdx_23, 0x3e9, &var_104, &var_108)
    int32_t* rdx_24 = &data_142d40450
    
    if (var_d8_1 != 0)
        rdx_24 = var_e0
    
    sub_140b72820(arg1, rdx_24, 0x3eb, &var_104, &var_108)
    wchar16* rdx_25 = &data_142d40450
    
    if (var_e8_1 != 0)
        rdx_25 = var_f0
    
    sub_140b72820(arg1, rdx_25, 0x3e8, &var_104, &var_108)
    
    if (var_f8_1 != 0)
        rbx_11 = var_100
    
    sub_140b72820(arg1, rbx_11, 0x3ea, &var_104, &var_108)
    SetDlgItemTextW(arg1, 0x3ec, data_143e18650)
    SetWindowTextW(arg1, data_143e18658)
    HWND hWnd = GetTopWindow(arg1)
    int32_t* var_128_5
    
    if (hWnd != 0)
        var_128_5.d = 0
        SetWindowPos(hWnd, -ffffffffffffffff, 0, 0, var_128_5.d, 0, 0x3)
    
    SetForegroundWindow(arg1)
    var_128_5.d = 0
    SetWindowPos(arg1, -ffffffffffffffff, 0, 0, var_128_5.d, 0, 0x3)
    RegisterHotKey(arg1, 0x64, 0, 0x59)
    RegisterHotKey(arg1, 0x65, 0, 0x4e)
    
    if (data_143e18660 != 0)
        RegisterHotKey(arg1, 0x66, 0, 0x1b)
    
    var_128_5.d = 0
    SetWindowPos(arg1, -fffffffffffffffe, 0, 0, var_128_5.d, 0, 0x3)
    
    if (hWnd != 0)
        var_128_5.d = 0
        SetWindowPos(hWnd, -fffffffffffffffe, 0, 0, var_128_5.d, 0, 0x3)
    
    wchar16* rcx_71 = var_100
    
    if (rcx_71 != 0)
        sub_140a74f90(rcx_71)
    
    wchar16* rcx_72 = var_f0
    
    if (rcx_72 != 0)
        sub_140a74f90(rcx_72)
    
    int32_t* rcx_73 = var_e0
    
    if (rcx_73 != 0)
        sub_140a74f90(rcx_73)
    
    int16_t* rcx_74 = var_d0
    
    if (rcx_74 != 0)
        sub_140a74f90(rcx_74)
    
    wchar16* rcx_75 = var_c0
    
    if (rcx_75 != 0)
        sub_140a74f90(rcx_75)
    
    result = 1
else if (arg2 == 0x111)
    uint32_t rcx = zx.d(arg3.w)
    
    if (rcx == 0x3e8)
        EndDialog(arg1, 2)
    else if (rcx == 0x3e9)
        EndDialog(arg1, 3)
    else if (rcx == 0x3ea)
        EndDialog(arg1, 1)
    else if (rcx == 0x3eb)
        EndDialog(arg1, 0)
    else if (rcx == 0x3f1 && data_143e18660 != 0)
        EndDialog(arg1, zx.q(rcx - 0x3ed))
    
    result = 1
else if (arg2 == 0x312)
    if (arg3 == 0x64)
        EndDialog(arg1, 1)
    else if (arg3 == 0x65)
        EndDialog(arg1, 0)
    else if (arg3 == 0x66 && data_143e18660 != 0)
        EndDialog(arg1, zx.q((arg3 - 0x62).d))
    
    result = 1
else
    result = 0

__security_check_cookie(rax_1 ^ &var_148)
return result
