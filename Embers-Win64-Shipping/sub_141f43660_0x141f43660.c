// 函数: sub_141f43660
// 地址: 0x141f43660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142320ad0(arg1)
sub_141f6cac0(arg1)
sub_141f46370(arg1)
int64_t rdx
rdx.b = 1
(*(*arg1 + 0x998))(arg1, rdx)

if ((arg1[0xb5].b & 8) != 0)
    (*(*arg1 + 0x340))(arg1, 0)
else if (*(arg1 + 0x5a4) == 3)
    TEB* gsbase
    
    if (data_143cd80cc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if (data_143de5426 == 0)
        if (data_143cd80c8 != 0)
            (*(*arg1 + 0x340))(arg1, 0)
    else if (data_143de5427 == 0 || data_143cd80c8 != 0)
        (*(*arg1 + 0x340))(arg1, 0)

void arg_8

if (arg1[0xf0] == 0)
    arg1[0xf0] = *sub_141d43300(&arg_8)
else
    void* rax_4 = sub_141d43b90()
    
    if (rax_4 == 0)
        arg1[0xf0] = *sub_141d43300(&arg_8)
    else
        void* rdx_1 = arg1[0xf0]
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30
                || rdx_1 == 0)
            arg1[0xf0] = *sub_141d43300(&arg_8)
return sub_14231a860(arg1) __tailcall
