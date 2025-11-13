// 函数: sub_141dc54d0
// 地址: 0x141dc54d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t rsi = 0
void* rdx = nullptr
void* var_48 = nullptr
int32_t var_40 = 0
int32_t var_3c = 0x18
void var_108

if (arg1 != 0)
    void* rax_2 = sub_142493230()
    void* const rbp_1
    
    if (rax_2 == 0)
        rbp_1 = nullptr
    else
        void* rax_3 = sub_142459c10()
        
        if (rax_3 == 0)
            rbp_1 = nullptr
        else
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> *(rax_2 + 0x38))
                rbp_1 = nullptr
            else
                rbp_1 = rax_2
                
                if (*(*(rax_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    rbp_1 = nullptr
    
    void* r8 = &var_108
    
    if (rbp_1 != sub_142459c10())
        sub_1419f71f0(arg1, rax_2, r8)
    else
        sub_1419f6fe0(arg1, rax_2, r8)
    
    rdx = var_48

int32_t r8_2 = var_40 + arg2[1].d

if (r8_2 s> *(arg2 + 0xc))
    sub_140638c50(arg2, r8_2)
    rdx = var_48

void* r14_1 = &var_108

if (rdx != 0)
    r14_1 = rdx

int64_t r15 = sx.q(var_40) << 3
uint64_t result = r14_1 + r15
uint64_t r15_1 = r15 u>> 3

if (r14_1 u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        result = *r14_1
        int64_t rbx_2 = *(result + 0x1f8)
        
        if (rbx_2 != 0)
            int64_t rbp_2 = sx.q(arg2[1].d)
            int32_t rax_8 = (rbp_2 + 1).d
            arg2[1].d = rax_8
            
            if (rax_8 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            result = *arg2
            *(result + (rbp_2 << 3)) = rbx_2
            
            if (arg3 != 0)
                r8_2.b = 1
                result, r8_2 = sub_141dc54d0(rbx_2, arg2, r8_2)
        
        r14_1 += 8
        rsi += 1
    while (rsi != r15_1)
    
    rdx = var_48

if (rdx != 0)
    result = sub_140a74f90(rdx)

__security_check_cookie(rax_1 ^ &var_128)
return result
