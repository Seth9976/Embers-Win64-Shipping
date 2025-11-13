// 函数: sub_140d1d210
// 地址: 0x140d1d210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t result = __security_cookie ^ &var_1a8
int64_t result_1 = result

if (*arg1 == 0)
    void var_148
    int16_t* rbx_1 = *(sub_14060c4d0(&var_148, *arg2) + 0x108)
    int64_t rbx_2 = 0
    int32_t var_178_1 = 0
    void var_158
    void* rax_4 = sub_140d2f0c0(sub_140cddea0(), 0, *sub_140b58260(&var_158, rbx_1, 1), 0, 0, 0)
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    *arg1 = rax_4
    *(rax_4 + 0x50) |= *(arg2 + 0x14)
    int32_t var_164_1 = *(arg2 + 0x1c)
    int64_t var_160_1 = 0
    *(rax_4 + 0x30) = arg2[3].d.o
    int64_t rdi_3 = arg2[1]
    int64_t rsi_1 = sx.q(arg2[2].d) << 3
    result = rsi_1 + rdi_3
    uint64_t rsi_2 = rsi_1 u>> 3
    
    if (rdi_3 u> result)
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            result = (*rdi_3)()
            rbx_2 += 1
            rdi_3 += 8
        while (rbx_2 != rsi_2)

__security_check_cookie(result_1 ^ &var_1a8)
return result
