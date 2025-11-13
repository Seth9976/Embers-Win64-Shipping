// 函数: sub_141396480
// 地址: 0x141396480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 8) u>> 4 & 0x7f

switch (rax_1)
    case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
        return sub_1419c75a0(arg2, *(arg1 + 0x18), data_143ec50b0, 0) __tailcall
    case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
        return sub_1419c75a0(arg2, *(arg1 + 0x18), data_143ec5160, 0) __tailcall
    default
        if (*(zx.q(rax_1) * 0x14 + 0x143f025f8) s< 3)
            return sub_1419c75a0(arg2, *(arg1 + 0x18), data_143ec5160, 0) __tailcall
        
        return sub_1419c75a0(arg2, *(arg1 + 0x18), data_143ec50b0, 0) __tailcall
