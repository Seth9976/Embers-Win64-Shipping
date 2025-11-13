// 函数: sub_1428b5000
// 地址: 0x1428b5000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(8)
void* r10 = *(arg1 + 0x70)

if (arg2 != 0)
    char* r9_1 = arg2 + 2
    int64_t i_2 = 8
    int64_t i
    
    do
        uint32_t rcx_6 =
            ((zx.d(r9_1[1]) << 8 | zx.d(*r9_1)) << 8 | zx.d(r9_1[-1])) << 8 | zx.d(*(0 - 2 + r9_1))
        void* rax_5 = r9_1 - (arg2 + 2)
        r9_1 = &r9_1[4]
        *(r10 + (rax_5 u>> 2 << 2)) = rcx_6
        i = i_2
        i_2 -= 1
    while (i != 1)

if (arg3 != 0)
    int64_t i_3 = 4
    char* rdx_1 = arg3 + 2
    int64_t i_1
    
    do
        uint32_t rcx_13 = ((zx.d(rdx_1[1]) << 8 | zx.d(*rdx_1)) << 8 | zx.d(rdx_1[-1])) << 8
            | zx.d(*(0 - 2 + rdx_1))
        void* rax_11 = rdx_1 - (arg3 + 2)
        rdx_1 = &rdx_1[4]
        *(r10 + (rax_11 u>> 2 << 2) + 0x20) = rcx_13
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*(r10 + 0x70) = 0
return 1
