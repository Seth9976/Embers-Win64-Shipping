// 函数: sub_140b33460
// 地址: 0x140b33460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _ArgList = arg3
int64_t r9
int64_t arg_20 = r9
wchar16* _Format = arg2

while (true)
    wchar16* _Buffer = arg1[1]
    int32_t rdi_3 = ((arg1[2] - _Buffer) s>> 1).d
    int32_t rax_1 =
        __stdio_common_vswprintf(data_143cd5b30, _Buffer, sx.q(rdi_3), _Format, nullptr, &_ArgList)
    
    if (rax_1 s< 0)
        rax_1 = -1
    
    if (rax_1 s>= 0 && rax_1 s< rdi_3)
        arg1[1] += sx.q(rax_1) * 2
        return arg1
    
    sub_140b38e20(arg1, 0x40)
    _Format = arg2
