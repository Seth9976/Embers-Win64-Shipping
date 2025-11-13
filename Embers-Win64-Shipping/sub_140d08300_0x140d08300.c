// 函数: sub_140d08300
// 地址: 0x140d08300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg3

if ((arg4 & 2) == 0)
    int64_t rsi = -1
    
    if (*arg3 != arg2)
        int32_t rcx = 0
        int32_t rdi_2
        
        if (arg2 == 0 || *arg2 == 0)
            rdi_2 = 0
        else
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while (arg2[rdi_1] != 0)
            
            rdi_2 = rdi_1.d + 1
        
        arg3[1].d = 0
        
        if (*(arg3 + 0xc) != rdi_2)
            sub_1405947f0(r14, rdi_2)
            rcx = r14[1].d
        
        int32_t rax_1 = rcx + rdi_2
        r14[1].d = rax_1
        
        if (rax_1 s> *(r14 + 0xc))
            sub_140594770(r14)
        
        if (rdi_2 != 0)
            memcpy(*r14, arg2, rdi_2 * 2)
    
    do
        rsi += 1
    while (arg2[rsi] != 0)
    
    return &arg2[sx.q(rsi.d)]

if (*arg2 != 0x22)
    sub_140b1f700(arg5, u"Missing opening '"' in string property value: %s", arg2)
    return 0

int64_t var_18 = 0
int64_t var_10 = 0
void* result = sub_140ce37a0(arg2, &var_18, 0)

if (result != 0)
    if (result u<= arg2 || *(result - 2) == 0x22)
        if (r14 == &var_18)
            int64_t rcx_9 = var_18
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            return result
        
        int64_t rcx_8 = *r14
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        *r14 = var_18
        r14[1].d = var_10.d
        *(r14 + 0xc) = var_10:4.d
        return result
    
    sub_140b1f700(arg5, u"Missing terminating '"' in string property value: %s", arg2)

int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return 0
