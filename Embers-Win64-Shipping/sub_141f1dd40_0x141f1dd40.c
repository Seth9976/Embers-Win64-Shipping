// 函数: sub_141f1dd40
// 地址: 0x141f1dd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x14f)

if (result != 2)
    void* rcx = *(arg1 + 0xa0)
    
    if (rcx != 0 && result != 0)
        void* rax = sub_141dc9840(rcx)
        int64_t rax_2
        
        if (rax == 0)
            rax_2 = 0
        else
            void* rcx_1 = *(rax + 0xb8)
            
            if (rcx_1 == 0)
                rax_2 = 0
            else
                void* rax_1 = sub_1420f98f0(rcx_1)
                void* rcx_2
                
                if (rax_1 != 0)
                    rcx_2 = *(rax_1 + 0x1e0)
                
                int128_t var_38
                
                if (rax_1 != 0 && rcx_2 != 0)
                    var_38 = *(arg1 + 0x1f0)
                    rax_2 = sub_1420fa460(rcx_2, &var_38)
                else
                    rcx_2 = *(rax + 0x1e0)
                    
                    if (rcx_2 == 0)
                        rax_2 = 0
                    else
                        var_38 = *(arg1 + 0x1f0)
                        rax_2 = sub_1420fa460(rcx_2, &var_38)
        
        int64_t rbx_2 = rax_2 + 0x10
        
        if (rax_2 == 0)
            rbx_2 = 0
        
        int64_t var_40_1 = rbx_2
        char rax_3 = sub_140a80f40()
        
        if (rax_3 != 0)
            *(arg1 + 0x300) = rbx_2
        else if (data_143f138f4 != rax_3)
        label_141f1de32:
            void var_28
            int64_t* rax_5 = sub_141f0efb0(&var_28, nullptr, 0xff)
            *(*rax_5 + 0x10) = (arg1 + 0x2b8).o
            void* rcx_5 = *rax_5
            int32_t r8_1 = rax_5[2].d
            int64_t* rdx_2 = rax_5[1]
            int64_t* rbx_3 = *(rcx_5 + 0x28)
            int64_t* arg_10 = rbx_3
            int32_t* rdi_1 = &rbx_3[9]
            
            if (rbx_3 != 0)
                *rdi_1 += 1
                rbx_3 = arg_10
            
            sub_1405e48c0(rcx_5, rdx_2, r8_1, 1)
            
            if (rbx_3 != 0)
                int32_t rax_6 = *rdi_1
                *rdi_1 -= 1
                
                if (rax_6 == 1)
                    sub_140a2f6e0(arg_10)
        else if (data_143de5480 == rax_3)
            *(arg1 + 0x300) = rbx_2
        else
            uint32_t rax_4
            rax_4.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_4.b == 0)
                goto label_141f1de32
            
            *(arg1 + 0x300) = rbx_2
        
        return sub_141997e80(arg1 + 0x2b8)

return result
