// 函数: sub_1410557f0
// 地址: 0x1410557f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi

if (arg3 != 0)
    rsi = (*(*arg3 + 0x48))(arg3)
else
    rsi = nullptr

int64_t rax_3 = sx.q(*(arg3 + 0x3c))
int128_t var_58
__builtin_memset(&var_58, 0, 0x18)
int32_t r14 = (&data_1439c85fc)[rax_3 * 0xa]
int32_t rax_4 = sub_140fe7330(r14, 0)
int32_t var_68 = rax_4
void*** r14_1

if ((*(*arg3 + 0x18))(arg3) == 0)
    if ((*(*arg3 + 0x10))(arg3) == 0)
        int32_t rax_20 = sub_141021240(r14)
        int32_t var_60_2 = arg4
        
        if ((*(*arg3 + 0x20))(arg3) == 0)
            int32_t var_64_3 = 4
            void* i = rsi - 0x68
            
            if (rsi == 0)
                i = nullptr
            
            int32_t rax_28
            int32_t rbx_9
            bool cond:6_1
            
            if (rax_20 == 0x13)
                rbx_9 = rax_4 - 0x15
                cond:6_1 = rax_4 == 0x15
            label_141055b20:
                
                if (cond:6_1)
                    rax_28 = 0
                else
                    rax_28 = 1
                    
                    if (rbx_9 != 1)
                        rax_28 = 0
            else
                if (rax_20 == 0x2c)
                    rbx_9 = rax_4 - 0x2e
                    cond:6_1 = rax_4 == 0x2e
                    goto label_141055b20
                
                rax_28 = 0
            int32_t var_5c_3 = rax_28
            
            if (i != 0)
                r14_1 = nullptr
                void*** rsi_4 = nullptr
                
                do
                    void* rbx_10 = *(i + 0x70)
                    void*** rax_29 = j_sub_140a82f30(0xa8)
                    void*** rbx_11
                    
                    if (rax_29 == 0)
                        rbx_11 = nullptr
                    else
                        rbx_11 = sub_14103ff30(rax_29, rbx_10, &var_68, i + 0xb0, nullptr)
                    
                    if (rsi_4 != 0)
                        sub_14081d930(&rsi_4[0x11], rbx_11)
                        
                        if (rbx_11 != 0)
                            rbx_11[0x12].b = 0
                    else
                        r14_1 = rbx_11
                    
                    void* rax_31 = *(i + 0x120)
                    rsi_4 = rbx_11
                    i = rax_31 - 0x68
                    
                    if (rax_31 == 0)
                        i = nullptr
                while (i != 0)
                
            label_141055bc5:
                *arg2 = r14_1
                
                if (r14_1 != 0)
                    r14_1[1].d += 1
            else
                *arg2 = nullptr
        else
            int32_t var_64_2 = 5
            void* i_1 = rsi - 0x70
            int32_t var_5c_2 = 0
            
            if (rsi == 0)
                i_1 = nullptr
            
            var_58.d = *(i_1 + 0x68)
            int32_t rax_24
            int32_t rbx_6
            bool cond:7_1
            
            if (rax_20 == 0x13)
                rbx_6 = rax_4 - 0x15
                cond:7_1 = rax_4 == 0x15
            label_141055a58:
                
                if (cond:7_1)
                    rax_24 = 0
                else
                    rax_24 = 1
                    
                    if (rbx_6 != 1)
                        rax_24 = 0
            else
                if (rax_20 == 0x2c)
                    rbx_6 = rax_4 - 0x2e
                    cond:7_1 = rax_4 == 0x2e
                    goto label_141055a58
                
                rax_24 = 0
            var_58:4.d = rax_24
            
            if (i_1 != 0)
                r14_1 = nullptr
                void*** rsi_3 = nullptr
                
                do
                    void* rbx_7 = *(i_1 + 0x78)
                    void*** rax_25 = j_sub_140a82f30(0xa8)
                    void*** rbx_8
                    
                    if (rax_25 == 0)
                        rbx_8 = nullptr
                    else
                        rbx_8 = sub_14103ff30(rax_25, rbx_7, &var_68, i_1 + 0xb8, nullptr)
                    
                    if (rsi_3 != 0)
                        sub_14081d930(&rsi_3[0x11], rbx_8)
                        
                        if (rbx_8 != 0)
                            rbx_8[0x12].b = 0
                    else
                        r14_1 = rbx_8
                    
                    void* rax_27 = *(i_1 + 0x128)
                    rsi_3 = rbx_8
                    i_1 = rax_27 - 0x70
                    
                    if (rax_27 == 0)
                        i_1 = nullptr
                while (i_1 != 0)
                
                goto label_141055bc5
            
            *arg2 = nullptr
    else
        int32_t var_64_1 = 5
        void* i_2 = rsi - 0x70
        int32_t var_60_1 = arg4
        
        if (rsi == 0)
            i_2 = nullptr
        
        int32_t var_5c_1 = 0
        var_58.d = *(i_2 + 0x68)
        int32_t rax_15 = sub_141021240(r14)
        int32_t rax_16
        int32_t rbx_3
        bool cond:4_1
        
        if (rax_15 == 0x13)
            rbx_3 = rax_4 - 0x15
            cond:4_1 = rax_4 == 0x15
        label_141055966:
            
            if (cond:4_1)
                rax_16 = 0
            else
                rax_16 = 1
                
                if (rbx_3 != 1)
                    rax_16 = 0
        else
            if (rax_15 == 0x2c)
                rbx_3 = rax_4 - 0x2e
                cond:4_1 = rax_4 == 0x2e
                goto label_141055966
            
            rax_16 = 0
        var_58:4.d = rax_16
        
        if (i_2 != 0)
            r14_1 = nullptr
            void*** rsi_2 = nullptr
            
            do
                void* rbx_4 = *(i_2 + 0x78)
                void*** rax_17 = j_sub_140a82f30(0xa8)
                void*** rbx_5
                
                if (rax_17 == 0)
                    rbx_5 = nullptr
                else
                    rbx_5 = sub_14103ff30(rax_17, rbx_4, &var_68, i_2 + 0xb8, nullptr)
                
                if (rsi_2 != 0)
                    sub_14081d930(&rsi_2[0x11], rbx_5)
                    
                    if (rbx_5 != 0)
                        rbx_5[0x12].b = 0
                else
                    r14_1 = rbx_5
                
                void* rax_19 = *(i_2 + 0x128)
                rsi_2 = rbx_5
                i_2 = rax_19 - 0x70
                
                if (rax_19 == 0)
                    i_2 = nullptr
            while (i_2 != 0)
            
            goto label_141055bc5
        
        *arg2 = nullptr
