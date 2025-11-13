// 函数: sub_1403cf670
// 地址: 0x1403cf670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = zx.q(arg5)
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_5c
__builtin_strncpy(&var_5c, "IHDR", 5)
char rax_2
char const* const rdx

switch (r14)
    case 0
        if (arg4 u<= 0x10)
            rax_2 = 1
        
        if (arg4 u<= 0x10 && test_bit(0x10116, arg4))
            goto label_1403cf757
        
        rdx = "Invalid bit depth for grayscale image"
    case 2
        rax_2 = 3
        
        if (arg4 == 8 || arg4 == 0x10)
            goto label_1403cf757
        
        rdx = "Invalid bit depth for RGB image"
    case 3
        if (arg4 - 1 u< 8)
            rax_2 = 1
        
        if (arg4 - 1 u< 8 && test_bit(0x8b, arg4 - 1))
            goto label_1403cf757
        
        rdx = "Invalid bit depth for paletted image"
    case 4
        rax_2 = 2
        
        if (arg4 == 8 || arg4 == 0x10)
        label_1403cf757:
            *(arg1 + 0x262) = rax_2
            
            if (arg6 != 0)
                png_warning(arg1, "Invalid compression type specified")
            
            int32_t rbp_1 = arg8
            int64_t r15
            
            if ((*(arg1 + 0x418) & 4) != 0 && (*(arg1 + 0x155) & 0x10) == 0 && (r14.d | 4) == 6)
                r15.b = 0x40
            
            if ((*(arg1 + 0x418) & 4) == 0 || (*(arg1 + 0x155) & 0x10) != 0 || (r14.d | 4) != 6
                    || arg7 != 0x40)
                if (arg7 != 0)
                    png_warning(arg1, "Invalid filter type specified")
                
                r15 = 0
            
            if (rbp_1 u>= 2)
                png_warning(arg1, "Invalid interlace type specified")
                rbp_1 = 1
            
            *(arg1 + 0x25f) = arg4.b
            *(arg1 + 0x25e) = r14.b
            *(arg1 + 0x25b) = rbp_1.b
            *(arg1 + 0x41c) = r15.b
            *(arg1 + 0x458) = 0
            *(arg1 + 0x1d8) = arg2
            *(arg1 + 0x1dc) = arg3
            int32_t rcx_4
            rcx_4.b = *(arg1 + 0x262)
            char rax_4 = mulu.dp.b(rcx_4.b, arg4.b)
            *(arg1 + 0x261) = rax_4
            uint64_t rdi_1 = zx.q(arg2)
            uint64_t rdx_1 = zx.q(rax_4)
            uint64_t rdx_3
            
            if (rax_4 u< 8)
                rdx_3 = (rdx_1 * rdi_1 + 7) u>> 3
            else
                rdx_3 = (rdx_1 u>> 3) * rdi_1
            
            *(arg1 + 0x1e8) = rdx_3
            *(arg1 + 0x1e4) = arg2
            *(arg1 + 0x260) = arg4.b
            *(arg1 + 0x263) = rcx_4.b
            uint8_t var_55 = (arg2 u>> 0x18).b
            uint8_t var_54_1 = (arg2 u>> 0x10).b
            char var_53_1 = arg2:1.b
            char var_52_1 = arg2.b
            int16_t rcx_8 = arg3.w
            uint8_t var_51_1 = (arg3 u>> 0x18).b
            uint8_t var_50_1 = (arg3 u>> 0x10).b
            char var_4f_1 = rcx_8:1.b
            char var_4e_1 = rcx_8.b
            char var_4d_1 = arg4.b
            char var_4c_1 = r14.b
            char var_4b_1 = 0
            char var_4a_1 = r15.b
            char var_49_1 = rbp_1.b
            png_write_chunk(arg1, &var_5c, &var_55, 0xd)
            *(arg1 + 0x190) = sub_1403be6d0
            *(arg1 + 0x198) = j_png_free
            *(arg1 + 0x1a0) = arg1
            bool rcx_10 = *(arg1 + 0x25d)
            
            if (rcx_10 == 0)
                rcx_10 = true
                
                if (*(arg1 + 0x25e) != 3)
                    rcx_10 = ((*(arg1 + 0x25f) u< 8) << 4) - 8
                
                *(arg1 + 0x25d) = rcx_10
            
            char rax_13 = (*(arg1 + 0x158)).b
            
            if ((rax_13 & 1) != 0)
                if ((rax_13 & 2) == 0)
                    goto label_1403cf956
                
                goto label_1403cf915
            
            int32_t rdx_7
            rdx_7.b = rcx_10 != 8
            *(arg1 + 0x1d4) = rdx_7
            
            if ((rax_13 & 2) == 0)
            label_1403cf956:
                *(arg1 + 0x1c4) = 0xffffffff
                
                if ((rax_13 & 4) != 0)
                    goto label_1403cf919
                
                goto label_1403cf964
            
        label_1403cf915:
            
            if ((rax_13 & 4) == 0)
            label_1403cf964:
                *(arg1 + 0x1d0) = 8
                
                if ((rax_13 & 8) == 0)
                    *(arg1 + 0x1cc) = 0xf
            else
            label_1403cf919:
                
                if ((rax_13 & 8) == 0)
                    *(arg1 + 0x1cc) = 0xf
            
            int32_t r8_1
            
            if ((rax_13 & 0x10) != 0)
                r8_1 = *(arg1 + 0x1c8)
            else
                *(arg1 + 0x1c8) = 8
                r8_1 = 8
            
            int32_t rax_15 = sub_14036ec10(arg1 + 0x160, *(arg1 + 0x1c4), r8_1, *(arg1 + 0x1cc), 
                *(arg1 + 0x1d0), *(arg1 + 0x1d4), "1.2.8", 0x58)
            
            if (rax_15 == 0)
                *(arg1 + 0x170) = *(arg1 + 0x1b8)
                int32_t result = *(arg1 + 0x1c0)
                *(arg1 + 0x178) = result
                *(arg1 + 0x1a8) = 0
                *(arg1 + 0x154) = 1
                __security_check_cookie(rax_1 ^ &var_a8)
                return result
            
            if (rax_15 == 0xfffffffe)
                rdx = "zlib failed to initialize compressor -- stream error"
            else if (rax_15 == 0xfffffffc)
                rdx = "zlib failed to initialize compressor -- mem error"
            else if (rax_15 != 0xfffffffa)
                rdx = "zlib failed to initialize compressor"
            else
                rdx = "zlib failed to initialize compressor -- version error"
        else
            rdx = "Invalid bit depth for grayscale+alpha image"
    case 6
        rax_2 = 4
        
        if (arg4 == 8 || arg4 == 0x10)
            goto label_1403cf757
        
        rdx = "Invalid bit depth for RGBA image"
    default
        rdx = "Invalid image color type specified"

png_error(arg1, rdx)
noreturn
