// 函数: sub_141cc7040
// 地址: 0x141cc7040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t r15 = sx.q(arg3)
uint32_t result

if (arg3 s<= 0 || r15.d s>= arg4)
    if ((arg1[5].b & 1) != 0)
        *arg2 = 0
    
    result = (*(*arg1 + 0x158))(arg1, arg2, sx.q(arg4))
else
    int32_t var_a8 = 0
    bool cond:0_1 = (arg1[5].b & 2) == 0
    int32_t var_a4
    __builtin_memcpy(&var_a4, 
        "\x01\x00\x00\x00\x03\x00\x00\x00\x07\x00\x00\x00\x0f\x00\x00\x00\x1f\x00\x00\x00\x3f\x00\x00\x"
    "00\x7f\x00\x00\x00\xff\x00\x00\x00\xff\x01\x00\x00\xff\x03\x00\x00\xff\x07\x00\x00\xff\x0f\x00"
    "00\xff\x1f\x00\x00\xff\x3f\x00\x00\xff\x7f\x00\x00\xff\xff\x00\x00", 
        0x40)
    int32_t var_f8_1 = 0
    int32_t var_f4
    __builtin_memcpy(&var_f4, 
        "\x01\x00\x00\x00\x02\x00\x00\x00\x04\x00\x00\x00\x08\x00\x00\x00\x10\x00\x00\x00\x20\x00\x00\x"
    "00\x40\x00\x00\x00\x80\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x04\x00\x00\x00\x08\x00"
    "00\x00\x10\x00\x00\x00\x20\x00\x00\x00\x40\x00\x00\x00\x80\x00\x00", 
        0x40)
    uint32_t var_108
    
    if (cond:0_1)
        int64_t rax_8 = *arg1
        uint32_t result_1 = 0
        (*(rax_8 + 0x158))(arg1, &result_1, r15 + 1)
        result = result_1
        
        if (((&var_f4)[r15] & result) == 0)
            *arg2 = result.w
        else
            int64_t rax_9 = *arg1
            var_108 = 0
            (*(rax_9 + 0x158))(arg1, &var_108, sx.q(arg4 - r15.d))
            result.w = var_108.w << r15.b
            *arg2 = ((&var_a8)[r15].w & result_1.w) | result.w
    else
        uint32_t rdx = zx.d(*arg2)
        int32_t r8 = (r15 + 1).d
        int32_t r11_1 = (&var_a8)[r15]
        int64_t r10_1 = *arg1
        int32_t* rdx_2
        int64_t r8_1
        
        if (rdx u<= r11_1)
            var_108 = rdx
            rdx_2 = &var_108
            r8_1 = sx.q(r8)
        else
            rdx_2 = &var_108
            var_108 = rdx u>> r15.b << r8.b | (&var_f4)[r15] | (rdx & r11_1)
            r8_1 = sx.q(arg4 + 1)
        
        result = (*(r10_1 + 0x158))(arg1, rdx_2, r8_1)

__security_check_cookie(rax_1 ^ &var_128)
return result
