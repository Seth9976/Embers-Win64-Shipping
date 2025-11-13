// 函数: sub_142a38150
// 地址: 0x142a38150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[1]
void** rax = *(rbx + 0xa0)
void* i_1

if (rax == 0 || *(rbx + 0xa8) s<= 0)
    i_1 = rbx + 0x20
else
    i_1 = *rax

int32_t rbp = 0

if (i_1 != 0)
    void* i
    
    do
        int64_t arg_8
        void arg_18
        
        if (*i_1 == 0)
            int64_t* rbx_1 = arg1[1]
            int64_t rcx_8 = rbx_1[3]
            int64_t rax_15
            bool cond:0_1
            
            if (rcx_8 s>= 0)
                cond:0_1 = rbx_1[0xc] s>= rcx_8 + rbx_1[2]
            label_142a382ec:
                rax_15.b = cond:0_1
                
                if (rax_15.b == 0)
                    *arg2 = 0
                    return 0xfffffffd
            else
                int64_t* rcx_9 = *rbx_1
                
                if ((*(*rcx_9 + 8))(rcx_9, &arg_8, &arg_18) s>= 0)
                    rax_15 = arg_8
                    
                    if (rax_15 s< 0)
                        *arg2 = 0
                        return 0xfffffffd
                    
                    cond:0_1 = rbx_1[0xc] s>= rax_15
                    goto label_142a382ec
            break
        
        if (*(i_1 + 0x3c) s> 0)
        label_142a381d8:
            int64_t rcx_1 = **(i_1 + 0x30)
            *arg2 = rcx_1
            
            if (rcx_1 != 0)
                while (true)
                    int64_t* rcx_2 = *arg2
                    
                    if (*((*(*rcx_2 + 8))(rcx_2) + 0x10) == sx.q(*(arg1 + 0x24))
                            && (*(*arg1 + 8))(arg1, *arg2) != 0)
                        return 0
                    
                    int64_t rdi_2 = sx.q(*(*arg2 + 0x10)) + 1
                    
                    if (rdi_2 u>= sx.q(*(i_1 + 0x3c)))
                        void var_38
                        int32_t rax_9
                        rax_9, arg3 = sub_142a39d10(i_1, &var_38, &arg_18, arg3)
                        
                        if (rax_9 s< 0)
                            return rax_9
                        
                        if (rax_9 s> 0)
                            break
                    
                    int64_t rcx_6 = *(*(i_1 + 0x30) + (rdi_2 << 3))
                    
                    if (rcx_6 == 0)
                        break
                    
                    *arg2 = rcx_6
                
                rbp += 1
                
                if (rbp s>= 0x64)
                    break
        else
            void arg_20
            int32_t rax_1
            rax_1, arg3 = sub_142a39d10(i_1, &arg_20, &arg_8, arg3)
            
            if (rax_1 s< 0)
                *arg2 = 0
                return rax_1
            
            if (*(i_1 + 0x3c) s> 0)
                goto label_142a381d8
            
            *arg2 = 0
        
        i, arg3 = sub_142a383c0(arg1[1], i_1, arg3)
        i_1 = i
    while (i != 0)

*arg2 = &arg1[0x12]
return 1
