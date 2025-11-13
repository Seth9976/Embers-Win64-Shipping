// 函数: sub_1406bb190
// 地址: 0x1406bb190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

_Query_perf_frequency()
_Query_perf_counter()
*(arg1 + 0x470) = 0
int32_t rax = avcodec_send_frame(*(arg1 + 0x3d0), arg2)
int64_t var_18

if ((0x80000000 & (rax - 0x80000000)) != 0 || rax == 0xdfb9b0bb)
    _Query_perf_frequency()
    _Query_perf_counter()
    int32_t rax_1 = avcodec_receive_packet(*(arg1 + 0x3d0), arg3)
    
    if (rax_1 == 0xfffffff5 || rax_1 == 0xdfb9b0bb)
        return 0
    
    if (rax_1 s>= 0)
        _Query_perf_frequency()
        _Query_perf_counter()
        *(arg1 + 0x470) = 1
        return 0
    
    sub_1406bc020(&var_18, rax_1)
    av_packet_unref(arg3)
else
    sub_1406bc020(&var_18, rax)

int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return 0xffffffff
