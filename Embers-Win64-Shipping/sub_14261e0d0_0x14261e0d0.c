// 函数: sub_14261e0d0
// 地址: 0x14261e0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_ce8
int64_t rax_1 = __security_cookie ^ &var_ce8
int32_t r14 = 0
int32_t var_c84 = 0
void var_648
memset(&var_648, 0, 0x600)
void var_a48
memset(&var_a48, 0, 0x400)
int32_t var_c88 = 0
void var_c48
memset(&var_c48, 0, 0x200)
sub_14260e6e0(arg4, arg3, arg2, *(arg2 + 0xc), arg5, &var_c48, &var_c88, 0x40, &var_648, &var_a48, 
    &var_c84, 0x40)
int32_t r12 = 0

if (var_c84 s> 0)
    void var_a40
    void* rsi_1 = &var_a40
    void var_640
    void* rbx_1 = &var_640
    
    do
        int64_t r15_1 = sx.q(arg2[3].d)
        int64_t var_c68_1 = *(rsi_1 - 8)
        int64_t rax_3 = *rsi_1
        int32_t rax_4 = (r15_1 + 1).d
        uint128_t var_c80_1 = *(rbx_1 - 8)
        arg2[3].d = rax_4
        int32_t var_c70_1 = (*(rbx_1 + 8)).d
        int32_t var_c6c_1 = (*(rbx_1 + 0xc)).d
        
        if (rax_4 s> *(arg2 + 0x34))
            sub_1405c4ec0(arg2 + 0x28)
        
        int64_t rax_5 = *(arg2 + 0x28)
        int64_t rcx_5 = r15_1 * 5
        r12 += 1
        rbx_1 += 0x18
        rsi_1 += 0x10
        *(rax_5 + (rcx_5 << 3)) = var_c80_1
        *(rax_5 + (rcx_5 << 3) + 0x10) = var_c70_1.o
        *(rax_5 + (rcx_5 << 3) + 0x20) = rax_3
    while (r12 s< var_c84)

int32_t result = arg2[4].d - *(arg2 + 0x6c)
int32_t rbx_2 = var_c88

if (rbx_2 s> result)
    sub_1410339f0(arg2 + 0x38, rbx_2)
    
    if (rbx_2 u< 4)
        result = 1
    else
        uint32_t rbx_3 = rbx_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_3 + 8)
        int32_t rcx_7
        
        if (rbx_3 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        int32_t rcx_9 = rcx_7 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_3 + 7)
        
        if (rcx_9 == 0)
            result = 1
        else
            result = 1 << ((not.d(rcx_9)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_12 = arg2[8].d
    
    if (rcx_12 == 0 || rcx_12 s< result)
        arg2[8].d = result
        result = sub_140807fa0(arg2 + 0x38)
    
    rbx_2 = var_c88

if (rbx_2 s> 0)
    do
        void var_c58
        result = sub_1407d1070(arg2 + 0x38, &var_c58, &var_c48 + (sx.q(r14) << 3), nullptr)
        r14 += 1
    while (r14 s< var_c88)

__security_check_cookie(rax_1 ^ &var_ce8)
return result
