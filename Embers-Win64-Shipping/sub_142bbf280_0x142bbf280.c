// 函数: sub_142bbf280
// 地址: 0x142bbf280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
int32_t arg_10 = 0
int32_t r8

if (*(arg2 + 8) != 0)
    int16_t* rax_1 = &arg1[0x83]
    int64_t i_5 = 0x100
    int64_t i
    
    do
        rax_1[-0x100] = 0
        *rax_1 = 0
        rax_1 = &rax_1[1]
        i = i_5
        i_5 -= 1
    while (i != 1)
    
    if (arg8 u> 1)
        int32_t rdx_1 = arg7 + arg8
        arg1[1] = rdx_1
        int32_t rax_2 = sub_142b97060(arg4, rdx_1, arg6)
        arg_10 = rax_2
        r8 = rax_2
        
        if (rax_2 == 0)
            char rax_3 = sub_142b96a20(arg4, &arg_10, arg5)
            r8 = arg_10
            *arg1 = zx.d(rax_3)
            
            if (r8 == 0)
                char rax_5 = sub_142b96a20(arg4, &arg_10, arg5)
                r8 = arg_10
                uint32_t rbp_1 = zx.d(rax_5)
                
                if (r8 == 0)
                    int32_t rax_7 = *arg1 & 0x7f
                    
                    if (rax_7 == 0)
                        arg1[2] = rbp_1 + 1
                        int32_t rax_15 = sub_142b96500(arg4, rbp_1)
                        arg_10 = rax_15
                        r8 = rax_15
                        
                        if (rax_15 == 0)
                            char* r8_1 = arg4[7]
                            int32_t rbx_2 = 1
                            
                            if (rbp_1 u>= 1)
                                do
                                    char rax_16 = *r8_1
                                    r8_1 = &r8_1[1]
                                    
                                    if (rbx_2 u< arg3)
                                        uint64_t rdx_8 = zx.q(rax_16)
                                        *(arg1 + (rdx_8 << 1) + 0x20c) = rbx_2.w
                                        *(arg1 + (rdx_8 << 1) + 0xc) =
                                            *(*(arg2 + 8) + (zx.q(rbx_2) << 1))
                                    
                                    rbx_2 += 1
                                while (rbx_2 u<= rbp_1)
                            
                            sub_142b96620(arg4)
                            r8 = arg_10
                        label_142bbf48b:
                            
                            if ((*arg1 & 0x80) != 0)
                                char rax_18 = sub_142b96a20(arg4, &arg_10, arg5)
                                r8 = arg_10
                                
                                if (r8 == 0)
                                    int32_t i_1 = 0
                                    
                                    if (rax_18 != 0)
                                        do
                                            char rax_19 = sub_142b96a20(arg4, &arg_10, arg5)
                                            r8 = arg_10
                                            uint64_t rbp_2 = zx.q(rax_19)
                                            
                                            if (r8 != 0)
                                                break
                                            
                                            int16_t rax_20 = sub_142b96f00(arg4, &arg_10)
                                            r8 = arg_10
                                            
                                            if (r8 != 0)
                                                break
                                            
                                            *(arg1 + (rbp_2 << 1) + 0xc) = rax_20
                                            int32_t rcx_15 = 0
                                            
                                            if (arg3 != 0)
                                                do
                                                    if (*(*(arg2 + 8) + (zx.q(rcx_15) << 1))
                                                            == rax_20)
                                                        *(arg1 + (rbp_2 << 1) + 0x20c) = rcx_15.w
                                                        break
                                                    
                                                    rcx_15 += 1
                                                while (rcx_15 u< arg3)
                                            
                                            i_1 += 1
                                        while (i_1 u< zx.d(rax_18))
                    else
                        if (rax_7 == 1)
                            arg1[2] = 0
                            int32_t rbx_1 = rax_7
                            
                            if (rbp_1 != 0)
                                do
                                    char rax_8 = sub_142b96a20(arg4, &arg_10, arg5)
                                    r8 = arg_10
                                    
                                    if (r8 != 0)
                                        return zx.q(r8)
                                    
                                    char rax_9 = sub_142b96a20(arg4, &arg_10, arg5)
                                    r8 = arg_10
                                    
                                    if (r8 != 0)
                                        return zx.q(r8)
                                    
                                    if (zx.d(rax_9) + 1 u> arg1[2])
                                        arg1[2] = zx.d(rax_9) + 1
                                    
                                    int32_t r9 = zx.d(rax_9) + 1 + rbx_1
                                    
                                    if (rbx_1 u< r9)
                                        int32_t r14_2 = zx.d(rax_8) - rbx_1
                                        
                                        do
                                            if (rbx_1 u< arg3)
                                                uint64_t rax_12 = zx.q(r14_2 + rbx_1)
                                                
                                                if (rax_12.d u< 0x100)
                                                    *(arg1 + (rax_12 << 1) + 0x20c) = rbx_1.w
                                                    *(arg1 + (zx.q(rax_12.d) << 1) + 0xc) =
                                                        *(*(arg2 + 8) + (zx.q(rbx_1) << 1))
                                            
                                            rbx_1 += 1
                                        while (rbx_1 u< r9)
                                    
                                    r12 += 1
                                    rbx_1 = r9
                                while (r12 u< rbp_1)
                            
                            if (arg1[2] u> 0x100)
                                arg1[2] = 0x100
                            
                            goto label_142bbf48b
                        
                        r8 = 3
    else
        void* rbx_3
        
        if (arg8 == 0)
            rbx_3 = &arg1[3]
            int64_t i_7 = 4
            void* rax_23 = rbx_3
            void* const rcx_17 = &data_143686270
            int64_t i_2
            
            do
                rax_23 += 0x80
                arg5.o = *rcx_17
                rcx_17 += 0x80
                *(rax_23 - 0x80) = arg5.o
                arg6.o = *(rcx_17 - 0x70)
                *(rax_23 - 0x70) = arg6.o
                arg5.o = *(rcx_17 - 0x60)
                *(rax_23 - 0x60) = arg5.o
                arg6.o = *(rcx_17 - 0x50)
                *(rax_23 - 0x50) = arg6.o
                arg5.o = *(rcx_17 - 0x40)
                *(rax_23 - 0x40) = arg5.o
                arg6.o = *(rcx_17 - 0x30)
                *(rax_23 - 0x30) = arg6.o
                arg5.o = *(rcx_17 - 0x20)
                *(rax_23 - 0x20) = arg5.o
                arg6.o = *(rcx_17 - 0x10)
                *(rax_23 - 0x10) = arg6.o
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
        label_142bbf623:
            arg1[2] = 0
            int32_t rax_24 = sub_142bbee10(arg2, arg3, arg4[6])
            arg_10 = rax_24
            r8 = rax_24
            
            if (rax_24 == 0)
                for (int32_t i_3 = 0; i_3 u< 0x100; )
                    uint32_t rax_25 = zx.d(*rbx_3)
                    uint32_t r9_2
                    
                    if (rax_25 != 0 && rax_25 u<= *(arg2 + 0x18))
                        r9_2 = zx.d(*(*(arg2 + 0x10) + (zx.q(rax_25) << 1)))
                    
                    if (rax_25 == 0 || rax_25 u> *(arg2 + 0x18) || r9_2 == 0)
                        *(rbx_3 + 0x200) = 0
                        *rbx_3 = 0
                    else
                        *(rbx_3 + 0x200) = r9_2.w
                        arg1[2] = i_3 + 1
                    
                    i_3 += 1
                    rbx_3 += 2
        else
            if (arg8 == 1)
                rbx_3 = &arg1[3]
                int64_t i_6 = 4
                void* rax_22 = rbx_3
                void* const rcx_16 = &data_143686470
                int64_t i_4
                
                do
                    rax_22 += 0x80
                    arg5.o = *rcx_16
                    rcx_16 += 0x80
                    *(rax_22 - 0x80) = arg5.o
                    arg6.o = *(rcx_16 - 0x70)
                    *(rax_22 - 0x70) = arg6.o
                    arg5.o = *(rcx_16 - 0x60)
                    *(rax_22 - 0x60) = arg5.o
                    arg6.o = *(rcx_16 - 0x50)
                    *(rax_22 - 0x50) = arg6.o
                    arg5.o = *(rcx_16 - 0x40)
                    *(rax_22 - 0x40) = arg5.o
                    arg6.o = *(rcx_16 - 0x30)
                    *(rax_22 - 0x30) = arg6.o
                    arg5.o = *(rcx_16 - 0x20)
                    *(rax_22 - 0x20) = arg5.o
                    arg6.o = *(rcx_16 - 0x10)
                    *(rax_22 - 0x10) = arg6.o
                    i_4 = i_6
                    i_6 -= 1
                while (i_4 != 1)
                goto label_142bbf623
            
            r8 = 3
else
    r8 = 3

return zx.q(r8)
