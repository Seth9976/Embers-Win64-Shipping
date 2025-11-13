// 函数: sub_142ac3510
// 地址: 0x142ac3510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg3
arg1[4].d = *arg3
arg1[2] = &data_143655bf8
int32_t rcx
int32_t temp0_1
int32_t temp1_1

if (arg4 s>= 0)
    if (*arg2 == 1)
        rcx = 1
    
    if (*arg2 != 1 || arg2[1] != 0)
        rcx = 6
    
    temp0_1:temp1_1 = sx.q(arg4)

if (arg4 s< 0 || (temp1_1 + (temp0_1 & 3)) s>> 2 s>= rcx)
    uint32_t rcx_2 = arg1[4].d u>> 0x1c
    
    if (((rcx_2 - 2) & 0xfffffffc) == 0 && rcx_2 != 3)
        if (*arg2 == 1 && arg2[1] == 0)
            *(arg1 + 0x24) = 0x10000
            *(arg1 + 0x3b) = 1
            return rcx_2 - 2
        
        uint64_t rdx_3 = zx.q((arg3[1]).b)
        
        if (rdx_3.d u> 4)
            if (arg4 s< 0)
            label_142ac35cf:
                uint64_t rcx_3 = zx.q(arg3[2])
                uint64_t rax_9 = zx.q((rdx_3 + 1).d)
                
                if (rcx_3.d s> rax_9.d)
                    rax_9 = zx.q((rcx_3 << 2).d)
                    *(arg1 + 0x24) = rax_9.d
                
                if (*arg2 u>= 3)
                    rax_9 = zx.q(arg3[1] u>> 8)
                    arg1[6].d = rax_9.d
                
                if (rdx_3.d u> 5)
                    int32_t rcx_4 = arg3[6]
                    arg1[7].b = rcx_4.b & 1
                    *(arg1 + 0x39) = (rcx_4 u>> 1).b & 1
                    *(arg1 + 0x3a) = (rcx_4 u>> 2).b & 1
                    rax_9 = zx.q((rcx_4 & 0xf000) << 0xc)
                    arg1[6].d |= rax_9.d
                    *(arg1 + 0x34) = rcx_4 u>> 0x10
                
                if ((*(arg1 + 0x39) == 0 && *(arg1 + 0x3a) == 0) || rdx_3.d u> 7)
                    if (rdx_3.d u> 6)
                        rax_9 = sx.q(arg3[2])
                        
                        if (arg3[7] s> rax_9.d)
                            arg1[2] = &arg3[rax_9]
                    
                    *(arg1 + 0x3b) = 1
                    return rax_9
            else if (arg4 s>= ((rdx_3 << 2) + 4).d && arg4 s>= arg3[4] << 2)
                goto label_142ac35cf

int32_t* rax_18 = arg5
*rax_18 = 3
void* rcx_7 = *arg1

if (rcx_7 != 0)
    rax_18 = sub_142a95ec0(rcx_7)
    *arg1 = 0

return rax_18
