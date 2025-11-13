// 函数: sub_142155220
// 地址: 0x142155220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg2)
int32_t rcx

if (rax_1 == 0)
    rcx = 0x20
else
    rcx = 0x1f - temp0

uint64_t result = zx.q(arg2 - 1)
int32_t rcx_2 = rcx << 0x1a s>> 0x1f
uint64_t rflags_1
char temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(result.d)
char r9

if (rcx_2 == 0)
    r9 = 0x20
else
    r9 = 0x1f - temp0_1

int64_t rdx_1 = sx.q(arg1[0x86])
uint64_t rdi = zx.q(1 << ((not.d(rcx_2)).b & (0x20 - r9)))

if (rdi != rdx_1)
    int32_t rcx_5 = arg1[1]
    int32_t r14_1 = *arg1
    result = zx.q(r14_1 - rcx_5)
    
    if (rdi u>= result)
        if (rdx_1.d s<= 0)
            arg1[2] = (rdi - 1).d
            int32_t rdx_10 = arg1[0x86]
            result = zx.q(rdx_10 + rdi.d)
            arg1[0x86] = result.d
            
            if (result.d s> arg1[0x87])
                result = sub_142152df0(&arg1[4], rdx_10)
        else
            void* r9_1 = nullptr
            int32_t r8_1 = 0x80
            int32_t r15_1 = 0
            void* var_58_1 = nullptr
            int32_t var_4c_1 = 0x80
            int32_t var_50_1 = 0
            void var_258
            
            if (rdi.d != 0x80)
                sub_142153010(&var_258, rdi.d)
                rcx_5 = arg1[1]
                r8_1 = var_4c_1
                r9_1 = var_58_1
                r14_1 = *arg1
                r15_1 = var_50_1
            
            int32_t r10_1 = arg1[2]
            void* rax_4 = *(arg1 + 0x210)
            uint64_t rdx_4 = zx.q(r10_1) & zx.q(rcx_5)
            int32_t r10_2 = r10_1 & r14_1
            uint64_t r11_1 = zx.q(rdx_4.d)
            void* r12_1 = &arg1[4]
            
            if (rax_4 != 0)
                r12_1 = rax_4
            
            int32_t r14_2 = r14_1 - rcx_5
            int32_t rcx_7
            rcx_7.b = rdx_4.d u>= r10_2
            int32_t rax_5
            rax_5.b = r14_2 != 0
            int32_t r8_4
            
            if ((rax_5 & rcx_7) == 0)
                r12_1 += rdx_4 << 2
                r8_4 = r14_2
            else
                int32_t r13_2 = arg1[0x86] - r11_1.d
                int32_t rax_6 = r15_1 + r13_2
                var_50_1 = rax_6
                
                if (rax_6 s> r8_1)
                    sub_142152df0(&var_258, r15_1)
                    r9_1 = var_58_1
                
                void* rcx_9 = &var_258
                
                if (r9_1 != 0)
                    rcx_9 = r9_1
                
                memcpy(rcx_9 + (sx.q(r15_1) << 2), r12_1 + (r11_1 << 2), r13_2 << 2)
                r8_4 = r10_2
            
            sub_14213d600(&var_258, r12_1, r8_4)
            int32_t rcx_14 = rdi.d - r14_2 + var_50_1
            
            if (rcx_14 s> var_4c_1)
                sub_142152df0(&var_258, var_50_1)
            
            void* rcx_18
            
            if (&arg1[4] == &var_258)
                rcx_18 = var_58_1
            else
                void* r15_2 = var_58_1
                
                if (r15_2 == 0)
                    memmove(&arg1[4], &var_258, 0x200)
                
                int64_t rcx_17 = *(arg1 + 0x210)
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                    r15_2 = var_58_1
                
                rcx_18 = nullptr
                *(arg1 + 0x210) = r15_2
                arg1[0x86] = rcx_14
                arg1[0x87] = var_4c_1
                int32_t var_4c_2 = 0x80
                int64_t var_58_2 = 0
                int32_t var_50_3 = 0
            
            result = zx.q((rdi - 1).d)
            arg1[2] = result.d
            arg1[1] = 0
            *arg1 = r14_2
            
            if (rcx_18 != 0)
                result = sub_140a74f90(rcx_18)

__security_check_cookie(rax_1 ^ &var_288)
return result
