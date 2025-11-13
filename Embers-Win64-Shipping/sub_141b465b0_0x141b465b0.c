// 函数: sub_141b465b0
// 地址: 0x141b465b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    *(arg2 + 8) = 0
    *arg2 = 0
else
    if (arg3 != arg1[2])
        int64_t i = *arg1
        arg1[2] = arg3
        void* const var_38
        void* var_30
        
        if (i == 0)
        label_141b466b4:
            var_30.b = 1
            var_38 = nullptr
        else
            void* rax_1 = *(arg3 + 0x50)
            var_38 = arg3
            int32_t var_28_1 = 0xffffffff
            int16_t var_24_1 = 0x101
            char var_22_1 = 0
            sub_1406328d0(&var_38)
            void* const rax_2 = rax_1
            
            if (rax_2 == 0)
            label_141b4664f:
                rax_2 = nullptr
            else
                while (true)
                    int64_t rcx_1 = *(rax_2 + 0x28)
                    int64_t arg_18 = rcx_1
                    
                    if (rcx_1 == i)
                        break
                    
                    void* rax_3 = *(rax_2 + 0x20)
                    sub_1406328d0(&var_38)
                    rax_2 = rax_3
                    
                    if (rax_2 == 0)
                        goto label_141b4664f
            
            void* var_30_1
            var_30_1.b = 0
            var_38 = rax_2
            
            if (rax_2 == 0)
                void* rax_4 = *(arg3 + 0x48)
                var_38 = arg3
                int32_t var_28_2 = 0xffffffff
                int16_t var_24_2 = 0x101
                char var_22_2 = 0
                sub_140bad960(&var_38)
                void* rax_5 = rax_4
                
                if (rax_5 == 0)
                    goto label_141b466b4
                
                while (*(rax_5 + 0x18) != i)
                    void* rax_6 = *(rax_5 + 0x28)
                    sub_140bad960(&var_38)
                    rax_5 = rax_6
                    
                    if (rax_5 == 0)
                        goto label_141b466b4
                
                var_30.b = 1
                var_38 = rax_5
        *(arg1 + 0x18) = var_38.o
    
    *arg2 = *(arg1 + 0x18)

return arg2
