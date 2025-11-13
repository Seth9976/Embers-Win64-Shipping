// 函数: sub_140d88ab0
// 地址: 0x140d88ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
HWND hWnd = arg1
LRESULT result

if (arg2 == 2)
    PostQuitMessage(0)
    result = 0
else if (arg2 == 0xf)
    PAINTSTRUCT paint
    HDC hdc = BeginPaint(arg1, &paint)
    DrawStateW(hdc, nullptr, nullptr, data_143e20cb8, 0, 0, 0, 0, 0, DST_BITMAP)
    EnterCriticalSection(&data_143e20660)
    int32_t i = 0
    int32_t i_1 = 0
    int32_t* r12_1 = &data_143e206a0
    
    do
        int64_t i_2 = sx.q(i)
        
        if (sub_140ab3dc0(i_2 * 0x18 + &data_143e20600) == 0)
            enum TEXT_ALIGN_OPTIONS align
            HGDIOBJ h
            
            if (i u<= 1)
                h = data_143e20cd8
            label_140d88bea:
                SelectObject(hdc, h)
                
                if (i != 3)
                    align = TA_NOUPDATECP
                else
                    align = i - 1
            else
                if (i != 3)
                    h = data_143e20cd0
                    goto label_140d88bea
                
                SelectObject(hdc, data_143e20ce0)
                align = i - 1
            SetTextAlign(hdc, align)
            SetBkColor(hdc, 0)
            SetBkMode(hdc, 1)
            RECT rect
            GetClientRect(hWnd, &rect)
            int32_t rsi_1 = -2
            int64_t j_1 = 8
            WPARAM var_108_1
            int64_t j
            
            do
                int32_t rbx
                int32_t rdi_3
                
                if (rsi_1 u> 6)
                    rdi_3 = -1
                    rbx = 0
                else
                    switch (rsi_1)
                        case 0
                            rdi_3 = -1
                            rbx = -1
                        case 1
                            rdi_3 = 0
                            rbx = -1
                        case 2
                            rdi_3 = 1
                            rbx = -1
                        case 3
                            rdi_3 = 1
                            rbx = 0
                        case 4
                            rdi_3 = 1
                            rbx = 1
                        case 5
                            rdi_3 = 0
                            rbx = 1
                        case 6
                            rdi_3 = -1
                            rbx = 1
                
                SetTextColor(hdc, 0)
                int32_t rcx_12 = *(sub_140ac6680(i_2 * 0x18 + &data_143e20600) + 8)
                int32_t r14_1 = rcx_12 - 1
                
                if (rcx_12 == 0)
                    r14_1 = 0
                
                wchar16** rax_5 = sub_140ac6680(i_2 * 0x18 + &data_143e20600)
                wchar16* lpString
                
                if (rax_5[1].d == 0)
                    lpString = &data_142d40450
                else
                    lpString = *rax_5
                
                var_108_1.d = r14_1
                TextOutW(hdc, *r12_1 + rdi_3, r12_1[1] + rbx, lpString, var_108_1.d)
                rsi_1 += 1
                j = j_1
                j_1 -= 1
            while (j != 1)
            i = i_1
            COLORREF color
            
            if (i != 0)
                color = 0xf0f0f0
                
                if (((i - 1) & 0xfffffffd) != 0)
                    color = 0xa0a0a0
            else
                color = 0xc8c8c8
            
            SetTextColor(hdc, color)
            int32_t rdx_5 = *(sub_140ac6680(i_2 * 0x18 + &data_143e20600) + 8)
            int32_t rbx_1 = rdx_5 - 1
            
            if (rdx_5 == 0)
                rbx_1 = 0
            
            wchar16** rax_8 = sub_140ac6680(i_2 * 0x18 + &data_143e20600)
            wchar16* lpString_1
            
            if (rax_8[1].d == 0)
                lpString_1 = &data_142d40450
            else
                lpString_1 = *rax_8
            
            var_108_1.d = rbx_1
            TextOutW(hdc, *r12_1, r12_1[1], lpString_1, var_108_1.d)
            hWnd = arg1
        
        i += 1
        r12_1 = &r12_1[4]
        i_1 = i
    while (i s< 4)
    
    LeaveCriticalSection(&data_143e20660)
    EndPaint(hWnd, &paint)
    result = 0
else
    result = DefWindowProcW(arg1, arg2, arg3, arg4)

__security_check_cookie(rax_1 ^ &var_128)
return result
