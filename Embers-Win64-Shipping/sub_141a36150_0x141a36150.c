// 函数: sub_141a36150
// 地址: 0x141a36150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x1c) == 0xffffffff)
    void* rbx_1 = *(arg1 + 8)
    int32_t rax_1 = *(rbx_1 + 0x58)
    int64_t r15_1 = sx.q(*(rbx_1 + 0x48))
    int32_t var_54_1 = 0
    int32_t rax_2 = (r15_1 + 1).d
    *(rbx_1 + 0x48) = rax_2
    
    if (rax_2 s> *(rbx_1 + 0x4c))
        sub_14083a7e0(rbx_1 + 0x40)
    
    int64_t rax_3 = *(rbx_1 + 0x40)
    int64_t rcx_1 = r15_1 * 3
    *(rax_3 + (rcx_1 << 2)) = rax_1.q
    *(rax_3 + (rcx_1 << 2) + 8) = 1
    int64_t rdi_1 = sx.q(*(rbx_1 + 0x58))
    int32_t rax_5 = *(rbx_1 + 0x58) + 1
    
    if (rax_5 s> rdi_1.d)
        *(rbx_1 + 0x58) = rax_5
        int32_t i_1 = rax_5 - rdi_1.d
        
        if (rax_5 s> *(rbx_1 + 0x5c))
            sub_1405c50f0(rbx_1 + 0x50)
        
        int32_t* rcx_4 = rdi_1 * 0x1c + *(rbx_1 + 0x50)
        
        if (i_1 != 0)
            void* rax_6 = &rcx_4[4]
            int32_t i
            
            do
                *rcx_4 = 0xffffffff
                rcx_4 = &rcx_4[7]
                *(rax_6 - 0xc) = 0
                *(rax_6 - 4) = 0
                *(rax_6 + 4) = 0
                *(rax_6 + 8) = 0
                rax_6 += 0x1c
                i = i_1
                i_1 -= 1
            while (i != 1)
    else if (rax_5 s< rdi_1.d && rax_5 != rdi_1.d)
        *(rbx_1 + 0x58) = rax_5
        sub_1405c5460(rbx_1 + 0x50)
    
    *(arg2 + 0x1c) = r15_1.d

int64_t zmm1 = *(arg1 + 0x20)
int64_t* rcx_7 = *(arg1 + 8) + 0x40
int32_t rax_7 = *(arg1 + 0x28)
int32_t rdx_2 = *(arg2 + 0x1c)
uint128_t var_48 = *(arg1 + 0x10)
int32_t var_30 = rax_7
int64_t var_38 = zmm1
return sub_141a36cd0(rcx_7, rdx_2, &var_48)
