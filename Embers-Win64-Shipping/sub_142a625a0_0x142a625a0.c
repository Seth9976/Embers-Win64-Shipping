// 函数: sub_142a625a0
// 地址: 0x142a625a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_20 = nullptr
char* var_28 = arg2

if (arg4 != 0 && *arg4 s<= 0)
    if (arg1 != 0)
        int32_t rdx = *(arg1 + 0xac)
        uint32_t rcx_1 = rdx u>> 0x1c
        
        if (((rcx_1 - 2) & 0xfffffffc) != 0 || rcx_1 == 3)
            *arg4 = 0x11
            return arg3
        
        void arg_20
        int32_t rax_2 = sub_142ac3d30(&arg1[5], rdx, &arg_20, &var_28)
        int32_t arg_10 = rax_2
        int32_t rdx_1 = rax_2
        void* var_58_2
        char** var_50_1
        char** var_40_1
        int32_t* var_38_1
        void* rcx_5
        char* r8_2
        
        if (rax_2 != 0xffffffff)
            rcx_5 = &arg1[5]
            r8_2 = var_28
            var_38_1 = arg4
            var_40_1 = arg3
            int32_t var_48_2 = 0
            var_50_1 = arg1
            var_58_2 = arg1[1]
        else
            bool cond:0_1 = arg1[0x16].b != 1
            var_28 = arg2
            void* rax_3
            
            if (not(cond:0_1))
                rax_3 = sub_142a605d0(arg1, &var_28, &var_20, &arg_10, arg4)
            
            if (cond:0_1 || *arg4 s> 0)
                *arg4 = 2
                return arg3
            
            r8_2 = var_28
            rdx_1 = arg_10
            var_38_1 = arg4
            var_40_1 = arg3
            int32_t var_48_1 = 0
            var_50_1 = arg1
            var_58_2 = var_20
            rcx_5 = rax_3
        
        return sub_142a60bf0(rcx_5, rdx_1, r8_2, 0xffffffff, var_58_2, var_50_1, 0, var_40_1, 
            var_38_1)
    
    *arg4 = 1

return arg3
