// 函数: sub_141369070
// 地址: 0x141369070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_141345d90(&var_38, arg1[1])
int64_t rbx = var_38
int64_t result

if ((rbx u>> 0x30).b != 0)
    result = sub_14128e090(*arg1)

if ((rbx u>> 0x30).b != 0 && result.b == 0)
    result.b = 0
else
    uint8_t rdx_2 = (rbx u>> 0x38).b
    int64_t rax_2
    
    if (rdx_2 != 0)
        rax_2 = sx.q(*arg1)
    
    if (rdx_2 != 0 && rax_2.d != 0xb && rax_2.d != 0x1e)
        int64_t rcx_2 = rax_2 * 5
        
        if (*(&data_143f025f0 + (rcx_2 << 2)) == data_143f025b8
                && (*((rcx_2 << 2) + &data_143f025fc) & 1) != 0 && ((rbx u>> 8).b == 0 || (
                rbx.b == 0 && (rbx u>> 0x10).b == 0 && (rbx u>> 0x18).b == 0
                && (rbx u>> 0x20).b == 0 && (rbx u>> 0x28).b == 0 && rdx_2 == 0)))
            goto label_141369163
        
        result.b = 0
    else if ((rbx u>> 8).b == 0 || (rbx.b == 0 && (rbx u>> 0x10).b == 0 && (rbx u>> 0x18).b == 0
        && (rbx u>> 0x20).b == 0 && (rbx u>> 0x28).b == 0 && rdx_2 == 0))
    label_141369163:
        int32_t var_30
        int32_t var_20_1 = var_30
        char var_2a
        char var_1a_1 = var_2a
        int64_t var_28 = var_38
        int16_t var_2c
        int16_t var_1c_1 = var_2c
        void var_18
        result = sub_1413672f0(&var_18, &var_28)
        
        if (*result != rbx.b || *(result + 1) != var_38:1.b || *(result + 2) != var_38:2.b
                || *(result + 3) != var_38:3.b || *(result + 4) != var_38:4.b
                || *(result + 5) != var_38:5.b || *(result + 6) != var_38:6.b
                || *(result + 7) != var_38:7.b || *(result + 9) != var_30:1.b
                || *(result + 0xa) != var_30:2.b || *(result + 0xb) != var_30:3.b
                || *(result + 0xc) != var_2c.b || *(result + 0xd) != var_2c:1.b)
            result.b = 0
        else
            result = sx.q(*arg1)
            
            if (result.d u> 0x1e)
                if ((*(result * 0x14 + &data_143f025fc) & 1) == 0)
                    result.b = 0
                else
                    result.b = 1
            else if (test_bit(0x6562c800, result.d)
                    || (*(result * 0x14 + &data_143f025fc) & 1) != 0)
                result.b = 1
            else
                result.b = 0
    else
        result.b = 0

return result
