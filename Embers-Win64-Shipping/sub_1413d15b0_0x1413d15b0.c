// 函数: sub_1413d15b0
// 地址: 0x1413d15b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void* rax_2 = *(arg2 + 0x20)
int64_t rbx = 0
int64_t i_1 = 4
int64_t var_158 = 0
int32_t var_150 = 0
int32_t var_14c = 8
char var_148 = 1
int64_t var_100 = 0
int32_t var_f8 = 0
int32_t var_f4 = 8
char var_f0 = 1
int64_t var_a8 = 0
int32_t var_a0 = 0
int32_t var_9c = 8
char var_98 = 1
int64_t var_50 = 0
int32_t var_48 = 0
int32_t var_44 = 8
char var_40 = 1
int32_t var_38 = 4
void var_198

if ((*(rax_2 + 0x138) & 8) == 0)
    if (*(rax_2 + 0x13c) == 0)
        sub_141123c40(&var_198, 3)
    
    goto label_1413d1695

void* result = sub_141123bc0(&var_198, *(rax_2 + 0xfc))

if (var_38 s> 0)
label_1413d1695:
    int64_t rdx_2
    int32_t r8_2
    rdx_2, r8_2 = sub_141156bb0(&var_198, arg1 + 0xee8, arg2)
    int64_t r10_1 = sx.q(sub_141124720(&var_198, rdx_2, r8_2))
    
    if (r10_1.d == 0xffffffff)
        void* rbx_1 = *(arg2 + 0x20)
        
        if ((*(rbx_1 + 0x138) & 8) == 0)
            *(arg2 + 0x60) = 0xffffffff
        
        int64_t i = *(rbx_1 + 0x140)
        int64_t* rdx_7 = *(arg1 + 0xf58)
        int64_t r8_4 = sx.q(*(arg1 + 0xf60))
        int64_t* rcx_9 = rdx_7
        int64_t* r14_4 = r8_4 << 3
        result = r14_4 + rdx_7
        
        if (rdx_7 != result)
            while (*rcx_9 != i)
                rcx_9 = &rcx_9[1]
                
                if (rcx_9 == result)
                    goto label_1413d17dc
        
        if (rdx_7 == result || ((rcx_9 - rdx_7) s>> 3).d == 0xffffffff)
        label_1413d17dc:
            int32_t rax_9 = (r8_4 + 1).d
            *(arg1 + 0xf60) = rax_9
            
            if (rax_9 s> *(arg1 + 0xf64))
                sub_1405a4d70(arg1 + 0xf58)
            
            result = *(arg1 + 0xf58)
            *(r14_4 + result) = i
    else
        void* r14_1 = &var_198 + r10_1 * 0x58
        void* rdx_4 = r14_1
        void* rcx_4 = *(r14_1 + 0x40)
        
        if (rcx_4 != 0)
            rdx_4 = rcx_4
        
        int64_t r9_1 = sx.q(*(r14_1 + 0x48)) << 3
        int64_t rcx_6 = 0
        uint64_t r9_2 = r9_1 u>> 3
        
        if (rdx_4 u> rdx_4 + r9_1)
            r9_2 = 0
        
        if (r9_2 != 0)
            do
                void* r8_3 = *rdx_4
                
                if ((*(*(r8_3 + 0x20) + 0x138) & 8) == 0)
                    *(r8_3 + 0x60) = 0xffffffff
                
                rdx_4 += 8
                rcx_6 += 1
            while (rcx_6 != r9_2)
        
        if ((*(*(arg2 + 0x20) + 0x138) & 8) == 0)
            *(arg2 + 0x60) = r10_1.d
        
        sub_141146a00(&var_198, r10_1.d)
        void* rax_7 = *(r14_1 + 0x40)
        void* rdi_1 = r14_1
        
        if (rax_7 != 0)
            rdi_1 = rax_7
        
        int64_t r14_2 = sx.q(*(r14_1 + 0x48)) << 3
        result = rdi_1 + r14_2
        uint64_t r14_3 = r14_2 u>> 3
        
        if (rdi_1 u> result)
            r14_3 = 0
        
        if (r14_3 != 0)
            do
                result = sub_1413d15b0(arg1, *rdi_1)
                rbx += 1
                rdi_1 += 8
            while (rbx != r14_3)

void arg_8
void* rbx_2 = &arg_8

do
    int64_t rcx_13 = *(rbx_2 - 0x58)
    rbx_2 -= 0x58
    i_1 -= 1
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)
while (i_1 != 0)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
