// 函数: sub_140a84510
// 地址: 0x140a84510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg3[1].d
int32_t r10 = r11 - 1

if (r11 == 0)
    r10 = -1

uint64_t result = zx.q(r11 - 1)

if (r11 == 0)
    result = 0xffffffff

if (r11 == 0)
    result = 0

if (result.d s<= 0)
    result.b = 0
else
    if (r11 == 0)
        r10 = 0
    
    wchar16* _String2
    
    if (r11 == 0)
        _String2 = &data_142d40450
    else
        _String2 = *arg3
    
    if (wcsncmp(*arg1, _String2, sx.q(r10)).d != 0)
        result.b = 0
    else
        *arg2 |= arg4
        int32_t rax = arg3[1].d
        int32_t rcx_1 = rax - 1
        
        if (rax == 0)
            rcx_1 = 0
        
        *arg1 += sx.q(rcx_1) * 2
        result.b = 1

return result
