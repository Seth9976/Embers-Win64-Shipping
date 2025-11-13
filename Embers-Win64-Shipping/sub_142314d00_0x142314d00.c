// 函数: sub_142314d00
// 地址: 0x142314d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx
void* arg_10 = rbx
int32_t arg_8 = 0
int32_t rdi = 0
int32_t i = 0

if (*(arg1 + 0x160) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* result = *(r14_1 + *(arg1 + 0x158))
        int64_t var_48
        char rax_8
        
        if (result != 0)
            rdi |= 1
            arg_8.q = 0
            int64_t var_50
            __builtin_memset(&var_50, 0, 0x18)
            int32_t var_60 = 0xffffffff
            int64_t var_5c_1 = 0
            
            if (arg2 == 0)
                var_50 = 0
            else
                void var_78
                int64_t* rax_2 = sub_140d21d60(&var_78, arg2)
                var_50 = *rax_2
                
                if (&var_48 != &rax_2[1])
                    int64_t rcx_1 = var_48
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    var_48 = rax_2[1]
                    rax_2[1] = 0
                    int64_t var_40_1
                    var_40_1.d = rax_2[2].d
                    var_40_1:4.d = *(rax_2 + 0x14)
                    rax_2[2] = 0
                
                int64_t var_70
                
                if (var_70 != 0)
                    sub_140a74f90(var_70)
                
                sub_140d3a3a0(&var_60, arg2)
                int32_t rax_7 = 0
                
                if (0 == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_7 = data_1439aaa30
                
                var_5c_1:4.d = rax_7
            
            rax_8 = sub_140d16af0(result + 0x128, &var_50)
        
        if (result == 0 || rax_8 == 0)
            rbx.b = 0
        else
            rbx.b = 1
        
        if ((rdi.b & 1) != 0)
            int64_t rcx_5 = var_48
            rdi &= 0xfffffffe
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
        
        if (rbx.b != 0)
            return result
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x160))

return nullptr
