// 函数: sub_1403d8db0
// 地址: 0x1403d8db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rax_2 = *(arg1 + 0x154)
char const* const rdx_4

if ((rax_2.b & 1) != 0)
    rdx_4 = "Out of place IHDR"
else if (arg3 != 0xd)
    rdx_4 = "Invalid IHDR chunk"
else
    *(arg1 + 0x154) = rax_2 | 1
    char var_35
    sub_1403cc480(arg1, &var_35, 0xd)
    sub_1403be770(arg1, &var_35, 0xd)
    sub_1403d8880(arg1, 0)
    char var_34
    char var_33
    char var_32
    uint64_t r8_1 = zx.q(var_32) | zx.q(var_33) << 8 | zx.q(var_34) << 0x10 | zx.q(var_35) << 0x18
    
    if (r8_1.d s>= 0)
        int32_t var_31
        int32_t temp0_1 = _bswap(var_31)
        
        if (temp0_1 s>= 0)
            *(arg1 + 0x1d8) = r8_1.d
            *(arg1 + 0x1dc) = temp0_1
            char var_2d
            *(arg1 + 0x25f) = var_2d
            char var_29
            *(arg1 + 0x25b) = var_29
            char var_2c
            *(arg1 + 0x25e) = var_2c
            char var_2a
            *(arg1 + 0x41c) = var_2a
            char var_2b
            *(arg1 + 0x458) = var_2b
            uint64_t rax_8
            rax_8.b = 1
            
            if (var_2c - 2 u<= 4)
                rax_8 = 0x401020103 u>> (var_2c - 2) << 3
            
            *(arg1 + 0x262) = rax_8.b
            rax_8.w = mulu.dp.b(rax_8.b, var_2d)
            *(arg1 + 0x261) = rax_8.b
            uint64_t rcx_7 = zx.q(rax_8.b)
            uint64_t rcx_9
            
            if (rax_8.b u< 8)
                rcx_9 = (rcx_7 * r8_1 + 7) u>> 3
            else
                rcx_9 = (rcx_7 u>> 3) * r8_1
            
            *(arg1 + 0x1e8) = rcx_9
            int64_t result =
                png_set_IHDR(arg1, arg2, r8_1.d, temp0_1, var_2d, var_2c, var_29, var_2b, var_2a)
            __security_check_cookie(rax_1 ^ &var_88)
            return result
    
    rdx_4 = "PNG unsigned integer out of range"

png_error(arg1, rdx_4)
noreturn
