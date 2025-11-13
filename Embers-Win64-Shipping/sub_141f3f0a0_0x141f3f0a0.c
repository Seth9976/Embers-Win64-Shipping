// 函数: sub_141f3f0a0
// 地址: 0x141f3f0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_128
int64_t rax_2 = __security_cookie ^ &var_128
void var_100
sub_141f2cb90(&var_100, arg2, arg3)
void* var_40
void* rcx_1 = var_40
void* r15_1 = &var_100

if (rcx_1 != 0)
    r15_1 = rcx_1

int64_t rbp_1 = 0
int32_t var_38
int64_t r12_1 = sx.q(var_38) << 3
uint64_t r12_2 = r12_1 u>> 3

if (r15_1 u> r15_1 + r12_1)
    r12_2 = 0

if (r12_2 != 0)
    do
        void* var_108
        sub_140d3a3a0(&var_108, *r15_1)
        int32_t* r14_1 = *(arg1 + 0x1f8)
        int32_t* rbx_1 = r14_1
        void* rsi_1 = &r14_1[sx.q(*(arg1 + 0x200)) * 2]
        
        if (r14_1 != rsi_1)
            while (sub_14077a170(rbx_1, &var_108).b == 0)
                rbx_1 = &rbx_1[2]
                
                if (rbx_1 == rsi_1)
                    goto label_141f3f188
        
        if (r14_1 == rsi_1 || ((rbx_1 - r14_1) s>> 3).d == 0xffffffff)
        label_141f3f188:
            int64_t rbx_4 = sx.q(*(arg1 + 0x200))
            int32_t rax_5 = (rbx_4 + 1).d
            *(arg1 + 0x200) = rax_5
            
            if (rax_5 s> *(arg1 + 0x204))
                sub_1405a4d70(arg1 + 0x1f8)
            
            *(*(arg1 + 0x1f8) + (rbx_4 << 3)) = var_108
        
        r15_1 += 8
        rbp_1 += 1
    while (rbp_1 != r12_2)
    
    rcx_1 = var_40

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

__security_check_cookie(rax_2 ^ &var_128)
