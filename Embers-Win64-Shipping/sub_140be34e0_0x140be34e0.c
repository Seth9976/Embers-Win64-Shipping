// 函数: sub_140be34e0
// 地址: 0x140be34e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* result_1 = arg2 + 2

if (*arg2 == 0x28)
    if (iswspace(*result_1) != 0)
        int32_t i
        
        do
            wint_t _C = result_1[1]
            result_1 = &result_1[1]
            i = iswspace(_C)
        while (i != 0)
    
    wint_t _C_1 = *result_1
    
    if (_C_1 == 0x29)
        return &result_1[1]
    
    int16_t* result = nullptr
    
    while (true)
        if (iswspace(_C_1) != 0)
            int32_t i_1
            
            do
                wint_t _C_2 = result_1[1]
                result_1 = &result_1[1]
                i_1 = iswspace(_C_2)
            while (i_1 != 0)
        
        if (*result_1 != 0x28)
            break
        
        int64_t var_48
        __builtin_memset(&var_48, 0, 0x20)
        int64_t var_38
        void* rax_4 = sub_140ce37a0(&result_1[1], &var_38, 1)
        void* rbx = rax_4
        
        if (rax_4 != 0)
            if (iswspace(*rax_4) != 0)
                int32_t i_2
                
                do
                    wint_t _C_3 = *(rbx + 2)
                    rbx += 2
                    i_2 = iswspace(_C_3)
                while (i_2 != 0)
            
            void* rbx_1 = rbx + 2
            
            if (*rbx == 0x2c)
                if (iswspace(*rbx_1) != 0)
                    int32_t i_3
                    
                    do
                        wint_t _C_4 = *(rbx_1 + 2)
                        rbx_1 += 2
                        i_3 = iswspace(_C_4)
                    while (i_3 != 0)
                
                void* rax_8 = sub_140ce37a0(rbx_1, &var_48, 1)
                void* rbx_2 = rax_8
                
                if (rax_8 != 0)
                    if (iswspace(*rax_8) != 0)
                        int32_t i_4
                        
                        do
                            wint_t _C_5 = *(rbx_2 + 2)
                            rbx_2 += 2
                            i_4 = iswspace(_C_5)
                        while (i_4 != 0)
                    
                    if (*rbx_2 == 0x29)
                        int32_t var_28
                        sub_1405d1820(arg1 + 0x50, &var_28)
                        int64_t* var_20
                        sub_140596d10(var_20, &var_38)
                        sub_140596d10(&var_20[2], &var_48)
                        var_20[4].d = 0xffffffff
                        int32_t rax_10 = var_20[1].d
                        int16_t* rdx_5
                        
                        if (rax_10 == 0)
                            rdx_5 = &data_142d40450
                        else
                            rdx_5 = *var_20
                        
                        int32_t rcx_9 = rax_10 - 1
                        
                        if (rax_10 == 0)
                            rcx_9 = 0
                        
                        void arg_10
                        sub_1405d2a60(arg1 + 0x50, &arg_10, sub_1405969c0(rcx_9, rdx_5), var_20, 
                            var_28, nullptr)
                        int16_t rax_12 = *(rbx_2 + 2)
                        result_1 = rbx_2 + 4
                        
                        if (rax_12 == 0x29)
                            result = result_1
                        else if (rax_12 == 0x2c)
                            int64_t rcx_11 = var_48
                            
                            if (rcx_11 != 0)
                                sub_140a74f90(rcx_11)
                            
                            int64_t rcx_12 = var_38
                            
                            if (rcx_12 != 0)
                                sub_140a74f90(rcx_12)
                            
                            _C_1 = *result_1
                            continue
        
        int64_t rcx_13 = var_48
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = var_38
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        return result

return nullptr
