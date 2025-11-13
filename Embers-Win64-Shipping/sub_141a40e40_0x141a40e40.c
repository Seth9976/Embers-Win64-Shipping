// 函数: sub_141a40e40
// 地址: 0x141a40e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t** rdi = arg2

if ((arg2[4].b & 1) == 0)
    TEB* gsbase
    
    if (data_143f2a880
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f2a880)
        
        if (data_143f2a880 == 0xffffffff)
            int64_t rax_11 = data_143f29fa0 + 1
            data_143f29fa0 = rax_11
            data_143f2a878 = sub_141a4fae0(&data_143f29fa0, rax_11.d)
            _Init_thread_footer(&data_143f2a880)
    
    int64_t rbx_1 = data_143f2a878
    char var_18
    char var_18_1 = var_18 & 0xfc
    int64_t* rax_4 = sub_140a82f30(0x28, 8)
    int64_t* var_38 = rax_4
    char rcx = var_18_1 | 1
    int64_t* rcx_1 = &var_38
    
    if ((rcx & 2) == 0)
        rcx_1 = rax_4
    
    rcx_1[1] = rbx_1
    *rcx_1 = &data_14302f3f0
    rcx_1[2] = 0
    rcx_1[3] = 0
    rcx_1[4].d = 0x80000000
    char rax_5 = rdi[4].b
    
    if ((rax_5 & 1) != 0)
        int64_t* rcx_2 = rdi
        
        if ((rax_5 & 2) == 0)
            rcx_2 = *rdi
        
        rdi[4].b = rax_5 & 0xfe
        (**rcx_2)(rcx_2, 0)
        
        if ((rdi[4].b & 2) == 0)
            sub_140a74f90(*rdi)
    
    if ((rcx & 1) != 0)
        char rdx_2 = rcx & 0xfe
        rdi[4].b = (((rdx_2 ^ rdi[4].b) & 2) ^ rdi[4].b) | 1
        *rdi = var_38.o
        int128_t var_28
        *(rdi + 0x10) = var_28
        
        if ((rdx_2 & 1) != 0)
            int64_t* rcx_4 = &var_38
            
            if ((rdx_2 & 2) == 0)
                rcx_4 = var_38
            
            (**rcx_4)(rcx_4, 0)
            
            if ((rdx_2 & 2) == 0)
                sub_140a74f90(var_38)

int64_t** rdx_3 = rdi
char rcx_6 = rdi[4].b & 2

if (rcx_6 == 0)
    rdx_3 = *rdi

uint64_t result = *(arg1 + 0x10)

if (rdx_3[1] == result)
    if (rcx_6 == 0)
        rdi = *rdi
    
    int32_t rcx_7 = *(arg1 + 0x38)
    result = zx.q(rdi[4].d)
    bool cond:2_1 = rcx_7 != result.d
    
    if (rcx_7 s> result.d)
        rdi[3].d = 0
        
        if (*(rdi + 0x1c) s<= 0xffffffff)
            sub_1405c5570(&rdi[2], 0)
        
        result = zx.q(*(arg1 + 0x38))
        rdi[4].d = result.d
        cond:2_1 = *(arg1 + 0x38) != result.d
    
    if (not(cond:2_1))
        int64_t rsi_1 = sx.q(rdi[3].d)
        int32_t rax_9 = (rsi_1 + 1).d
        rdi[3].d = rax_9
        
        if (rax_9 s> *(rdi + 0x1c))
            sub_1405a4d70(&rdi[2])
        
        result = rdi[2]
        *(result + (rsi_1 << 3)) = arg1 + 0x18

__security_check_cookie(rax_1 ^ &var_58)
return result
