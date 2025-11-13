// 函数: sub_14212f170
// 地址: 0x14212f170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0x18c) & 8) != 0)
    int64_t* rax_1 = sub_142006940()
    int64_t r8_1 = *rax_1
    (*(r8_1 + 0x158))(rax_1, arg2, r8_1)
    *(arg2 + 0x18c) &= 0xf7

arg2[0x31].d += 1
void* rbx = &arg2[0xc]
void* rdi_1 = &arg2[2]
int64_t i_1 = 4
int64_t result
int64_t i

do
    *(rbx - 8) = 0
    *rbx = 0
    result = sub_1421305d0(rdi_1)
    rdi_1 += 0x58
    rbx += 0x58
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rsi_1 = 1 << (data_1439c7a08).b | data_143f4a12c

if (rsi_1 != 0)
    int64_t* rbx_1 = arg2
    int32_t rbp_1
    int32_t rdi_4
    
    do
        int32_t result_2 = 0
        rbp_1 = rsi_1
        rdi_4 = neg.d(rsi_1) & rsi_1
        uint64_t rflags_1
        int32_t result_3
        result_3, rflags_1 = _bit_scan_reverse(rdi_4)
        
        if (rdi_4 != 0)
            result_2 = result_3
        
        rsi_1 ^= rdi_4
        result = sx.q(result_2)
        
        if (rbx_1[result * 0xb + 0xb].b == 0)
            int64_t rax_3 = *rbx_1
            int64_t arg_18 = 0
            result = (*(rax_3 + 0x40))(rbx_1, result_2, &arg_18)
            
            if (arg_18 == 0)
                int64_t* var_48 = rbx_1
                int64_t result_1 = result
                char var_38_1 = 0
                result = sub_142123690(rbx_1, &rbx_1[2 + result * 0xb], &var_48, nullptr)
            
            rbx_1 = arg2
    while (rdi_4 != rbp_1)

return result
