// 函数: sub_141cdac20
// 地址: 0x141cdac20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void* r8
int32_t temp0_1
int32_t temp1_1

if (arg3 s>= 0 && arg3 s< *(arg1 + 0x148))
    r8 = arg1 + 0x150
    void* rax_2 = *(r8 + 0x10)
    
    if (rax_2 != 0)
        r8 = rax_2
    
    temp0_1:temp1_1 = sx.q(arg3)

if (arg3 s< 0 || arg3 s>= *(arg1 + 0x148)
        || not(test_bit(*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f)))
    *arg2 = data_143a1c6c0
else
    int32_t var_3c_1 = data_143a1c6b0
    int32_t rax_9 = data_143a1c6b8
    int32_t rsi_1 = arg4[1].d
    int64_t rdi_1 = *arg4
    int32_t var_48 = rax_9
    int32_t var_44_1 = rax_9
    int32_t var_40_1 = rax_9
    int32_t rax_10 = sub_141cd7c90(arg1 + 0xd0, &var_48)
    var_48.q = rdi_1
    int32_t var_40_2 = rsi_1
    var_48.o = var_48.o
    *arg2 = rax_10
    sub_141cdaed0(arg1 + 0x28, rax_10, arg3, &var_48, arg5)

__security_check_cookie(rax_1 ^ &var_78)
return arg2
