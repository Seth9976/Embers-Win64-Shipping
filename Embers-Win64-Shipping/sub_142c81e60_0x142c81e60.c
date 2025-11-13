// 函数: sub_142c81e60
// 地址: 0x142c81e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
char* string = *(rbx + 0x4e38)
char* rax = strrchr(string, 0x2f)

if (rax == 0)
    if (*string == 0)
        *(rbx + 0x4ea0) = 4
        return sub_142c7e6d0(arg1)
    
    int64_t rax_2 = data_143ccb8b0(string)
    *(rbx + 0x4eb0) = rax_2
    
    if (rax_2 != 0)
        *string = 0
    label_142c81ef8:
        int64_t* rax_3 = data_143ccb8b8(1, 0x18)
        
        if (rax_3 != 0)
            int64_t rax_4 = sub_142c90c20()
            *rax_3 = rax_4
            
            if (rax_4 == 0)
                data_143ccb8a0(*(rbx + 0x4eb0))
                *(rbx + 0x4eb0) = 0
                data_143ccb8a0(rax_3)
                return 0x1b
            
            *(rbx + 0x4ed8) = rax_3
            *(rbx + 0x4ee0) = sub_142c82090
            void* rax_5 = *arg1
            
            if (*(rax_5 + 0x5c0) == 2)
                *(rax_5 + 0x5c0) = 1
            
            int32_t result_1
            int512_t zmm2_1
            result_1, zmm2_1 = sub_142c7e6d0(arg1)
            uint64_t result
            
            if (result_1 == 0)
                int64_t rax_6
                int64_t r8_1
                rax_6, r8_1 = data_143ccb8b0(*(*arg1 + 0x4e38))
                *(rbx + 0x4ea8) = rax_6
                
                if (rax_6 != 0)
                    rax_3[1] = *(*arg1 + 0x2d8)
                    *(*arg1 + 0x2d8) = sub_142c90040
                    rax_3[2] = *(*arg1 + 0x278)
                    *(*arg1 + 0x278) = arg1
                    sub_142c64850(*arg1, "Wildcard - Parsing started\n", r8_1, zmm2_1)
                    return 0
                
                data_143ccb8a0(*(rbx + 0x4eb0))
                int64_t rcx_13 = *(rbx + 0x4ed8)
                *(rbx + 0x4eb0) = 0
                (*(rbx + 0x4ee0))(rcx_13)
                result = 0x1b
                *(rbx + 0x4ee0) = 0
                *(rbx + 0x4ed8) = 0
            else
                data_143ccb8a0(*(rbx + 0x4eb0))
                int64_t rcx_9 = *(rbx + 0x4ed8)
                *(rbx + 0x4eb0) = 0
                (*(rbx + 0x4ee0))(rcx_9)
                result = zx.q(result_1)
                *(rbx + 0x4ee0) = 0
                *(rbx + 0x4ed8) = 0
            
            return result
        
        data_143ccb8a0(*(rbx + 0x4eb0))
        *(rbx + 0x4eb0) = 0
else
    if (rax[1] == 0)
        *(rbx + 0x4ea0) = 4
        return sub_142c7e6d0(arg1)
    
    int64_t rax_1 = data_143ccb8b0(&rax[1])
    *(rbx + 0x4eb0) = rax_1
    
    if (rax_1 != 0)
        rax[1] = 0
        goto label_142c81ef8

return 0x1b