else
    int32_t var_64 = 8
    void* i_3 = rsi - 0x70
    int32_t var_60 = arg4
    
    if (rsi == 0)
        i_3 = nullptr
    
    int32_t var_5c = 0
    var_58.d = *(i_3 + 0x68) u>> arg4.b
    
    if (i_3 != 0)
        r14_1 = nullptr
        void*** rsi_1 = nullptr
        
        do
            void* rbx_1 = *(i_3 + 0x78)
            void*** rax_9 = j_sub_140a82f30(0xa8)
            void*** rbx_2
            
            if (rax_9 == 0)
                rbx_2 = nullptr
            else
                rbx_2 = sub_14103ff30(rax_9, rbx_1, &var_68, i_3 + 0xb8, nullptr)
            
            if (rsi_1 != 0)
                sub_14081d930(&rsi_1[0x11], rbx_2)
                
                if (rbx_2 != 0)
                    rbx_2[0x12].b = 0
            else
                r14_1 = rbx_2
            
            void* rax_11 = *(i_3 + 0x128)
            rsi_1 = rbx_2
            i_3 = rax_11 - 0x70
            
            if (rax_11 == 0)
                i_3 = nullptr
        while (i_3 != 0)
        
        goto label_141055bc5
    
    *arg2 = nullptr
return arg2
