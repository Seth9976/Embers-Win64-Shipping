// 函数: sub_140f7b890
// 地址: 0x140f7b890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x790)
int32_t rcx = 0
int32_t arg_18 = rbx
int32_t rax
rax.b = *(arg1 + 0x798) == 1

if (rax + *(arg1 + 0x794) s>= 0)
    rcx = rax + *(arg1 + 0x794)

int32_t arg_1c = rcx
void* rax_2 = arg1 + 0x780

if (*(arg1 + 0x788) == 0)
    rax_2 = &arg_18

int64_t rax_3 = *rax_2
uint64_t result

if (rax_3.d != rbx || (rax_3 u>> 0x20).d != rcx)
    uint64_t result_1
    sub_140f047e0(*(arg1 + 0x48), &result_1, arg2, 0)
    void* rax_4 = &arg_18
    int64_t rcx_2 = arg_18.q
    
    if (*(arg1 + 0x788) != 0)
        rax_4 = arg1 + 0x780
    
    result = *rax_4
    uint32_t r8_3
    int32_t r10_1
    
    if (result.d != rbx)
        r10_1 = result.d
        
        if (result.d s>= rbx)
            r10_1 = rbx
        
        r8_3 = (result u>> 0x20).d
    else
        r8_3 = (result u>> 0x20).d
        r10_1 = rbx
        
        if (r8_3 s< (rcx_2 u>> 0x20).d)
            r10_1 = result.d
    
    uint32_t r11_2 = (rcx_2 u>> 0x20).d
    
    if (result.d != rbx)
        if (result.d s< rbx)
            r11_2 = (result u>> 0x20).d
    else if (r8_3 s< r11_2)
        r11_2 = (result u>> 0x20).d
    
    int32_t r9_1 = rbx
    bool cond:3_1 = result.d s> rbx
    
    if (result.d == rbx)
        cond:3_1 = (result u>> 0x20).d s> (rcx_2 u>> 0x20).d
    
    if (cond:3_1)
        r9_1 = result.d
    
    uint32_t rcx_3 = (rcx_2 u>> 0x20).d
    
    if (result.d == rbx)
        result u>>= 0x20
        
        if (result.d s> rcx_3)
            rcx_3 = result.d
    else if (result.d s> rbx)
        rcx_3 = (result u>> 0x20).d
    
    if (r10_1 != r9_1)
        result = result_1
        
        if (r10_1 == result.d)
            result.b = r11_2 s<= result_1:4.d
            return result
        
        if (r9_1 == result.d)
            result.b = rcx_3 s>= result_1:4.d
            return result
        
        if (r10_1 s< result.d && r9_1 s> result.d)
            result.b = 1
            return result
    else if (result_1.d == r10_1)
        result = zx.q(result_1:4.d)
        
        if (r11_2 s<= result.d && rcx_3 s>= result.d)
            result.b = 1
            return result

result.b = 0
return result
