// 函数: sub_142ba6e90
// 地址: 0x142ba6e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t var_158[0x44]
int32_t (* rax_2)[0x44] = &var_158
int32_t r11 = arg2
void* rdi = arg1
int64_t i_2 = 4
int64_t i

do
    __builtin_memset(rax_2, 0, 0x40)
    rax_2 = &(*rax_2)[0x10]
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t rbx = *(rdi + 0x10)
int32_t r9 = *(rdi + 8)
int32_t rbp_1 = arg4 - r9
int32_t r8 = *(rdi + 0x18)
int32_t rcx = *(rdi + 0x14)
*rax_2 = 0
int32_t rdx_1 = arg5 - arg4

if (rdx_1 + rbx s< r8)
    rbx = r8 - rdx_1

int32_t r8_1 = *(rdi + 0x1c)
int32_t result = rdx_1 + rcx

if (result s> r8_1)
    rcx = r8_1 - rdx_1

int32_t rbx_2 = rbx - r9
int32_t rcx_2 = rcx - r9

if (rbx_2 s>= 0 && rbx_2 s<= rcx_2 && rcx_2 s<= 0x40)
    int64_t i_3 = sx.q(arg8)
    int64_t rsi_1 = sx.q(rcx_2)
    
    if (i_3 s> 0)
        int32_t rdi_1 = r11
        int64_t rax_4 = sx.q(rbx_2)
        void* r14_1 = arg7 + 6
        int64_t i_1
        
        do
            int32_t rbp_3 = sx.d(*(r14_1 + 2)) - sx.d(*r14_1)
            result = sub_142b93e80(sx.d(*(r14_1 - 4)), rdi_1)
            int64_t rdx_3 = rax_4
            int32_t r8_3 = result + rbx_2 - rbp_1 + arg3
            
            if (rax_4 s<= rsi_1)
                do
                    int32_t rcx_4 = r8_3
                    r8_3 += 1
                    result = *(&data_14367f640 + ((zx.q(rcx_4) & 0x3f) << 2)) * rbp_3
                    var_158[rdx_3] += result
                    rdx_3 += 1
                while (rdx_3 s<= rsi_1)
                
                rdi_1 = arg2
            
            r14_1 += 0x48
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rdi = arg1
        r11 = arg2
    
    int64_t rcx_6 = sx.q(rbx_2)
    
    if (rcx_6 s<= rsi_1)
        int32_t result_1 = *(rdi + 0x34)
        int32_t rbx_5 = rbx_2 - rbp_1 + arg6
        
        do
            result = var_158[rcx_6]
            
            if (result s> result_1)
            label_142ba7056:
                result_1 = result
                *(rdi + 0x38) = rbx_5
                result = arg3 - arg6 + rbx_5
                *(rdi + 0x2c) = r11
                *(rdi + 0x30) = result
            else if (result == result_1 && rbx_5 s< *(rdi + 0x38))
                goto label_142ba7056
            
            rbx_5 += 1
            rcx_6 += 1
        while (rcx_6 s<= rsi_1)
        
        *(rdi + 0x34) = result_1

__security_check_cookie(rax_1 ^ &var_198)
return result
