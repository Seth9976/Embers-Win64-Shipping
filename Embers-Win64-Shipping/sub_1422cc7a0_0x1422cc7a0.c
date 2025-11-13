// 函数: sub_1422cc7a0
// 地址: 0x1422cc7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
void var_28
sub_1422ba2a0(&var_28, *arg3)
int32_t r10 = 0
int32_t i = 0
int32_t r9 = 1

if (*(arg2 + 0x488) s> 0)
    do
        int32_t rdi_1 = r10
        int32_t r8 = *(*(arg1 + 0x28) + sx.q(i) * 0x30 + 0x20)
        void* rcx_3 = arg2 + 0x470
        void* rax_4 = *(arg2 + 0x480)
        
        if (rax_4 != 0)
            rcx_3 = rax_4
        
        void* r10_1 = rcx_3 + (sx.q(r10) << 2)
        int32_t rax_6 = *r10_1
        int32_t rax_7
        
        if (test_bit(*(&var_28 + (zx.q(r8) u>> 6 << 3)), zx.q(r8.b) & 0x3f))
            rax_7 = rax_6 & not.d(r9)
        else
            rax_7 = rax_6 | r9
        
        *r10_1 = rax_7
        i += 1
        int32_t rax_8 = r9 * 2
        r9 = 1
        r10 = rdi_1 + 1
        
        if (rax_8 != 0)
            r10 = rdi_1
        
        if (rax_8 != 0)
            r9 = rax_8
    while (i s< *(arg2 + 0x488))

int32_t result = *arg3
*(arg2 + 0x18) = result
__security_check_cookie(rax_1 ^ &var_48)
return result
