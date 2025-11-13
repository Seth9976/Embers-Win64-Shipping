// 函数: sub_1410a2800
// 地址: 0x1410a2800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410b3e70(arg2, data_1439b6318, &(*U"RGBXYZF10|")[7])
sub_1410b3fe0(arg2, u"NUM_LIGHTMAP_COEFFICIENTS", zx.q(data_1439b6328))
int32_t rbx = 0
TEB* gsbase

if (data_143e2ccf0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2ccf0)
    
    if (data_143e2ccf0 == 0xffffffff)
        int64_t* rcx_7 = data_143db18d0
        
        if (rcx_7 == 0)
            sub_140a53c40()
            rcx_7 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_6 = (*(*rcx_7 + 0xb0))(rcx_7, u"r.VirtualTexturedLightmaps", r8_4)
        int64_t rax_7
        
        if (rax_6 == 0)
            rax_7 = 0
        else
            int64_t rdx_3 = *rax_6
            rax_7 = (*(rdx_3 + 0x58))(rax_6, rdx_3)
        
        data_143e2cce8 = rax_7
        _Init_thread_footer(&data_143e2ccf0)

int64_t rsi = data_143e2cce8
int64_t rcx_3

if (data_143de5480 == 0)
    rcx_3 = 0
else
    rcx_3.b = GetCurrentThreadId() != data_143de5470

if (*(rsi + (rcx_3 << 2)) != 0)
    *(arg2 + 0x2a0)
    
    if (sub_1419ba670(data_1439c7a08) != 0)
        rbx = 1

return sub_1405d3490(arg2 + 0x2a8, u"LIGHTMAP_VT_ENABLED", zx.q(rbx)) __tailcall
