// 函数: sub_141459430
// 地址: 0x141459430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1)
char rax = sub_1405fba70(rbx.d, 3)
int64_t rdx = data_143f025d0
uint64_t result

if (rax != 0)
label_1414594a7:
    
    if (rbx.d u> 0x1f || not(test_bit(0xc8451800, rbx.d)))
        int64_t r8_1 = *(rbx * 0x14 + &data_143f025f0)
        
        if (r8_1 != data_143f025b0 && (rbx.d u> 0x30 || not(test_bit(0x1000030320000, rbx)))
                && r8_1 != data_143f025c0 && (rbx - 0x19).d u> 1 && r8_1 != rdx
                && (rbx.d u> 0x18 || not(test_bit(0x100a040, rbx.d))) && r8_1 != data_143f025b8)
            result.b = 1
            return result
else
    int64_t rcx_3
    
    if (rbx.d u> 0x30)
    label_14145947b:
        rcx_3 = rbx
        
        if (*(rbx * 0x14 + 0x143f025f8) == 1)
            goto label_141459490
    else
        switch (rbx)
            case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                    0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
                goto label_14145947b
            case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
                rcx_3 = rbx
            label_141459490:
                
                if ((rbx - 0x19).d u> 1 && *(rcx_3 * 0x14 + &data_143f025f0) != rdx)
                    goto label_1414594a7

result.b = 0
return result
