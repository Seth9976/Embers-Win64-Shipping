// 函数: sub_1420222d0
// 地址: 0x1420222d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2
TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 != 0 && data_143de5427 == 0) || data_143cd80c8 != 0 || rbx == 0)
    return nullptr

if (arg5 != 0)
    return sub_142213e80(rbx + 0x5f0, arg1, rbx, arg5)

if (arg3 != 0)
    rbx = arg3

sub_140d19010(rbx, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_18_1 = 0
int64_t* result
float zmm0_1
result, zmm0_1 = sub_140d2dfc0(sub_14255cbc0(), rbx, 0, 0, 0, 0, 0, 0, 0)
char rcx_3 = *(result + 0x89)
*(result + 0x432) &= 0x7f
*(result + 0x432) |= arg4 << 7
*(result + 0x89) = (rcx_3 & 0x3f) | 0x40
result[0x97].d = 0
sub_14219e4a0(result, arg1, zmm0_1)
*(result + 0x432) &= 0xfb
return result
