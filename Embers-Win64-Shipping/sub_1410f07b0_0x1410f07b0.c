// 函数: sub_1410f07b0
// 地址: 0x1410f07b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1)
int64_t rdi = sx.q(arg2)

if ((rbx.d u> 0x1e || not(test_bit(0x6562c800, rbx.d)))
        && (*(rbx * 0x14 + &data_143f025fc) & 1) == 0)
    if (sub_1410a09e0(rbx.d) == 0)
        if (sub_1419a4830(rbx.d) == 0 || rdi.d u> 2)
        label_1410f080e:
            
            if (rdi.d u> 0x10)
                return 0xffffffff
            
            switch (rdi)
                case 0, 1
                    return zx.q(arg3) ^ 1
                case 2
                    return 5
                case 4, 5, 6, 7, 8, 9, 0xa, 0xc
                    return 4
                case 0xe
                    return zx.q((zx.d(arg3) ^ 1) + 2)
                case 0xf
                    return 1
                case 0x10
                    return 7
    else if (rdi.d u> 2)
        goto label_1410f080e

return 6
