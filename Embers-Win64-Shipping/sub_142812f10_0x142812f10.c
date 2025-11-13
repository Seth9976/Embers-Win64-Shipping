// 函数: sub_142812f10
// 地址: 0x142812f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_142819d40(arg1, arg2, 0x10)
*arg3 -= neg.d(arg2.d & 0xf) & 0xf
int32_t r13 = *rax
sub_142816b70(arg1, r13)
*arg3 -= 4
int128_t* rax_1 = sub_142815b60(arg1, "Sn::ManifestEntry", 1)
void* rax_2 = sub_142815b60(arg1, "Sn::ManifestEntry", 2)
int64_t var_88
__builtin_memset(&var_88, 0, 0x28)
sub_142813980(rax_1, "type", &var_88)
int64_t var_60
__builtin_memset(&var_60, 0, 0x28)
sub_142813980(rax_2, "offset", &var_60)
void* rdi_1 = &rax[1]
int32_t r14 = 0
int32_t rbx_5 = 0
void* arg_10 = rdi_1

if (r13 s> 0)
    do
        int64_t var_78
        int32_t rax_3 = sub_142815850(var_78:4.d, sx.q(var_78.d) + rdi_1, 0)
        int64_t rax_4 = PxGetFoundation()
        int64_t rdx_3 = *rax_4
        void** var_a8
        sub_1427f5e70(&var_a8, (*(rdx_3 + 0x20))(rax_4, rdx_3))
        int64_t rdi_2 = *(arg1 + 0x138)
        int32_t rsi_1 = *(arg1 + 0x144)
        *(arg1 + 0x138) = &var_a8
        *(arg1 + 0x144) = 0
        sub_142811a50(arg1, arg_10, rax_1, 0)
        *(arg1 + 0x138) = rdi_2
        *(arg1 + 0x144) = rsi_1
        sub_142816b70(arg1, r14)
        int64_t* rcx_10 = *(arg1 + 0x138)
        int64_t var_50
        int64_t rax_7 = sx.q(var_50:4.d)
        int64_t r9_1 = *rcx_10
        int32_t rdi_4 = *(rax_2 + 0x28) - rax_7.d
        int64_t var_98
        (*r9_1)(rcx_10, rax_7 + var_98, zx.q(rdi_4), r9_1)
        *(arg1 + 0x144) += rdi_4
        int64_t rcx_11 = sx.q(*(rax_1 + 0x28))
        *arg3 -= rcx_11.d
        rdi_1 = arg_10 + rcx_11
        arg_10 = rdi_1
        void* rax_9 = sub_142815b90(arg1, rax_3, 2)
        
        if (rax_9 == 0)
            sub_1427f5ea0(&var_a8)
            return nullptr
        
        int32_t rax_10 = *(rax_9 + 0x28)
        r14 += (neg.d(rax_10) & 0xf) + rax_10
        sub_1427f5ea0(&var_a8)
        rbx_5 += 1
    while (rbx_5 s< r13)

sub_142816b70(arg1, r14)
*arg3 -= 4
return rdi_1 + 4
