// 函数: sub_14284a7a0
// 地址: 0x14284a7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax_1 = zx.q(arg5 - 0x17)
uint64_t count = arg2
int32_t* r10 = arg1

if (rax_1.d u> 0xa6)
label_14284aa9f:
    
    if (r10 != arg3)
        uint64_t count_1 = count
        
        if (arg4 u< count)
            count_1 = arg4
        
        if (count_1 != 0)
            if (r10 != 0)
                if (arg3 != 0 && count u>= count_1)
                    return memcpy(r10, arg3, count_1.d) __tailcall
                
                rax_1 = memset(r10, 0, count)
            
            if (r10 == 0 || arg3 == 0)
                *_errno() = 0x16
                return _invalid_parameter_noinfo()
            
            if (count u< count_1)
                *_errno() = 0x22
                return _invalid_parameter_noinfo()
else
    rax_1 = zx.q(lookup_table_14284ab48[sx.q(rax_1.d)])
    
    switch (rax_1)
        case 0
            if (arg4 u< 4 || count u< 4 || (arg6.b & 2) == 0)
                goto label_14284aa9f
            
            if (r10 != arg3)
                if (arg4 u< count)
                    count = arg4
                
                if (count != 3)
                    int32_t* i = nullptr
                    int32_t rax_18
                    
                    do
                        int32_t rdx_2 = *(i + arg3)
                        int32_t rcx_6 = -0x40000000
                        
                        if ((arg6 & 1) == 0)
                            rcx_6 = rdx_2 & 0xc0000000
                        
                        rax_18 = (rdx_2 & 0x3ff) << 0x14
                        *(i + r10) = rcx_6 | (rdx_2 u>> 0x14 & 0x3ff) | rax_18 | (rdx_2 & 0xffc00)
                        i = &i[1]
                    while (i u< count - 3)
                    
                    return rax_18
            else if (count != 3)
                int64_t i_7 = ((count - 4) u>> 2) + 1
                int32_t rax_10
                int64_t i_1
                
                do
                    int32_t rdx = *r10
                    r10 = &r10[1]
                    int32_t rcx_2 = -0x40000000
                    
                    if ((arg6 & 1) == 0)
                        rcx_2 = rdx & 0xc0000000
                    
                    rax_10 = (rdx & 0x3ff) << 0x14
                    r10[-1] = rcx_2 | (rdx u>> 0x14 & 0x3ff) | rax_10 | (rdx & 0xffc00)
                    i_1 = i_7
                    i_7 -= 1
                while (i_1 != 1)
                return rax_10
        case 1
            if (arg4 u< 4 || count u< 4)
                goto label_14284aa9f
            
            if (r10 != arg3)
                if (arg4 u< count)
                    count = arg4
                
                if (count != 3)
                    int32_t* i_2 = nullptr
                    uint32_t rax_30
                    
                    do
                        int32_t r8_5 = *(i_2 + arg3)
                        int32_t rdx_8 = -0x1000000
                        
                        if ((arg6 & 1) == 0)
                            rdx_8 = r8_5 & 0xff000000
                        
                        rax_30 = zx.d(r8_5.b) << 0x10
                        *(i_2 + r10) = rdx_8 | zx.d((r8_5 u>> 0x10).b) | rax_30 | (r8_5 & 0xff00)
                        i_2 = &i_2[1]
                    while (i_2 u< count - 3)
                    
                    return rax_30
            else if (count != 3)
                int64_t i_8 = ((count - 4) u>> 2) + 1
                uint32_t rax_24
                int64_t i_3
                
                do
                    int32_t r8_3 = *r10
                    r10 = &r10[1]
                    int32_t rdx_4 = -0x1000000
                    
                    if ((arg6 & 1) == 0)
                        rdx_4 = r8_3 & 0xff000000
                    
                    rax_24 = zx.d(r8_3.b) << 0x10
                    r10[-1] = rdx_4 | zx.d((r8_3 u>> 0x10).b) | rax_24 | (r8_3 & 0xff00)
                    i_3 = i_8
                    i_8 -= 1
                while (i_3 != 1)
                return rax_24
        case 2
            if (arg4 u< 4 || count u< 4 || (arg6.b & 2) == 0)
                goto label_14284aa9f
            
            if (r10 != arg3)
                if (arg4 u< count)
                    count = arg4
                
                if (count != 3)
                    int32_t* i_4 = nullptr
                    int32_t rax_34
                    
                    do
                        int32_t rcx_14 = *(i_4 + arg3)
                        rax_34 = rcx_14 << 8
                        *(i_4 + r10) = ((rcx_14 u>> 8 ^ rax_34) & 0xff00ff) ^ rcx_14 << 8
                        i_4 = &i_4[1]
                    while (i_4 u< count - 3)
                    
                    return rax_34
            else if (count != 3)
                int64_t i_6 = ((count - 4) u>> 2) + 1
                int32_t rax_32
                int64_t i_5
                
                do
                    int32_t rcx_12 = *r10
                    r10 = &r10[1]
                    rax_32 = rcx_12 << 8
                    r10[-1] = ((rcx_12 u>> 8 ^ rax_32) & 0xff00ff) ^ rcx_12 << 8
                    i_5 = i_6
                    i_6 -= 1
                while (i_5 != 1)
                return rax_32
        case 3
            goto label_14284aa9f

return rax_1
