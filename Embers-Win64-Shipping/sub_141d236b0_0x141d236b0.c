// 函数: sub_141d236b0
// 地址: 0x141d236b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rbx = arg2

if (arg2[1].d != 0)
    sub_141d1f690(arg1, data_143f36fc8)
    uint64_t i_6 = 0
    int32_t rdi_1 = 0
    void** result_1 = nullptr
    int32_t i = 0
    int32_t var_3c_1 = 0
    
    if (rbx[1].d s> 0)
        void* r14_1 = nullptr
        
        do
            int64_t rbx_1 = sx.q(*(r14_1 + *rbx))
            
            if (rbx_1.d s>= 0 && rbx_1.d s< (*(arg1[0x4f] + 0x48))(&arg1[0x4f]))
                int32_t* r12_1 = arg1[0x50]
                
                if (r12_1[rbx_1] != 0xffffffff)
                    int64_t rbx_2 = sx.q(rdi_1)
                    rdi_1 = (rbx_2 + 1).d
                    
                    if (rdi_1 s> var_3c_1)
                        sub_1405a4cf0(&result_1)
                    
                    *(result_1 + (rbx_2 << 2)) = r12_1[rbx_1]
            
            rbx = arg2
            i += 1
            r14_1 += 4
        while (i s< rbx[1].d)
        
        i_6 = 0
    
    int64_t rdx_3 = data_143f37078
    int64_t rsi_1 = 0
    int64_t var_78 = 0
    int32_t var_6c_1 = 0
    int32_t i_12 = sub_141d1f690(arg1, rdx_3)
    uint64_t i_10 = zx.q(i_12)
    int32_t rbx_3 = 0
    int32_t var_70_1 = 0
    
    if (i_12 != 0)
        sub_1405c5510(&var_78, i_10.d)
        rbx_3 = var_70_1
        rsi_1 = var_78
    
    if (i_10.d s> 0)
        i_6 = i_10
        uint64_t i_1
        
        do
            int64_t r14_2 = sx.q(rbx_3)
            rbx_3 = (r14_2 + 1).d
            
            if (rbx_3 s> var_6c_1)
                sub_140679a80(&var_78)
                rsi_1 = var_78
            
            if (r14_2 != neg.q(rsi_1))
                *(r14_2 + rsi_1) = 0
            
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
    
    int32_t rdx_6 = i_6.d
    
    if (rdi_1 s> 0)
        void** result_2 = result_1
        
        do
            int64_t rax_6 = sx.q(*result_2)
            
            if (rax_6.d s>= i_10.d)
                break
            
            rdx_6 += 1
            *(rax_6 + rsi_1) = 1
            result_2 += 4
        while (rdx_6 s< rdi_1)
    
    int64_t rax_7 = arg1[0x40]
    uint64_t i_7 = i_6
    int32_t r14_3 = i_6.d
    int64_t var_60_1 = 0
    
    if ((*(rax_7 + 0x48))(&arg1[0x40]) s> 0)
        int32_t rax_14
        
        do
            int64_t rcx_6 = sx.q(*(i_6 + arg1[0x41]))
            
            if (rcx_6.d != sx.d(data_143a21158) && rcx_6.d s< rbx_3 && *(rcx_6 + rsi_1) != 0)
                int64_t rdi_2 = sx.q(var_60_1.d)
                int32_t rax_11 = (rdi_2 + 1).d
                var_60_1.d = rax_11
                
                if (rax_11 s> var_60_1:4.d)
                    sub_1405a4cf0(&i_7)
                
                *(i_7 + (rdi_2 << 2)) = r14_3
            
            r14_3 += 1
            i_6 += 4
            rax_14 = (*(arg1[0x40] + 0x48))(&arg1[0x40])
        while (r14_3 s< rax_14)
        i_6 = 0
    
    sub_140625cf0(i_7, var_60_1.d)
    int32_t i_13 = sub_141d1f690(arg1, data_143f36fd0)
    uint64_t i_11 = zx.q(i_13)
    int32_t var_70_3 = i_6.d
    
    if (var_6c_1 != i_13)
        sub_1405c5510(&var_78, i_11.d)
        rsi_1 = var_78
    
    if (i_11.d s> 0)
        uint64_t i_5 = i_11
        uint64_t i_2
        
        do
            int64_t rbx_4 = sx.q(var_70_3)
            int32_t rax_15 = (rbx_4 + 1).d
            var_70_3 = rax_15
            
            if (rax_15 s> var_6c_1)
                sub_140679a80(&var_78)
                rsi_1 = var_78
            
            if (rbx_4 != neg.q(rsi_1))
                *(rbx_4 + rsi_1) = 0
            
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    int32_t i_3 = i_6.d
    
    if (var_60_1.d s> 0)
        uint64_t i_9 = i_6
        
        do
            int64_t r8_2 = sx.q(*(i_9 + i_7))
            
            if (r8_2.d s>= i_11.d)
                break
            
            i_3 += 1
            *(r8_2 + rsi_1) = 1
            i_9 += 4
        while (i_3 s< var_60_1.d)
    
    int64_t rax_19 = arg1[0x43]
    uint64_t i_8 = i_6
    int32_t rdi_3 = i_6.d
    int64_t var_50_1 = 0
    
    if ((*(rax_19 + 0x48))(&arg1[0x43]) s> 0)
        int32_t rax_24
        
        do
            for (int64_t i_4 = 0; i_4 s< 3; i_4 += 1)
                if (*(sx.q(*(arg1[0x44] + i_6 + (i_4 << 2))) + rsi_1) != 0)
                    int64_t rbx_5 = sx.q(var_50_1.d)
                    int32_t rax_21 = (rbx_5 + 1).d
                    var_50_1.d = rax_21
                    
                    if (rax_21 s> var_50_1:4.d)
                        sub_1405a4cf0(&i_8)
                    
                    *(i_8 + (rbx_5 << 2)) = rdi_3
                    break
            
            rdi_3 += 1
            i_6 += 0xc
            rax_24 = (*(arg1[0x43] + 0x48))(&arg1[0x43])
        while (rdi_3 s< rax_24)
    
    sub_140625cf0(i_8, var_50_1.d)
    int64_t* rbx_6 = arg2
    int16_t arg_18 = 0x101
    sub_141d227f0(arg1, &data_143f36fc8, rbx_6, 0x101)
    arg_18 = 0x101
    sub_141d227f0(arg1, &data_143f36fd0, &i_7, 0x101)
    arg_18 = 0x101
    sub_141d227f0(arg1, &data_143f36fc0, &i_8, 0x101)
    int32_t rax_25 = rbx_6[1].d
    int64_t r12_2 = sx.q(rax_25 - 1)
    
    if (rax_25 - 1 s>= 0)
        int64_t temp5_1
        
        do
            int32_t rdi_4 = 0
            int32_t r15_2 = *(*rbx_6 + (r12_2 << 2))
            
            if ((*(arg1[0x25] + 0x48))(&arg1[0x25]) s> 0)
                int64_t rbx_7 = 0
                int32_t rax_33
                
                do
                    int32_t* rcx_22 = arg1[0x26]
                    int32_t rax_30 = *(rcx_22 + rbx_7)
                    
                    if (rax_30 s>= r15_2)
                        *(rcx_22 + rbx_7) = rax_30 - 1
                    
                    rdi_4 += 1
                    rbx_7 += 4
                    rax_33 = (*(arg1[0x25] + 0x48))(&arg1[0x25])
                while (rdi_4 s< rax_33)
                rbx_6 = arg2
            
            temp5_1 = r12_2
            r12_2 -= 1
        while (temp5_1 - 1 s>= 0)
    
    sub_141d204b0(arg1)
    uint64_t i_14 = i_8
    
    if (i_14 != 0)
        sub_140a74f90(i_14)
    
    uint64_t i_15 = i_7
    
    if (i_15 != 0)
        sub_140a74f90(i_15)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    result = result_1
    
    if (result != 0)
        return sub_140a74f90(result)

return result
