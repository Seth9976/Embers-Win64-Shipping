// 函数: sub_14190d550
// 地址: 0x14190d550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 4
uint64_t r11 = zx.q(arg1)
*arg5 = arg3.d
*arg6 = 0

if (arg1 u<= 0x25)
    uint64_t rax_1 = zx.q(lookup_table_14190d664[r11])
    
    switch (rax_1)
        case 0
            if (arg2 == 0)
                int32_t rax_3 = (arg3 * 3).d
                *arg4 = 4
                *arg5 = rax_3
                return rax_3
            
            *arg4 = 0xe
            int32_t rax_2 = (arg3 * 3).d
            *arg6 = 3
            *arg5 = rax_2
            return rax_2
        case 1
            int32_t rax_4 = (arg3 + 2).d
            *arg4 = 5
            *arg5 = rax_4
            return rax_4
        case 2
            int32_t rax_5 = (arg3 * 2).d
            *arg4 = 1
            *arg5 = rax_5
            return rax_5
        case 3
            *arg4 = 0
            *arg5 = arg3.d
            return rax_1
        case 4
            int32_t rax_6 = (r11 - 5).d
            *arg4 = 0xe
            *arg6 = rax_6
            int32_t rax_7 = rax_6 * arg3.d
            *arg5 = rax_7
            return rax_7

sub_140af98a0("Unknown", 0x1b7, u"Unsupported primitive type %u", zx.q(r11.d))
return sub_140afbb40() __tailcall
