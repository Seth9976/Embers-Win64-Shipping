// 函数: sub_1426a96e0
// 地址: 0x1426a96e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
int32_t i = 0
uint64_t result

if (arg1[2].d s> 0)
    int64_t rbp_1 = 0
    
    do
        int64_t* r9_1 = arg1[1]
        result = *arg2
        
        if (*(r9_1 + rbp_1) == result)
            result = arg2[1]
            
            if (*(r9_1 + rbp_1 + 8) == result)
                result = zx.q(*(r9_1 + rbp_1 + 0x12))
                char rcx = *(arg2 + 0x12)
                
                if (result.b == rcx)
                    return result
                
                if (result.b == 2 || rcx == 2)
                    r14.b = 1
                else
                    r14.b = 0
                
                int32_t rcx_1 = arg1[2].d
                int32_t rax_1 = rcx_1 - i
                
                if (rax_1 != 1)
                    memmove(&r9_1[sx.q(i) * 3], &r9_1[sx.q(i + 1) * 3], (rax_1 - 1) * 0x18)
                    rcx_1 = arg1[2].d
                
                result = zx.q(rcx_1 - 1)
                arg1[2].d = result.d
        
        i += 1
        rbp_1 += 0x18
    while (i s< arg1[2].d)

if (arg1[2].d s<= 0 || r14.b == 0)
    if (*(arg2 + 0x12) != 2)
    label_1426a97fc:
        int64_t rbx = sx.q(arg1[2].d)
        int32_t rax_7 = (rbx + 1).d
        arg1[2].d = rax_7
        
        if (rax_7 s> *(arg1 + 0x14))
            sub_1405a4df0(&arg1[1])
        
        int128_t* rdx_4 = arg1[1]
        int64_t rbp_2 = rbx * 0x18
        *(rdx_4 + rbp_2) = *arg2
        *(rdx_4 + rbp_2 + 0x10) = arg2[2]
        int64_t rcx_10
        
        if (*(arg2 + 0x12) != 1)
            rcx_10 = 0
        else
            void* rbx_1 = *arg2
            
            if (rbx_1 == 0)
                rcx_10 = 0
            else
                void* rax_8 = sub_1427329a0()
                void* rdx_5 = *(rbx_1 + 0x10)
                int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_9.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                    rcx_10 = 0
                else
                    rcx_10.b = 1
        
        result = arg1[1]
        *(result + rbp_2 + 0x13) &= 0xfe
        *(result + rbp_2 + 0x13) |= rcx_10.b
    else
        int64_t i_1 = *arg2
        
        if (i_1 == 0)
            goto label_1426a97fc
        
        void* rdx_1 = *arg1
        uint64_t rcx_5 = zx.q(arg2[2].w)
        result.b = rcx_5.d s< *(rdx_1 + 0x118)
        void* rcx_7
        int64_t* r8_3
        
        if (result.b != 0)
            int64_t rdx_2 = *(rdx_1 + 0x110)
            int64_t rcx_6 = rcx_5 * 0x58
            r8_3 = *(rcx_6 + rdx_2 + 0x10)
            rcx_7 = &r8_3[sx.q(*(rcx_6 + rdx_2 + 0x18))]
        
        if (result.b == 0 || r8_3 == rcx_7)
        label_1426a97f2:
            result.b = 1
        else
            while (*r8_3 != i_1)
                r8_3 = &r8_3[1]
                
                if (r8_3 == rcx_7)
                    goto label_1426a97f2
            
            result.b = 0
        
        if (result.b == 0)
            goto label_1426a97fc

return result
