// 函数: sub_1403cfc20
// 地址: 0x1403cfc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t var_20
__builtin_strncpy(&var_20, "IDAT", 5)

if ((*(arg1 + 0x154) & 4) == 0 && *(arg1 + 0x458) == 0)
    uint32_t r11_1 = zx.d(*arg2)
    
    if ((r11_1 & 0xf) != 8 || (r11_1 & 0xfffffff0) u> 0x70)
        png_error(arg1, "Invalid zlib compression method or flags in IDAT")
        noreturn
    
    if (arg3 u>= 2)
        int32_t r10_1 = *(arg1 + 0x1dc)
        
        if (r10_1 u<= 0x3fff)
            int32_t rdi_1 = *(arg1 + 0x1d8)
            
            if (rdi_1 u<= 0x3fff)
                uint32_t rcx_1 = r11_1 u>> 4
                int32_t rdx = 0x80 << rcx_1.b
                
                if (rdx u>= 0x100)
                    int32_t rax_11 = ((zx.d(*(arg1 + 0x25f)) * rdi_1 * zx.d(*(arg1 + 0x262)) + 0xf)
                        u>> 3) * r10_1
                    
                    if (rax_11 u<= rdx)
                        do
                            rcx_1 -= 1
                            
                            if (rdx u< 0x200)
                                break
                            
                            rdx u>>= 1
                        while (rax_11 u<= rdx)
                
                int32_t rcx_3 = rcx_1 << 4 | 8
                
                if (rcx_3 != r11_1)
                    *arg2 = rcx_3.b
                    int32_t rax_13 = zx.d(arg2[1]) & 0xffffffe0
                    uint64_t rcx_5 = zx.q(rcx_3 << 8) | zx.q(rax_13)
                    uint32_t rdx_2 = ((rcx_5 * 0x8421085) u>> 0x20).d
                    uint32_t rdi_7 = (((rcx_5.d - rdx_2) u>> 1) + rdx_2) u>> 4
                    arg2[1] = ((rdi_7.b - (rdi_7 << 5).b + rcx_5.b) | rax_13.b) ^ 0x1f

int64_t result = png_write_chunk(arg1, &var_20, arg2, arg3)
*(arg1 + 0x154) |= 4
__security_check_cookie(rax_1 ^ &var_48)
return result
