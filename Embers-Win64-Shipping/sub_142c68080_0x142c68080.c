// 函数: sub_142c68080
// 地址: 0x142c68080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void* rbx = *arg1
int64_t rdi = sx.q(arg2)

if (*(rbx + 0x249) != 0)
    rdi -= 0xc
    *(rbx + 0x240) += 0xa

int32_t rax_2
int64_t r8_1
rax_2, r8_1 = (*(rbx + 0x4e80))(*(rbx + 0x240), 1, rdi, *(rbx + 0x4e88))
int32_t rbp = rax_2
int64_t result

if (rax_2 == 0x10000000)
    sub_142c64760(rbx, "operation aborted by callback", r8_1, arg4)
    result = 0x2a
    *arg3 = 0
else if (rbp != 0x10000001)
    if (sx.q(rbp) u<= rdi)
        if (*(rbx + 0x24b) == 0 && *(rbx + 0x249) != 0)
            void* const rsi_1 = &data_1435fcc4c
            
            if (*(rbx + 0x3da) == 0)
                rsi_1 = &data_1436b2f34
            
            void* const var_58_1 = rsi_1
            void var_48
            int64_t r15_1 = sx.q(sub_142c564b0(&var_48, 0xb, "%x%s", zx.q(rbp), arg4))
            *(rbx + 0x240) -= r15_1
            int32_t rbp_1 = rbp + r15_1.d
            memcpy(*(rbx + 0x240), &var_48, r15_1.d)
            int64_t rdi_1 = -1
            int64_t r8_3 = -1
            
            do
                r8_3 += 1
            while (*(rsi_1 + r8_3) != 0)
            
            memcpy(sx.q(rbp_1) + *(rbx + 0x240), rsi_1, r8_3.d)
            
            if (rbp_1 == r15_1.d)
                *(rbx + 0x224) = 1
            
            do
                rdi_1 += 1
            while (*(rsi_1 + rdi_1) != 0)
            
            rbp = rbp_1 + rdi_1.d
        
        *arg3 = rbp
        result = 0
    else
        *arg3 = 0
        sub_142c64760(rbx, "read function returned funny value", r8_1, arg4)
        result = 0x1a
else if ((*(arg1[0x87] + 0x80) & 0x10) == 0)
    *(rbx + 0x220) |= 0x20
    
    if (*(rbx + 0x249) != 0)
        *(rbx + 0x240) -= 0xa
    
    *arg3 = 0
    result = 0
else
    sub_142c64760(rbx, "Read callback asked for PAUSE when not supported!", r8_1, arg4)
    result = 0x1a

__security_check_cookie(rax_1 ^ &var_78)
return result
