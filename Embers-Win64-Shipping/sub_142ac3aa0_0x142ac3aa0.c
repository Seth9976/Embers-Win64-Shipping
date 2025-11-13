// 函数: sub_142ac3aa0
// 地址: 0x142ac3aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9_1 = zx.q(arg2) & 0xfffffff
int32_t rcx_2
void* result

if ((arg2 & 0xf0000000) == 0x60000000)
    int32_t rax_2 = *(arg1 + 0x30)
    int64_t rax_3
    
    if (r9_1.d s>= rax_2)
        r9_1 = zx.q(r9_1.d - rax_2)
        rax_3 = *(arg1 + 0x10)
    else
        rax_3 = *(arg1 + 0x28)
    
    uint32_t rcx = zx.d(*(rax_3 + (r9_1 << 1)))
    result = rax_3 + (r9_1 << 1)
    
    if ((rcx & 0xfffffc00) != 0xdc00)
        rcx_2 = std::_WChar_traits<wchar_t>::length(result)
    else if (rcx u< 0xdfef)
        rcx_2 = rcx & 0x3ff
        result += 2
    else if (rcx u>= 0xdfff)
        rcx_2 = zx.d(*(result + 2)) << 0x10 | zx.d(*(result + 4))
        result += 6
    else
        rcx_2 = (rcx + 0x2011) << 0x10 | zx.d(*(result + 2))
        result += 4
else if (arg2 != r9_1.d)
    result = nullptr
    rcx_2 = 0
else if (arg2 != 0)
    int64_t rax_9 = *(arg1 + 8)
    uint64_t rcx_7 = zx.q(arg2)
    rcx_2 = *(rax_9 + (rcx_7 << 2))
    result = rax_9 + (rcx_7 << 2) + 4
else
    rcx_2 = 0
    result = &data_143655c0c

if (arg3 != 0)
    *arg3 = rcx_2

return result
