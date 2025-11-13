// 函数: sub_141b0c740
// 地址: 0x141b0c740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t** rdi = arg2

if ((arg2[4].b & 1) == 0)
    char var_20
    char var_20_1 = var_20 & 0xfc
    void var_48
    int64_t rbx_1 = *sub_141a2ae70(&var_48)
    int64_t* rax_3 = sub_140a82f30(0x28, 8)
    int64_t* var_40 = rax_3
    char rcx_1 = var_20_1 | 1
    int64_t* rcx_2 = &var_40
    
    if ((rcx_1 & 2) == 0)
        rcx_2 = rax_3
    
    rcx_2[1] = rbx_1
    *rcx_2 = &data_14305d940
    rcx_2[2] = 0
    rcx_2[3] = 0
    rcx_2[4].d = 0x80000000
    char rax_4 = rdi[4].b
    
    if ((rax_4 & 1) != 0)
        int64_t* rcx_3 = rdi
        
        if ((rax_4 & 2) == 0)
            rcx_3 = *rdi
        
        rdi[4].b = rax_4 & 0xfe
        (**rcx_3)(rcx_3, 0)
        
        if ((rdi[4].b & 2) == 0)
            sub_140a74f90(*rdi)
    
    if ((rcx_1 & 1) != 0)
        char rdx = rcx_1 & 0xfe
        rdi[4].b = (((rdx ^ rdi[4].b) & 2) ^ rdi[4].b) | 1
        *rdi = var_40.o
        int128_t var_30
        *(rdi + 0x10) = var_30
        
        if ((rdx & 1) != 0)
            int64_t* rcx_5 = &var_40
            
            if ((rdx & 2) == 0)
                rcx_5 = var_40
            
            (**rcx_5)(rcx_5, 0)
            
            if ((rdx & 2) == 0)
                sub_140a74f90(var_40)

int64_t** rdx_1 = rdi
char rcx_7 = rdi[4].b & 2

if (rcx_7 == 0)
    rdx_1 = *rdi

uint64_t result = *(arg1 + 0x10)

if (rdx_1[1] == result)
    if (rcx_7 == 0)
        rdi = *rdi
    
    int32_t rcx_8 = *(arg1 + 0x38)
    result = zx.q(rdi[4].d)
    bool cond:3_1 = rcx_8 != result.d
    
    if (rcx_8 s> result.d)
        rdi[3].d = 0
        
        if (*(rdi + 0x1c) s<= 0xffffffff)
            sub_1405c5570(&rdi[2], 0)
        
        result = zx.q(*(arg1 + 0x38))
        rdi[4].d = result.d
        cond:3_1 = *(arg1 + 0x38) != result.d
    
    if (not(cond:3_1))
        int64_t rsi_1 = sx.q(rdi[3].d)
        int32_t rax_8 = (rsi_1 + 1).d
        rdi[3].d = rax_8
        
        if (rax_8 s> *(rdi + 0x1c))
            sub_1405a4d70(&rdi[2])
        
        result = rdi[2]
        *(result + (rsi_1 << 3)) = arg1 + 0x18

__security_check_cookie(rax_1 ^ &var_68)
return result
