// 函数: sub_1420dddc0
// 地址: 0x1420dddc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x17].b = 4

if (sub_140d23dc0(arg1, 0x30) == 0)
    void* r9 = arg1[4]
    
    if (r9 != 0)
        for (int64_t* i = *(r9 + 0x98); i != &i[sx.q(*(r9 + 0xa0))]; i = &i[1])
            if (*i == arg1)
                int16_t rax_2 = *(r9 + 0x56a)
                
                if (rax_2 != 0)
                    *(r9 + 0x56a) = rax_2 - 1
                
                break

if (arg3 == 0)
    if (arg4 != 2)
        arg1[0x17].b = 2
    else
        arg1[0x17].b = 1
    
    (*(*arg1 + 0x260))()
else
    void* rax_3 = sub_142435380(arg3)
    
    if (rax_3 == 0)
        *(arg3 + 0x50) &= 0xfffdffff
        int64_t* arg_18 = nullptr
        void* rax_7 = sub_142435740(arg3, &arg_18)
        
        if (rax_7 != 0)
            int64_t rdi_3 = *arg2
            int64_t var_88_1 = rdi_3
            void* rax_14
            
            if (data_143a2e448 == data_143a2e474)
            label_1420ddffa:
                rax_14 = nullptr
            else
                int32_t rax_10 = sub_140b5ead0(rdi_3.d) + var_88_1:4.d
                void* rcx_9 = data_143a2e480
                void* rax_12 = &data_143a2e478
                
                if (rcx_9 != 0)
                    rax_12 = rcx_9
                
                int32_t rax_13 = *(rax_12 + (((sx.q(data_143a2e488) - 1) & sx.q(rax_10)) << 2))
                
                if (rax_13 == 0xffffffff)
                label_1420ddffa_1:
                    rax_14 = nullptr
                else
                    int64_t r8_2 = data_143a2e440
                    int64_t rdx_10
                    
                    while (true)
                        rdx_10 = sx.q(rax_13) * 0x18
                        
                        if (*(rdx_10 + r8_2) == rdi_3)
                            break
                        
                        rax_13 = *(rdx_10 + r8_2 + 0x10)
                        
                        if (rax_13 == 0xffffffff)
                            goto label_1420ddffa_2
                    
                    rax_14 = rdx_10 + r8_2
                    
                    if (rax_13 == 0xffffffff)
                    label_1420ddffa_2:
                        rax_14 = nullptr
            
            int32_t* rcx_11 = rax_14 + 8
            
            if (rax_14 == 0)
                rcx_11 = nullptr
            
            int64_t r13_1
            
            if (rcx_11 == 0)
                r13_1 = 0
            else
                r13_1 = sub_140d3c6e0(rcx_11)
            
            sub_140943590(&data_143a2e440, rdi_3)
            int64_t rbx_2 = arg1[0xa]
            void var_80
            int64_t* rax_16 = sub_1420e4d10(arg1, &var_80)
            char arg_8
            int32_t rcx_13
            
            if (*rax_16 != rbx_2)
                arg_8 = 1
                rcx_13.b = sub_140b5b8a0(arg1[0xa].d, 0) == 0
            
            if (*rax_16 == rbx_2 || (*(arg1 + 0x54) != 0 | rcx_13.b) == 0)
                arg_8 = 0
            
            int64_t rcx_15 = *(sub_140d21d80(rax_7) + 0x18)
            arg1[0xa] = rcx_15
            
            if (rcx_15 != rdi_3)
                void* rax_25
                
                if (data_143a305d8 == data_143a30604)
                label_1420de0f5:
                    rax_25 = nullptr
                else
                    int32_t rax_21 = sub_140b5ead0(rdi_3.d) + var_88_1:4.d
                    void* rcx_17 = data_143a30610
                    void* rax_23 = &data_143a30608
                    
                    if (rcx_17 != 0)
                        rax_23 = rcx_17
                    
                    int32_t rax_24 = *(rax_23 + (((sx.q(data_143a30618) - 1) & sx.q(rax_21)) << 2))
                    
                    if (rax_24 == 0xffffffff)
                    label_1420de0f5_1:
                        rax_25 = nullptr
                    else
                        int64_t r8_3 = data_143a305d0
                        int64_t rdx_17
                        
                        while (true)
                            rdx_17 = sx.q(rax_24) * 0x14
                            
                            if (*(rdx_17 + r8_3) == rdi_3)
                                break
                            
                            rax_24 = *(rdx_17 + r8_3 + 0xc)
                            
                            if (rax_24 == 0xffffffff)
                                goto label_1420de0f5_2
                        
                        if (rax_24 == 0xffffffff)
                        label_1420de0f5_2:
                            rax_25 = nullptr
                        else
                            rax_25 = rdx_17 + r8_3
                
                int32_t* rbx_3 = rax_25 + 8
                
                if (rax_25 == 0)
                    rbx_3 = nullptr
                
                if (rbx_3 != 0)
                    int64_t rax_26 = arg1[0xa]
                    var_88_1 = rax_26
                    void* rax_29 = sub_1420d78c0(&data_143a305d0, 
                        sub_140b5ead0(rax_26.d) + var_88_1:4.d, &arg1[0xa])
                    *rax_29 = *rbx_3
                    sub_140943780(&data_143a305d0, rdi_3)
            
            if (arg_8 == 0)
                if (r13_1 != 0)
                    void* rax_33 = *(rax_7 + 0x30)
                    
                    if (rax_33 != 0)
                        *(rax_33 + 0xb8) = r13_1
                        rax_33 = *(rax_7 + 0x30)
                    
                    *(*(rax_33 + 0xc0) + 0x218) = 1
                    sub_1420deea0(*(rax_7 + 0x30))
                
                int32_t var_60 = 0xffffffff
                int64_t var_5c_1 = 0
                arg_8.q = 0
                int64_t var_50
                __builtin_memset(&var_50, 0, 0x18)
                void var_78
                sub_140b97b00(&var_50, sub_140d21d60(&var_78, rax_7))
                int64_t var_70
                
                if (var_70 != 0)
                    sub_140a74f90(var_70)
                
                sub_140d3a3a0(&var_60, rax_7)
                int32_t rax_37 = 0
                
                if (0 == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_37 = data_1439aaa30
                
                var_5c_1:4.d = rax_37
                sub_1420ee4b0(arg1, &var_60)
                int64_t var_48
                
                if (var_48 != 0)
                    sub_140a74f90(var_48)
            else
                void* rax_30 = sub_140cba0e0(arg3)
                
                if (rax_30 != 0)
                    sub_140cb70e0(rax_30)
                    sub_140cb7000(rax_30)
                
                int64_t rbx_5 = *arg_18
                int64_t rax_32 = sub_140cde0b0()
                (*(rbx_5 + 0x138))(arg_18, 0, rax_32, 0x35, var_88_1)
                *(rax_7 + 0x11a) = 7
    else
        void* rbx_1 = *(rax_3 + 0x30)
        
        if (rbx_1 != 0)
            void* rdi_1 = *(rbx_1 + 0xb8)
            
            if (rdi_1 != 0)
                int64_t rax_4 = *(rdi_1 + 0xe0)
                
                if (rax_4 == 0)
                    rax_4 = *(rdi_1 + 0xe8)
                    
                    if (rax_4 == 0 || rax_4 != arg1[0x25])
                        sub_1420ee280(arg1, rbx_1)
                        sub_1405a9f90(&arg1[0x1d], 0)
                else if (rax_4 != arg1[0x25])
                    sub_1420ee280(arg1, rbx_1)
                    sub_1405a9f90(&arg1[0x1d], 0)
            
            sub_1420fcdf0(rbx_1)
            void*** rax_5 = sub_141f88540()
            void** r8 = *rax_5
            r8[9](rax_5, rbx_1, r8)
            
            if (arg1[0xc].d s> 0)
                *(rbx_1 + 0x1f6) |= 1
                int64_t* rdx_3 = arg1[0xb]
                void* r8_1 = &rdx_3[sx.q(arg1[0xc].d)]
                int64_t rax_6
                
                if (rdx_3 == r8_1)
                label_1420ddf0e:
                    rax_6.b = 0
                else
                    while (*rdx_3 != *(arg3 + 0x18))
                        rdx_3 = &rdx_3[1]
                        
                        if (rdx_3 == r8_1)
                            goto label_1420ddf0e
                    
                    rax_6.b = 2
                
                *(rbx_1 + 0x1f6) = (*(rbx_1 + 0x1f6) & 0xfd) | rax_6.b
            
            if (rdi_1 != 0 && *(rdi_1 + 0x11a) == 2)
                sub_14242c080(rdi_1, rbx_1)

sub_140943780(&data_143a305d0, *arg2)
return sub_140943590(&data_143a2e440, *arg2) __tailcall
