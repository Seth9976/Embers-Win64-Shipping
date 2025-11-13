// 函数: sub_1403d9490
// 地址: 0x1403d9490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
char rax_2 = (*(arg1 + 0x154)).b

if ((rax_2 & 1) == 0)
    png_error(arg1, "Missing IHDR before cHRM")
    noreturn

int32_t result

if ((rax_2 & 4) != 0)
    png_warning(arg1, "Invalid cHRM after IDAT")
    result = sub_1403d8880(arg1, arg3)
else
    if ((rax_2 & 2) != 0)
        png_warning(arg1, "Missing PLTE before cHRM")
    
    if (arg2 != 0 && (0x804 & *(arg2 + 8)) == 4)
        png_warning(arg1, "Duplicate cHRM chunk")
        result = sub_1403d8880(arg1, arg3)
    else if (arg3 != 0x20)
        png_warning(arg1, "Incorrect cHRM chunk length")
        result = sub_1403d8880(arg1, arg3)
    else
        int32_t var_68
        sub_1403cc480(arg1, &var_68, 0x20)
        sub_1403be770(arg1, &var_68, 0x20)
        result = sub_1403d8880(arg1, 0)
        
        if (result == 0)
            int32_t r8_1 = var_68 << 0x18
            int32_t rax_5 =
                zx.d(var_68:3.b) | zx.d(var_68:2.b) << 8 | zx.d(var_68:1.b) << 0x10 | r8_1
            
            if (rax_5 s<= 0xfffffffe)
                rax_5 = -1
            
            int32_t var_64
            int32_t r11_2 = var_64 << 0x18
            int32_t rax_7 =
                zx.d(var_64:3.b) | zx.d(var_64:2.b) << 8 | zx.d(var_64:1.b) << 0x10 | r11_2
            
            if (rax_7 s<= 0xfffffffe)
                rax_7 = -1
            
            int32_t var_60
            int32_t r10_2 = var_60 << 0x18
            int32_t rax_9 =
                zx.d(var_60:3.b) | zx.d(var_60:2.b) << 8 | zx.d(var_60:1.b) << 0x10 | r10_2
            
            if (rax_9 s<= 0xfffffffe)
                rax_9 = -1
            
            int32_t var_5c
            int32_t rdx_13 = var_5c << 0x18
            int32_t rax_11 =
                zx.d(var_5c:3.b) | zx.d(var_5c:2.b) << 8 | zx.d(var_5c:1.b) << 0x10 | rdx_13
            
            if (rax_11 s<= 0xfffffffe)
                rax_11 = -1
            
            int32_t var_58
            int32_t rbp_5 = var_58 << 0x18
            int32_t rax_13 =
                zx.d(var_58:3.b) | zx.d(var_58:2.b) << 8 | zx.d(var_58:1.b) << 0x10 | rbp_5
            
            if (rax_13 s<= 0xfffffffe)
                rax_13 = -1
            
            int32_t var_54
            int32_t rcx_20 = var_54 << 0x18
            uint64_t rdi_2 = zx.q(var_54:3.b) | zx.q(zx.d(var_54:2.b) << 8)
                | zx.q(zx.d(var_54:1.b) << 0x10) | zx.q(rcx_20)
            
            if (rdi_2.d s<= 0xfffffffe)
                rdi_2 = 0xffffffff
            
            int32_t var_50
            int32_t rbx_8 = var_50 << 0x18
            int32_t r14_2 =
                zx.d(var_50:3.b) | zx.d(var_50:2.b) << 8 | zx.d(var_50:1.b) << 0x10 | rbx_8
            
            if (r14_2 s<= 0xfffffffe)
                r14_2 = -1
            
            int32_t var_4c
            int32_t rax_21 = var_4c << 0x18
            int32_t r15_2 =
                zx.d(var_4c:3.b) | zx.d(var_4c:2.b) << 8 | zx.d(var_4c:1.b) << 0x10 | rax_21
            
            if (r15_2 s<= 0xfffffffe)
                r15_2 = -1
            
            if ((rcx_20 | rbp_5 | rbx_8 | rdx_13 | r10_2 | r11_2 | r8_1 | rax_21) s< 0)
                result = png_warning(arg1, "Ignoring cHRM chunk with negative chromaticities")
            else if (arg2 == 0 || (*(arg2 + 9) & 8) == 0)
                result = png_set_cHRM_fixed(arg1, arg2, rax_5, rax_7, rax_9, rax_11, rax_13, 
                    rdi_2.d, r14_2, r15_2)
            else
                if (rax_5 - 0x763e u<= 0x7d0 && rax_7 - 0x7c9c u<= 0x7d0 && rax_9 - 0xf618 u<= 0x7d0
                        && rax_11 - 0x7d00 u<= 0x7d0 && rax_13 - 0x7148 u<= 0x7d0
                        && rdi_2.d - 0xe678 u<= 0x7d0 && r14_2 - 0x36b0 u<= 0x7d0)
                    result = r15_2 - 0x1388
                
                if (rax_5 - 0x763e u> 0x7d0 || rax_7 - 0x7c9c u> 0x7d0 || rax_9 - 0xf618 u> 0x7d0
                        || rax_11 - 0x7d00 u> 0x7d0 || rax_13 - 0x7148 u> 0x7d0
                        || rdi_2.d - 0xe678 u> 0x7d0 || r14_2 - 0x36b0 u> 0x7d0
                        || result u>= 0x7d1)
                    png_warning(arg1, "Ignoring incorrect cHRM value when sRGB is also present")
                    int32_t var_c0_2 = rax_11
                    int32_t var_c8_2 = rax_9
                    sub_141528310(__acrt_iob_func(2), "wx=%d, wy=%d, rx=%d, ry=%d\n", zx.q(rax_5))
                    int32_t var_c0_3 = r15_2
                    int32_t var_c8_3 = r14_2
                    result = sub_141528310(__acrt_iob_func(2), "gx=%d, gy=%d, bx=%d, by=%d\n", 
                        zx.q(rax_13))

__security_check_cookie(rax_1 ^ &var_e8)
return result
