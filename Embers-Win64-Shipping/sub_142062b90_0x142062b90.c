// 函数: sub_142062b90
// 地址: 0x142062b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_2 = *(arg1 + 0xb0)
void* i = arg1 + 0x10

if (i_2 != 0)
    i = i_2

for (void* r10 = i + sx.q(*(arg1 + 0xb8)) * 0x28; i != r10; i += 0x28)
    int32_t rax_1 = *(i + 8)
    
    if ((rax_1.b & 0x30) == 0x30)
        if (((rax_1 u>> 3).b & 1) == 0)
            rax_1 ^= 0x20
        else
            rax_1 ^= 0x10
        
        *(i + 8) = rax_1
    
    *(*(i + 0x10) + 0x34) = rax_1
    int32_t rcx_5 = *(i + 8)
    
    if (((rcx_5 u>> 4).b & 1) == 0)
        *(i + 0x20) = (zx.d(not.b((rcx_5 u>> 2).b)) & 1) | 2
    else
        *(i + 0x20) = 1

sub_142072670(arg1)
void* rax_7 = *(arg1 + 0xb0)
void* rcx_8 = arg1 + 0x10
char arg_8 = 0

if (rax_7 != 0)
    rcx_8 = rax_7

void* result = sub_142045fc0(rcx_8, *(arg1 + 0xb8), 0)
int32_t i_1 = *(arg1 + 0xb8)

if (i_1 != 0)
    do
        void* rax_8 = *(arg1 + 0xb0)
        void* rdx_1 = arg1 + 0x10
        int64_t rcx_9 = sx.q(*(arg1 + 0xb8))
        
        if (rax_8 != 0)
            rdx_1 = rax_8
        
        int64_t rcx_10 = rcx_9 * 5
        
        if (*(rdx_1 + (rcx_10 << 3) - 8) != 1)
            break
        
        int64_t zmm1_1 = (*(rdx_1 + (rcx_10 << 3) - 0x18)).q
        uint128_t var_58 = *(rdx_1 + (rcx_10 << 3) - 0x28)
        uint64_t var_38_1 = *(rdx_1 + (rcx_10 << 3) - 8)
        int64_t var_48_1 = zmm1_1
        *(arg1 + 0xb8) = (rcx_9 - 1).d
        sub_142066760(arg1 + 0x10)
        void* rax_9 = *(arg1 + 0x110)
        void* rcx_12 = arg1 + 0x100
        
        if (rax_9 != 0)
            rcx_12 = rax_9
        
        int64_t rcx_13 = *(rcx_12 + (sx.q(*(arg1 + 0x118)) << 3) - 8)
        sub_142059e30(&var_58, arg2, arg1 + 0x120, 4)
        sub_14206aa50(&var_58, arg2, *(arg1 + 0x130))
        *(rcx_13 + 0x38) = 0xffffffff
        i_1 = *(arg1 + 0xb8)
    while (i_1 != 0)
    
    result = zx.q(i_1 - 1)
    int64_t r15_1 = sx.q(result.d)
    
    if (result.d s>= 0)
        int64_t r14_2 = r15_1 * 0x28
        int64_t temp0_1
        
        do
            result = *(arg1 + 0xb0)
            void* result_1 = arg1 + 0x10
            
            if (result != 0)
                result_1 = result
            
            void* rsi_1 = result_1 + r14_2
            
            if (*(rsi_1 + 0x20) != 2)
                break
            
            void* rax_12 = *(arg1 + 0x110)
            void* rdx_4 = arg1 + 0x100
            int64_t r8_3 = sx.q(*(arg1 + 0x118))
            
            if (rax_12 != 0)
                rdx_4 = rax_12
            
            int64_t rbx_1 = *(rdx_4 + (r8_3 << 3) - 8)
            *(arg1 + 0x118) = (r8_3 - 1).d
            sub_1420666d0(arg1 + 0x100)
            *(rsi_1 + 0x18) = rbx_1
            result = sub_142059e30(rsi_1, arg2, arg1 + 0x120, 4)
            r14_2 -= 0x28
            temp0_1 = r15_1
            r15_1 -= 1
        while (temp0_1 - 1 s>= 0)

return result
