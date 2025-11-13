// 函数: sub_14212a140
// 地址: 0x14212a140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142134ab0(arg1, arg2)
char rax_1

if (arg1[0x2a].d == 0 && arg1[0x2c].d == 0 && arg1[0x2e].d == 0 && arg1[0x30].d == 0)
    if ((*(*arg1 + 0x478))(arg1) == 0 || arg1[0x1a] == 0)
        rax_1 = 0
    else
        rax_1 = 1
else if (arg1[0x1a] == 0)
    rax_1 = 0
else
    rax_1 = 1

arg1[0x1b].b &= 0xfe
arg1[0x1b].b |= rax_1
sub_142134d70(arg1)
TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143cd80cc s> result)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    return sub_14211e870(arg1) __tailcall

return result
