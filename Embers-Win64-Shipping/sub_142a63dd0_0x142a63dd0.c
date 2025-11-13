// 函数: sub_142a63dd0
// 地址: 0x142a63dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* var_28 = arg2

if (arg4 != 0 && *arg4 s<= 0)
    if (arg1 != 0)
        int32_t rdx = *(arg1 + 0xac)
        uint32_t rcx_1 = rdx u>> 0x1c
        
        if (((rcx_1 - 2) & 0xfffffffc) != 0 || rcx_1 == 3)
            *arg4 = 0x11
            return nullptr
        
        int32_t arg_20 = 0
        int32_t rax_2 = sub_142ac3d30(&arg1[5], rdx, &arg_20, &var_28)
        int32_t arg_10 = rax_2
        int32_t rdx_1 = rax_2
        void* rcx_6
        int32_t* r8_2
        
        if (rax_2 != 0xffffffff)
            uint32_t rax_5 = rax_2 u>> 0x1c
            
            if (rax_5 == 0)
                r8_2 = arg3
                rcx_6 = &arg1[5]
            else
                if (rax_5 == 3)
                label_142a63ef4:
                    char** rax_6 = sub_142a625a0(arg1, arg2, nullptr, arg4)
                    void* result = sub_142a63f30(rax_6, arg3, arg4)
                    sub_142a61820(rax_6, 1)
                    return result
                
                if (rax_5 != 6)
                    *arg4 = 0x11
                    return nullptr
                
                r8_2 = arg3
                rcx_6 = &arg1[5]
        else
            bool cond:0_1 = arg1[0x16].b != 1
            var_28 = arg2
            void* rax_3
            void* var_20
            
            if (not(cond:0_1))
                rax_3 = sub_142a605d0(arg1, &var_28, &var_20, &arg_10, arg4)
            
            if (cond:0_1 || *arg4 s> 0)
                *arg4 = 2
                return nullptr
            
            rdx_1 = arg_10
            uint32_t rcx_5 = rdx_1 u>> 0x1c
            
            if (rcx_5 == 0)
                r8_2 = arg3
                rcx_6 = rax_3
            else
                if (rcx_5 == 3)
                    goto label_142a63ef4
                
                if (rcx_5 != 6)
                    *arg4 = 0x11
                    return nullptr
                
                r8_2 = arg3
                rcx_6 = rax_3
        
        return sub_142ac3aa0(rcx_6, rdx_1, r8_2)
    
    *arg4 = 1

return 0
