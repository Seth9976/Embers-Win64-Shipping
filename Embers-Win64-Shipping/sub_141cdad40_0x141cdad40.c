// 函数: sub_141cdad40
// 地址: 0x141cdad40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
uint64_t var_28 = __security_cookie ^ &var_78
void* r8
int32_t temp0_1
int32_t temp1_1

if (arg2 s>= 0 && arg2 s< *(arg1 + 0xd8))
    r8 = arg1 + 0xe0
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    temp0_1:temp1_1 = sx.q(arg2)

uint64_t result

if (arg2 s< 0 || arg2 s>= *(arg1 + 0xd8)
        || (*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)) & 1 << (arg2 & 0x1f).b) == 0)
    result.b = 0
else
    result = 1

if (result.b == 0)
    void* r8_2
    int32_t temp2_1
    int32_t temp3_1
    
    if (arg3 s>= 0 && arg3 s< *(arg1 + 0x148))
        r8_2 = arg1 + 0x150
        void* rax_7 = *(r8_2 + 0x10)
        
        if (rax_7 != 0)
            r8_2 = rax_7
        
        temp2_1:temp3_1 = sx.q(arg3)
    
    if (arg3 s< 0 || arg3 s>= *(arg1 + 0x148)
            || (*(r8_2 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)) & 1 << (arg3 & 0x1f).b)
            == 0)
        result.b = 0
    else
        result.b = 1
    
    if (result.b != 0)
        int64_t rbp_1 = *arg4
        int32_t var_2c_1 = data_143a1c6b0
        int32_t rax_14 = data_143a1c6b8
        int32_t r14_1 = arg4[1].d
        int32_t var_38 = rax_14
        int32_t var_34_1 = rax_14
        int32_t var_30_1 = rax_14
        int32_t var_48[0x4]
        int128_t* rdx_7 = *(sub_1409cae50(arg1 + 0xd0, &var_48, arg2) + 8)
        
        if (rdx_7 != 0)
            *rdx_7 = var_38.o
        
        var_38.q = rbp_1
        int32_t var_30_2 = r14_1
        var_38.o = var_38.o
        result = sub_141cdaed0(arg1 + 0x28, arg2, arg3, &var_38, arg5)

__security_check_cookie(var_28 ^ &var_78)
return result
