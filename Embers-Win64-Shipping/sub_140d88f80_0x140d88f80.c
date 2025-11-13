// 函数: sub_140d88f80
// 地址: 0x140d88f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
HINSTANCE hInstance = data_143e18638
WNDCLASSW wndClass
wndClass.style = 3
wndClass.lpfnWndProc = sub_140d88ab0
wndClass.cbClsExtra = 0
wndClass.cbWndExtra = 0
wndClass.hInstance = hInstance
HICON rax_2 = LoadIconW(hInstance, 0x7b)
wndClass.hIcon = rax_2

if (rax_2 == 0)
    wndClass.hIcon = LoadIconW(nullptr, 0x7f00)

wndClass.hCursor = LoadCursorW(nullptr, 0x7f00)
HGDIOBJ rax_5 = GetStockObject(WHITE_BRUSH)
wndClass.lpszMenuName = 0
wndClass.hbrBackground = rax_5
wndClass.lpszClassName = u"SplashScreenClass"

if (RegisterClassW(&wndClass) != 0)
    HBITMAP h = sub_140d7f270()
    data_143e20cb8 = h
    
    if (h != 0)
        int64_t i = 0x20
        void pv
        GetObjectW(h, 0x20, &pv)
        int32_t var_134
        int32_t nWidth = var_134 + GetSystemMetrics(SM_CXBORDER)
        int32_t var_130
        int32_t nHeight = var_130 + GetSystemMetrics(SM_CYBORDER)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(GetSystemMetrics(SM_CXSCREEN) - nWidth)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(GetSystemMetrics(SM_CYSCREEN) - nHeight)
        HWND hwnd = CreateWindowExW(0x80080, wndClass.lpszClassName, SplashScreen", 0x80800000, 
            (temp1_1 - temp0_1) s>> 1, (temp3_1 - temp2_1) s>> 1, nWidth, nHeight, nullptr, 
            nullptr, data_143e18638, 0)
        data_143e20cc0 = hwnd
        SetLayeredWindowAttributes(hwnd, 0, 0, LWA_ALPHA)
        HGDIOBJ h_1 = GetStockObject(DEFAULT_GUI_FONT)
        LOGFONTW var_e8
        memset(&var_e8, 0, 0x5c)
        GetObjectW(h_1, 0x5c, &var_e8)
        var_e8.lfHeight = 0xa
        HFONT h_2 = CreateFontIndirectW(&var_e8)
        
        if (h_2 == 0)
            h_2 = h_1
        
        data_143e20cd0 = h_2
        memset(&var_e8, 0, 0x5c)
        GetObjectW(h_1, 0x5c, &var_e8)
        var_e8.lfHeight = 0xc
        HFONT h_3 = CreateFontIndirectW(&var_e8)
        
        if (h_3 == 0)
            h_3 = h_1
        
        data_143e20cd8 = h_3
        memset(&var_e8, 0, 0x5c)
        GetObjectW(h_1, 0x5c, &var_e8)
        var_e8.lfHeight = 0x28
        var_e8.lfWeight = 0x2bc
        var_e8.lfQuality = 4
        var_cc
        void* rcx_12 = &var_cc
        
        while (i != -0x7fffffde)
            int16_t rax_20 = *(u"Verdana" - &var_cc + rcx_12)
            
            if (rax_20 == 0)
                break
            
            *rcx_12 = rax_20
            rcx_12 += 2
            int64_t i_1 = i
            i -= 1
            
            if (i_1 == 1)
                break
        
        void* rax_21 = rcx_12 - 2
        
        if (i != 0)
            rax_21 = rcx_12
        
        *rax_21 = 0
        HGDIOBJ h_4 = CreateFontIndirectW(&var_e8)
        
        if (h_4 == 0)
            h_4 = h_1
        
        data_143e20ce0 = h_4
        data_143e206d4 = 0xa
        data_143e206dc = 0x3c
        data_143e206d0 = var_134 - 0xc
        bool cond:3_1 = data_143e20cc0 == 0
        data_143e206b4 = var_130 - 0x3c
        data_143e206bc = var_130 - 0x28
        data_143e206c4 = var_130 - 0x10
        data_143e206cc = var_130 - 6
        data_143e206a4 = var_130 - 0x14
        data_143e206d8 = 0xc
        data_143e206b0 = 0xa
        data_143e206b8 = var_134 - 0x14
        data_143e206c0 = 0xa
        data_143e206c8 = var_134 - 0x14
        data_143e206ac = var_130
        data_143e206a0 = 0xa
        data_143e206a8 = var_134 - 0x14
        
        if (not(cond:3_1))
            int64_t* rax_28 = sub_140ac6680(&data_143e205e8, var_130)
            PWSTR lpString
            
            if (rax_28[1].d == 0)
                lpString = &data_142d40450
            else
                lpString = *rax_28
            
            SetWindowTextW(data_143e20cc0, lpString)
            ShowWindow(data_143e20cc0, SW_SHOW)
            UpdateWindow(data_143e20cc0)
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            int128_t zmm7
            zmm7.q = float.d(performanceCount)
            int32_t rdi_2 = 0
            HGDIOBJ rbx_3
            rbx_3.b = 0
            double zmm6[0x2] = zx.o(0)
            zmm7.q = zmm7.q f* data_143d796f8
            
            do
                MSG msg
                
                if (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE) != 0)
                    TranslateMessage(&msg)
                    DispatchMessageW(&msg)
                    rbx_3 = zx.q(rbx_3.b)
                    
                    if (msg.message == 0x12)
                        rbx_3 = 1
                
                double zmm0_1[0x2]
                
                if (rdi_2 s>= 0xff)
                    zmm0_1 = 0x3c888889
                else
                    int64_t performanceCount_1
                    QueryPerformanceCounter(&performanceCount_1)
                    zmm0_1 = zx.o(0)
                    zmm0_1[0] = float.d(performanceCount_1)
                    zmm0_1[0] = zmm0_1[0] f* data_143d796f8
                    zmm0_1[0] = zmm0_1[0] f- zmm7.q
                    float zmm1 = _mm_cvtpd_ps(zmm0_1) * 5f
                    
                    if (zmm1 f>= zmm6[0].d)
                        zmm1 = _mm_min_ss(zmm1, 0x3f800000)
                    else
                        zmm1 = zmm6[0].d
                    
                    int32_t rax_30 = int.d(zmm1 * 255f)
                    
                    if (rax_30 != rdi_2)
                        rdi_2 = rax_30
                        SetLayeredWindowAttributes(data_143e20cc0, 0, rax_30.b, LWA_ALPHA)
                    
                    zmm0_1 = zmm6
                
                zmm6 = sub_140b73230(zmm0_1)
            while (rbx_3.b == 0)
        
        DeleteObject(data_143e20cb8)
        data_143e20cb8 = 0
    
    UnregisterClassW(wndClass.lpszClassName, data_143e18638)

__security_check_cookie(rax_1 ^ &var_1f8)
return 0
