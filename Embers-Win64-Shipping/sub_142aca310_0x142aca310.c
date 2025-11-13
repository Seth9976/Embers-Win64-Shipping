// 函数: sub_142aca310
// 地址: 0x142aca310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t r12 = sx.q(*(arg2 + 8))
int32_t r9 = ((arg4 << 1) + 2).d
char rcx = arg5
int32_t rbp = r12.d
int32_t rax_2
rax_2.b = rcx == 0
int64_t r10 = 0
int32_t r15_1 = ((arg3 << 1) + 2).d - rax_2
int64_t var_50
__builtin_memset(&var_50, 0, 0x18)
int32_t rdi = 0
int64_t i = 0
int64_t r14 = 0
int64_t i_1
int64_t var_40

if (r9 s> 0)
    int64_t r14_1 = r12 * 2
    
    do
        if (rbp s>= sub_142a4a1f0(arg1))
            break
        
        int16_t rcx_2 = *(arg1 + 8)
        int32_t rax_5
        
        if (rcx_2 s< 0)
            rax_5 = *(arg1 + 0xc)
        else
            rax_5 = sx.d(rcx_2) s>> 5
        
        int16_t rcx_3
        
        if (rbp u>= rax_5)
            rcx_3 = -1
        else
            void* rax_6 = arg1 + 0xa
            
            if ((rcx_2.b & 2) == 0)
                rax_6 = *(arg1 + 0x18)
            
            rcx_3 = *(r14_1 + rax_6)
        
        if (rcx_3 - 0x30 u> 9)
            break
        
        uint32_t rax_8 = zx.d(rcx_3)
        
        if (rax_8 - 0x30 s< 0)
            break
        
        *(&var_50 + (i << 2)) = rax_8 - 0x30
        rdi += 1
        i += 1
        r14_1 += 2
        rbp += 1
    while (i s< sx.q(r9))
    
    r14 = var_40
    i = i_1
    r10 = var_50
    rcx = arg5

if (rcx != 0 && (rdi.b & 1) != 0)
    rdi -= 1

uint64_t result

if (rdi s< r15_1)
label_142aca509:
    *(arg2 + 0xc) = r12.d
    result = 0
else
    int64_t r11_1 = var_50
    
    while (true)
        int32_t rdx = 0
        int32_t r8 = 0
        int32_t r9_1 = 0
        
        if (rdi - 1 u<= 5)
            switch (rdi)
                case 1
                    rdx = r10.d
                case 2
                    rdx = (r11_1 + (zx.q((r10 * 5).d) << 1)).d
                case 3
                    rdx = r10.d
                    r8 = (i + (zx.q((r11_1 * 5).d) << 1)).d
                case 4
                    rdx = (r11_1 + (zx.q((r10 * 5).d) << 1)).d
                    r8 = (i_1 + (zx.q((i * 5).d) << 1)).d
                case 5
                    rdx = r10.d
                    r8 = (i + (zx.q((r11_1 * 5).d) << 1)).d
                    r9_1 = (r14 + (zx.q((i_1 * 5).d) << 1)).d
                case 6
                    rdx = (r11_1 + (zx.q((r10 * 5).d) << 1)).d
                    r8 = (i_1 + (zx.q((i * 5).d) << 1)).d
                    r9_1 = ((r14 * 5).d << 1) + var_40:4.d
            
            if (rdx s> 0x17 || r8 s> 0x3b || r9_1 s> 0x3b)
                int32_t rax_21
                rax_21.b = arg5 != 0
                rdi -= rax_21 + 1
                
                if (rdi s< r15_1)
                    goto label_142aca509
                
                continue
        
        *(arg2 + 8) = rdi + r12.d
        result = zx.q(((rdx * 0x3c + r8) * 0x3c + r9_1) * 0x3e8)
        break

__security_check_cookie(rax_1 ^ &var_78)
return result
