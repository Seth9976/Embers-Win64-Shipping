// 函数: sub_14222dd50
// 地址: 0x14222dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x8a)

if ((result & 1) == 0 && (result & 8) == 0)
    TEB* gsbase
    
    if (data_143f514e8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f514e8)
        
        if (data_143f514e8 == 0xffffffff)
            sub_140b58170(&data_143f514e0, "PhysXPC", 1)
            _Init_thread_footer(&data_143f514e8)
    
    int64_t* rax_2 = sub_142230b50(arg1, data_143f514e0)
    int64_t* rbx_1
    
    if (rax_2 != 0)
        result = sub_140bc9520(rax_2)
        
        if (result == 0)
            uint64_t var_138
            sub_14225a140(&var_138, rax_2, &arg1[0x1c])
            int64_t* rax_3 = sub_142565030()
            void* rax_4 = rax_3[0x23]
            
            if (rax_4 == 0)
                int64_t rdx_4 = *rax_3
                (*(rdx_4 + 0x390))(rax_3, rdx_4)
                rax_4 = rax_3[0x23]
            
            char rcx_5 = *(arg1 + 0x8c)
            char rax_5 = *(rax_4 + 0xad)
            
            if (rcx_5 != 0)
                rax_5 = rcx_5
            
            char rcx_6
            
            if (rax_5 != 3)
                rcx_6 = *(arg1 + 0x89)
            
            int32_t var_130
            int32_t var_120
            int64_t var_128
            int64_t var_118
            
            if (rax_5 == 3 || (((rcx_6 & 0x10) == 0 || var_130 == arg1[0xc].d)
                    && ((rcx_6 & 0x40) == 0 || var_120 == arg1[0xc].d)))
                result = sub_14222eb60(arg1, &var_138, &var_128, &var_118)
                int64_t rcx_13 = var_118
                
                if (rcx_13 != 0)
                    result = sub_140a74f90(rcx_13)
                
                int64_t rcx_14 = var_128
                
                if (rcx_14 != 0)
                    result = sub_140a74f90(rcx_14)
                
                uint64_t rcx_15 = var_138
                
                if (rcx_15 != 0)
                    result = sub_140a74f90(rcx_15)
                
                rbx_1.b = 0
            else
                (*(*arg1 + 0x278))(arg1)
                result = (*(*arg1 + 0x260))(arg1)
                int64_t rcx_9 = var_118
                
                if (rcx_9 != 0)
                    result = sub_140a74f90(rcx_9)
                
                int64_t rcx_10 = var_128
                
                if (rcx_10 != 0)
                    result = sub_140a74f90(rcx_10)
                
                uint64_t rcx_11 = var_138
                
                if (rcx_11 != 0)
                    result = sub_140a74f90(rcx_11)
                
                rbx_1.b = 1
        else
            rbx_1.b = 1
        
        goto label_14222e004
    
    int64_t* rcx_16 = arg1[4]
    
    if (rcx_16 == 0)
        result = sub_14222c330(arg1)
    else
        void* rax_11 = (*(*rcx_16 + 0x150))(rcx_16)
        
        if (rax_11 == 0)
            result = sub_14222c330(arg1)
        else if (sub_14243ade0(rax_11) == 0)
            result = sub_14222c330(arg1)
        else
            void var_108
            sub_14225a0b0(&var_108, sub_1417c9c70(1))
            int64_t* rax_14
            char r8_4
            rax_14, r8_4 = sub_142565030()
            void* rax_15 = rax_14[0x23]
            
            if (rax_15 == 0)
                int64_t rdx_7 = *rax_14
                r8_4 = (*(rdx_7 + 0x390))(rax_14, rdx_7)
                rax_15 = rax_14[0x23]
            
            sub_1422304e0(arg1, &var_108, sbb.b(r8_4, r8_4, *(rax_15 + 0xaf) != 0) & 4)
            char var_88
            char var_87
            char var_85
            
            if (var_85 != 0 || var_88 != 0 || var_87 != 0)
                void arg_8
                rbx_1 = *sub_140b58170(&arg_8, "RuntimePhysXCooking", 1)
                j_sub_140b3db50()
                
                if (sub_140b407e0(&data_143de7d78, rbx_1) == 0)
                    rbx_1.b = 1
                else if (sub_142265480(&var_108) == 0)
                    *(arg1 + 0x8a) |= 2
                    rbx_1.b = 1
                else
                    void var_80
                    void var_70
                    void var_60
                    sub_14222eb60(arg1, &var_80, &var_70, &var_60)
                    *(arg1 + 0x8a) &= 0xfd
                    rbx_1.b = 0
            else
                rbx_1.b = 1
            
            result = sub_14222aea0(&var_108)
        label_14222e004:
            
            if (rbx_1.b != 0)
                result = sub_14222c330(arg1)
    
    *(arg1 + 0x8a) |= 1

return result
