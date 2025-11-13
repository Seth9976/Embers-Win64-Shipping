// 函数: sub_142b21a80
// 地址: 0x142b21a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int16_t* r8 = *(arg1 + 0x58)

if (r8 == 0)
    return 0xffffffff

int64_t i_1 = 0x180

if (arg4 != 0x180)
    return 0xffffffff

int32_t rax_2 = *(arg2 + 0x18)
uint32_t r14

if ((rax_2.b & 0xc) != 0)
    uint64_t rdx = zx.q((rax_2 s>> 4 & 7) + 1)
    
    if (rdx.d u>= zx.d((*r8).b))
        return 0xffffffff
    
    r14 = zx.d(r8[rdx])
    arg1 = arg_8
else
    r14 = 0xbff

arg4.b = 0

if (*(arg2 + 0x20) != 0)
    int32_t rbp_1 = 0
    int32_t var_38_1 = 0
    int32_t r13_1 = 0
    int32_t rbx_1 = 0
    int32_t rdi_1 = 0x1000
    int32_t rax_14
    
    while (true)
        int32_t rax_7 = sub_142aa6110(arg1, rdi_1)
        char rax_8 = *((zx.q(rax_7) u>> 0x18) + *(arg2 + 0x20))
        int32_t rax_9
        
        if (rax_8 != 0 || rax_7 u<= 1)
            rax_9 = zx.d(rax_8) << 0x18 | (rax_7 & 0xffffff)
        else
            rax_9 = sub_142b27270(arg2, rax_7)
        
        if (rdi_1 != 0x1004)
            if (rax_9 == 0)
                goto label_142b21bba
            
            if (rax_9 u>= rbp_1)
                if (r13_1 != 0 && rbx_1 == 0 && rbp_1 == var_38_1)
                    rbx_1 = rax_9
                
                rbp_1 = rax_9
                goto label_142b21bba
        else
            var_38_1 = rbp_1
            r13_1 = rax_9
        label_142b21bba:
            arg1 = arg_8
            rdi_1 += 1
            
            if (rdi_1 s< 0x1008)
                continue
            else
                int32_t rax_12 = sub_142aa6110(arg1, 0x19)
                char rax_13 = *((zx.q(rax_12) u>> 0x18) + *(arg2 + 0x20))
                
                if (rax_13 != 0 || rax_12 u<= 1)
                    rax_14 = zx.d(rax_13) << 0x18 | (rax_12 & 0xffffff)
                else
                    rax_14 = sub_142b27270(arg2, rax_12)
                
                if (rax_14 u>= rbp_1)
                    break
        
        return 0xffffffff
    
    if (rbx_1 == 0)
        rbx_1 = rax_14
    
    if (var_38_1 u>= r13_1 || r13_1 u>= rbx_1)
        arg4.b = 1
    else
        arg4.b = 0

int16_t* rcx_6 = arg3
void* rdx_9 = &r8[zx.q((*r8).b)] - arg3
int64_t i

do
    uint32_t rax_18 = zx.d(*(rdx_9 + rcx_6))
    int16_t rax_19
    
    if (rax_18 u>= 0x1000)
        rax_19 = rax_18.w & 0xfc00
    else if (rax_18 u<= r14)
        rax_19 = 0
    else
        rax_19 = rax_18.w & 0xfff8
    
    *rcx_6 = rax_19
    rcx_6 = &rcx_6[1]
    i = i_1
    i_1 -= 1
while (i != 1)

if (arg4.b != 0 || (*(arg2 + 0x18) & 2) != 0)
    __builtin_memset(&arg3[0x30], 0, 0x14)

return zx.q(r14 << 0x10) | zx.q(*(arg2 + 0x18))
