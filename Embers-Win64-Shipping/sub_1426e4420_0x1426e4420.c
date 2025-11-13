// 函数: sub_1426e4420
// 地址: 0x1426e4420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x13].d
void* rdx = arg1[0xd]

if (rdx != 0 && test_bit(rax, 0xa))
    *(rdx + 0x250)
    sub_142730710(arg1, rdx)
else if (test_bit(rax, 9))
    sub_1427306d0(arg1, arg1[0xe])

int32_t result = arg1[0x13].d

if ((result & 0x6000) != 0)
    result &= 6
    
    if (result.b != 6)
        arg1[0xb].b |= 4

void* rbp_1 = *(arg2 + 0xb8)

if (rbp_1 != 0)
    int32_t i = 0
    
    if (arg1[0x10].d s> 0)
        do
            result = sub_1426b21d0(rbp_1, arg1[0xf] + (sx.q(i) << 3))
            
            if (result.b != 0xff)
                void* (* var_38_1)(int64_t* arg1, void* arg2) = sub_1426e4c30
                int32_t var_30_1 = 0
                int64_t var_48 = 0
                int32_t var_40_1 = 0
                void*** rax_2 = sub_1405978f0(0x30, &var_48)
                
                if (rax_2 != 0)
                    *rax_2 = &data_143477f88
                    sub_140d3a3a0(&rax_2[1], arg1)
                    *(rax_2 + 0x10) = var_38_1.o
                    rax_2[5] = sub_140a387b0()
                
                void arg_8
                result = sub_1426bbe90(rbp_1, &arg_8, result.b, arg1, &var_48)
            
            i += 1
        while (i s< arg1[0x10].d)

return result
