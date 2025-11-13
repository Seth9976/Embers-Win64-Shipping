// 函数: sub_1405acb40
// 地址: 0x1405acb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_142d45bc8
arg1[5] = &data_142d45e28
arg1[6] = 0
arg1[7] = 0
arg1[9] = -1
arg1[9].d |= 0x48000
*(arg1 + 0x4c) = (*(arg1 + 0x4c) & 0xfff8ffff) | 0x400
TEB* gsbase

if (data_143cd62b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143cd62b0)
    
    if (data_143cd62b0 == 0xffffffff)
        sub_1405aa800(&data_143cd6298, 
            Material'/Composure/Materials/ReplaceTonemapper/ComposureReplaceTonemapperByTexture."
        "ComposureReplaceTonemapperByTexture'", 0)
        atexit(sub_142cb0890)
        _Init_thread_footer(&data_143cd62b0)

void arg_8
uint64_t* rax_5 = sub_140b58260(&arg_8, u"ReplaceTonemapperMID", 1)
arg1[8] = sub_142121d50(data_143cd62a8, arg1, *rax_5)
return arg1
