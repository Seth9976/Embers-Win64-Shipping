// 函数: sub_140897260
// 地址: 0x140897260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg1)
uint32_t rdi = zx.d(arg2)

if (*(rbx + &data_143ce9d28) == 0)
    sub_14089ad80(data_143cea5c8)
    sub_142832370(data_143cea5b8, rbx.d, rdi)
    return sub_14089b030(data_143cea5c8) __tailcall

uint64_t result = zx.q(*(&data_143cea540 + rbx))
uint64_t r8_2 = (zx.q(rbx.d) << 7) + result
result.b += 1
*(&data_143cea540 + rbx) = result.b
*(r8_2 + &data_143ce9d40) = rdi.b
return result
