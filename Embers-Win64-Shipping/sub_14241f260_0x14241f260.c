// 函数: sub_14241f260
// 地址: 0x14241f260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(data_143f5b930)

if (arg1[2].b == result.b)
    sub_140597df0(&data_143f5bb48, arg1)
    uint64_t rbp
    rbp.b = 0
    int32_t rdx_2 = data_143a30480
    int32_t rcx_1 = data_143a3048c + 1
    data_143f5bb58 = arg1[2].b
    data_143a3048c = rcx_1
    int64_t rdi_1 = sx.q(rdx_2 - 1)
    
    if (rdx_2 - 1 s>= 0)
        int64_t rbx_2 = rdi_1 << 4
        int64_t temp0_1
        
        do
            int64_t rax_2 = data_143a30478
            
            if (*(rbx_2 + rax_2 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_2 = *(rbx_2 + rax_2)
                
                if (rcx_2 == 0)
                    rbp.b = 1
                else if ((*(*rcx_2 + 0x50))(rcx_2, &data_143f5bb48) == 0)
                    rbp.b = 1
            
            rbx_2 -= 0x10
            temp0_1 = rdi_1
            rdi_1 -= 1
        while (temp0_1 - 1 s>= 0)
        rcx_1 = data_143a3048c
        rdx_2 = data_143a30480
    
    int32_t rsi_1 = 0
    data_143a3048c = rcx_1 - 1
    
    if (rbp.b != 0 && rcx_1 - 1 s<= 0)
        rbp = zx.q(rdx_2)
        int32_t rbx_3 = 0
        
        if (rdx_2 s> 0)
            int64_t* rdi_2 = nullptr
            
            do
                int64_t rax_5 = data_143a30478
                
                if (*(rdi_2 + rax_5 + 8) == 0)
                    sub_1405a4880(&data_143a30478, rbx_3, 1, 1)
                else
                    int64_t* rcx_4 = *(rdi_2 + rax_5)
                    
                    if (rcx_4 == 0)
                        sub_1405a4880(&data_143a30478, rbx_3, 1, 1)
                    else if ((*(*rcx_4 + 0x20))(rcx_4) != 0)
                        sub_1405a4880(&data_143a30478, rbx_3, 1, 1)
                    else
                        rbx_3 += 1
                        rdi_2 = &rdi_2[2]
                
                rdx_2 = data_143a30480
            while (rbx_3 s< rdx_2)
        
        int32_t rax_8 = rdx_2 * 2
        
        if (rax_8 s<= 2)
            rax_8 = 2
        
        data_143a30488 = rax_8
        
        if (rbp.d s> rax_8 && data_143a30484 != rdx_2)
            sub_1405a5410(&data_143a30478, rdx_2)
    
    rbp.b = 0
    int32_t rdx_4 = data_1439a0278
    int32_t rcx_6 = data_1439a0284 + 1
    data_1439a0284 = rcx_6
    result = zx.q(rdx_4 - 1)
    int64_t rbx_4 = sx.q(result.d)
    
    if (result.d s>= 0)
        int64_t rdi_4 = rbx_4 << 4
        int64_t temp1_1
        
        do
            result = data_1439a0270
            
            if (*(rdi_4 + result + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_7 = *(rdi_4 + result)
                
                if (rcx_7 == 0)
                    rbp.b = 1
                else
                    result = (*(*rcx_7 + 0x50))(rcx_7, &data_143f5bb48)
                    
                    if (result.b == 0)
                        rbp.b = 1
            
            rdi_4 -= 0x10
            temp1_1 = rbx_4
            rbx_4 -= 1
        while (temp1_1 - 1 s>= 0)
        rcx_6 = data_1439a0284
        rdx_4 = data_1439a0278
    
    data_1439a0284 = rcx_6 - 1
    
    if (rbp.b != 0 && rcx_6 - 1 s<= 0)
        int32_t rdi_5 = rdx_4
        
        if (rdx_4 s> 0)
            int64_t* rbx_5 = nullptr
            
            do
                int64_t rax_10 = data_1439a0270
                
                if (*(rbx_5 + rax_10 + 8) == 0)
                    sub_1405a4880(&data_1439a0270, rsi_1, 1, 1)
                else
                    int64_t* rcx_9 = *(rbx_5 + rax_10)
                    
                    if (rcx_9 == 0)
                        sub_1405a4880(&data_1439a0270, rsi_1, 1, 1)
                    else if ((*(*rcx_9 + 0x20))(rcx_9) != 0)
                        sub_1405a4880(&data_1439a0270, rsi_1, 1, 1)
                    else
                        rsi_1 += 1
                        rbx_5 = &rbx_5[2]
                
                rdx_4 = data_1439a0278
            while (rsi_1 s< rdx_4)
        
        result = zx.q(rdx_4 * 2)
        
        if (result.d s<= 2)
            result = 2
        
        data_1439a0280 = result.d
        
        if (rdi_5 s> result.d && data_1439a027c != rdx_4)
            return sub_1405a5410(&data_1439a0270, rdx_4)

return result
