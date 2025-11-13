// 函数: sub_140b1e510
// 地址: 0x140b1e510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0
char arg_10 = 0
int64_t r13
r13.b = 0
char arg_8 = 0
uint64_t* rsi = arg2
int32_t r12 = 0

if (*arg2 != &data_142d40450)
    arg2[1].d = 0
    int32_t rdx = 0
    
    if (*(rsi + 0xc) != 0)
        sub_1405947f0(rsi, 0)
        rdx = rsi[1].d
    
    rsi[1].d = rdx
    
    if (rdx s> *(rsi + 0xc))
        sub_140594770(rsi)

*arg3 = 0
int16_t* result = *arg1
int16_t i = *result

if (i == 0)
label_140b1e7e8:
    
    if (rbp.b == 0)
        i = *result
    else
        *arg3 += 1
        i = **arg1
else
    int16_t* result_1 = result
    
    do
        int16_t i_2 = i
        int16_t i_3
        int16_t i_4
        int16_t i_5
        
        if (i != 0xa)
            i_4 = i
            i_3 = i
            i_5 = i
        
        if (i == 0xa || i == 0xd)
            result = result_1
            i_4 = i
            i_3 = i
            i_5 = i
            
            if (r12 s<= 0)
                break
        
        i = i_4
        
        if (r13.b == 0 && arg4 == r13.b)
            if (i_2 == 0x2f)
                i = i_3
                
                if (result_1[1] == i_2)
                    arg_8 = 1
                    i = i_5
            
            result = result_1
            
            if (i_2 == 0x7c)
                break
        
        arg_10 = 1
        
        if (i_2 == 0xa || i_2 == 0xd)
            int32_t rdx_3 = rsi[1].d
            int32_t rax_10
            rax_10.b = rdx_3 s<= 0
            int32_t rbx_2 = rdx_3 - 1
            
            if (rdx_3 s<= 0)
                rbx_2 = 0
            
            int32_t rax_12 = rax_10 + 1 + rdx_3
            rsi[1].d = rax_12
            
            if (rax_12 s> *(rsi + 0xc))
                sub_140594770(rsi)
            
            int64_t rcx_8 = sx.q(rbx_2)
            *(*rsi + (rcx_8 << 1)) = 0x20
            *(*rsi + (rcx_8 << 1) + 2) = 0
            *arg3 += 1
            *arg1 += 2
        label_140b1e7b1:
            result = *arg1
            int16_t rcx_9 = *result
            
            if (rcx_9 == 0xa || rcx_9 == 0xd)
                result = &result[1]
                *arg1 = result
        else if (r13.b == 0)
            if (i_2 == 0x5c)
                result = zx.q(result_1[1])
            
            if (i_2 == 0x5c && (result.w == 0xa || result.w == 0xd))
                int32_t rdx_1 = rsi[1].d
                int32_t rax
                rax.b = rdx_1 s<= 0
                int32_t rbx_1 = rdx_1 - 1
                
                if (rdx_1 s<= 0)
                    rbx_1 = 0
                
                int32_t rax_2 = rax + 1 + rdx_1
                rsi[1].d = rax_2
                
                if (rax_2 s> *(rsi + 0xc))
                    sub_140594770(rsi)
                
                int64_t rcx_3 = sx.q(rbx_1)
                *(*rsi + (rcx_3 << 1)) = 0x20
                *(*rsi + (rcx_3 << 1) + 2) = 0
                *arg3 += 1
                *arg1 += 4
                goto label_140b1e7b1
            
            if (i_2 != 0x7b)
                if (i_2 != 0x7d || r12 s<= 0)
                    goto label_140b1e701
                
                r12 -= 1
                result = &result_1[1]
                *arg1 = result
            else
                r12 += 1
                result = &result_1[1]
                *arg1 = result
        else if (arg_8 != 0 || i_2 != 0x5c)
        label_140b1e701:
            result.b = i_2 == 0x22
            r13.b ^= result.b
            result = &result_1[1]
            *arg1 = result
            
            if (arg_8 == 0 && i_2 != 0)
                int32_t rdx_2 = rsi[1].d
                int32_t rax_5
                rax_5.b = rdx_2 s<= 0
                int32_t rbp_1 = rdx_2 - 1
                
                if (rdx_2 s<= 0)
                    rbp_1 = 0
                
                int32_t rax_7 = rax_5 + 1 + rdx_2
                rsi[1].d = rax_7
                
                if (rax_7 s> *(rsi + 0xc))
                    sub_140594770(rsi)
                
                int64_t rcx_6 = sx.q(rbp_1)
                *(*rsi + (rcx_6 << 1)) = i_2
                *(*rsi + (rcx_6 << 1) + 2) = 0
                result = *arg1
        else
            result = zx.q(result_1[1])
            
            if (result.w != 0x22 && result.w != i_2)
                goto label_140b1e701
            
            sub_140a20ba0(rsi, result_1, 2)
            *arg1 += 4
            result = *arg1
        
        i = *result
        result_1 = result
    while (i != 0)
    
    rbp = zx.q(arg_10)
    
    if (i == 0)
        goto label_140b1e7e8
    
    if (arg4 == 0)
        while (true)
            int16_t i_1 = i
            
            if (i != 0xa && i != 0xd && i != 0x7c)
                break
            
            if (i != 0x7c)
                *arg3 += 1
                result = *arg1
                i_1 = *result
            
            if (i_1 == 0xa && result[1] == 0xd)
                result = &result[1]
            else if (i_1 == 0xd && result[1] == 0xa)
                result = &result[1]
            
            result = &result[1]
            *arg1 = result
            i = *result
    else
        if (i == 0xd || i == 0xa)
            *arg3 += 1
            result = *arg1
            int16_t rcx_10 = *result
            
            if (rcx_10 == 0xd)
                result = &result[1]
                *arg1 = result
                rcx_10 = *result
            
            if (rcx_10 == 0xa)
                result = &result[1]
                *arg1 = result
        
        i = *result

if (i != 0 || rbp.b != 0)
    result.b = 1
else
    result.b = 0

return result
