// 函数: sub_141ea2ff0
// 地址: 0x141ea2ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f3a390 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3a390)
    
    if (data_143f3a390 == 0xffffffff)
        sub_140b0a030(&data_143f3a38c, u"Kismet", u"bEnableInheritableComponents", &data_143de5780)
        _Init_thread_footer(&data_143f3a390)

if (data_143f3a38c == 0)
    return 0

uint64_t result_2 = *(arg1 + 0x280)
uint64_t result = result_2

if (result_2 != 0 && data_143de5452 == 0)
    sub_14209c250(result_2)
    result = *(arg1 + 0x280)

if (result == 0 && arg2 != 0)
    void arg_18
    uint64_t rbx_1 = *sub_140b58260(&arg_18, u"InheritableComponentHandler", 1)
    uint32_t rcx_3
    rcx_3.b = (rbx_1 u>> 0x20).d == 0
    
    if ((rcx_3.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* result_1 =
        sub_140d2dfc0(sub_1424c8360(), arg1, rbx_1, 0, result.d, result, result.b, result, result.b)
    result = result_1
    *(arg1 + 0x280) = result_1

return result
