// 函数: sub_142a81150
// 地址: 0x142a81150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *arg2
int64_t rbx = *(arg1 + 0x78)
uint64_t r15 = zx.q(arg3)
uint64_t r13 = zx.q(*(arg2 + 0x1c)) << 3
int64_t r14 = sx.q(arg4)
int32_t r9 = r14.d
int32_t arg_20 = r14.d
uint32_t rax_2 = zx.d(*(r15 + r13 + r12))
int64_t rax_3 = arg2[1]
int32_t rdi_1 = rax_2 & 0xf
*(arg2 + 0x1c) = rdi_1
char rdx = *((zx.q(rax_2) u>> 4) + rax_3)
char result_1 = *(r12 + (sx.q(rdi_1) << 3) + 7)
int32_t rcx_9

if (rdx == 0)
    rcx_9 = arg5
else
    if (zx.d(rdx) - 1 u> 0xd)
        abort()
        noreturn
    
    switch (rdx)
        case 1
            arg2[2].d = r14.d
            rcx_9 = arg5
        case 2
            r14 = zx.q(arg2[2].d)
            rcx_9 = arg5
        case 3
            sub_142a823a0(arg1, arg2[2].d, r14.d, *(arg2 + 0x24) + 1)
            rcx_9 = arg5
        case 4
            sub_142a823a0(arg1, arg2[2].d, r14.d, *(arg2 + 0x24) + 2)
            rcx_9 = arg5
        case 5
            int32_t rdx_3 = *(arg2 + 0x14)
            
            if (rdx_3 s>= 0)
                sub_142a7f950(arg1, rdx_3)
                r9 = r14.d
            
            *(arg2 + 0x14) = 0xffffffff
            
            if (*(arg1 + 0x1a0) == 0 || *(arg1 + 0x1a4) s<= *(arg1 + 0x1a8))
                arg2[3].d = 0xffffffff
                
                if ((*(r12 + r13 + 7) & 1) != 0)
                    int32_t rax_14 = arg2[2].d
                    
                    if (rax_14 s> 0)
                        r14 = zx.q(rax_14)
                
                if (r15.b == 5)
                    sub_142a7f950(arg1, r9)
                    *(arg1 + 0x1a8) = *(arg1 + 0x1a4)
                
                rcx_9 = arg5
            else
                for (int64_t i = sx.q(arg2[3].d + 1); i s< r14; i += 1)
                    *(i + rbx) = (*(i + rbx) - 2) & 0xfe
                
                *(arg1 + 0x1a8) = *(arg1 + 0x1a4)
                arg2[3].d = 0xffffffff
                
                if (r15.b == 5)
                    goto label_142a812ac
                
                rcx_9 = arg5
        case 6
            if (*(arg1 + 0x1a0) s> 0)
                *(arg1 + 0x1a4) = *(arg1 + 0x1a8)
            
            rcx_9 = arg5
            arg2[2] = -1
            arg2[3].d = rcx_9 - 1
        case 7
            if (r15.b != 3 || *(r14 + *(arg1 + 0x70)) != 5 || *(arg1 + 0x84) == 6)
                rcx_9 = arg5
                
                if (*(arg2 + 0x14) == 0xffffffff)
                    *(arg2 + 0x14) = r14.d
            else
                int32_t rdx_6 = *(arg2 + 0x14)
                
                if (rdx_6 != 0xffffffff)
                    if (rdx_6 s>= 0)
                        sub_142a7f950(arg1, rdx_6)
                        *(arg2 + 0x14) = 0xfffffffe
                    
                    sub_142a7f950(arg1, r14.d)
                    rcx_9 = arg5
                else
                    rcx_9 = arg5
                    arg2[3].d = rcx_9 - 1
        case 8
            rcx_9 = arg5
            arg2[2].d = 0xffffffff
            arg2[3].d = rcx_9 - 1
        case 9
            int32_t rdx_8 = (r14 - 1).d
            int64_t rax_21 = sx.q(rdx_8)
            
            if (rdx_8 s< 0)
                arg2[2].d = r14.d
                rcx_9 = arg5
            else
                while ((*(rax_21 + rbx) & 1) == 0)
                    rdx_8 -= 1
                    int64_t temp0_1 = rax_21
                    rax_21 -= 1
                    
                    if (temp0_1 - 1 s< 0)
                        break
                
                if (rdx_8 s< 0)
                    arg2[2].d = r14.d
                    rcx_9 = arg5
                else
                    sub_142a7f950(arg1, rdx_8)
                label_142a813f6:
                    *(arg1 + 0x1a8) = *(arg1 + 0x1a4)
                    arg2[2].d = r14.d
                    rcx_9 = arg5
        case 0xa
            sub_142a7f950(arg1, r14.d)
            sub_142a7f950(arg1, r14.d)
            rcx_9 = arg5
        case 0xb
            *(arg1 + 0x1a4) = *(arg1 + 0x1a8)
            
            if (r15.b != 5)
                rcx_9 = arg5
            else
            label_142a812ac:
                sub_142a7f950(arg1, r14.d)
                *(arg1 + 0x1a8) = *(arg1 + 0x1a4)
                rcx_9 = arg5
        case 0xc
            int64_t i_1 = sx.q(arg2[2].d)
            char rcx_18 = *(arg2 + 0x24) + result_1
            
            for (; i_1 s< r14; i_1 += 1)
                if (*(i_1 + rbx) u< rcx_18)
                    *(i_1 + rbx) = rcx_18
            
            goto label_142a813f6
        case 0xd
            char j = *(arg2 + 0x24)
            int32_t i_2 = (r14 - 1).d
            
            if (i_2 s>= arg2[2].d)
                uint32_t j_1 = zx.d(j)
                int64_t i_4 = sx.q(i_2)
                
                do
                    char* rdi_6 = i_4 + rbx
                    
                    if (zx.d(*(i_4 + rbx)) == j_1 + 3)
                        do
                            *rdi_6 -= 2
                            i_4 -= 1
                            rdi_6 = i_4 + rbx
                            i_2 -= 1
                        while (zx.d(*(i_4 + rbx)) == j_1 + 3)
                        
                        while (*(i_4 + rbx) == j)
                            i_4 -= 1
                            i_2 -= 1
                    
                    if (zx.d(*(i_4 + rbx)) != j_1 + 2)
                        *(i_4 + rbx) = j + 1
                    else
                        *(i_4 + rbx) = j
                    
                    i_2 -= 1
                    i_4 -= 1
                while (i_2 s>= arg2[2].d)
            
            rcx_9 = arg5
        case 0xe
            int32_t i_3 = (r14 - 1).d
            char rdi_7 = *(arg2 + 0x24) + 1
            
            if (i_3 s>= arg2[2].d)
                char* rcx_23 = sx.q(i_3) + rbx
                
                do
                    char rax_25 = *rcx_23
                    
                    if (rax_25 u> rdi_7)
                        *rcx_23 = rax_25 - 2
                    
                    i_3 -= 1
                    rcx_23 -= 1
                while (i_3 s>= arg2[2].d)
            
            rcx_9 = arg5

char result = result_1

if (result != 0 || r14.d s< arg_20)
    char result_2 = *(arg2 + 0x24) + result
    
    if (r14.d s< arg2[4].d)
        return sub_142a823a0(arg1, r14.d, rcx_9, result_2)
    
    if (r14.d s< rcx_9)
        result = result_2
        int64_t rcx_15
        int64_t rdi_5
        rdi_5, rcx_15 = __memfill_u8(sx.q(r14.d) + rbx, result, sx.q(rcx_9 - r14.d))

return result
