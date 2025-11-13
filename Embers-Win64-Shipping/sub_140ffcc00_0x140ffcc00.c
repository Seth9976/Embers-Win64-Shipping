// 函数: sub_140ffcc00
// 地址: 0x140ffcc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
char rax = sub_140b21a10(&data_143dbb3f0, u"quad_buffer_stereo")

if (rax != 0 || arg2 != 0)
    HMODULE rax_1 = sub_140b67ab0(u"dxgi.dll")
    
    if (rax_1 != 0)
        data_143e2c168 = GetProcAddress(rax_1, "CreateDXGIFactory2")
        FreeLibrary(rax_1)

int64_t r9

if ((rax == 0 && arg2 == 0) || rax == 0)
    r9 = data_143e2c168
else
    char rax_3 = data_143e2c164
    r9 = data_143e2c168
    
    if (r9 != 0)
        rax_3 = 1
    
    data_143e2c164 = rax_3

if (r9 == 0)
    return CreateDXGIFactory1(&data_142efa1f8, arg1)

return r9(zx.q(arg2), &data_142efa1e8, arg1)
