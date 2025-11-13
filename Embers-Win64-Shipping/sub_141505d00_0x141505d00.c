// 函数: sub_141505d00
// 地址: 0x141505d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x28)
uint64_t result = 0
int16_t* var_38 = nullptr
int32_t var_2c = 0
int16_t* r14 = nullptr
uint64_t i_2 = 0
int32_t rsi = 0

if (i != 0)
    do
        int16_t* rax = *(arg1 + 0x38)
        int16_t r15_1 = *rax
        uint64_t r8_1 = zx.q(*rax)
        uint64_t rax_1 = zx.q(i - 1)
        *(arg1 + 0x28) = rax_1.d
        *rax = rax[rax_1]
        *(*(arg1 + 0x48) + (zx.q(**(arg1 + 0x38)) << 1)) = 0
        *(*(arg1 + 0x48) + (r8_1 << 1)) = 0xffff
        result = sub_141505070(arg1 + 0x28, 0)
        int64_t rdi_1 = sx.q(i_2.d)
        i_2 = zx.q((rdi_1 + 1).d)
        int32_t i_3 = i_2.d
        
        if (i_2.d s> rsi)
            result = sub_140594770(&var_38)
            rsi = var_2c
            i_2 = zx.q(i_3)
            r14 = var_38
        
        r14[rdi_1] = r15_1
        i = *(arg1 + 0x28)
    while (i != 0)
    
    if (i_2.d s> 0)
        int16_t* rsi_1 = r14
        uint64_t i_1
        
        do
            sub_14151c0b0(arg1, arg2, *rsi_1, 0)
            int32_t rdx_3 = *(arg1 + 0x2c)
            int16_t rdi_2 = *rsi_1
            
            if (*(arg1 + 0x28) == rdx_3)
                int32_t rdx_4 = rdx_3 * 2
                
                if (rdx_4 u<= 0x20)
                    rdx_4 = 0x20
                
                sub_141512980(arg1 + 0x28, rdx_4)
            
            uint32_t rdx_5 = zx.d(rdi_2)
            int32_t temp0_1 = *(arg1 + 0x30)
            
            if (rdx_5 u>= temp0_1)
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rdx_5 + 1)
                int32_t rcx_6
                
                if (rdx_5 == temp0_1)
                    rcx_6 = 0x20
                else
                    rcx_6 = 0x1f - temp0_2
                
                int32_t rcx_8 = rcx_6 << 0x1a s>> 0x1f
                uint64_t rflags_2
                char temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rdx_5)
                char rdx_6
                
                if (rcx_8 == 0)
                    rdx_6 = 0x20
                else
                    rdx_6 = 0x1f - temp0_3
                
                int32_t rdx_7 = 1 << ((not.d(rcx_8)).b & (0x20 - rdx_6))
                
                if (rdx_7 u<= 0x20)
                    rdx_7 = 0x20
                
                sub_141512a20(arg1 + 0x28, rdx_7)
            
            uint64_t rdx_8 = zx.q(*(arg1 + 0x28))
            int64_t rax_8 = *(arg1 + 0x38)
            *(arg1 + 0x28) += 1
            uint64_t r8_4 = zx.q(rdi_2)
            *(rax_8 + (rdx_8 << 1)) = rdi_2
            *(*(arg1 + 0x40) + (r8_4 << 2)) = 0
            *(*(arg1 + 0x48) + (r8_4 << 1)) = rdx_8.w
            result = sub_14151c590(arg1 + 0x28, rdx_8.w)
            rsi_1 = &rsi_1[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r14 != 0)
        return sub_140a74f90(r14)

return result
