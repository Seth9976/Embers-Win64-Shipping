// 函数: sub_14276feb0
// 地址: 0x14276feb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143b6d9f8 != 0 && zx.d(arg1) - 4 u<= 0x1b)
    switch (arg1)
        case 4
            sub_1427672f0(arg2)
        label_14276ff26:
            void* rdx = *arg2
            char* rcx_6 = *(rdx + 0x10)
            uint64_t result = zx.q(*rcx_6)
            *(rdx + 0x10) = &rcx_6[1]
            return result
        case 7
            sub_14276d6b0(arg2)
            goto label_14276ff26
        case 8
            sub_14276d9e0(arg2)
            goto label_14276ff26
        case 9
            sub_14276de20(arg2)
            goto label_14276ff26
        case 0xe
            sub_14276d270(arg2)
            goto label_14276ff26
        case 0x1f
            sub_142767cb0(arg2)
            goto label_14276ff26

return zx.q(arg1)
