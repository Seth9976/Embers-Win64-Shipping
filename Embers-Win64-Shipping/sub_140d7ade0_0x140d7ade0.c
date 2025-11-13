// 函数: sub_140d7ade0
// 地址: 0x140d7ade0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t __saved_zmm6 = arg3
arg3 = 0x3f800000

if (data_1439ae430 != 0)
    if (data_143e203b0 == 0)
        HDC rax_6 = GetDC(nullptr)
        arg3.d = _mm_cvtepi32_ps(zx.o(GetDeviceCaps(rax_6, 0x58))).d f* 0.010416667f
        ReleaseDC(nullptr, rax_6)
    else
        int32_t arg_18 = int.d(arg1)
        int32_t arg_1c = int.d(arg2)
        POINT pt
        pt.x = arg_18
        pt.y = arg_18
        HMONITOR rax_3 = MonitorFromPoint(pt, MONITOR_DEFAULTTONEAREST)
        
        if (rax_3 != 0)
            arg_18 = 0
            int32_t arg_20 = 0
            
            if (data_143e203b0(rax_3, 0, &arg_18, &arg_20, __saved_zmm6) s>= 0)
                return float.s(zx.q(arg_18)) * 0.010416667f

return arg3.d
