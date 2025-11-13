// 函数: sub_14299ed70
// 地址: 0x14299ed70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t i_1 = 0
int32_t r10 = arg4
int64_t rax_2 = 0
int64_t r9 = *(arg1 + 0xc8)
int64_t rcx = *(arg1 + 0xd0)

if (r9 != 0)
    rax_2 = r9

int64_t r9_1 = *(arg1 + 0x40)
int64_t var_70 = rax_2
int64_t rax_3 = 0

if (rcx != 0)
    rax_3 = rcx

int64_t rcx_1 = *(arg1 + 0xd8)
int64_t var_68 = rax_3
int64_t rax_4 = 0

if (rcx_1 != 0)
    rax_4 = rcx_1

int64_t var_60 = rax_4
int64_t rax_5
int64_t rdx
rdx:rax_5 = muls.dp.q(0x6bca1af286bca1b, *(arg1 + 0x48) - r9_1)
int64_t rdx_1 = rdx s>> 2
uint64_t result = rdx_1 u>> 0x3f

if (rdx_1 != neg.q(result))
    uint64_t i = 0
    int64_t rdx_9
    
    do
        void* rbx_2 = i * 0x98 + r9_1
        int32_t rax_7 = sub_1429a63d0(*(rbx_2 + 0x24), arg2, r10)
        int32_t rcx_5 = *(rbx_2 + 0x28)
        *(rbx_2 + 0x34) = rax_7
        int32_t rax_8 = sub_1429a63d0(rcx_5, arg3, arg5)
        int32_t rcx_6 = *(rbx_2 + 0x2c)
        *(rbx_2 + 0x38) = rax_8
        int32_t rax_10 = sub_1429a6580(rcx_6) * *(rbx_2 + 0x38)
        int32_t rsi_1 = 1
        int64_t rax_11 = sx.q(*(rbx_2 + 0x20))
        *(rbx_2 + 0x94) = *(rbx_2 + 0x34) * rax_10
        int64_t rcx_9 = (&var_70)[rax_11]
        *(rbx_2 + 0x40) = rcx_9
        *(rbx_2 + 0x48) = rcx_9
        *(rbx_2 + 0x50) = rcx_9
        *(rbx_2 + 0x70) = rcx_9
        
        if (sub_1429a6580(*(rbx_2 + 0x2c)) s> 1)
            void* rdi_1 = rbx_2 + 0x58
            int32_t rax_15
            
            do
                rdi_1 += 8
                rsi_1 += 1
                int64_t rdx_6 = sx.q(*(rbx_2 + 0x38) * *(rbx_2 + 0x34)) + *(rdi_1 - 0x10)
                *(rdi_1 - 8) = rdx_6
                *(rdi_1 + 0x18) = rdx_6
                rax_15 = sub_1429a6580(*(rbx_2 + 0x2c))
            while (rsi_1 s< rax_15)
        
        bool cond:3_1 = *(rbx_2 + 0x20) != 1
        int32_t rcx_12 = *(rbx_2 + 0x2c)
        *(rbx_2 + 0x90) = rcx_12
        
        if (cond:3_1)
            int32_t rax_17 = sub_1429a6580(rcx_12) * *(rbx_2 + 0x38)
            void* rdx_7 = &(&var_70)[sx.q(*(rbx_2 + 0x20))]
            *rdx_7 += sx.q(rax_17 * *(rbx_2 + 0x34))
        else
            *(rbx_2 + 0x90) = 2
        
        r9_1 = *(arg1 + 0x40)
        i_1 += 1
        r10 = arg4
        int64_t rax_20
        int64_t rdx_8
        rdx_8:rax_20 = muls.dp.q(0x6bca1af286bca1b, *(arg1 + 0x48) - r9_1)
        i = zx.q(i_1)
        rdx_9 = rdx_8 s>> 2
        result = rdx_9 u>> 0x3f
    while (i u< rdx_9 + result)

__security_check_cookie(rax_1 ^ &var_98)
return result
