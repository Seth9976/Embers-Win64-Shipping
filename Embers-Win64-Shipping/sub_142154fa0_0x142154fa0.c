// 函数: sub_142154fa0
// 地址: 0x142154fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg2)
int64_t __saved_r14
int32_t r8

if (&__saved_r14 == 0x70)
    r8 = 0x20
else
    r8 = 0x1f - temp0

uint64_t result = zx.q(arg2 - 1)
int32_t r8_2 = r8 << 0x1a s>> 0x1f
uint64_t rflags_1
char temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(result.d)
char r9

if (r8_2 == 0)
    r9 = 0x20
else
    r9 = 0x1f - temp0_1

int64_t rdx_1 = sx.q(arg1[6])
uint64_t r14 = zx.q(1 << ((0x20 - r9) & (not.d(r8_2)).b))

if (r14 != rdx_1)
    int32_t rcx_2 = arg1[1]
    int32_t r12_1 = *arg1
    result = zx.q(r12_1 - rcx_2)
    
    if (r14 u>= result)
        if (rdx_1.d s<= 0)
            arg1[2] = (r14 - 1).d
            result = zx.q(arg1[6] + r14.d)
            arg1[6] = result.d
            
            if (result.d s> arg1[7])
                return sub_1405a4cf0(&arg1[4]) __tailcall
        else
            int64_t rbx_1 = 0
            int32_t rsi_1 = 0
            int32_t r15_1 = 0
            int64_t var_60 = 0
            int64_t var_58_1 = 0
            
            if (r14.d != 0)
                sub_1405dadb0(&var_60, r14.d)
                rcx_2 = arg1[1]
                r12_1 = *arg1
                rsi_1 = var_58_1:4.d
                r15_1 = var_58_1.d
                rbx_1 = var_60
            
            int32_t rax_2 = arg1[2]
            int64_t r8_4 = *(arg1 + 0x10)
            int32_t rax_3 = rax_2 & r12_1
            int32_t rdx_4 = rax_2 & rcx_2
            int32_t r12_2 = r12_1 - rcx_2
            int32_t rcx_4
            rcx_4.b = rdx_4 u>= rax_3
            int32_t rax_4
            rax_4.b = r12_2 != 0
            int64_t rcx_9
            int64_t rdx_8
            int64_t r8_7
            
            if ((rax_4 & rcx_4) == 0)
                int32_t rax_13 = r12_2 + r15_1
                var_58_1.d = rax_13
                
                if (rax_13 s> rsi_1)
                    sub_1405a4cf0(&var_60)
                    rsi_1 = var_58_1:4.d
                    rbx_1 = var_60
                
                r8_7 = sx.q(r12_2)
                rdx_8 = r8_4 + (zx.q(rdx_4) << 2)
                rcx_9 = rbx_1 + (sx.q(r15_1) << 2)
            else
                int32_t rax_6 = arg1[6] - rdx_4
                int32_t rax_7 = rax_6 + r15_1
                int32_t arg_8 = rax_7
                var_58_1.d = rax_7
                
                if (rax_7 s> rsi_1)
                    sub_1405a4cf0(&var_60)
                    rsi_1 = var_58_1:4.d
                    rbx_1 = var_60
                    arg_8 = var_58_1.d
                
                memcpy(rbx_1 + (sx.q(r15_1) << 2), r8_4 + (zx.q(rdx_4) << 2), rax_6 << 2)
                int64_t r15_2 = sx.q(arg_8)
                int32_t rax_12 = rax_3 + r15_2.d
                var_58_1.d = rax_12
                
                if (rax_12 s> rsi_1)
                    sub_1405a4cf0(&var_60)
                    rsi_1 = var_58_1:4.d
                    rbx_1 = var_60
                
                r8_7 = sx.q(rax_3)
                rcx_9 = rbx_1 + (r15_2 << 2)
                rdx_8 = r8_4
            
            memcpy(rcx_9, rdx_8, (r8_7 << 2).d)
            int32_t r15_5 = r14.d - r12_2 + var_58_1.d
            var_58_1.d = r15_5
            
            if (r15_5 s> rsi_1)
                sub_1405a4cf0(&var_60)
                rsi_1 = var_58_1:4.d
                r15_5 = var_58_1.d
                rbx_1 = var_60
            
            if (&arg1[4] != &var_60)
                int64_t rcx_13 = *(arg1 + 0x10)
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                *(arg1 + 0x10) = rbx_1
                rbx_1 = 0
                arg1[6] = r15_5
                arg1[7] = rsi_1
            
            result = zx.q((r14 - 1).d)
            arg1[2] = result.d
            arg1[1] = 0
            *arg1 = r12_2
            
            if (rbx_1 != 0)
                return sub_140a74f90(rbx_1)

return result
