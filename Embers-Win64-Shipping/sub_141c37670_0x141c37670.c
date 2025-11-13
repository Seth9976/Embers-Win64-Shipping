// 函数: sub_141c37670
// 地址: 0x141c37670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0

if (0 == *(arg1 + 0x3c))
    *(arg1 + 0x3c) = 0
else
    rax = *(arg1 + 0x3c)

int32_t rax_1 = 0

if (0 == arg1[8].d)
    arg1[8].d = 0
else
    rax_1 = arg1[8].d

int32_t rbx_1

if (rax_1 s< rax)
    rbx_1 = rax_1 + arg1[7].d - rax
else
    rbx_1 = rax_1 - rax

uint64_t result

if (zx.q(rbx_1) s<= (*(*arg1 + 0x10))(arg1))
    result.b = 1
else
    arg1[2].d = 0
    
    if (*(arg1 + 0x14) s<= 0xffffffff)
        sub_1405dadb0(&arg1[1], 0)
    
    int32_t rax_7 = (*(*arg1 + 0x10))(arg1) + arg1[2].d
    arg1[2].d = rax_7
    
    if (rax_7 s> *(arg1 + 0x14))
        sub_1406105e0(&arg1[1])
    
    int32_t rax_8 = sub_141c3e440(&arg1[5], arg1[1], arg1[2].d)
    int32_t rax_9 = 0
    
    if (0 == *(arg1 + 0x3c))
        *(arg1 + 0x3c) = 0
    else
        rax_9 = *(arg1 + 0x3c)
    
    *(arg1 + 0x3c)
    *(arg1 + 0x3c) = modu.dp.d(0:(rax_9 + rax_8), arg1[7].d)
    int32_t rax_11 = *(arg1 + 0x24)
    arg1[4].d = 0
    
    if (rax_11 s< 0 && rax_11 != 0)
        sub_1405c5510(&arg1[3], 0)
    
    result = (*(*arg1 + 0x20))(arg1, &arg1[1], &arg1[3])
    
    if (result.b != 0)
        uint32_t r8_3 = arg1[4].d
        int64_t r15_1 = arg1[3]
        int64_t r14_1 = arg1[9]
        
        if (0 == *(arg1 + 0x5c))
            *(arg1 + 0x5c) = 0
        else
            *(arg1 + 0x5c)
        
        int32_t rax_14 = 0
        
        if (0 == arg1[0xc].d)
            arg1[0xc].d = 0
        else
            rax_14 = arg1[0xc].d
        
        uint64_t rbp_1 = zx.q(rax_14)
        int32_t rax_15 = 0
        
        if (0 == *(arg1 + 0x5c))
            *(arg1 + 0x5c) = 0
        else
            rax_15 = *(arg1 + 0x5c)
        
        int32_t rax_16 = 0
        
        if (0 == arg1[0xc].d)
            arg1[0xc].d = 0
        else
            rax_16 = arg1[0xc].d
        
        int32_t rsi_1 = arg1[0xb].d
        uint32_t temp1_2 = modu.dp.d(0:(rax_15 - 1 + rsi_1 - rax_16), rsi_1)
        uint32_t rdi_1 = temp1_2
        
        if (r8_3 s<= temp1_2)
            rdi_1 = r8_3
        
        uint32_t rsi_2 = rsi_1 - rbp_1.d
        
        if (rdi_1 s<= rsi_2)
            rsi_2 = rdi_1
        
        int64_t rbx_2 = sx.q(rsi_2)
        memcpy(r14_1 + rbp_1, r15_1, rbx_2.d)
        memcpy(r14_1, rbx_2 + r15_1, rdi_1 - rsi_2)
        arg1[0xc].d
        arg1[0xc].d = modu.dp.d(0:(rdi_1 + rbp_1.d), arg1[0xb].d)
        result.b = 1

return result
