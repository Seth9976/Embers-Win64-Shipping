// 函数: sub_14291bb90
// 地址: 0x14291bb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if ((*arg2 & 0x300) == 0)
    return arg2

void* rax_1 = (*(arg2 + 0x18))()
int32_t* rcx_1 = *(zx.q(*(rax_1 + 4)) + *arg1)
void* rax_2

if (rcx_1 != 0)
    int32_t rax_3
    
    if ((*arg2 & 0x100) == 0)
        rax_3 = sub_1428e4860(rcx_1)
    else
        rax_3 = sub_1428a96d0(rcx_1)
    
    int32_t rdx_1 = rax_3
    int32_t arg_10 = rax_3
    int64_t rax_4 = *(rax_1 + 8)
    
    if (rax_4 != 0)
        if (rax_4(&arg_10, rdx_1) == 0)
            sub_1428a5670(0xd, 0x6e, 0xa4, "crypto\asn1\tasn_utl.c", 0xe2)
            return nullptr
        
        rdx_1 = arg_10
    
    int32_t r8 = *(rax_1 + 0x18)
    int32_t rcx_3 = 0
    int32_t* rax_6 = *(rax_1 + 0x10)
    
    if (r8 s> 0)
        do
            if (*rax_6 == rdx_1)
                return &rax_6[2]
            
            rcx_3 += 1
            rax_6 = &rax_6[0xa]
        while (rcx_3 s< r8)
    
    rax_2 = *(rax_1 + 0x20)
    
    if (rax_2 == 0)
        goto label_14291bc58
else
    rax_2 = *(rax_1 + 0x28)
    
    if (rax_2 == 0)
    label_14291bc58:
        
        if (arg3 == 0)
            return nullptr
        
        sub_1428a5670(0xd, 0x6e, 0xa4, "crypto\asn1\tasn_utl.c", 0xfb)
        return nullptr

return rax_2
