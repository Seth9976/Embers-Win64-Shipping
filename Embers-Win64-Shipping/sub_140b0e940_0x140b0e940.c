// 函数: sub_140b0e940
// 地址: 0x140b0e940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = arg2
int32_t r14 = arg3
int32_t r8 = 0
int64_t* rdi = arg1
arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405947f0(arg1, 0)
    r8 = rdi[1].d

int64_t r13
r13.b = 0
char* arg_8

if (r14 s< 2)
label_140b0eb06:
    
    if (r14 s>= 3 && *rsi == 0xef && rsi[1] == 0xbb && rsi[2] == 0xbf)
        rsi = &rsi[3]
        r14 -= 3
    
    char* rax_17 = rsi
    void* r12_2 = &rsi[sx.q(r14)]
    arg_8 = rax_17
    int32_t rbx_4 = 0
    int32_t i = 0x7fffffff
    
    if (rsi u< r12_2)
        while (i s> 0)
            int32_t rax_20
            int32_t rcx_10
            
            if (sub_14060e800(&arg_8, r12_2.d - rax_17.d) - 0x10000 u> 0xfffff || i s< 2)
                rax_20 = 1
                rcx_10 = -1
            else
                rax_20 = 2
                rcx_10 = -2
            
            rbx_4 += rax_20
            i += rcx_10
            rax_17 = arg_8
            
            if (rax_17 u>= r12_2)
                break
    
    int32_t rdx_14 = rdi[1].d + 1 + rbx_4
    rdi[1].d = rdx_14
    
    if (rdx_14 s> *(rdi + 0xc))
        sub_140594770(rdi)
        rdx_14 = rdi[1].d
    
    arg_8 = *rdi
    sub_140917060(&arg_8, rdx_14, rsi, r14)
    *(*rdi + (sx.q(rbx_4) << 1)) = 0
else
    int32_t rax_2 = r14 & 1
    int16_t arg_18
    
    if (rax_2 != 0 || *rsi != 0xff || rsi[1] != 0xfe)
        if (rax_2 != 0 || *rsi != 0xfe || rsi[1] != 0xff)
            goto label_140b0eb06
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r14)
        int32_t rax_13 = (temp3_1 - temp2_1) s>> 1
        int32_t rcx_4 = rax_13 + r8
        rdi[1].d = rcx_4
        
        if (rcx_4 s> *(rdi + 0xc))
            sub_140594770(rdi)
        
        int64_t i_4 = sx.q(rax_13 - 1)
        
        if (rax_13 - 1 s> 0)
            void* rbx_3 = &rsi[3]
            int64_t i_1
            
            do
                arg_18 = zx.w(*(rbx_3 - 1)) * 0x100 + zx.w(*rbx_3)
                UnDecorator::getReferenceType(&arg_8, &arg_18, 2)
                rbx_3 += 2
                *(*rdi + -3 - rsi + rbx_3 - 2) = arg_8.w
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        r13.b = 1
    else
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r14)
        int32_t rax_6 = (temp1_1 - temp0_1) s>> 1
        int32_t rcx = rax_6 + r8
        rdi[1].d = rcx
        
        if (rcx s> *(rdi + 0xc))
            sub_140594770(rdi)
        
        int64_t i_3 = sx.q(rax_6 - 1)
        
        if (rax_6 - 1 s> 0)
            void* rbx_1 = &rsi[2]
            int64_t i_2
            
            do
                arg_18 = zx.w(*(rbx_1 + 1)) * 0x100 + zx.w(*rbx_1)
                UnDecorator::getReferenceType(&arg_8, &arg_18, 2)
                int16_t* rdx_5 = -2 - rsi + rbx_1
                rbx_1 += 2
                *(rdx_5 + *rdi) = arg_8.w
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        r13.b = 1
int64_t result = sx.q(rdi[1].d)

if (result.d != 1)
    int64_t result_1 = result
    result = *rdi
    *(result + (result_1 << 1) - 2) = 0
else
    rdi[1].d = 0
    
    if (*(rdi + 0xc) != 0)
        return sub_1405947f0(rdi, 0) __tailcall

return result
