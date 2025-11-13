// 函数: sub_140cb83d0
// 地址: 0x140cb83d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)
int32_t rax = (rsi + 2).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

int64_t rcx = *arg1
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*(rcx + (rsi << 2)) = arg2.d
*(rcx + (rsi << 2) + 4) = (arg2 u>> 0x20).d

if (data_143e1b3d8 s> *(0x14 + *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1b3d8)
    
    if (data_143e1b3d8 == 0xffffffff)
        sub_140b58170(&data_143e1b3d0, "EndOfPointerToken", 1)
        _Init_thread_footer(&data_143e1b3d8)

int64_t rdi_2 = sx.q(arg1[1].d)
int32_t rcx_3 = (rdi_2 + 1).d
arg1[1].d = rcx_3

if (rcx_3 s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rdi_2 << 2)) = 0xd00
return zx.q(rsi.d)
