// 函数: sub_140b65060
// 地址: 0x140b65060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e189c0 == 0)
    int32_t rsi_1 = 0
    int16_t* var_48 = nullptr
    int64_t var_40_1 = 0
    sub_140b2acc0(GetCommandLineW(), u"-basedir=", &var_48, 1)
    int32_t rax_2 = var_40_1.d
    int16_t* var_38
    
    if (rax_2 == 0 || rax_2 == 1)
        PWSTR rax_11 = GetCommandLineW()
        int64_t rdi_1 = -1
        int16_t* rcx_26
        int16_t* var_58
        
        if (rax_11 == 0)
        label_140b6522f:
            HMODULE phModule
            BOOL rax_15 = GetModuleHandleExW(6, sub_140b65060, &phModule)
            HMODULE hModule = phModule
            
            if (rax_15 == 0)
                hModule = data_143e18638
            
            phModule = hModule
            GetModuleFileNameW(hModule, &data_143e189c0, 0x200)
            bool cond:2_1 = data_143e189c0 == 0
            int32_t rdx_3 = 0
            int32_t rcx_11 = 0
            int32_t var_50_1 = 0
            int32_t var_4c_1 = 0
            var_58 = nullptr
            
            if (not(cond:2_1))
                int64_t rbx_6 = -1
                
                do
                    rbx_6 += 1
                while ((&data_143e189c0)[rbx_6] != 0)
                
                if (rbx_6.d + 1 s> 0)
                    sub_1405947f0(&var_58, rbx_6.d + 1)
                    rcx_11 = var_4c_1
                    rdx_3 = var_50_1
                
                int32_t rax_16 = rbx_6.d + 1 + rdx_3
                var_50_1 = rax_16
                
                if (rax_16 s> rcx_11)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, &data_143e189c0, (rbx_6.d + 1) * 2)
            
            int64_t var_28
            int64_t* rax_17 = sub_140a300d0(&var_58, &var_28, &(*U"{}[\nt")[3], &data_142d5a024, 1)
            
            if (&var_58 != rax_17)
                int16_t* rcx_16 = var_58
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                var_58 = *rax_17
                *rax_17 = 0
                var_50_1 = rax_17[1].d
                int32_t var_4c_2 = *(rax_17 + 0xc)
                rax_17[1] = 0
            
            int64_t rcx_18 = var_28
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            int16_t* const rbx_9 = &data_142d40450
            int16_t* const rcx_19 = &data_142d40450
            
            if (var_50_1 != 0)
                rcx_19 = var_58
            
            int64_t rdx_6 = &data_143e189c0 - rcx_19
            int16_t i
            
            do
                i = *rcx_19
                *(rcx_19 + rdx_6) = i
                rcx_19 = &rcx_19[1]
            while (i != 0)
            uint64_t rax_20 = -1
            
            do
                rax_20 += 1
            while ((&data_143e189c0)[rax_20] != 0)
            
            int32_t r9_2 = 0
            
            if (rax_20.d s> 0)
                rax_20 = zx.q(rax_20.d - 1)
                int64_t i_1 = sx.q(rax_20.d)
                
                if (rax_20.d s> 0)
                    void* rdx_7 = &data_143e189be + (i_1 << 1)
                    
                    do
                        int16_t r8_6 = *rdx_7
                        
                        if (r8_6 == 0x2f || r8_6 == 0x5c)
                            int32_t temp0_1 = r9_2
                            r9_2 -= 1
                            
                            if (temp0_1 - 1 s< 0)
                                break
                        
                        rax_20 = zx.q(rax_20.d - 1)
                        i_1 -= 1
                        rdx_7 -= 2
                    while (i_1 s> 0)
            
            if (sx.q(rax_20.d) * 2 u>= 0x400)
                __report_rangecheckfailure()
                noreturn
            
            (&data_143e189c0)[sx.q(rax_20.d)] = 0
            int32_t rcx_20 = 0
            bool cond:6_1 = data_143e189c0 == 0
            int32_t var_2c_1 = 0
            var_38 = nullptr
            int32_t var_30_1 = 0
            
            if (not(cond:6_1))
                do
                    rdi_1 += 1
                while ((&data_143e189c0)[rdi_1] != 0)
                
                if (rdi_1.d + 1 s> 0)
                    sub_1405947f0(&var_38, rdi_1.d + 1)
                    rcx_20 = var_2c_1
                    rsi_1 = var_30_1
                
                int32_t rax_23 = rdi_1.d + 1 + rsi_1
                var_30_1 = rax_23
                
                if (rax_23 s> rcx_20)
                    sub_140594770(&var_38)
                
                UnDecorator::getReferenceType(var_38, &data_143e189c0, (rdi_1.d + 1) * 2)
            
            Concurrency::details::UMSThreadProxy::InternalSwitchTo(&var_38)
            int16_t* rcx_25 = var_38
            
            if (var_30_1 != 0)
                rbx_9 = rcx_25
            
            int64_t rdx_10 = &data_143e189c0 - rbx_9
            int16_t i_2
            
            do
                i_2 = *rbx_9
                *(rbx_9 + rdx_10) = i_2
                rbx_9 = &rbx_9[1]
            while (i_2 != 0)
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            rcx_26 = var_58
        else
            int64_t r14_1 = -1
            
            do
                r14_1 += 1
            while ((*u"-BaseFromWorkingDir")[r14_1] != 0)
            
            int16_t rcx_9 = *rax_11
            void* rbx_5 = &rax_11[1]
            
            if (rcx_9 == 0)
                goto label_140b6522f
            
            while (true)
                int32_t rax_13
                rax_13.w = sbb.w(rcx_9 - 0x61, rcx_9 - 0x61, zx.d(rcx_9) - 0x61 u< 0x1a)
                rax_13.w &= 0x20
                
                if (rcx_9 - rax_13.w == 0x2d && sub_140a546e0(rbx_5, &(*-BaseFromWorkingDir")[1], 
                        sx.q(r14_1.d - 1)) == 0)
                    break
                
                rcx_9 = *rbx_5
                rbx_5 += 2
                
                if (rcx_9 == 0)
                    goto label_140b6522f
            
            if (rbx_5 == 2)
                goto label_140b6522f
            
            GetCurrentDirectoryW(0x200, &data_143e189c0)
            bool cond:5_1 = data_143e189c0 == 0
            int32_t rdx_11 = 0
            int32_t rcx_28 = 0
            int32_t var_50_2 = 0
            int32_t var_4c_3 = 0
            var_58 = nullptr
            
            if (not(cond:5_1))
                do
                    rdi_1 += 1
                while ((&data_143e189c0)[rdi_1] != 0)
                
                if (rdi_1.d + 1 s> 0)
                    sub_1405947f0(&var_58, rdi_1.d + 1)
                    rcx_28 = var_4c_3
                    rdx_11 = var_50_2
                
                int32_t rax_26 = rdi_1.d + 1 + rdx_11
                var_50_2 = rax_26
                
                if (rax_26 s> rcx_28)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, &data_143e189c0, (rdi_1.d + 1) * 2)
            
            int64_t* rax_27 = sub_140a300d0(&var_58, &var_38, &(*U"{}[\nt")[3], &data_142d5a024, 1)
            
            if (&var_58 != rax_27)
                int16_t* rcx_33 = var_58
                
                if (rcx_33 != 0)
                    sub_140a74f90(rcx_33)
                
                var_58 = *rax_27
                *rax_27 = 0
                var_50_2 = rax_27[1].d
                var_4c_3 = *(rax_27 + 0xc)
                rax_27[1] = 0
            
            int16_t* rcx_35 = var_38
            
            if (rcx_35 != 0)
                sub_140a74f90(rcx_35)
            
            int32_t rbx_11 = var_50_2 - 1
            
            if (var_50_2 s<= 0)
                rbx_11 = 0
            
            int32_t rax_30
            rax_30.b = var_50_2 s<= 0
            int32_t rax_32 = rax_30 + 1 + var_50_2
            
            if (rax_32 s> var_4c_3)
                sub_140594770(&var_58)
            
            int64_t rcx_37 = sx.q(rbx_11)
            int16_t* rbx_12 = &data_142d40450
            var_58[rcx_37] = 0x2f
            var_58[rcx_37 + 1] = 0
            rcx_26 = var_58
            
            if (rax_32 != 0)
                rbx_12 = rcx_26
            
            int16_t* rdx_15 = &data_143e189c0 - rbx_12
            int16_t i_3
            
            do
                i_3 = *rbx_12
                *(rdx_15 + rbx_12) = i_3
                rbx_12 = &rbx_12[1]
            while (i_3 != 0)
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
    else
        int64_t* rax_3 = sub_140a300d0(&var_48, &var_38, &(*U"{}[\nt")[3], &data_142d5a024, 1)
        
        if (&var_48 != rax_3)
            int16_t* rcx_3 = var_48
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            var_48 = *rax_3
            *rax_3 = 0
            var_40_1.d = rax_3[1].d
            var_40_1:4.d = *(rax_3 + 0xc)
            rax_3[1] = 0
        
        int16_t* rcx_5 = var_38
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int32_t rdx_2 = var_40_1.d
        int32_t rbx_2 = rdx_2 - 1
        
        if (rdx_2 s<= 0)
            rbx_2 = 0
        
        int32_t rax_6
        rax_6.b = rdx_2 s<= 0
        int32_t rax_8 = rax_6 + 1 + rdx_2
        var_40_1.d = rax_8
        
        if (rax_8 s> var_40_1:4.d)
            sub_140594770(&var_48)
        
        int64_t rcx_7 = sx.q(rbx_2)
        int16_t* const rbx_3 = &data_142d40450
        var_48[rcx_7] = 0x2f
        var_48[rcx_7 + 1] = 0
        
        if (var_40_1.d != 0)
            rbx_3 = var_48
        
        int16_t* rcx_8 = &data_143e189c0 - rbx_3
        int16_t i_4
        
        do
            i_4 = *rbx_3
            *(rcx_8 + rbx_3) = i_4
            rbx_3 = &rbx_3[1]
        while (i_4 != 0)
    int16_t* rcx_27 = var_48
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)

return &data_143e189c0
