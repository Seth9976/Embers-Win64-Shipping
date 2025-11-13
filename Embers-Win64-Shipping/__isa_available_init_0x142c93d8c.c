// 函数: __isa_available_init
// 地址: 0x142c93d8c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
int32_t temp2
int32_t temp3
temp0, temp1, temp2, temp3 = __cpuid(0, 0)
int32_t r11 = 0
int32_t temp0_1
int32_t temp1_1
int32_t temp2_1
int32_t temp3_1
temp0_1, temp1_1, temp2_1, temp3_1 = __cpuid(1, 0)
int32_t var_18 = temp0_1
int32_t var_14 = temp1_1
int32_t var_10 = temp2_1
int32_t var_c = temp3_1
int32_t rax_2
uint64_t rax_3

if (((temp1 ^ 0x756e6547) | (temp2 ^ 0x6c65746e) | (temp3 ^ 0x49656e69)) == 0)
    data_143ccb978 = -1
    rax_2 = temp0_1 & 0xfff3ff0
    
    if (rax_2 != 0x106c0 && rax_2 != 0x20660 && rax_2 != 0x20670)
        rax_3 = zx.q(rax_2 - 0x30650)

int32_t r8_3

if (((temp1 ^ 0x756e6547) | (temp2 ^ 0x6c65746e) | (temp3 ^ 0x49656e69)) != 0 || (rax_2 != 0x106c0
        && rax_2 != 0x20660 && rax_2 != 0x20670
        && (rax_3.d u> 0x20 || not(test_bit(0x100010001, rax_3)))))
    r8_3 = data_14401b720
else
    r8_3 = data_14401b720 | 1
    data_14401b720 = r8_3

if (temp0 s>= 7)
    int32_t temp0_2
    int32_t temp1_2
    int32_t temp2_2
    int32_t temp3_2
    temp0_2, temp1_2, temp2_2, temp3_2 = __cpuid(7, 0)
    int32_t var_18_1 = temp0_2
    r11 = temp1_2
    int32_t var_14_1 = temp1_2
    int32_t var_10_1 = temp2_2
    int32_t var_c_1 = temp3_2
    
    if (test_bit(temp1_2, 9))
        data_14401b720 = r8_3 | 2

data_143ccb970 = 1
data_143ccb974 = 2

if (test_bit(temp2_1, 0x14))
    data_143ccb970 = 2
    data_143ccb974 = 6
    
    if (test_bit(temp2_1, 0x1b) && test_bit(temp2_1, 0x1c))
        int32_t temp0_3
        char temp1_3
        temp0_3, temp1_3 = _xgetbv(0, arg1)
        char rdx_5 = (zx.q(temp0_3) << 0x20).b | temp1_3
        
        if ((rdx_5 & 6) == 6)
            int32_t rax_8 = data_143ccb974 | 8
            data_143ccb970 = 3
            data_143ccb974 = rax_8
            
            if ((r11.b & 0x20) != 0)
                data_143ccb970 = 5
                data_143ccb974 = rax_8 | 0x20
                
                if ((r11 & 0xd0030000) == 0xd0030000 && (rdx_5 & 0xe0) == 0xe0)
                    data_143ccb974 |= 0x40
                    data_143ccb970 = 6

return 0
