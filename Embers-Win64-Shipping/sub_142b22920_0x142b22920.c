// 函数: sub_142b22920
// 地址: 0x142b22920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t* r14 = arg4
int16_t var_6c
void* var_78 = &var_6c:1
int32_t var_70 = 0x28
var_6c = 0
int32_t rbx = 0
int32_t var_40 = 0
void** rcx = &var_78
uint8_t rdx = (arg2 u>> 8).b & 0xf
int32_t* r8 = arg4
uint32_t result
void* rdx_9
uint64_t rsi_3

if (arg3 == 0)
    while (true)
        sub_142a8cb30(rcx, rdx, r8)
        result = (*(*arg1 + 0x30))(arg1, r14)
        
        if (result s< 0)
            break
        
        int64_t* rsi_2 = arg1[2]
        int32_t rax_11 = sub_142aa3ce0(rsi_2, result)
        int32_t rdx_7 = rax_11
        
        if (rax_11 == 0xc0)
            rdx_7 = sub_142aa3ce0(rsi_2[4], result)
        
        if (rdx_7.b u< 0xc0 || (rdx_7.b & 0xf) != 0xa)
            result = (*(*arg1 + 0x58))(arg1, 1, r14)
            break
        
        rdx = (rdx_7 u>> 8).b & 0xf
        r8 = r14
        rcx = &var_78
        continue
    
    rdx_9 = var_78
    rsi_3 = sx.q(var_40)
    void* r8_4 = rdx_9 - 1 + rsi_3
    
    if (rdx_9 u< r8_4)
        do
            char rcx_9 = *rdx_9
            result = zx.d(*r8_4)
            *rdx_9 = result.b
            rdx_9 += 1
            *r8_4 = rcx_9
            r8_4 -= 1
        while (rdx_9 u< r8_4)
        
        rsi_3 = zx.q(var_40)
        rdx_9 = var_78
else
    while (true)
        result = sub_142a8cb30(rcx, rdx, r8)
        
        if (arg1[0x30].d == 0)
            break
        
        result = (*(*arg1 + 0x28))(arg1, r14)
        
        if (result s< 0)
            break
        
        int64_t* rbp_1 = arg1[2]
        int32_t rax_3 = sub_142aa3ce0(rbp_1, result)
        int32_t rdx_3 = rax_3
        
        if (rax_3 == 0xc0)
            rdx_3 = sub_142aa3ce0(rbp_1[4], result)
        
        if (rdx_3.b u< 0xc0 || (rdx_3.b & 0xf) != 0xa)
            result = (*(*arg1 + 0x60))(arg1, 1, r14)
            break
        
        int32_t rax_7 = arg1[0x30].d
        
        if (rax_7 s> 0)
            arg1[0x30].d = rax_7 - 1
        
        rdx = (rdx_3 u>> 8).b & 0xf
        r8 = r14
        rcx = &var_78
        continue
    
    rsi_3 = zx.q(var_40)
    rdx_9 = var_78

if (*r14 s<= 0)
    while (true)
        int32_t r8_5 = (rsi_3 - 1).d
        
        if (rbx s< r8_5)
            void* rcx_11 = sx.q(rbx) + rdx_9
            
            while (*rcx_11 == 0)
                rbx += 1
                rcx_11 += 1
                
                if (rbx s>= r8_5)
                    break
        
        int32_t rsi_4 = rsi_3.d - rbx
        
        if (rsi_4 s> 0xfe)
            rsi_4 = 0xfe
        
        result = sub_142b22b50(arg1, rdx_9 + sx.q(rbx), rsi_4, r14)
        rbx += rsi_4
        
        if (*r14 s> 0)
            break
        
        rsi_3 = zx.q(var_40)
        
        if (rbx s>= rsi_3.d)
            break
        
        rdx_9 = var_78
    
    rdx_9 = var_78

if (var_6c.b != 0)
    result = sub_142a7dcd0(rdx_9)

__security_check_cookie(rax_1 ^ &var_a8)
return result
