// 函数: sub_140bc7fd0
// 地址: 0x140bc7fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[2]
int64_t result

if (*arg2 == 0)
    if (rbx != 0)
        uint8_t rax_4
        
        if (arg3 != 0)
            rax_4 = sub_140bc3640(arg1)
        
        if (arg3 == 0 || rax_4 == 0)
            int64_t rax_11 = sub_140bc7f20(arg1)
            uint32_t count_1 = rax_11.d
            int64_t rax_12 = sub_140a82f30(rax_11, 0)
            *arg2 = rax_12
            
            if (((arg1[3].d u>> 0x11).b & 1) == 0)
                return memcpy(rax_12, arg1[2], count_1)
            
            int64_t* rax_13 = arg1[2]
            int64_t rbx_2
            
            if (rax_13 == 0)
                rbx_2 = 0
            else
                rbx_2 = *rax_13
                
                if (rbx_2 == 0)
                    void* rbx_3 = rax_13[2]
                    
                    if (rbx_3 != 0)
                        return memcpy(rax_12, *(rbx_3 + 8), count_1)
                    
                    rbx_2 = 0
            
            return memcpy(rax_12, rbx_2, count_1)
        
        if (((arg1[3].d u>> 0x11).b & 1) != 0)
            int64_t* r15_1 = arg1[2]
            int64_t rax_7 = sub_140bc7f20(arg1)
            int64_t rax_8 = sub_140a82f30(rax_7, 0)
            *arg2 = rax_8
            int64_t rdx_2 = *r15_1
            
            if (rdx_2 == 0)
                void* rdx_3 = r15_1[2]
                
                if (rdx_3 == 0)
                    rdx_2 = 0
                else
                    rdx_2 = *(rdx_3 + 8)
            
            memcpy(rax_8, rdx_2, rax_7.d)
            int64_t rcx_7 = *r15_1
            
            if (rcx_7 == 0)
                int64_t* rcx_8 = r15_1[2]
                
                if (rcx_8 != 0)
                label_140bc810d:
                    (**rcx_8)(rcx_8, 1)
                label_140bc810f:
                    int64_t* rcx_9 = r15_1[1]
                    
                    if (rcx_9 != 0)
                        (**rcx_9)(rcx_9, 1)
                else if (r15_1[1] != 0)
                    if (rcx_8 == 0)
                        goto label_140bc810f
                    
                    goto label_140bc810d
            else
                sub_140a74f90(rcx_7)
            
            result = j_sub_140a74f90(r15_1)
            arg1[2] = 0
            arg1[3].d &= 0xfffdffff
        else
            result = arg1[2]
            int64_t rcx_3 = *arg2
            *arg2 = result
            arg1[2] = rcx_3
        
        return result
else if (rbx != 0)
    if (((arg1[3].d u>> 0x11).b & 1) != 0)
        int64_t* rax_3 = rbx
        rbx = *rbx
        
        if (rbx == 0)
            rbx = rax_3[2]
            
            if (rbx != 0)
                rbx = rbx[1]
    
    uint32_t count = sub_140bc7f20(arg1)
    result = memcpy(*arg2, rbx, count)
    
    if (arg3 != 0)
        result = sub_140bc3640(arg1)
        
        if (result.b != 0)
            return sub_140bc78f0(&arg1[2], arg1)
    
    return result
return sub_140bcaa40(arg1, arg2)
