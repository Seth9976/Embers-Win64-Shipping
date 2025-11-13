// 函数: sub_140d882e0
// 地址: 0x140d882e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
HANDLE hConsoleOutput = *(arg1 + 0x20)

if (arg2 == 0)
    if (hConsoleOutput != 0)
        sub_140d862a0(arg1)
        *(arg1 + 0x20) = 0
        hConsoleOutput = FreeConsole()
        *(arg1 + 0x29) = 0
else if (hConsoleOutput == 0)
    if (AllocConsole() != 0)
        sub_140b72910()
    else
        *(arg1 + 0x29) = 1
    
    hConsoleOutput = GetStdHandle(data_1439ae428)
    *(arg1 + 0x20) = hConsoleOutput
    
    if (hConsoleOutput != -1)
        int32_t var_b4 = 0xfa0
        uint64_t rsi
        rsi.b = 0
        void* rcx_1 = data_143ddb400
        uint64_t r14
        r14.b = 0
        SMALL_RECT consoleWindow
        consoleWindow.Left = 0xa0
        consoleWindow.Top = 0xfa0
        int32_t var_b8 = 0xa0
        int32_t X = 0
        int32_t Y = 0
        
        if (rcx_1 != 0)
            sub_140af3c10(rcx_1, u"DebugWindows", u"ConsoleWidth", &var_b8, &data_143de5830)
            sub_140af3c10(data_143ddb400, DebugWindows", ConsoleHeight", &var_b4, &data_143de5830)
            char rax_3
            rsi = zx.q(rax_3)
            char rax_4
            r14 = zx.q(rax_4)
            hConsoleOutput = *(arg1 + 0x20)
            consoleWindow.Left = var_b8.w
            consoleWindow.Top = var_b4.w
        
        COORD dwSize
        dwSize.X = consoleWindow.Left
        dwSize.Y = consoleWindow.Top
        SetConsoleScreenBufferSize(hConsoleOutput, dwSize)
        CONSOLE_SCREEN_BUFFER_INFO consoleScreenBufferInfo
        
        if (GetConsoleScreenBufferInfo(*(arg1 + 0x20), &consoleScreenBufferInfo) != 0)
            int64_t rax_6
            rax_6.w = consoleScreenBufferInfo.srWindow.Left
            rax_6:2.w = consoleScreenBufferInfo.srWindow.Top
            rax_6:4.w = consoleScreenBufferInfo.srWindow.Right
            rax_6:6.w = consoleScreenBufferInfo.srWindow.Bottom
            consoleWindow.Left = rax_6.w
            consoleWindow.Top = rax_6:2.w
            consoleWindow.Right = rax_6:4.w
            consoleWindow.Bottom = rax_6:6.w
            consoleWindow.Right = consoleScreenBufferInfo.dwSize.X - 1
            SetConsoleWindowInfo(*(arg1 + 0x20), 1, &consoleWindow)
        
        RECT rect
        GetWindowRect(GetConsoleWindow(), &rect)
        sub_140af2b60()
        
        if (sub_140b2ab20(&data_143dbb3f0, u"ConsoleX=", &X) == 0)
            int32_t left = X
            
            if (rsi.b == 0)
                left = rect.left
            
            X = left
        
        sub_140af2b60()
        
        if (sub_140b2ab20(&data_143dbb3f0, u"ConsoleY=", &Y) == 0)
            int32_t top = Y
            
            if (r14.b == 0)
                top = rect.top
            
            Y = top
        
        int64_t var_a0 = 0
        int128_t var_68
        __builtin_memset(&var_68, 0, 0x20)
        int64_t var_98_1 = 0
        int32_t var_a8
        sub_140d84bf0(&var_a8)
        TEB* gsbase
        void* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        
        if (data_143e20c68 s> *(rbx_1 + 0x14))
            _Init_thread_header(&data_143e20c68)
            
            if (data_143e20c68 == 0xffffffff)
                data_143e20c64 = rect.right - rect.left
                _Init_thread_footer(&data_143e20c68)
        
        if (data_143e20c70 s> *(rbx_1 + 0x14))
            _Init_thread_header(&data_143e20c70)
            
            if (data_143e20c70 == 0xffffffff)
                data_143e20c6c = rect.bottom - rect.top
                _Init_thread_footer(&data_143e20c70)
        
        int32_t X_3
        int32_t var_78
        
        if (data_143e20c78 s> *(rbx_1 + 0x14))
            _Init_thread_header(&data_143e20c78)
            
            if (data_143e20c78 == 0xffffffff)
                data_143e20c74 = var_78 - X_3
                _Init_thread_footer(&data_143e20c78)
        
        int32_t Y_3
        int32_t var_74
        
        if (data_143e20c80 s> *(rbx_1 + 0x14))
            _Init_thread_header(&data_143e20c80)
            
            if (data_143e20c80 == 0xffffffff)
                data_143e20c7c = var_74 - Y_3
                _Init_thread_footer(&data_143e20c80)
        
        if (data_143e20c88 s> *(rbx_1 + 0x14))
            _Init_thread_header(&data_143e20c88)
            
            if (data_143e20c88 == 0xffffffff)
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(data_143e20c74)
                int32_t r8_6 = (temp1_1 - temp0_1) s>> 1
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(data_143e20c64)
                int32_t rax_42 = (temp3_1 - temp2_1) s>> 1
                
                if (rax_42 s<= r8_6)
                    r8_6 = rax_42
                
                if (r8_6 s<= 0x32)
                    r8_6 = 0x32
                
                data_143e20c84 = r8_6
                _Init_thread_footer(&data_143e20c88)
        
        if (data_143e20c90 s> *(rbx_1 + 0x14))
            _Init_thread_header(&data_143e20c90)
            
            if (data_143e20c90 == 0xffffffff)
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(data_143e20c7c)
                int32_t r8_5 = (temp5_1 - temp4_1) s>> 1
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(data_143e20c6c)
                int32_t rax_26 = (temp7_1 - temp6_1) s>> 1
                
                if (rax_26 s<= r8_5)
                    r8_5 = rax_26
                
                if (r8_5 s<= 0x32)
                    r8_5 = 0x32
                
                data_143e20c8c = r8_5
                _Init_thread_footer(&data_143e20c90)
        
        int32_t X_1 = X_3
        int32_t X_2 = var_78 - data_143e20c84
        
        if (X s>= X_1)
            X_1 = X
        
        if (X_1 s<= X_2)
            X_2 = X_1
        
        int32_t Y_1 = Y_3
        X = X_2
        int32_t Y_2 = var_74 - data_143e20c8c
        
        if (Y s>= Y_1)
            Y_1 = Y
        
        if (Y_1 s<= Y_2)
            Y_2 = Y_1
        
        Y = Y_2
        int16_t** var_e8
        var_e8.d = 0
        SetWindowPos(GetConsoleWindow(), nullptr, X, Y, var_e8.d, 0, 0x405)
        hConsoleOutput = sub_140d72800(&var_a0)

__security_check_cookie(rax_1 ^ &var_108)
return hConsoleOutput
