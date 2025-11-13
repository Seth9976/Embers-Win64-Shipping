// 函数: sub_140b1f110
// 地址: 0x140b1f110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
char arg_10 = 0
char r15 = 0
int64_t var_108
(*(*arg2 + 0x10))(arg2, &var_108)
int64_t rcx_1 = var_108

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

uint64_t result = (*(*arg2 + 0x28))(arg2)

if (result != 0)
    if ((*(*arg2 + 0x20))(arg2) == 0)
        char* rax_3 = sub_140a82f30(result, 0)
        int64_t r9_1 = *arg2
        (*(r9_1 + 0x150))(arg2, rax_3, result, r9_1)
        int64_t rdx_2 = *arg2
        char rax_4 = (*(rdx_2 + 0x1b8))(arg2, rdx_2)
        sub_140b0e940(arg1, rax_3, result.d)
        int16_t* const rdi_1 = &data_142d40450
        char rax_7
        
        if ((arg3.b & 1) != 0 && ((arg3 u>> 1).b & 1) == 0)
            int64_t* rax_6 = (*(*arg2 + 0x10))(arg2, &var_108)
            int16_t* rcx_10
            
            if (rax_6[1].d == 0)
                rcx_10 = &data_142d40450
            else
                rcx_10 = *rax_6
            
            r15 = 1
            rax_7 = sub_140b3d910(rcx_10, nullptr, 1)
        
        uint32_t r14
        
        if ((arg3.b & 1) == 0 || (((arg3 u>> 1).b & 1) == 0 && rax_7 == 0))
            r14.b = 0
        else
            r14.b = 1
        
        if ((r15 & 1) != 0)
            int64_t rcx_11 = var_108
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
        
        if (r14.b == 0)
            sub_140a74f90(rax_3)
        else
            int16_t** rax_9 = (*(*arg2 + 0x10))(arg2, &var_108)
            
            if (rax_9[1].d != 0)
                rdi_1 = *rax_9
            
            void** var_f8
            sub_140b4c2a0(&var_f8)
            char* var_68_1 = rax_3
            var_f8 = &data_142d84578
            int64_t var_60_1 = 0
            uint64_t result_1 = result
            char var_50_1 = 1
            sub_140b55290(&var_f8, 1)
            var_f8[0x1b](&var_f8, 0)
            int64_t var_48 = 0
            var_f8 = &data_142e75590
            int32_t rcx_16 = 0
            int32_t var_3c_1 = 0
            int32_t var_40_1 = 0
            
            if (rdi_1 != 0 && *rdi_1 != 0)
                int64_t rbx_1 = -1
                
                do
                    rbx_1 += 1
                while (rdi_1[rbx_1] != 0)
                
                if (rbx_1.d + 1 s> 0)
                    sub_1405947f0(&var_48, rbx_1.d + 1)
                    rcx_16 = var_3c_1
                    rsi = var_40_1
                
                int32_t rax_11 = rbx_1.d + 1 + rsi
                int32_t var_40_2 = rax_11
                
                if (rax_11 s> rcx_16)
                    sub_140594770(&var_48)
                
                UnDecorator::getReferenceType(var_48, rdi_1, (rbx_1.d + 1) * 2)
            
            int64_t rcx_20 = var_108
            char var_38_1 = 1
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            sub_140b0ba10(&var_f8)
        
        return zx.q(rax_4)
    
    result.b = 0
else
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != 0)
        sub_1405947f0(arg1, 0)
    
    result.b = 1

return result
