// 函数: sub_14196ef60
// 地址: 0x14196ef60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
char rax_2 = sub_140a80f40()
int64_t rdi

if (data_143de5480 == 0)
    rdi.b = 1
else
    rdi.b = GetCurrentThreadId() == data_143de5470

int64_t result

if (data_143f01c92 == 0)
    if (rax_2 != 0 && *(arg2 + 0x80) != 0)
        int32_t rdi_2 = data_14399e5e0
        int64_t* rax_70 = sub_140a242a0()
        int64_t r8_18 = *rax_70
        char rax_71
        int64_t r9_9
        rax_71, r9_9 = (*(r8_18 + 0x20))(rax_70, zx.q(rdi_2), r8_18)
        
        if (rax_71 != 0)
            sub_140af98a0("Unknown", 0x253, 
                Deadlock in FRHICommandListExecutor::ExecuteInner (RTTasks).", r9_9)
            sub_140afbb40()
        
        int64_t* rax_72 = sub_140a242a0()
        int64_t r9_10 = *rax_72
        (*(r9_10 + 0x48))(rax_72, &arg2[0x58], zx.q(rdi_2), r9_10)
        sub_141983280(&arg2[0x58], 0)
    
    result = sub_14196f9d0(arg2)
else
    int32_t r15_1 = data_14399e5e0
    int64_t r12
    r12.b = 0
    
    if (rax_2 != 0)
        if (rdi.b == 0)
            int64_t* rax_4 = sub_140a242a0()
            int64_t r8_1 = *rax_4
            
            if ((*(r8_1 + 0x20))(rax_4, zx.q(r15_1), r8_1) == 0)
                int64_t* rax_6 = sub_140a242a0()
                int64_t r8_2 = *rax_6
                (*(r8_2 + 0x30))(rax_6, zx.q(r15_1), r8_2)
        
        void* rcx_2 = data_143f02f38
        int32_t r14_1 = *(data_143f02ae0 + 4)
        r12.b = r14_1 s> 0
        
        if (rcx_2 != 0)
            int64_t rax_8 = 0
            
            if (0 == *(rcx_2 + 8))
                *(rcx_2 + 8) = 0
            else
                rax_8 = *(rcx_2 + 8)
            
            if (((rax_8 u>> 0x1a).b & 1) == 0)
                goto label_14196f0e3
            
            int64_t* rcx_3 = data_143f02f38
            data_143f02f38 = 0
            
            if (rcx_3 != 0)
                rcx_3[9].d -= 1
                
                if (rcx_3[9].d == 1)
                    sub_140a2f6e0(rcx_3)
            
            if (r14_1 s<= 0)
                goto label_14196f0e8
            
            void* rcx_4 = data_143f02f28
            
            if (rcx_4 != 0)
                int64_t rax_11 = 0
                
                if (0 == *(rcx_4 + 8))
                    *(rcx_4 + 8) = 0
                else
                    rax_11 = *(rcx_4 + 8)
                
                if (((rax_11 u>> 0x1a).b & 1) != 0)
                    int64_t* rcx_5 = data_143f02f28
                    data_143f02f28 = 0
                    
                    if (rcx_5 != 0)
                        rcx_5[9].d -= 1
                        
                        if (rcx_5[9].d == 1)
                            sub_140a2f6e0(rcx_5)
                    
                    int64_t* rcx_6 = data_143f02f30
                    data_143f02f30 = 0
                    
                    if (rcx_6 != 0)
                        rcx_6[9].d -= 1
                        
                        if (rcx_6[9].d == 1)
                            sub_140a2f6e0(rcx_6)
        
    label_14196f0e3:
        
        if (r14_1 s<= 0)
        label_14196f0e8:
            void* rcx_7 = data_143f02f28
            
            if (rcx_7 != 0)
                int64_t rax_15 = 0
                
                if (0 == *(rcx_7 + 8))
                    *(rcx_7 + 8) = 0
                else
                    rax_15 = *(rcx_7 + 8)
                
                if (((rax_15 u>> 0x1a).b & 1) != 0)
                    int64_t* rcx_8 = data_143f02f28
                    data_143f02f28 = 0
                    
                    if (rcx_8 != 0)
                        rcx_8[9].d -= 1
                        
                        if (rcx_8[9].d == 1)
                            sub_140a2f6e0(rcx_8)
                    
                    int64_t* rcx_9 = data_143f02f30
                    data_143f02f30 = 0
                    
                    if (rcx_9 != 0)
                        rcx_9[9].d -= 1
                        
                        if (rcx_9[9].d == 1)
                            sub_140a2f6e0(rcx_9)
    
    if (*(data_143f02b10 + 4) s<= 0)
    label_14196f700:
        
        if (rax_2 == 0)
            result = sub_14196f9d0(arg2)
        else
            if (*(arg2 + 0x80) != 0)
                int64_t* rax_55 = sub_140a242a0()
                int64_t r8_12 = *rax_55
                char rax_56
                int64_t r9_4
                rax_56, r9_4 = (*(r8_12 + 0x20))(rax_55, zx.q(r15_1), r8_12)
                
                if (rax_56 != 0)
                    sub_140af98a0("Unknown", 0x22b, 
                        Deadlock in FRHICommandListExecutor::ExecuteInner (RTTasks).", r9_4)
                    sub_140afbb40()
                
                int64_t* rax_57 = sub_140a242a0()
                int64_t r9_5 = *rax_57
                (*(r9_5 + 0x48))(rax_57, &arg2[0x58], zx.q(r15_1), r9_5)
                sub_141983280(&arg2[0x58], 0)
            
            if (data_143f02f38 != 0)
                int64_t* rax_58 = sub_140a242a0()
                int64_t r8_14 = *rax_58
                char rax_59
                int64_t r9_6
                rax_59, r9_6 = (*(r8_14 + 0x20))(rax_58, zx.q(r15_1), r8_14)
                
                if (rax_59 != 0)
                    sub_140af98a0("Unknown", 0x236, 
                        Deadlock in FRHICommandListExecutor::ExecuteInner "
                    "(RenderThreadSublistDispatchTask).", r9_6)
                    sub_140afbb40()
                
                sub_1405a6220(sub_140a242a0(), &data_143f02f38)
                int64_t* rcx_45 = data_143f02f38
                data_143f02f38 = 0
                
                if (rcx_45 != 0)
                    rcx_45[9].d -= 1
                    
                    if (rcx_45[9].d == 1)
                        sub_140a2f6e0(rcx_45)
            
            while (data_143f02f28 != 0)
                int64_t* rax_62 = sub_140a242a0()
                int64_t r8_16 = *rax_62
                char rax_63
                int64_t r9_7
                rax_63, r9_7 = (*(r8_16 + 0x20))(rax_62, zx.q(r15_1), r8_16)
                
                if (rax_63 != 0)
                    sub_140af98a0("Unknown", 0x240, 
                        Deadlock in FRHICommandListExecutor::ExecuteInner (RHIThreadTask).", r9_7)
                    sub_140afbb40()
                
                int64_t* rax_64 = sub_140a242a0()
                void* rcx_47 = data_143f02f28
                void** var_70_1 = nullptr
                int32_t var_64_1 = 4
                int32_t i_7 = 1
                void* var_90 = rcx_47
                
                if (rcx_47 != 0)
                    *(rcx_47 + 0x48) += 1
                
                int64_t r9_8 = *rax_64
                (*(r9_8 + 0x48))(rax_64, &var_90, zx.q(r15_1), r9_8)
                void** rcx_49 = var_70_1
                void** rbx_5 = &var_90
                int32_t i_5 = i_7
                
                if (rcx_49 != 0)
                    rbx_5 = rcx_49
                
                if (i_5 != 0)
                    int32_t i
                    
                    do
                        int64_t* rcx_50 = *rbx_5
                        
                        if (rcx_50 != 0)
                            rcx_50[9].d -= 1
                            
                            if (rcx_50[9].d == 1)
                                sub_140a2f6e0(rcx_50)
                        
                        rbx_5 = &rbx_5[1]
                        i = i_5
                        i_5 -= 1
                    while (i != 1)
                    rcx_49 = var_70_1
                
                if (rcx_49 != 0)
                    sub_140a74f90(rcx_49)
                
                void* rcx_51 = data_143f02f28
                
                if (rcx_51 == 0)
                    break
                
                int64_t rax_66 = 0
                
                if (0 == *(rcx_51 + 8))
                    *(rcx_51 + 8) = 0
                else
                    rax_66 = *(rcx_51 + 8)
                
                if (((rax_66 u>> 0x1a).b & 1) != 0)
                    int64_t* rcx_52 = data_143f02f28
                    data_143f02f28 = 0
                    
                    if (rcx_52 != 0)
                        rcx_52[9].d -= 1
                        
                        if (rcx_52[9].d == 1)
                            sub_140a2f6e0(rcx_52)
                    
                    int64_t* rcx_53 = data_143f02f30
                    data_143f02f30 = 0
                    
                    if (rcx_53 != 0)
                        rcx_53[9].d -= 1
                        
                        if (rcx_53[9].d == 1)
                            sub_140a2f6e0(rcx_53)
            
            result = sub_14196f9d0(arg2)
    else if (rax_2 == 0)
        result = sub_14196f9d0(arg2)
    else
        if (rdi.b != 0)
            goto label_14196f700
        
        int128_t* var_a0_1 = nullptr
        int32_t var_98_1 = 0
        int32_t var_94_1 = 4
        int128_t var_c0
        
        if (&var_c0 != &arg2[0x58])
            int128_t zmm1 = *(arg2 + 0x68)
            int128_t zmm4_1 = var_c0
            int128_t var_b0
            arg4 = var_b0
            arg3 = var_a0_1.o
            var_c0 = *(arg2 + 0x58)
            int128_t zmm0 = *(arg2 + 0x78)
            *(arg2 + 0x58) = zmm4_1
            *(arg2 + 0x68) = arg4
            var_a0_1.o = zmm0
            int128_t var_60_1 = zmm4_1
            int128_t var_50_1 = arg4
            int128_t var_40_1 = arg3
            int128_t var_b0_1 = zmm1
            *(arg2 + 0x78) = arg3
        
        int64_t* rax_21 = sub_140a82f30(0x1c8, 0, arg3, arg4)
        int64_t* r14_2 = rax_21
        
        if (rax_21 == 0)
            r14_2 = nullptr
        else
            sub_141961860(rax_21, *(arg2 + 0x8c))
        
        sub_140a4bff0(r14_2, arg2, 0x1c8)
        
        if (r14_2[1] == arg2)
            r14_2[1] = r14_2
        
        if (*(arg2 + 8) == r14_2)
            *(arg2 + 8) = arg2
        
        *(arg2 + 0x180) = *(r14_2 + 0x180)
        *(arg2 + 0x190) = *(r14_2 + 0x190)
        *(arg2 + 0x1a0) = *(r14_2 + 0x1a0)
        *(arg2 + 0x1b0) = r14_2[0x36]
        *(arg2 + 0x20) = r14_2[4]
        *(arg2 + 0x28) = r14_2[5]
        *(arg2 + 0x8c) = *(r14_2 + 0x8c)
        *(arg2 + 0x90) = *(r14_2 + 0x8c)
        *(arg2 + 0xa0) = *(r14_2 + 0xa0)
        *(arg2 + 0xb0) = *(r14_2 + 0xb0)
        *(arg2 + 0xc0) = *(r14_2 + 0xc0)
        *(arg2 + 0xd0) = *(r14_2 + 0xd0)
        *(arg2 + 0xe0) = *(r14_2 + 0xe0)
        *(arg2 + 0xf0) = *(r14_2 + 0xf0)
        *(arg2 + 0x100) = *(r14_2 + 0x100)
        *(arg2 + 0x110) = *(r14_2 + 0x110)
        *(arg2 + 0x120) = *(r14_2 + 0x120)
        *(arg2 + 0x130) = *(r14_2 + 0x130)
        *(arg2 + 0x140) = *(r14_2 + 0x140)
        *(arg2 + 0x150) = *(r14_2 + 0x150)
        *(arg2 + 0x160) = *(r14_2 + 0x160)
        *(arg2 + 0x170) = *(r14_2 + 0x170)
        arg2[0x1c4] = *(r14_2 + 0x1c4)
        arg2[0x1c5] = *(r14_2 + 0x1c5)
        int32_t i_4 = data_1439c82c8
        int64_t* rcx_21
        
        if (i_4 != 0 || data_143f02f38 != 0)
            void* rdi_1 = &data_1439c82a0
            
            if (i_4 != 0)
                int32_t r8_5 = var_98_1
                int32_t rdx_8 = r8_5 + i_4
                
                if (rdx_8 s> var_94_1)
                    sub_14085a940(&var_c0, rdx_8)
                    r8_5 = var_98_1
                
                void* rax_34 = data_1439c82c0
                int128_t* rcx_23 = &var_c0
                void* rdx_9 = &data_1439c82a0
                int32_t i_6 = i_4
                
                if (rax_34 != 0)
                    rdx_9 = rax_34
                
                if (var_a0_1 != 0)
                    rcx_23 = var_a0_1
                
                void* r8_6 = rcx_23 + (sx.q(r8_5) << 3)
                int32_t i_1
                
                do
                    void* rax_37 = *rdx_9
                    *r8_6 = rax_37
                    
                    if (rax_37 != 0)
                        *(rax_37 + 0x48) += 1
                    
                    r8_6 += 8
                    rdx_9 += 8
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
                var_98_1 += i_4
                i_4 = data_1439c82c8
            
            int32_t rcx_26 = data_1439c82cc
            void* rax_38 = data_1439c82c0
            
            if (rcx_26 s< 0)
                void* rsi_1 = &data_1439c82a0
                
                if (rax_38 != 0)
                    rsi_1 = rax_38
                
                if (i_4 != 0)
                    int32_t i_2
                    
                    do
                        int64_t* rcx_25 = *rsi_1
                        
                        if (rcx_25 != 0)
                            rcx_25[9].d -= 1
                            
                            if (rcx_25[9].d == 1)
                                sub_140a2f6e0(rcx_25)
                        
                        rsi_1 += 8
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
                    rcx_26 = data_1439c82cc
                
                data_1439c82c8 = 0
                
                if (rcx_26 != 0)
                    sub_14085a940(&data_1439c82a0, 0)
            else
                if (rax_38 != 0)
                    rdi_1 = rax_38
                
                if (i_4 != 0)
                    int32_t i_3
                    
                    do
                        int64_t* rcx_24 = *rdi_1
                        
                        if (rcx_24 != 0)
                            rcx_24[9].d -= 1
                            
                            if (rcx_24[9].d == 1)
                                sub_140a2f6e0(rcx_24)
                        
                        rdi_1 += 8
                        i_3 = i_4
                        i_4 -= 1
                    while (i_3 != 1)
                
                data_1439c82c8 = 0
            
            if (data_143f02f38 != 0)
                int64_t rbx_3 = sx.q(var_98_1)
                int32_t rax_41 = (rbx_3 + 1).d
                int32_t var_98_3 = rax_41
                
                if (rax_41 s> var_94_1)
                    sub_14083a490(&var_c0, rbx_3.d)
                
                int128_t* rdx_11 = &var_c0
                void* rax_42 = data_143f02f38
                
                if (var_a0_1 != 0)
                    rdx_11 = var_a0_1
                
                *(rdx_11 + (rbx_3 << 3)) = rax_42
                
                if (rax_42 != 0)
                    *(rax_42 + 0x48) += 1
            
            void var_d8
            void** rax_43 = sub_1419694f0(&var_d8, &var_c0, data_14399e5dc)
            void* rcx_30 = *rax_43
            *(rcx_30 + 0x10) = r14_2
            *(rcx_30 + 0x18) = r12.b
            void* rcx_31 = *rax_43
            int32_t r8_8 = rax_43[2].d
            int64_t* rdx_13 = rax_43[1]
            void* rbx_4 = *(rcx_31 + 0x28)
            
            if (rbx_4 != 0)
                *(rbx_4 + 0x48) += 1
            
            sub_141987440(rcx_31, rdx_13, r8_8, 1)
            rcx_21 = data_143f02f38
            data_143f02f38 = rbx_4
        else
            void* rax_31 = data_143f02f28
            
            if (rax_31 != 0)
                int64_t rbx_1 = sx.q(var_98_1)
                int32_t rcx_14 = (rbx_1 + 1).d
                int32_t var_98_2 = rcx_14
                
                if (rcx_14 s> var_94_1)
                    sub_14083a490(&var_c0, rbx_1.d)
                    rax_31 = data_143f02f28
                
                int128_t* rdx_5 = &var_c0
                
                if (var_a0_1 != 0)
                    rdx_5 = var_a0_1
                
                *(rdx_5 + (rbx_1 << 3)) = rax_31
                
                if (rax_31 != 0)
                    *(rax_31 + 0x48) += 1
                
                rax_31 = data_143f02f28
            
            int64_t* rcx_17 = data_143f02f30
            data_143f02f30 = rax_31
            
            if (rax_31 != 0)
                *(rax_31 + 0x48) += 1
            
            if (rcx_17 != 0)
                rcx_17[9].d -= 1
                
                if (rcx_17[9].d == 1)
                    sub_140a2f6e0(rcx_17)
            
            void var_f0
            int64_t* rax_33 = sub_141969670(&var_f0, &var_c0, data_14399e5dc)
            *(*rax_33 + 0x10) = r14_2
            void* rcx_20 = *rax_33
            int32_t r8_4 = rax_33[2].d
            int64_t* rdx_7 = rax_33[1]
            void* rbx_2 = *(rcx_20 + 0x20)
            
            if (rbx_2 != 0)
                *(rbx_2 + 0x48) += 1
            
            sub_141987710(rcx_20, rdx_7, r8_4, 1)
            rcx_21 = data_143f02f28
            data_143f02f28 = rbx_2
        
        if (rcx_21 != 0)
            rcx_21[9].d -= 1
            
            if (rcx_21[9].d == 1)
                sub_140a2f6e0(rcx_21)
        
        if (*(data_143f02b28 + 4) s> 0)
            int64_t* rax_46 = sub_140a242a0()
            int64_t r8_9 = *rax_46
            char rax_47
            int64_t r9_3
            rax_47, r9_3 = (*(r8_9 + 0x20))(rax_46, zx.q(r15_1), r8_9)
            
            if (rax_47 != 0)
                sub_140af98a0("Unknown", 0x211, 
                    Deadlock in FRHICommandListExecutor::ExecuteInner 2.", r9_3)
                sub_140afbb40()
            
            if (data_143f02f38 != 0)
                sub_1405a6220(sub_140a242a0(), &data_143f02f38)
                int64_t* rcx_34 = data_143f02f38
                data_143f02f38 = 0
                
                if (rcx_34 != 0)
                    rcx_34[9].d -= 1
                    
                    if (rcx_34[9].d == 1)
                        sub_140a2f6e0(rcx_34)
            
            while (data_143f02f28 != 0)
                sub_1405a6220(sub_140a242a0(), &data_143f02f28)
                void* rcx_36 = data_143f02f28
                
                if (rcx_36 == 0)
                    break
                
                int64_t rax_51 = 0
                
                if (0 == *(rcx_36 + 8))
                    *(rcx_36 + 8) = 0
                else
                    rax_51 = *(rcx_36 + 8)
                
                if (((rax_51 u>> 0x1a).b & 1) != 0)
                    int64_t* rcx_37 = data_143f02f28
                    data_143f02f28 = 0
                    
                    if (rcx_37 != 0)
                        rcx_37[9].d -= 1
                        
                        if (rcx_37[9].d == 1)
                            sub_140a2f6e0(rcx_37)
                    
                    int64_t* rcx_38 = data_143f02f30
                    data_143f02f30 = 0
                    
                    if (rcx_38 != 0)
                        rcx_38[9].d -= 1
                        
                        if (rcx_38[9].d == 1)
                            sub_140a2f6e0(rcx_38)
        
        result = sub_1408466d0(&var_c0)

__security_check_cookie(rax_1 ^ &var_118)
return result
