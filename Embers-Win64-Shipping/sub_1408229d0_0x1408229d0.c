// 函数: sub_1408229d0
// 地址: 0x1408229d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg2
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
    return sub_1407520e0(sub_140865dd0(rbx)[0x8c], arg1, rbx, arg5)

if (arg3 != 0)
    rbx = arg3

sub_140d19010(rbx, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_18_1 = 0
void* result = sub_140d2dfc0(sub_14086a680(), rbx, 0, 0, 0, 0, 0, 0, 0)
sub_140776e40(result, arg1)
*(result + 0x54c) &= 0xfffffffe
*(result + 0x89) &= 0x3f
*(result + 0x54c) |= zx.d(arg4)
*(result + 0x89) |= 0x40
return result
