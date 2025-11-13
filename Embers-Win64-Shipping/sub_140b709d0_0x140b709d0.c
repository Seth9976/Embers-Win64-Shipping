// 函数: sub_140b709d0
// 地址: 0x140b709d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1)
void* rax = sub_140a7b0a0()

if (rax != 0)
    sub_140a8dc00(rax, 0)

int32_t rbx_1

if (rsi.d u> 7)
    rbx_1 = 4
else
    switch (rsi)
        case 0
            MessageBoxW(nullptr, arg2, arg3, MB_SYSTEMMODAL)
            rbx_1 = 5
        case 1
            rbx_1.b = MessageBoxW(nullptr, arg2, arg3, 0x1004) == IDYES
        case 2
            int32_t rbx_2
            rbx_2.b = MessageBoxW(nullptr, arg2, arg3, 0x1001) == IDOK
            rbx_1 = rbx_2 + 4
        case 3
            enum MESSAGEBOX_RESULT rax_3 = MessageBoxW(nullptr, arg2, arg3, 0x1023)
            
            if (rax_3 != IDYES)
                int32_t rax_4 = 4
                
                if (rax_3 == IDNO)
                    rax_4 = 0
                
                rbx_1 = rax_4
            else
                rbx_1 = rax_3 - 5
        case 4
            enum MESSAGEBOX_RESULT rax_5 = MessageBoxW(nullptr, arg2, arg3, 0x1126)
            
            if (rax_5 == IDCANCEL)
                rbx_1 = 4
            else
                int32_t rbx_3
                rbx_3.b = rax_5 != IDTRYAGAIN
                rbx_1 = rbx_3 + 6
        case 5
            data_143e18650 = arg2
            data_143e18658 = arg3
            data_143e18660 = 0
            rbx_1 = DialogBoxParamW(GetModuleHandleW(nullptr), 0x65, nullptr, sub_140b70100, 0)
        case 6
            data_143e18650 = arg2
            data_143e18658 = arg3
            data_143e18660 = 1
            rbx_1 = DialogBoxParamW(GetModuleHandleW(nullptr), 0x66, nullptr, sub_140b70100, 0)
        case 7
            data_143e18650 = arg2
            data_143e18658 = arg3
            data_143e18660 = 0
            rbx_1 = DialogBoxParamW(GetModuleHandleW(nullptr), 0x67, nullptr, sub_140b70100, 0)

void* rax_12 = sub_140a7b0a0()

if (rax_12 != 0)
    sub_140a89de0(rax_12, 0)

return zx.q(rbx_1)
