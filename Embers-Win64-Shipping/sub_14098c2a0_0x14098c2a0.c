// 函数: sub_14098c2a0
// 地址: 0x14098c2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x28)

if (rcx == 0)
    if (*(arg1 + 0x38) != u"Invalid conversion task")
        int32_t rdi_1 = 0
        bool cond:0_1 = *(arg1 + 0x44) == 0x18
        *(arg1 + 0x40) = 0
        
        if (not(cond:0_1))
            sub_1405947f0(arg1 + 0x38, (&rcx[3]).d)
            rdi_1 = *(arg1 + 0x40)
        
        *(arg1 + 0x40) = rdi_1 + 0x18
        
        if (rdi_1 + 0x18 s> *(arg1 + 0x44))
            sub_140594770(arg1 + 0x38)
        
        __builtin_memcpy(*(arg1 + 0x38), u"Invalid conversion task", 0x30)
    
    *(arg1 + 0x58) = 0
    return sub_14098bb50(arg1 + 0x18, arg1 + 0x38) __tailcall

char result = (*(*rcx + 0x10))(rcx)

if (result == 0)
    return result

int64_t* rcx_5 = *(arg1 + 0x28)
*(arg1 + 0x58) = 0
void* rcx_16
int64_t var_18

if ((**rcx_5)(rcx_5) != 0)
    int64_t* rcx_12 = *(arg1 + 0x28)
    int64_t* rax_14 = (*(*rcx_12 + 8))(rcx_12, &var_18)
    
    if (arg1 + 0x38 != rax_14)
        int64_t rcx_13 = *(arg1 + 0x38)
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        *(arg1 + 0x38) = *rax_14
        *rax_14 = 0
        *(arg1 + 0x40) = rax_14[1].d
        *(arg1 + 0x44) = *(rax_14 + 0xc)
        rax_14[1] = 0
    
    int64_t rcx_15 = var_18
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    rcx_16 = arg1 + 0x18
else
    if (*(arg1 + 0x38) != u"Success")
        bool cond:1_1 = *(arg1 + 0x44) == 8
        int32_t rdx_5 = 0
        *(arg1 + 0x40) = 0
        
        if (not(cond:1_1))
            sub_1405947f0(arg1 + 0x38, 8)
            rdx_5 = *(arg1 + 0x40)
        
        *(arg1 + 0x40) = rdx_5 + 8
        
        if (rdx_5 + 8 s> *(arg1 + 0x44))
            sub_140594770(arg1 + 0x38)
        
        **(arg1 + 0x38) = *u"Success"
    
    int64_t* rcx_8 = *(arg1 + 0x28)
    int64_t* rax_10 = (*(*rcx_8 + 0x20))(rcx_8, &var_18)
    
    if (arg1 + 0x48 != rax_10)
        int64_t rcx_9 = *(arg1 + 0x48)
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        *(arg1 + 0x48) = *rax_10
        *rax_10 = 0
        *(arg1 + 0x50) = rax_10[1].d
        *(arg1 + 0x54) = *(rax_10 + 0xc)
        rax_10[1] = 0
    
    int64_t rcx_11 = var_18
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    rcx_16 = arg1 + 8
return sub_14098bb50(rcx_16, arg1 + 0x38)
