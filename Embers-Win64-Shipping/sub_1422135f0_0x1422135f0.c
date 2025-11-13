// 函数: sub_1422135f0
// 地址: 0x1422135f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f511d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f511d0)
    
    if (data_143f511d0 == 0xffffffff)
        sub_140b58260(&data_143f511c8, u"PawnInputComponent0", 1)
        _Init_thread_footer(&data_143f511d0)

uint64_t rbx = data_143f511c8
int32_t rcx
rcx.b = rbx:4.d == 0

if ((rcx.b & sub_140b5b8a0(rbx.d, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

return sub_140d2dfc0(sub_1424c7390(), arg1, rbx, 0, 0, 0, 0, 0, 0)
