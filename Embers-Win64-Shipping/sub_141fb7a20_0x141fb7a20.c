// 函数: sub_141fb7a20
// 地址: 0x141fb7a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg5
int32_t rdi = 0
int32_t arg_8 = 0

if ((*(*arg1 + 0x270))(arg1, 0, arg2, arg3, arg4, r12) != 0)
    sub_14217b830(arg1[0x2a], 2)
    int64_t rax_2
    int64_t rdx_1
    rax_2, rdx_1 = sub_142437e30(arg1[0x28], 0, 1)
    
    if (rax_2 != 0)
        int64_t rbx = data_143f3d590
        int64_t rcx_5
        
        if (data_143de5480 == 0)
            rcx_5 = 0
        else
            rax_2, rdx_1 = GetCurrentThreadId()
            rcx_5.b = rax_2.d != data_143de5470
        
        rax_2.b = *(rbx + (rcx_5 << 2)) != 0
        arg1[0x1c5].b = rax_2.b
        int64_t rbx_1 = data_143f3d5c0
        int64_t rcx_6
        
        if (data_143de5480 == 0)
            rcx_6 = 0
        else
            rax_2, rdx_1 = GetCurrentThreadId()
            rcx_6.b = rax_2.d != data_143de5470
        
        if (*(rbx_1 + (rcx_6 << 2)) != 0)
            int64_t* rcx_7 = arg1[0xee]
            rdx_1.b = 1
            rax_2 = (*(*rcx_7 + 0x48))(rcx_7, rdx_1)
        
        if (*(rbx_1 + (rcx_6 << 2)) == 0 || rax_2.b == 0)
            rax_2.b = 0
        else
            rax_2.b = 1
        
        *(arg1 + 0xe29) = rax_2.b
        int64_t rbx_2 = data_143f3d5d8
        int64_t rcx_8
        
        if (data_143de5480 == 0)
            rcx_8 = 0
        else
            rcx_8.b = GetCurrentThreadId().d != data_143de5470
        
        rax_2.b = *(rbx_2 + (rcx_8 << 2)) != 0
        *(arg1 + 0xe2a) = rax_2.b
        void* rax_5 = sub_140cde0b0()
        sub_140d19010(rax_5, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        arg_8.q = 0
        void* rax_7 = sub_140d2dfc0(sub_14249aea0(), rax_5, 0, 0, 0, 0, 0, 0, 0)
        (*(*rax_7 + 0x2f8))(rax_7, arg1, 3, arg3, 0xf4240, 0)
        int64_t rdx_5 = *rax_7
        (*(rdx_5 + 0x298))(rax_7, rdx_5)
        sub_14215ed70(arg1, rax_7)
        arg_8.q = sub_142411ce0(arg3, u"DemoFriendlyName=", nullptr)
        void* rax_9 = sub_142411ce0(arg3, u"RecordMapChanges", nullptr)
        int64_t r8_2 = arg1[0x28]
        void*** var_e8 = nullptr
        int32_t r15 = 0
        int32_t var_dc = 0
        int32_t r13 = 0
        arg1[0x161].b = rax_9 != 0
        int64_t* var_d8
        sub_1423ddac0(data_143f5b298, &var_d8, r8_2)
        int64_t* r8_3 = var_d8
        int32_t i_2
        int32_t i = i_2
        
        while (i s>= 0)
            if (i s>= r8_3[1].d)
                break
            
            if (*(*r8_3 + (sx.q(i) << 3)) != 0)
                break
            
            i += 1
            i_2 = i
        
        void*** r10_1 = var_e8
        
        while (i s>= 0)
            if (i s>= r8_3[1].d)
                break
            
            void* r9_2 = *(*r8_3 + (sx.q(i) << 3))
            
            if (r9_2 != 0)
                int32_t r14_1 = *(r9_2 + 0xb8)
                int64_t rbx_5 = sx.q(r15)
                r15 = (rbx_5 + 1).d
                
                if (r15 s> r13)
                    sub_1405a4cf0(&var_e8)
                    r10_1 = var_e8
                    r13 = var_dc
                
                *(r10_1 + (rbx_5 << 2)) = r14_1
                i = i_2
                r8_3 = var_d8
            
            do
                i += 1
                i_2 = i
                
                if (i s< 0)
                    goto label_141fb7d75
                
                if (i s>= r8_3[1].d)
                    break
            while (*(*r8_3 + (sx.q(i) << 3)) == 0)
        
    label_141fb7d75:
        int64_t var_58
        int64_t* rax_13 = sub_140b63b70(&arg1[0x32], &var_58)
        char* rax_14 = j_sub_140a82f30(0x50)
        char* rbx_6 = rax_14
        
        if (rax_14 == 0)
            rbx_6 = nullptr
        else
            *rax_14 = 0
            *(rax_14 + 0x10) = 0
            __builtin_memset(&rax_14[0x20], 0, 0x28)
            *(rbx_6 + 0x40) = *rax_13
            *rax_13 = 0
            *(rbx_6 + 0x48) = rax_13[1].d
            *(rbx_6 + 0x4c) = *(rax_13 + 0xc)
            rax_13[1] = 0
            sub_141fc50c0(rbx_6)
        
        int32_t r13_1 = 2
        
        if (&arg1[0x21e] != &var_d8)
            void* rdx_10 = arg1[0x21e]
            arg1[0x21e] = rbx_6
            sub_141fa8b10(&arg1[0x21e], rdx_10)
        else if (rbx_6 != 0)
            int64_t rcx_25 = *(rbx_6 + 0x40)
            void* r14_3 = &rbx_6[0x40]
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            for (int64_t i_1 = 2; i_1 != 0; )
                int64_t rcx_26 = *(r14_3 - 0x10)
                r14_3 -= 0x10
                i_1 -= 1
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
            
            j_sub_140a74f90(rbx_6)
            r12 = arg5
        
        int64_t rcx_28 = var_58
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        *(arg1 + 0x10c9) = 1
        sub_140597df0(&arg1[0x21b], &arg1[0x172])
        uint64_t var_b8 = 0
        int64_t var_b0
        __builtin_memset(&var_b0, 0, 0x50)
        
        if (&var_b8 != &arg1[0x172])
            int32_t r14_4 = arg1[0x173].d
            int64_t rbx_8 = arg1[0x172]
            var_b0.d = r14_4
            
            if (r14_4 != 0)
                sub_1405a4c70(&var_b8, r14_4, 0)
                memcpy(var_b8, rbx_8, r14_4 * 2)
        
        int16_t* r14_5 = arg_8.q
        int32_t var_cc
        int64_t** rax_18
        
        if (r14_5 != 0)
            int32_t i_4 = 0
            int32_t rcx_32 = 0
            i_2 = 0
            var_cc = 0
            var_d8 = nullptr
            
            if (*r14_5 != 0)
                int64_t rbx_9 = -1
                
                do
                    rbx_9 += 1
                while (r14_5[rbx_9] != 0)
                
                if (rbx_9.d + 1 s> 0)
                    sub_1405947f0(&var_d8, rbx_9.d + 1)
                    rcx_32 = var_cc
                    i_4 = i_2
                
                int32_t i_3 = rbx_9.d + 1 + i_4
                i_2 = i_3
                
                if (i_3 s> rcx_32)
                    sub_140594770(&var_d8)
                
                UnDecorator::getReferenceType(var_d8, r14_5, (rbx_9.d + 1) * 2)
            
            rax_18 = &var_d8
            r13_1 = 1
            goto label_141fb7f75
        
        rax_18 = sub_142436cb0(arg1[0x28], &var_58)
        uint64_t var_a8
        
        if (&var_a8 != rax_18)
        label_141fb7f75:
            int32_t rbx_11 = rax_18[1].d
            int64_t* r14_6 = *rax_18
            int64_t var_a0
            var_a0.d = rbx_11
            
            if (rbx_11 != 0)
                sub_1405a4c70(&var_a8, rbx_11, 0)
                memcpy(var_a8, r14_6, rbx_11 * 2)
            else
                var_a0:4.d = 0
        
        if ((r13_1.b & 2) != 0)
            int64_t rcx_39 = var_58
            r13_1 &= 0xfffffffd
            
            if (rcx_39 != 0)
                sub_140a74f90(rcx_39)
        
        if ((r13_1.b & 1) != 0)
            int64_t* rcx_40 = var_d8
            
            if (rcx_40 != 0)
                sub_140a74f90(rcx_40)
        
        sub_142423a30(&arg1[0x16d], &var_d8, 0)
        int64_t var_98
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        int64_t* rax_19 = var_d8
        int64_t var_90
        var_90.d = i_2
        var_90:4.d = var_cc
        int64_t var_88
        
        if (var_88 != 0)
            sub_140a74f90(var_88)
        
        void*** rax_22 = var_e8
        int64_t var_80
        var_80:4.d = var_dc
        var_80.d = r15
        char var_60 = 1
        int64_t* rax_24 = sub_140b1af50(&var_58)
        int64_t var_78
        
        if (&var_78 != rax_24)
            int64_t rcx_45 = var_78
            
            if (rcx_45 != 0)
                sub_140a74f90(rcx_45)
            
            var_78 = *rax_24
            *rax_24 = 0
            int64_t var_70
            var_70.d = rax_24[1].d
            var_70:4.d = *(rax_24 + 0xc)
            rax_24[1] = 0
        
        int64_t rcx_47 = var_58
        int64_t var_68
        var_68.d = rax_24[2].d
        var_68:4.d = *(rax_24 + 0x14)
        
        if (rcx_47 != 0)
            sub_140a74f90(rcx_47)
        
        int64_t* r14_7 = arg1[0xee]
        var_d8 = sub_141fc4210
        int32_t var_d0 = 0
        var_e8 = nullptr
        void*** rax_29 = sub_140a84c80(0, 0x30, 0)
        var_e8 = rax_29
        int32_t var_e0_2 = 3
        
        if (rax_29 != 0)
            *rax_29 = &data_142fd1390
            sub_140d3a3a0(&rax_29[1], arg1)
            *(rax_29 + 0x10) = var_d8.o
            rax_29[5] = sub_140a387b0()
            *rax_29 = &data_142fd13e8
        
        (*(*r14_7 + 8))(r14_7, &var_b8, &var_e8)
        void*** rax_33
        
        if (var_e0_2 == 0)
            rax_33 = var_e8
        label_141fb8163:
            
            if (rax_33 != 0)
                sub_140a74f90(rax_33)
        else
            void*** rcx_50 = var_e8
            
            if (rcx_50 != 0)
                (*rcx_50)[7](rcx_50, 0)
                rax_33 = var_e8
                
                if (rax_33 != 0)
                    rax_33 = sub_140a84c80(rax_33, 0, 0)
                    var_e8 = rax_33
                
                int32_t var_e0_3 = 0
                goto label_141fb8163
        arg_8.q = *(*(arg1[0x28] + 0x20) + 0x18)
        sub_140b63b70(&arg_8, &var_e8)
        int64_t* rcx_55 = arg1[0xee]
        int32_t rax_37 = (*(*rcx_55 + 0x60))(rcx_55)
        sub_140596d10(&var_d8, sub_142441630(&var_58, &var_e8))
        int64_t rdi_1 = sx.q(arg1[0x190].d)
        int32_t rcx_58 = (rdi_1 + 1).d
        arg1[0x190].d = rcx_58
        
        if (rcx_58 s> *(arg1 + 0xc84))
            sub_1405a4df0(&arg1[0x18f])
        
        int64_t rcx_60 = arg1[0x18f]
        int64_t rdx_27 = rdi_1 * 3
        *(rcx_60 + (rdx_27 << 3)) = var_d8
        *(rcx_60 + (rdx_27 << 3) + 8) = var_d0
        *(rcx_60 + (rdx_27 << 3) + 0xc) = var_cc
        *(rcx_60 + (rdx_27 << 3) + 0x10) = rax_37
        int64_t rcx_61 = var_58
        
        if (rcx_61 != 0)
            sub_140a74f90(rcx_61)
        
        void*** rcx_62 = var_e8
        
        if (rcx_62 != 0)
            sub_140a74f90(rcx_62)
        
        char rax_42 = sub_141fd1020(arg1, r12)
        sub_141fc9a20(arg1, rax_7, arg3)
        int64_t rcx_65 = var_78
        
        if (rcx_65 != 0)
            sub_140a74f90(rcx_65)
        
        if (rax_22 != 0)
            sub_140a74f90(rax_22)
        
        if (rax_19 != 0)
            sub_140a74f90(rax_19)
        
        uint64_t rcx_68 = var_a8
        
        if (rcx_68 != 0)
            sub_140a74f90(rcx_68)
        
        uint64_t rcx_69 = var_b8
        
        if (rcx_69 != 0)
            sub_140a74f90(rcx_69)
        
        return zx.q(rax_42)
    
    if (*r12 != u"No WorldSettings!!")
        r12[1].d = 0
        
        if (*(r12 + 0xc) != 0x13)
            sub_1405947f0(r12, 0x13)
            rdi = r12[1].d
        
        r12[1].d = rdi + 0x13
        
        if (rdi + 0x13 s> *(r12 + 0xc))
            sub_140594770(r12)
        
        __builtin_wcscpy(*r12, u"No WorldSettings!!")

return 0
