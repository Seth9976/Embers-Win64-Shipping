// 函数: sub_141ba7ec0
// 地址: 0x141ba7ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f313d8 == 0)
    int64_t var_38 = 0
    int32_t var_30_1 = 0
    int32_t var_28_1 = 0xffffffff
    sub_140d3cc80(sub_140bdf2e0(), &var_38, 1, 0x10, 0)
    int32_t r8_2 = var_30_1
    int32_t i = var_28_1 + 1
    int64_t rdx_1 = var_38
    int32_t i_1 = i
    
    if (i s< r8_2)
        while (*(rdx_1 + (sx.q(i) << 3)) == 0)
            int32_t i_2 = i + 1
            i_1 = i_2
            i = i_2
            
            if (i_2 s>= r8_2)
                break
    
    while (i s>= 0)
        if (i s>= r8_2)
            break
        
        void* rax_3 = sub_141c062e0()
        rdx_1 = var_38
        
        if (rax_3 != 0)
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            void* rbx_2 = *(rdx_1 + (sx.q(i_1) << 3))
            
            if (rax_4.d s<= *(rbx_2 + 0x38) && *(*(rbx_2 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
                int64_t rdi_1 = sx.q(data_143f313d8)
                int32_t rax_6 = (rdi_1 + 1).d
                bool cond:2_1 = rax_6 s<= data_143f313dc
                data_143f313d8 = rax_6
                
                if (not(cond:2_1))
                    sub_1405a4d70(&data_143f313d0)
                
                *(data_143f313d0 + (rdi_1 << 3)) = rbx_2
                rdx_1 = var_38
        
        r8_2 = var_30_1
        i = i_1 + 1
        i_1 = i
        
        if (i s< r8_2)
            while (*(rdx_1 + (sx.q(i) << 3)) == 0)
                int32_t i_3 = i + 1
                i_1 = i_3
                i = i_3
                
                if (i_3 s>= r8_2)
                    break
    
    if (rdx_1 != 0)
        sub_140a74f90(rdx_1)

int32_t rdi_2 = 0

if (data_143f313d8 s<= 0)
label_141ba8097:
    *arg1 = 0
else
    int64_t rsi_1 = 0
    
    while (true)
        int64_t* rbx_3 = data_143f313d0
        int64_t* rbx_4
        
        if (*(rbx_3 + rsi_1) == 0)
            rbx_4 = nullptr
        else
            void* rax_9 = sub_141c062e0()
            
            if (rax_9 == 0)
                rbx_4 = nullptr
            else
                rbx_4 = *(rbx_3 + rsi_1)
                int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                
                if (rax_10.d s> rbx_4[7].d || *(rbx_4[6] + (rax_10 << 3)) != rax_9 + 0x30)
                    rbx_4 = nullptr
        
        int64_t* rcx_7 = rbx_4[0x23]
        
        if (rcx_7 == 0)
            (*(*rbx_4 + 0x390))(rbx_4)
            rcx_7 = rbx_4[0x23]
        
        if ((*(*rcx_7 + 0x268))(rcx_7, arg2) != 0)
            *arg1 = *(data_143f313d0 + (sx.q(rdi_2) << 3))
            break
        
        rdi_2 += 1
        rsi_1 += 8
        
        if (rdi_2 s>= data_143f313d8)
            goto label_141ba8097

return arg1
