// 函数: sub_140b1e210
// 地址: 0x140b1e210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
uint64_t rbp
rbp.b = 0
int32_t rdx = 0
int64_t r15
r15.b = 0

if (*arg2 != &data_142d40450)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_1405947f0(arg2, 0)
        rdx = arg2[1].d
    
    arg2[1].d = rdx
    
    if (rdx s> *(arg2 + 0xc))
        sub_140594770(arg2)

int16_t* result = *arg1
int16_t i = *result

if (i != 0)
    int16_t* result_1 = result
    
    do
        result = result_1
        
        if (i == 0xa)
            break
        
        if (i == 0xd)
            break
        
        if (r15.b == 0 && arg3 == 0)
            if (i == 0x2f)
                rbp = zx.q(rbp.b)
                
                if (result_1[1] == i)
                    rbp = 1
            
            if (i == 0x7c)
                goto label_140b1e3b0
        
        r13.b = 1
        result.b = i == 0x22
        r15.b ^= result.b
        result = &result_1[1]
        *arg1 = result
        
        if (rbp.b == 0 && i != 0)
            int32_t rdx_1 = arg2[1].d
            int32_t r14_1 = rdx_1 - 1
            
            if (rdx_1 s<= 0)
                r14_1 = 0
            
            int32_t rax
            rax.b = rdx_1 s<= 0
            int32_t rax_2 = rax + 1 + rdx_1
            arg2[1].d = rax_2
            
            if (rax_2 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            int64_t rcx_3 = sx.q(r14_1)
            *(*arg2 + (rcx_3 << 1)) = i
            *(*arg2 + (rcx_3 << 1) + 2) = 0
            result = *arg1
        
        i = *result
        result_1 = result
    while (i != 0)

int16_t rcx_5

if (arg3 == 0)
label_140b1e3b0:
    
    while (true)
        rcx_5 = *result
        
        if (rcx_5 != 0xa && rcx_5 != 0xd && rcx_5 != 0x7c)
            break
        
        result = &result[1]
        *arg1 = result
else
    int16_t rcx_4 = *result
    
    if (rcx_4 == 0xd)
        result = &result[1]
        *arg1 = result
        rcx_4 = *result
    
    if (rcx_4 == 0xa)
        result = &result[1]
        *arg1 = result
    
    rcx_5 = *result

if (rcx_5 == 0 && r13.b == 0)
    result.b = 0
    return result

result.b = 1
return result
