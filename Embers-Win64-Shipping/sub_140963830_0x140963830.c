// 函数: sub_140963830
// 地址: 0x140963830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[7].d

if (rcx s> 1)
    if (arg1[8] == data_143ced2c0)
        if ((*(*arg1 + 0x310))(arg1, zx.q(*arg2)) + arg2[0xe] s> *(arg1 + 0x3c))
            return 0xffffffff
        
        return zx.q(*arg2)
    
    int32_t* rbx_1 = nullptr
    int32_t* var_38 = nullptr
    int32_t rdi_1 = 0
    int32_t var_2c_1 = 0
    int32_t r15_1 = 0
    int32_t i = 0
    
    if (rcx s> 0)
        do
            int32_t rax_8 = (*(*arg1 + 0x310))(arg1, zx.q(i))
            
            if (arg2[0xe] + rax_8 s<= *(arg1 + 0x3c))
                int64_t rbp_1 = sx.q(rdi_1)
                rdi_1 = (rbp_1 + 1).d
                
                if (rdi_1 s> r15_1)
                    sub_1405a4d70(&var_38)
                    r15_1 = var_2c_1
                    rbx_1 = var_38
                
                int32_t* rcx_4 = &rbx_1[rbp_1 * 2]
                
                if (rcx_4 != 0)
                    *rcx_4 = i
                    rcx_4[1] = rax_8
            
            i += 1
        while (i s< arg1[7].d)
    
    int32_t rdi_2
    
    if (rcx s<= 0 || rdi_1 s<= 0)
        rdi_2 = -1
    label_1409639d3:
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        return zx.q(rdi_2)
    
    int64_t rax_9 = arg1[8]
    
    if (rax_9 == data_143ced2a8)
        sub_140947710(rbx_1, rdi_1, arg3)
        rdi_2 = *rbx_1
        goto label_1409639d3
    
    if (rax_9 == data_143ced2b0)
        sub_140947710(rbx_1, rdi_1, arg3)
        rdi_2 = rbx_1[sx.q(rdi_1 - 1) * 2]
        goto label_1409639d3
    
    if (rax_9 == data_143ced2b8)
        rdi_2 = rbx_1[sx.q(mods.dp.d(sx.q(rand()), rdi_1)) * 2]
        goto label_1409639d3
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

return zx.q(*(arg1 + 0x4c))
