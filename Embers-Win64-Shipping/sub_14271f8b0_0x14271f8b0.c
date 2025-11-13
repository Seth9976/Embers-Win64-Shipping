// 函数: sub_14271f8b0
// 地址: 0x14271f8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)

if (((arg1[1].d u>> 4).b & 1) == 0)
    void* const rdi_1 = arg1[4]
    void* rax_2
    int64_t rax_3
    void* rdx_1
    
    if (rdi_1 != 0)
        rax_2 = sub_142724fa0()
        rdx_1 = *(rdi_1 + 0x10)
        rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rdi_1 == 0 || rax_3.d s> *(rdx_1 + 0x38)
            || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
        rdi_1 = nullptr
    
    arg1[7] = rdi_1

uint8_t result = (arg1[1].d u>> 4).b

if ((result & 1) != 0)
    return result

jump(*(*arg1 + 0x2b8))
