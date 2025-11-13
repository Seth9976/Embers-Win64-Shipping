// 函数: sub_140d38b20
// 地址: 0x140d38b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
uint64_t result = zx.q(zx.d(rax_2.w) - rdx_1)
int32_t rdi_1 = rax_2 s>> 0x10
int64_t r15 = sx.q(result.d)

if (*arg3 != 0)
    int32_t rax_5 = *(arg1 + 0x10)
    
    if (rdi_1 s>= rax_5)
        int64_t r14_1 = sx.q(rax_5)
        int32_t rax_6 = r14_1.d + rdi_1 - rax_5 + 1
        *(arg1 + 0x10) = rax_6
        
        if (rax_6 s> *(arg1 + 0x14))
            sub_1405a4f90(arg1 + 8)
        
        memset((r14_1 << 4) + *(arg1 + 8), 0, sx.q(rdi_1 - rax_5 + 1) << 4)
        rax_5 = *(arg1 + 0x10)
    
    int32_t* rdi_7 = (sx.q(rdi_1) << 4) + *(arg1 + 8)
    *(arg1 + 0x1c) = rax_5 << 0x10
    
    if (*(rdi_7 + 8) == 0)
        int64_t* rax_8 = j_sub_140a82f30(0x100000)
        
        if (rax_8 == 0)
            rax_8 = nullptr
        else
            int64_t* rcx_6 = rax_8
            int64_t i_1 = 0x10000
            int64_t i
            
            do
                *rcx_6 = 0
                rcx_6[1].d = 0xffffffff
                rcx_6 = &rcx_6[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        *(rdi_7 + 8) = rax_8
        int32_t rax_9 = *(arg1 + 0x24)
        *(arg1 + 0x20) += 0x100000
        
        if (*(arg1 + 0x20) u>= rax_9)
            rax_9 = *(arg1 + 0x20)
        
        *(arg1 + 0x24) = rax_9
    
    *rdi_7 += 1
    *(arg1 + 0x18) += 1
    result = *(rdi_7 + 8)
    *(result + r15 * 0x10) = *arg3
else
    int32_t* rdi_4 = (sx.q(rdi_1) << 4) + *(arg1 + 8)
    int64_t rcx = *(rdi_4 + 8)
    
    if (rcx != 0)
        result = r15 * 2
        
        if (*(rcx + (result << 3)) != 0)
            int32_t var_20_1 = 0xffffffff
            *(rcx + (result << 3)) = 0.o
            int32_t temp2_1 = *rdi_4
            *rdi_4 -= 1
            
            if (temp2_1 == 1)
                result = j_sub_140a74f90(*(rdi_4 + 8))
                *(rdi_4 + 8) = 0
                *(arg1 + 0x20) -= 0x100000
            
            *(arg1 + 0x18) -= 1

return result
