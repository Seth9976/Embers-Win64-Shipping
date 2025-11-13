// 函数: sub_1420f7670
// 地址: 0x1420f7670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f489c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f489c0)
    
    if (data_143f489c0 == 0xffffffff)
        sub_140b58260(&data_143f489b8, u"MapBuildDataRegistry", 1)
        _Init_thread_footer(&data_143f489c0)

uint64_t rbx = data_143f489b8
void* rax_2 = sub_140d21d80(arg1)
int32_t rcx_1
rcx_1.b = rbx:4.d == 0

if ((rcx_1.b & sub_140b5b8a0(rbx.d, 0)) != 0)
    sub_140d19010(rax_2, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* result = sub_140d2dfc0(sub_142530fa0(), rax_2, rbx, 0, 0, 0, 0, 0, 0)
*(arg1 + 0x1e0) = result
return result
