// 函数: sub_141fb6e50
// 地址: 0x141fb6e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[0x28]

if (result != 0 && *(result + 0x188) != 0)
    int64_t r8 = arg2
    arg2.b = 1
    void*** var_b8
    
    if ((*(*arg1 + 0x270))(arg5, arg2, r8, arg3, 0, arg4) != 0)
        sub_14217b830(arg1[0x2a], true)
        sub_1418c35f0(arg1[0x2a], *data_143f3d498 s> 0)
        int64_t arg_8 = 0
        int64_t* rax_6 = sub_14249aea0()
        int64_t var_d0_1
        var_d0_1.b = 0
        void* rax_8 = sub_140596910(sub_140cde0b0(), rax_6, 0, 0, 0, var_d0_1.b, 0)
        arg1[0x11] = rax_8
        (*(*rax_8 + 0x2f8))(rax_8, arg1, 2, arg3, 0xf4240, 0)
        void* _String = sub_142411ce0(&arg1[0x16d], u"LevelPrefixOverride=", nullptr)
        
        if (_String != 0)
            *(arg1 + 0x704) = _wtoi(_String)
        
        char rdx_4
        
        if (*(arg1 + 0x704) != 0xffffffff)
            rdx_4 = 1
        else
            rdx_4 = 0
        
        char* rax_10 = sub_142434f20(arg1[0x28], rdx_4)
        
        if (rax_10 != 0)
            *(rax_10 + 0x18) = arg1
        
        *(arg1 + 0x10c9) = 1
        *(arg1 + 0xb0b) = 1
        sub_140597df0(&arg1[0x21b], &arg1[0x172])
        int64_t r8_2 = arg1[0x28]
        void* rcx_13 = data_143f5b298
        uint32_t (* r12)(int64_t* arg1, void* arg2) = nullptr
        uint32_t (* var_a8)(int64_t* arg1, void* arg2) = nullptr
        int32_t rsi_1 = 0
        int32_t r13 = 0
        int32_t var_9c = 0
        sub_1423ddac0(rcx_13, &var_b8, r8_2)
        void*** r8_3 = var_b8
        int32_t i_1
        int32_t i = i_1
        int32_t var_a0
        
        while (i s>= 0)
            if (i s< r8_3[1].d && (*r8_3)[sx.q(i)] == 0)
                i += 1
                i_1 = i
                continue
            
            while (i s>= 0)
                if (i s>= r8_3[1].d)
                    break
                
                void* r9_2 = (*r8_3)[sx.q(i)]
                
                if (r9_2 != 0)
                    int32_t r15_1 = *(r9_2 + 0xb8)
                    int64_t rbx_3 = sx.q(rsi_1)
                    rsi_1 = (rbx_3 + 1).d
                    var_a0 = rsi_1
                    
                    if (rsi_1 s> r13)
                        sub_1405a4cf0(&var_a8)
                        r13 = var_9c
                        rsi_1 = var_a0
                        r12 = var_a8
                    
                    *(r12 + (rbx_3 << 2)) = r15_1
                    i = i_1
                    r8_3 = var_b8
                
                do
                    i += 1
                    i_1 = i
                    
                    if (i s< 0)
                        goto label_141fb7101
                    
                    if (i s>= r8_3[1].d)
                        break
                while ((*r8_3)[sx.q(i)] == 0)
            
            break
        
    label_141fb7101:
        uint64_t var_88 = 0
        int64_t var_80
        __builtin_memset(&var_80, 0, 0x50)
        
        if (&var_88 != &arg1[0x172])
            int32_t rbx_4 = arg1[0x173].d
            int64_t r15_3 = arg1[0x172]
            var_80.d = rbx_4
            
            if (rbx_4 != 0)
                sub_1405a4c70(&var_88, rbx_4, 0)
                memcpy(var_88, r15_3, rbx_4 * 2)
        
        sub_142423a30(&arg1[0x16d], &var_a8, 0)
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        uint32_t (* rax_14)(int64_t* arg1, void* arg2) = var_a8
        int64_t var_60
        var_60.d = var_a0
        int32_t var_5c = var_9c
        int64_t var_58
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        int64_t var_50
        var_50.d = rsi_1
        var_50:4.d = r13
        char var_30 = 0
        int64_t* rax_17 = sub_140b1af50(&var_a8)
        int64_t var_48
        
        if (&var_48 != rax_17)
            int64_t rcx_24 = var_48
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            var_48 = *rax_17
            *rax_17 = 0
            int64_t var_40
            var_40.d = rax_17[1].d
            var_40:4.d = *(rax_17 + 0xc)
            rax_17[1] = 0
        
        uint32_t (* rcx_26)(int64_t* arg1, void* arg2) = var_a8
        int64_t var_38
        var_38.d = rax_17[2].d
        var_38:4.d = *(rax_17 + 0x14)
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t* rsi_2 = arg1[0xee]
        var_a8 = sub_141fc4210
        int32_t var_a0_1 = 0
        var_b8 = nullptr
        void*** rax_22 = sub_140a84c80(0, 0x30, 0)
        var_b8 = rax_22
        i_1 = 3
        
        if (rax_22 != 0)
            *rax_22 = &data_142fd1390
            sub_140d3a3a0(&rax_22[1], arg1)
            *(rax_22 + 0x10) = var_a8.o
            rax_22[5] = sub_140a387b0()
            *rax_22 = &data_142fd13e8
        
        (*(*rsi_2 + 8))(rsi_2, &var_88, &var_b8)
        void*** rax_26
        
        if (i_1 == 0)
            rax_26 = var_b8
        label_141fb72dd:
            
            if (rax_26 != 0)
                sub_140a74f90(rax_26)
        else
            void*** rcx_29 = var_b8
            
            if (rcx_29 != 0)
                (*rcx_29)[7](rcx_29, 0)
                rax_26 = var_b8
                
                if (rax_26 != 0)
                    rax_26 = sub_140a84c80(rax_26, 0, 0)
                    var_b8 = rax_26
                
                i_1 = 0
                goto label_141fb72dd
        int64_t rcx_32 = var_48
        char rbx_7 = *(arg1 + 0xb0b)
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        if (r12 != 0)
            sub_140a74f90(r12)
        
        if (rax_14 != 0)
            sub_140a74f90(rax_14)
        
        int64_t var_78
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        uint64_t rcx_36 = var_88
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
        
        return zx.q(rbx_7)
    
    int64_t* rbx_1 = *(arg1[0x28] + 0x188)
    var_b8 = nullptr
    int32_t var_b0 = 0
    sub_1405947f0(&var_b8, 0x10)
    int32_t rax_3 = var_b0 + 0x10
    var_b0 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_b8)
    
    UnDecorator::getReferenceType(var_b8, u"InitBase FAILED", 0x20)
    (*(*rbx_1 + 0x2e0))(rbx_1, 4, &var_b8)
    void*** rcx_4 = var_b8
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

result.b = 0
return result
