// 函数: sub_141f2e900
// 地址: 0x141f2e900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143275bc8
char rdi = 0
arg1[5] = &data_1432600f0
arg1[0x3e] = &data_143276430
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
arg1[0x82] = 0

if (data_143f3b730 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f3b730)
    
    if (data_143f3b730 == 0xffffffff)
        sub_140b58260(&data_143f3b728, u"OverlapAllDynamic", 1)
        _Init_thread_footer(&data_143f3b730)

sub_1422ac390(arg1, data_143f3b728, 1)
*(arg1 + 0x2b4) |= 0x80
*(arg1 + 0x14d) |= 4
*(arg1 + 0x20b) &= 0xbf
*(arg1 + 0x41c) &= 0xfd
int32_t arg_8 = 0xffdf959d
arg1[0x83].d = arg_8
char rax_2 = sub_140d23dc0(arg1, 0x30)
*(arg1 + 0x8a) |= 8
*(arg1 + 0x20f) = 1

if (rax_2 == 0)
    rdi = 8

*(arg1 + 0x41c) = (rdi | (*(arg1 + 0x41c) & 0xf7)) & 0xfb
int64_t rcx_5 = *sub_141deba60(&arg_8)
arg1[0x41].b |= 0x40
arg1[0x82] = rcx_5
return arg1
