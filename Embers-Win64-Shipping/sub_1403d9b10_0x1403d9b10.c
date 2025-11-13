// 函数: sub_1403d9b10
// 地址: 0x1403d9b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
char rax_2 = (*(arg1 + 0x154)).b

if ((rax_2 & 1) == 0)
    png_error(arg1, "Missing IHDR before iCCP")
    noreturn

uint64_t result

if ((rax_2 & 4) != 0)
    png_warning(arg1, "Invalid iCCP after IDAT")
    result = sub_1403d8880(arg1, arg3)
else
    if ((rax_2 & 2) != 0)
        png_warning(arg1, "Out of place iCCP chunk")
    
    if (arg2 == 0 || (*(arg2 + 9) & 0x10) == 0)
        png_free(arg1, *(arg1 + 0x4a0))
        void* rax_3 = png_malloc(arg1, zx.q(arg3 + 1))
        *(arg1 + 0x4a0) = rax_3
        uint64_t rbx_1 = zx.q(arg3)
        sub_1403cc480(arg1, rax_3, rbx_1)
        sub_1403be770(arg1, rax_3, rbx_1.d)
        int32_t rax_4 = sub_1403d8880(arg1, 0)
        int64_t rdx_4 = *(arg1 + 0x4a0)
        
        if (rax_4 == 0)
            *(rdx_4 + rbx_1) = 0
            int64_t rdx_7 = *(arg1 + 0x4a0)
            int64_t rax_5 = rdx_7
            bool cond:0_1
            
            do
                cond:0_1 = *rax_5 != 0
                rax_5 += 1
            while (cond:0_1)
            
            if (rax_5 u>= rdx_7 + rbx_1 - 1)
                png_free(arg1, rdx_7)
                *(arg1 + 0x4a0) = 0
                result = png_warning(arg1, "Malformed iCCP chunk")
            else
                if (*rax_5 != 0)
                    png_warning(arg1, "Ignoring nonzero compression type in iCCP chunk")
                    rdx_7 = *(arg1 + 0x4a0)
                
                void* r14_2 = rax_5 + 1 - rdx_7
                int64_t var_90
                sub_1403d8a10(arg1, 0, rbx_1, r14_2, &var_90)
                int64_t rdi_2 = var_90
                uint8_t* r8_3 = *(arg1 + 0x4a0)
                void* rdi_3 = rdi_2 - r14_2
                
                if (rdi_2 u< r14_2 || rdi_3 u<= 3)
                    png_free(arg1, r8_3, r8_3)
                    *(arg1 + 0x4a0) = 0
                    result = png_warning(arg1, "Profile size field missing from iCCP chunk")
                else
                    uint64_t rbx_3 = zx.q(*(r8_3 + r14_2 + 3)) | zx.q(*(r8_3 + r14_2 + 2)) << 8
                        | zx.q(*(r8_3 + r14_2 + 1)) << 0x10 | zx.q(*(r8_3 + r14_2)) << 0x18
                    
                    if (rdi_3 u>= rbx_3)
                        png_set_iCCP(arg1, arg2, r8_3, 0, r14_2 + r8_3, rbx_3.d)
                        result = png_free(arg1, *(arg1 + 0x4a0))
                        *(arg1 + 0x4a0) = 0
                    else
                        png_free(arg1, r8_3)
                        *(arg1 + 0x4a0) = 0
                        int64_t* var_a8_1
                        var_a8_1.d = rdi_3.d
                        void var_88
                        _snscanf(&var_88, 0x50, 
                            "Ignoring iCCP chunk with declared size = %u and actual length = %u", 
                            zx.q(rbx_3.d))
                        result = png_warning(arg1, &var_88)
        else
            result = png_free(arg1, rdx_4)
            *(arg1 + 0x4a0) = 0
    else
        png_warning(arg1, "Duplicate iCCP chunk")
        result = sub_1403d8880(arg1, arg3)

__security_check_cookie(rax_1 ^ &var_c8)
return result
