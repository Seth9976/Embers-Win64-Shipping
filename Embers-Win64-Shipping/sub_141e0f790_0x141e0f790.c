// 函数: sub_141e0f790
// 地址: 0x141e0f790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x3e8)
int64_t rsi = 0
void* rdi = arg1
int64_t rbp = 0
uint64_t r12_1 = sx.q(*(arg1 + 0x3f0)) << 3 u>> 3

if (r14 u> &r14[sx.q(*(arg1 + 0x3f0))])
    r12_1 = 0

if (r12_1 != 0)
    int64_t var_58
    int64_t* var_50 = &var_58
    int32_t arg_18
    int32_t* var_48_1 = &arg_18
    
    do
        int32_t i_2 = arg2[0x84].d
        int32_t r9_1 = 0
        int64_t rcx = *r14
        int32_t i = i_2
        void* rbx_1 = arg2[0x83]
        var_58 = rcx
        int32_t r10_1 = var_58:4.d
        
        if (i_2 s> 0)
            do
                int32_t r8_2 = i & 0x80000001
                
                if (r8_2 s< 0)
                    r8_2 = ((r8_2 - 1) | 0xfffffffe) + 1
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(i)
                int32_t i_1 = (temp3_1 - temp2_1) s>> 1
                i = i_1
                int32_t rax_5 = i_1 + r9_1
                int64_t r8_6 = sx.q(rax_5) * 6
                int32_t rax_7 = *(rbx_1 + (r8_6 << 3))
                int32_t rax_8 = rax_7 - rcx.d
                
                if (rax_7 == rcx.d)
                    rax_8 = *(rbx_1 + (r8_6 << 3) + 4) - r10_1
                
                if (rax_8 s< 0)
                    r9_1 = rax_5 + r8_2
            while (i s> 0)
        
        int32_t zmm0
        
        if (r9_1 s>= i_2)
            zmm0 = (zx.o(0)).d
        else
            int64_t rdx_1 = sx.q(r9_1)
            int64_t rax_11 = rdx_1 * 0x30
            int32_t rcx_1 = rcx.d - *(rax_11 + rbx_1)
            
            if (rcx.d == *(rax_11 + rbx_1))
                rcx_1 = r10_1 - *(rax_11 + rbx_1 + 4)
            
            if (rcx_1 s< 0 || r9_1 == 0xffffffff)
                zmm0 = (zx.o(0)).d
            else
                int64_t rax_13 = rdx_1 * 0x30
                
                if (rbx_1 + 8 == neg.q(rax_13))
                    zmm0 = (zx.o(0)).d
                else
                    zmm0 = *(rbx_1 + 8 + rax_13 + 0x20)
        
        arg_18 = zmm0
        void arg_20
        sub_1405a8200(arg1 + 0x348, &arg_20, &var_50, nullptr)
        r14 = &r14[1]
        rbp += 1
    while (rbp != r12_1)
    
    rdi = arg1

sub_141f318a0(arg2, arg1 + 0x348, rdi + 0x398)
int64_t* rbx_2 = *(rdi + 0x3e8)
uint64_t result = &rbx_2[sx.q(*(rdi + 0x3f0))]
uint64_t rdi_2 = sx.q(*(rdi + 0x3f0)) << 3 u>> 3

if (rbx_2 u> result)
    rdi_2 = 0

if (rdi_2 != 0)
    do
        result = sub_1405c3480(arg1 + 0x348, *rbx_2)
        rsi += 1
        rbx_2 = &rbx_2[1]
    while (rsi != rdi_2)

return result
