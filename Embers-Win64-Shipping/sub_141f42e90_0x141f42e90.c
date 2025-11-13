// 函数: sub_141f42e90
// 地址: 0x141f42e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = arg2
sub_141ee9820(arg1)
uint64_t result = zx.q(*(arg1 + 0x17c))
arg1[0x2f].d = 0
int32_t temp0 = result.d

if (temp0 s< 0 && temp0 != 0)
    result = sub_1405c5570(&arg1[0x2e], 0)

if (data_143de5444 == 0)
    int32_t rax = arg1[0x1b].d
    int64_t i = arg1[0x14]
    
    if (rbx != 0)
        int64_t* rbx_1 = nullptr
        int32_t rsi_1 = 0
        int64_t r12
        r12.b = 0
        int64_t r13_1 = 0
        int64_t var_48 = 0
        int32_t r15_1 = 0
        int64_t var_40_1 = 0
        
        if (rax s> 0)
            sub_1405c5570(&var_48, rax)
            r15_1 = var_40_1.d
            r13_1 = var_48
            
            do
                int64_t rax_1 = sx.q(arg1[0x1b].d)
                int32_t rdx_1 = (rax_1 - 1).d
                int64_t* rsi_2 = *(arg1[0x1a] + (rax_1 << 3) - 8)
                
                if (rsi_2 == 0 || rsi_2[0x14] == i)
                    arg1[0x1b].d = rdx_1
                    
                    if (rsi_2 != 0)
                        int64_t rbp_1 = sx.q(r15_1)
                        r15_1 = (rbp_1 + 1).d
                        var_40_1.d = r15_1
                        
                        if (r15_1 s> var_40_1:4.d)
                            sub_1405a4d70(&var_48)
                            r15_1 = var_40_1.d
                            r13_1 = var_48
                        
                        *(r13_1 + (rbp_1 << 3)) = rsi_2
                else
                    int64_t rax_3 = rsi_2[0x18]
                    
                    if (rax_3 == 0 || rax_3 != arg1)
                        arg1[0x1b].d = rdx_1
                    else
                        if (r12.b == 0)
                            rbx_1 = arg1[0x18]
                            
                            if (rbx_1 != 0)
                                while (rbx_1[0x14] == i)
                                    rbx_1 = rbx_1[0x18]
                                    
                                    if (rbx_1 == 0)
                                        break
                            
                            r12.b = 1
                        
                        char rax_4
                        
                        if (rbx_1 != 0)
                            rax_4 = sub_141f32b40(rsi_2, rbx_1, &data_143a2de48, 0)
                        
                        if (rbx_1 == 0 || rax_4 == 0)
                            (*(*rsi_2 + 0x400))(rsi_2, &data_143a2de54)
            while (arg1[0x1b].d s> 0)
            
            rsi_1 = var_40_1:4.d
        
        if (&arg1[0x1a] != &var_48)
            int64_t rcx_6 = arg1[0x1a]
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            arg1[0x1a] = r13_1
            arg1[0x1b].d = r15_1
            *(arg1 + 0xdc) = rsi_1
        else if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        rbx = arg2
    else if (rax s> 0)
        do
            int64_t rax_7 = sx.q(arg1[0x1b].d)
            int64_t* rbx_3 = *(arg1[0x1a] + (rax_7 << 3) - 8)
            int64_t rax_9
            
            if (rbx_3 != 0)
                rax_9 = rbx_3[0x18]
            
            if (rbx_3 == 0 || rax_9 == 0 || rax_9 != arg1)
                arg1[0x1b].d = (rax_7 - 1).d
            else
                int64_t* rdx_5 = arg1[0x18]
                char rax_10
                
                if (rdx_5 != 0)
                    int64_t arg_8 = 0
                    rax_10 = sub_141f32b40(rbx_3, rdx_5, &data_143a2de48, 0)
                
                if (rdx_5 == 0 || rax_10 == 0)
                    (*(*rbx_3 + 0x400))(rbx_3, &data_143a2de54)
        while (arg1[0x1b].d s> 0)
        
        rbx = arg2
    
    result = arg1[0x18]
    
    if (result != 0 && (rbx == 0 || *(result + 0xa0) != i))
        return (*(*arg1 + 0x400))(arg1, &data_143a2de54)

return result
