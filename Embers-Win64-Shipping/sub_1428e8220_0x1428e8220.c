// 函数: sub_1428e8220
// 地址: 0x1428e8220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t var_48

if (sub_142898c70(arg2) s> 0)
    var_48 = arg5
    sub_1428b6f70(arg3, "%*s%s:\n", zx.q(arg4))

int32_t rbp = 0

if (sub_142898c70(arg2) s> 0)
    int32_t rax_7
    
    do
        int32_t** rax_3 = sub_142898ea0(arg2, rbp)
        sub_1428b6f70(arg3, "%*s", zx.q(arg4 + 2))
        int32_t* rdx_1 = *rax_3
        
        if (*rdx_1 != 7)
            sub_14292c5b0(arg3, rdx_1)
        else
            int32_t* rax_4 = *(rdx_1 + 8)
            void* rsi_1 = *(rax_4 + 8)
            int32_t rbx_2 = *rax_4
            int64_t r8_2 = sub_14289a750(arg3, &data_1435149bc)
            
            if (rbx_2 == 8)
                *(rsi_1 + 1)
                uint32_t var_20_1 = zx.d(*(rsi_1 + 7))
                uint32_t var_28_1 = zx.d(*(rsi_1 + 6))
                uint32_t var_30_1 = zx.d(*(rsi_1 + 5))
                uint32_t var_38_1 = zx.d(*(rsi_1 + 4))
                uint32_t var_40_1 = zx.d(*(rsi_1 + 3))
                var_48.d = zx.d(*(rsi_1 + 2))
                sub_1428b6f70(arg3, "%d.%d.%d.%d/%d.%d.%d.%d", zx.q(*rsi_1))
            else if (rbx_2 != 0x20)
                sub_1428b6f70(arg3, "IP Address:<invalid>", r8_2)
            else
                for (int32_t i = 0; i s< 0x10; i += 1)
                    sub_1428b6f70(arg3, "%X", zx.q(zx.d(*rsi_1) << 8) | zx.q(*(rsi_1 + 1)))
                    rsi_1 += 2
                    
                    if (i == 7)
                        sub_14289a750(arg3, &data_142d63b88)
                    else if (i != 0xf)
                        sub_14289a750(arg3, &data_142d6bc34)
        
        sub_14289a750(arg3, &data_14370209c)
        rbp += 1
        rax_7 = sub_142898c70(arg2)
    while (rbp s< rax_7)

return 1
