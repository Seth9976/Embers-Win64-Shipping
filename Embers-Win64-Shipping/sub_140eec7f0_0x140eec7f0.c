// 函数: sub_140eec7f0
// 地址: 0x140eec7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_10 = 0
*(arg1 + 0xb0) = _mm_unpacklo_ps(zx.o(0), 0)
*(arg1 + 0xb8) = 0
int32_t i_2 = *(arg1 + 0x30)
void* rbx = *(arg1 + 0x28)

if (i_2 != 0)
    int32_t i
    
    do
        sub_14094b310(rbx + 0x20)
        sub_14094b310(rbx + 0x10)
        sub_140596d80(rbx)
        rbx += 0x58
        i = i_2
        i_2 -= 1
    while (i != 1)

int64_t rdi = 0
*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) != 0)
    sub_140775cf0(arg1 + 0x28, 0)

*(arg1 + 0x40) = 0

if (*(arg1 + 0x44) != 0)
    sub_140638cc0(arg1 + 0x38, 0)

*(arg1 + 0x68) = 0xffffffff
*(arg1 + 0x6c) = 0
sub_14059a8e0(arg1 + 0x48, 0)
void* result = zx.q(*(arg1 + 0x80))

if (result.d s> 0)
    uint64_t i_3 = zx.q(result.d)
    uint64_t i_1
    
    do
        void* result_1 = *(arg1 + 0x78)
        result = arg1 + 0x70
        int64_t rdx_3 = (sx.q(*(arg1 + 0x80)) - 1) & rdi
        
        if (result_1 != 0)
            result = result_1
        
        rdi += 1
        *(result + (rdx_3 << 2)) = 0xffffffff
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
