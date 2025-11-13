// 函数: sub_141a61e50
// 地址: 0x141a61e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int64_t rdi = sx.q(*(arg1 + 0x30))
int64_t zmm1 = arg2[1].q
int128_t zmm0 = *arg2

if (rdi.d != 0)
    int32_t* rbx_1 = *(arg1 + 0x28)
    uint64_t r12_1 = 0
    int32_t rbp_1 = 0
    uint64_t arg_20 = 0
    result = sub_1405a66e0(&rbx_1[6], arg3, arg3.d)
    int32_t r8 = zmm1.d
    int64_t r14
    
    if (result.b == 0)
        r14.b = 1
    else
        result = rbx_1[2] ^ zmm0:8.d
        
        if (((rbx_1[3] ^ zmm0:0xc.d) | (rbx_1[4] ^ r8) | (rbx_1[5] ^ zmm1:4.d) | result) != 0)
            r14.b = 1
        else
            result = zmm0.d
            
            if (result != *rbx_1)
                r14.b = 1
            else
                r14.b = 0
    
    int64_t rdi_1 = 0
    
    do
        int32_t rcx_13 = rbp_1
        rdi_1 += 1
        rbp_1 += 1
        
        if (rdi_1 s< rdi)
            int32_t* rsi_2 = rdi_1 * 0x24
            
            do
                void* rbx_2 = *(arg1 + 0x28)
                result, r8 = sub_1405a66e0(rbx_2 + 0x18 + rsi_2, arg3, r8)
                int32_t rcx_12
                
                if (result.b != 0)
                    rcx_12 = (*(rsi_2 + rbx_2 + 0xc) ^ zmm0:0xc.d)
                        | (*(rsi_2 + rbx_2 + 0x10) ^ zmm1.d) | (*(rsi_2 + rbx_2 + 0x14) ^ zmm1:4.d)
                        | (zmm0:8.d ^ *(rsi_2 + rbx_2 + 8))
                
                if (result.b == 0 || rcx_12 != 0 || zmm0.d != *(rsi_2 + rbx_2))
                    result.b = 1
                else
                    result.b = 0
                
                if (r14.b != result.b)
                    break
                
                rbp_1 += 1
                rdi_1 += 1
                rsi_2 = &rsi_2[9]
            while (rdi_1 s< rdi)
            
            r12_1 = arg_20
        
        int32_t rbx_4 = rbp_1 - rcx_13
        
        if (r14.b != 0)
            if (r12_1.d != rcx_13)
                int64_t r9_2 = *(arg1 + 0x28)
                result, r8 =
                    memmove(r9_2 + sx.q(r12_1.d) * 0x24, r9_2 + sx.q(rcx_13) * 0x24, rbx_4 * 0x24)
            
            r12_1 = zx.q(r12_1.d + rbx_4)
            arg_20 = r12_1
        
        r14.b ^= 1
    while (rdi_1 s< rdi)
    
    *(arg1 + 0x30) = r12_1.d
    
    if (rdi.d != r12_1.d)
        *(arg1 + 0x38) = 1

return result
