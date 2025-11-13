// 函数: sub_142840fe0
// 地址: 0x142840fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg3
uint64_t count = arg2

if ((arg6 & 1) == 0)
label_1428413dc:
    
    if (arg1 == rbx)
        return 
    
    uint64_t count_1 = count
    
    if (arg4 u< count)
        count_1 = arg4
    
    if (count_1 != 0)
        if (arg1 != 0)
            if (rbx != 0 && count u>= count_1)
                return memcpy(arg1, rbx, count_1.d) __tailcall
            
            memset(arg1, 0, count)
        
        if (arg1 == 0 || rbx == 0)
            *_errno() = 0x16
            _invalid_parameter_noinfo()
            return 
        
        if (count u< count_1)
            *_errno() = 0x22
            _invalid_parameter_noinfo()
    
    return 

uint64_t rax = zx.q(arg5 - 1)

if (rax.d u> 0xbc)
    goto label_1428413dc

switch (&
        __dos_header.e_magic[zx.q(jump_table_142841470[zx.q(lookup_table_142841490[sx.q(rax.d)])])])
    case 0x14284102b
        if (arg4 u>= 0x10 && count u>= 0x10)
            int32_t rdx_2
            
            if (arg5 != 2)
                rdx_2 = -1
                
                if (arg5 == 4)
                    rdx_2 = 0x7fffffff
            else
                rdx_2 = 0x3f800000
            
            if (arg1 != rbx)
                if (arg4 u< count)
                    count = arg4
                
                if (count != 0xf)
                    int64_t i_19 = ((count - 0x10) u>> 4) + 1
                    int64_t i
                    
                    do
                        int32_t rax_4 = *rbx
                        rbx = &rbx[4]
                        *arg1 = rax_4
                        arg1 = &arg1[8]
                        *(arg1 - 0xc) = rbx[-3]
                        *(arg1 - 8) = rbx[-2]
                        *(arg1 - 4) = rdx_2
                        i = i_19
                        i_19 -= 1
                    while (i != 1)
            else if (count != 0xf)
                int64_t i_12 = ((count - 0x10) u>> 4) + 1
                int64_t i_1
                
                do
                    *(arg1 + 0xc) = rdx_2
                    arg1 = &arg1[8]
                    i_1 = i_12
                    i_12 -= 1
                while (i_1 != 1)
        
        return 
    case 0x1428410d8
        if (arg4 u>= 8 && count u>= 8)
            int16_t r8_1
            
            if (arg5 != 0xa)
                rax = 0x7fff
                
                if (arg5 - 0xd u> 1)
                    rax.w = 0xffff
                
                r8_1 = rax.w
            else
                r8_1 = 0x3c00
            
            if (arg1 != rbx)
                if (arg4 u< count)
                    count = arg4
                
                if (count != 7)
                    int64_t i_18 = ((count - 8) u>> 3) + 1
                    int64_t i_2
                    
                    do
                        int16_t rax_9 = *rbx
                        rbx = &rbx[2]
                        *arg1 = rax_9
                        arg1 = &arg1[4]
                        arg1[-3] = *(rbx - 6)
                        arg1[-2] = rbx[-1].w
                        arg1[-1] = r8_1
                        i_2 = i_18
                        i_18 -= 1
                    while (i_2 != 1)
            else if (count != 7)
                int64_t i_13 = ((count - 8) u>> 3) + 1
                int64_t i_3
                
                do
                    arg1[3] = r8_1
                    arg1 = &arg1[4]
                    i_3 = i_13
                    i_13 -= 1
                while (i_3 != 1)
        
        return 
    case 0x1428411a0
        if (arg4 u>= 4 && count u>= 4)
            if (arg1 != rbx)
                if (arg4 u< count)
                    count = arg4
                
                if (count != 3)
                    int64_t i_4 = 0
                    
                    do
                        *(arg1 + i_4) = *(rbx + i_4) | 0xc0000000
                        i_4 += 4
                    while (i_4 u< count - 3)
            else if (count != 3)
                int64_t i_14 = ((count - 4) u>> 2) + 1
                int64_t i_5
                
                do
                    *arg1 |= 0xc0000000
                    arg1 = &arg1[2]
                    i_5 = i_14
                    i_14 -= 1
                while (i_5 != 1)
        
        return 
    case 0x14284121b
        if (arg4 u>= 4 && count u>= 4)
            int32_t r8_2 = 0x7f000000
            
            if (arg5 - 0x1f u> 1)
                r8_2 = -0x1000000
            
            if (arg1 != rbx)
                if (arg4 u< count)
                    count = arg4
                
                if (count != 3)
                    int32_t* i_6 = nullptr
                    
                    do
                        *(i_6 + arg1) = (*(rbx + i_6) & 0xffffff) | r8_2
                        i_6 = &i_6[1]
                    while (i_6 u< count - 3)
            else if (count != 3)
                int64_t i_15 = ((count - 4) u>> 2) + 1
                int64_t i_7
                
                do
                    *arg1 &= 0xffffff
                    *arg1 |= r8_2
                    arg1 = &arg1[2]
                    i_7 = i_15
                    i_15 -= 1
                while (i_7 != 1)
        
        return 
    case 0x1428412ae
        if (arg4 u>= 2 && count u>= 2)
            if (arg1 != rbx)
                if (arg4 u< count)
                    count = arg4
                
                if (count != 1)
                    int16_t* i_8 = nullptr
                    
                    do
                        *(i_8 + arg1) = *(i_8 + rbx) | 0x8000
                        i_8 = &i_8[1]
                    while (i_8 u< count - 1)
            else if (count != 1)
                int64_t i_16 = ((count - 2) u>> 1) + 1
                int64_t i_9
                
                do
                    *arg1 |= 0x8000
                    arg1 = &arg1[1]
                    i_9 = i_16
                    i_16 -= 1
                while (i_9 != 1)
        
        return 
    case 0x14284133c
        return memset(arg1, 0xff, count) __tailcall
    case 0x14284134f
        if (arg4 u>= 2 && count u>= 2)
            if (arg1 != rbx)
                if (arg4 u< count)
                    count = arg4
                
                if (count != 1)
                    int16_t* i_10 = nullptr
                    
                    do
                        *(i_10 + arg1) = *(i_10 + rbx) | 0xf000
                        i_10 = &i_10[1]
                    while (i_10 u< count - 1)
            else if (count != 1)
                int64_t i_17 = ((count - 2) u>> 1) + 1
                int64_t i_11
                
                do
                    *arg1 |= 0xf000
                    arg1 = &arg1[1]
                    i_11 = i_17
                    i_17 -= 1
                while (i_11 != 1)
        
        return 
    case 0x1428413dc
        goto label_1428413dc
