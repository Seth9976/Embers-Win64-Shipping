// 函数: sub_1405e6700
// 地址: 0x1405e6700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HRESULT result = MFStartup(0x20070, 0)

if (result s< 0)
    return result

void*** rax = j_sub_140a82f30(0x10)

if (rax != 0)
    rax[1].b = 1
    *rax = &data_142d5b1f8

uint64_t rcx_1 = zx.q(data_14401b1a0)
void*** arg_10 = rax
TEB* gsbase

if (data_143cd9908 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_1 << 3))))
    _Init_thread_header(&data_143cd9908)
    
    if (data_143cd9908 == 0xffffffff)
        sub_140b58170(&data_143cd9900, "WmfMedia", 1)
        _Init_thread_footer(&data_143cd9908)

return sub_1405eed50(*(sub_140b3dbe0(data_143cd9900) + 8), &arg_10)
