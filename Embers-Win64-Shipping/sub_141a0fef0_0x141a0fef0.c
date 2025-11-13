// 函数: sub_141a0fef0
// 地址: 0x141a0fef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1408d7580(arg1)
uint64_t result
uint64_t* var_38
int32_t i_4
uint64_t* rdi

if (rax == 0 || *(rax + 0x50c) == 0)
    int64_t rax_4 = sx.q(*(arg1 + 0x448))
    rdi = nullptr
    int64_t* r14_1 = *(arg1 + 0x440)
    int32_t rdx_4 = 0
    var_38 = nullptr
    i_4 = 0
    int32_t var_2c_1 = 0
    int64_t r15_1 = 0
    result = &r14_1[rax_4]
    uint64_t r12_3 = rax_4 << 3 u>> 3
    
    if (r14_1 u> result)
        r12_3 = 0
    
    if (r12_3 != 0)
        do
            int64_t rcx_5 = *r14_1
            
            if (rcx_5 != 0)
                int64_t i_6 = sx.q(i_4)
                i_4 = (i_6 + 1).d
                
                if (i_4 s> rdx_4)
                    result = sub_1405a4d70(&var_38)
                    rcx_5 = *r14_1
                    rdx_4 = var_2c_1
                    rdi = var_38
                
                rdi[i_6] = rcx_5
            
            r14_1 = &r14_1[1]
            r15_1 += 1
        while (r15_1 != r12_3)
        
        if (i_4 == 0)
            goto label_141a100d7
        
        int32_t rax_5 = arg2[1].d
        int32_t rdx_6 = rax_5 + i_4
        
        if (rdx_6 s> *(arg2 + 0xc))
            sub_1405c5570(arg2, rdx_6)
            rax_5 = arg2[1].d
        
        int32_t i_3 = i_4
        uint64_t* rdx_7 = rdi
        uint64_t* r8_2 = *arg2 + (sx.q(rax_5) << 3)
        int32_t i
        
        do
            result = *rdx_7
            rdx_7 = &rdx_7[1]
            *r8_2 = result
            r8_2 = &r8_2[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
    label_141a100d4:
        arg2[1].d += i_4
    label_141a100d7:
        
        if (rdi != 0)
            result = sub_140a74f90(rdi)
else
    int64_t rax_1 = sx.q(*(arg1 + 0x458))
    rdi = nullptr
    int64_t* r14 = *(arg1 + 0x450)
    int32_t rdx = 0
    var_38 = nullptr
    i_4 = 0
    int32_t var_2c = 0
    int64_t r15 = 0
    result = &r14[rax_1]
    uint64_t r12_1 = rax_1 << 3 u>> 3
    
    if (r14 u> result)
        r12_1 = 0
    
    if (r12_1 != 0)
        do
            int64_t rcx_1 = *r14
            
            if (rcx_1 != 0)
                int64_t i_5 = sx.q(i_4)
                i_4 = (i_5 + 1).d
                
                if (i_4 s> rdx)
                    result = sub_1405a4d70(&var_38)
                    rcx_1 = *r14
                    rdx = var_2c
                    rdi = var_38
                
                rdi[i_5] = rcx_1
            
            r14 = &r14[1]
            r15 += 1
        while (r15 != r12_1)
        
        if (i_4 == 0)
            goto label_141a100d7
        
        int32_t rax_2 = arg2[1].d
        int32_t rdx_2 = rax_2 + i_4
        
        if (rdx_2 s> *(arg2 + 0xc))
            sub_1405c5570(arg2, rdx_2)
            rax_2 = arg2[1].d
        
        int32_t i_2 = i_4
        uint64_t* rdx_3 = rdi
        uint64_t* r8_1 = *arg2 + (sx.q(rax_2) << 3)
        int32_t i_1
        
        do
            result = *rdx_3
            rdx_3 = &rdx_3[1]
            *r8_1 = result
            r8_1 = &r8_1[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        goto label_141a100d4

if (*(arg1 + 0x420) != 0)
    int64_t rdi_1 = sx.q(arg2[1].d)
    int32_t rax_7 = (rdi_1 + 1).d
    arg2[1].d = rax_7
    
    if (rax_7 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    result = *(arg1 + 0x420)
    *(*arg2 + (rdi_1 << 3)) = result

if (*(arg1 + 0x428) != 0)
    int64_t rdi_2 = sx.q(arg2[1].d)
    int32_t rax_8 = (rdi_2 + 1).d
    arg2[1].d = rax_8
    
    if (rax_8 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    result = *(arg1 + 0x428)
    *(*arg2 + (rdi_2 << 3)) = result

int64_t rdi_3 = sx.q(*(arg1 + 0x5a0))

if (rdi_3.d != 0)
    int32_t rax_9 = arg2[1].d
    int32_t rdx_10 = rax_9 + rdi_3.d
    
    if (rdx_10 s> *(arg2 + 0xc))
        sub_1405c5570(arg2, rdx_10)
        rax_9 = arg2[1].d
    
    result = memcpy(*arg2 + (sx.q(rax_9) << 3), *(arg1 + 0x598), (rdi_3 << 3).d)
    arg2[1].d += rdi_3.d

return result
