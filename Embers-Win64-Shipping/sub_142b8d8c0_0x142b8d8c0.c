// 函数: sub_142b8d8c0
// 地址: 0x142b8d8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2

if (*arg6 s> 0)
    return 

if (arg2 u> 0x10ffff || arg3.d u> 0x10ffff || arg2 s> arg3.d)
    *arg6 = 1
    return 

void* rbx_1 = *(arg1 + 0x48)

if (rbx_1 == 0 || *(rbx_1 + 0x2332c) != 0)
    *arg6 = 0x1e
    return 

if (arg5 == 0 && arg4 == *(rbx_1 + 0x23308))
    return 

int32_t r15_1 = (arg3 + 1).d
int32_t rbp_2 = i & 0x1f

if (rbp_2 == 0)
    goto label_142b8d9ae

arg3.b = 1
int64_t rax = sub_142b8cd60(rbx_1, arg2, arg3.b)

if (rax.d s< 0)
    *arg6 = 7
    return 

i = (i + 0x1f) & 0xffffffe0
int64_t rcx_2 = *(rbx_1 + 0x23300) + (sx.q(rax.d) << 2)
int32_t rax_2 = *(rbx_1 + 0x23308)

if (i s> r15_1)
    sub_142b8cbc0(rcx_2, rbp_2, r15_1 & 0x1f, arg4, rax_2, arg5)
    return 

rax, arg3 = sub_142b8cbc0(rcx_2, rbp_2, 0x20, arg4, rax_2, arg5)
label_142b8d9ae:
int32_t rbp_4 = r15_1 & 0x1f
int64_t r11_1

if (arg4 != *(rbx_1 + 0x23308))
    r11_1 = 0xffffffff
else
    r11_1 = zx.q(*(rbx_1 + 0x23324))

for (; i s< (r15_1 & 0xffffffe0); i += 0x20)
    int32_t rcx_5
    
    if (arg4 == *(rbx_1 + 0x23308))
        int32_t rcx_4 = i s>> 5
        
        if ((i & 0xfffffc00) != 0xd800)
            rcx_5 = (rcx_4 & 0x3f) + *(rbx_1 + (sx.q(i) s>> 0xb << 2))
        else
            rcx_5 = rcx_4 + 0x140
    
    if (arg4 != *(rbx_1 + 0x23308) || *(rbx_1 + (sx.q(rcx_5) << 2) + 0x880) != *(rbx_1 + 0x23324))
        int32_t rdx_1
        
        if ((i & 0xfffffc00) != 0xd800)
            rax = sx.q(i s>> 0xb)
            rdx_1 = *(rbx_1 + (rax << 2))
            int32_t* r10_1 = rbx_1 + (rax << 2)
            
            if (rdx_1 == *(rbx_1 + 0x23320))
                rax = sub_142b8c470(rbx_1)
                rdx_1 = rax.d
                
                if (rax.d s< 0)
                    *arg6 = 5
                    return 
                
                *r10_1 = rax.d
            
            if (rdx_1 s< 0)
                *arg6 = 5
                return 
        else
            rdx_1 = 0x800
        
        int32_t r9_1 = *(rbx_1 + 0x23324)
        int32_t rdx_2 = rdx_1 + (i s>> 5 & 0x3f)
        arg3 = sx.q(*(rbx_1 + (sx.q(rdx_2) << 2) + 0x880))
        
        if (arg3.d == r9_1 || *(rbx_1 + (arg3 s>> 5 << 2) + 0x23330) != 1)
            if (*(*(rbx_1 + 0x23300) + (arg3 << 2)) != arg4 && (arg5 != 0 || arg3.d == r9_1))
                goto label_142b8db02
        else if (arg5 == 0 || arg3.d s< 0x880)
            rax, arg3 = sub_142b8cbc0(*(rbx_1 + 0x23300) + (arg3 << 2), 0, 0x20, arg4, 
                *(rbx_1 + 0x23308), arg5)
        else
        label_142b8db02:
            
            if (r11_1.d s< 0)
                arg3.b = 1
                rax = sub_142b8cd60(rbx_1, i, arg3.b)
                r11_1 = sx.q(rax.d)
                
                if (rax.d s< 0)
                    goto label_142b8db80
                
                int64_t r9_3 = 0x20
                int64_t rdx_4 = 0
                arg3 = *(rbx_1 + 0x23300) + (r11_1 << 2)
                
                if (arg3 u> arg3 + 0x80)
                    r9_3 = 0
                
                if (r9_3 != 0)
                    do
                        rdx_4 += 1
                        *arg3 = arg4
                        arg3 += 4
                    while (rdx_4 u< r9_3)
            else
                sub_142b8cec0(rbx_1, rdx_2, r11_1.d)

if (rbp_4 == 0)
    return 

arg3.b = 1
rax = sub_142b8cd60(rbx_1, i, arg3.b)

if (rax.d s>= 0)
    sub_142b8cbc0(*(rbx_1 + 0x23300) + (sx.q(rax.d) << 2), 0, rbp_4, arg4, *(rbx_1 + 0x23308), arg5)
else
label_142b8db80:
    *arg6 = 7
