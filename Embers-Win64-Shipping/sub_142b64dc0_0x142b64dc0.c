// 函数: sub_142b64dc0
// 地址: 0x142b64dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
uint64_t var_48 = __security_cookie ^ &var_148
int32_t i_1 = arg1
uint64_t result

if (arg3 == 0 || arg1 s> arg2)
label_142b64f93:
    result.b = 1
else
    while (true)
        char* rdx
        
        if (i_1 s< 0xfdd0 || (i_1 s> 0xfdef && (i_1 & 0xfffe) != 0xfffe) || i_1 s> 0x10ffff)
            result = sub_142a53dd0(i_1)
            
            if (result.b == 0x12)
                result.b = (i_1 & 0xfffffc00) != 0xd800
                result.b += 0x1f
            
            if (result.b u< 0x21)
                rdx = (&data_1436718c0)[zx.q(result.b)]
            else
                rdx = "unknown"
        else
            result.b = 0x1e
            rdx = (&data_1436718c0)[zx.q(result.b)]
        
        char var_118 = 0x3c
        void var_117
        void* r11_1 = &var_117
        int16_t rcx = 0xc7
        int16_t r10_1 = 1
        
        if (*rdx != 0)
            char* rax_3 = rdx
            
            do
                if (rcx != 0)
                    *r11_1 = *rax_3
                    r11_1 += 1
                    rcx -= 1
                
                r10_1 += 1
                rax_3 = &rdx[sx.q(zx.d(r10_1) - 1)]
            while (*rax_3 != 0)
        
        if (*rdx == 0 || rcx != 0)
            *r11_1 = 0x2d
            r11_1 += 1
            rcx -= 1
        
        int32_t r9 = 0
        int32_t i = i_1
        
        if (i_1 != 0)
            do
                r9 += 1
                i s>>= 4
            while (i != 0)
        
        if (i_1 == 0 || r9 s< 4)
            r9 = 4
        
        char* rdi_1 = sx.q(r9)
        int32_t i_2 = i_1
        char* r8 = rdi_1
        
        while (i_2 != 0 || r8 s> 0)
            if (rcx == 0)
                break
            
            char rax_8 = i_2.b & 0xf
            
            if (rax_8 u>= 0xa)
                r8 -= 1
                i_2 s>>= 4
                rcx -= 1
                *(r8 + r11_1) = rax_8 + 0x37
            else
                r8 -= 1
                i_2 s>>= 4
                rcx -= 1
                *(r8 + r11_1) = rax_8 + 0x30
        
        if (rcx != 0)
            *(rdi_1 + r11_1) = 0x3e
        
        result = zx.q(r10_1 + 1 + r9.w + 1)
        
        if (result u>= 0xc8)
            __report_rangecheckfailure()
            noreturn
        
        (&var_118)[result] = 0
        
        if (r10_1 + 1 + r9.w != 0xffff
                && arg3(arg4, zx.q(i_1), 2, &var_118, zx.d(r10_1 + 1 + r9.w + 1)).b == 0)
            result.b = 0
            break
        
        i_1 += 1
        
        if (i_1 s> arg2)
            goto label_142b64f93

__security_check_cookie(var_48 ^ &var_148)
return result
