// 函数: sub_140619e90
// 地址: 0x140619e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_1405c55e0(arg1, arg2)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
sub_14059a8e0(&arg1[2], arg2)
int32_t rdx_3

if (arg2 u< 4)
    rdx_3 = 1
else
    uint32_t rdx_2 = arg2 u>> 1
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rdx_2 + 8)
    uint64_t rflags_2
    char temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rdx_2 + 7)
    rdx_3 = 1 << ((0x20 - (0x1f - temp0_2)) & (not.d((0x1f - temp0_1) << 0x1a s>> 0x1f)).b)

if (arg2 s> 0)
    int32_t rax_3 = arg1[9].d
    
    if (rax_3 == 0 || rax_3 s< rdx_3 || rax_3 s> rdx_3)
        arg1[9].d = rdx_3
        return sub_1406101e0(arg1) __tailcall

void* result = zx.q(arg1[9].d)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        void* result_1 = arg1[8]
        result = &arg1[7]
        int64_t rdx_7 = (sx.q(arg1[9].d) - 1) & rdi
        
        if (result_1 != 0)
            result = result_1
        
        rdi += 1
        *(result + (rdx_7 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
