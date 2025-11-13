// 函数: sub_1419712f0
// 地址: 0x1419712f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = data_143f029c8
char r12 = arg1
sub_140b34200("FlushRHIThreadTotal", rbx)
int128_t entry_zmm2
int128_t entry_zmm3

if (data_143f02bac u> 0)
    entry_zmm2, entry_zmm3 = sub_14196ef60(&data_143f02b88, &data_143f02b98, entry_zmm2, entry_zmm3)

sub_14198b230()

if (data_143f01c92 != 0)
    sub_14198b3f0()

int64_t rdx_1
rdx_1.b = 1
sub_14198b7d0()
uint64_t result = sub_140b38680("FlushRHIThreadTotal", rbx)
int64_t* rcx_3 = data_143f0f180

if (rcx_3 != 0)
    result = (*(*rcx_3 + 0x448))(rcx_3)

if ((data_143f023d0 & 0x3ffffff) != 0)
    do
        if (data_143f0f1d0 == 0 || data_143f0f19c == 0)
            int64_t** var_48 = nullptr
            result = 0
            int64_t var_40_1 = 0
            
            if (0 == data_143f023d0.q)
                data_143f023d0.q = 0
            else
                result = data_143f023d0.q
            
            uint64_t result_2 = result
            int32_t i
            
            for (i = result.d & 0x3ffffff; i != 0; i = result.d & 0x3ffffff)
                if ((((result_2 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                        u< (result_2 & 0xfffffffffc000000))
                    sub_140a2c900()
                
                result = result_2
                bool z_2
                
                if (result == data_143f023d0.q)
                    data_143f023d0.q = (result_2 & 0xfffffffffc000000) + 0x4000000
                    z_2 = true
                else
                    result = data_143f023d0.q
                    z_2 = false
                
                if (z_2)
                    break
                
                result = 0
                
                if (0 == data_143f023d0.q)
                    data_143f023d0.q = 0
                else
                    result = data_143f023d0.q
                
                result_2 = result
            
            if (i != 0)
                int32_t i_13 = var_40_1.d
                int64_t** rbx_3 = var_48
                
                do
                    int64_t i_14 = sx.q(i_13)
                    uint64_t rcx_15 = (zx.q(i) & 0x3fff) * 3
                    int64_t rax_16 = *((zx.q(i) u>> 0xe << 3) + &data_143cf0bf8)
                    int64_t r15_1 = *(rax_16 + (rcx_15 << 3) + 8)
                    i_13 = (i_14 + 1).d
                    var_40_1.d = i_13
                    
                    if (i_13 s> var_40_1:4.d)
                        sub_1405a4d70(&var_48)
                        i_13 = var_40_1.d
                        rbx_3 = var_48
                    
                    rbx_3[i_14] = r15_1
                    int32_t i_8 = i
                    i = *(rax_16 + (rcx_15 << 3) + 0x10)
                    result = sub_140a24050(i_8)
                while (i != 0)
                
                if (i_13 s> 0)
                    uint64_t i_10 = zx.q(i_13)
                    uint64_t i_1
                    
                    do
                        int64_t* rcx_17 = *rbx_3
                        result = 0
                        bool z_3
                        
                        if (0 == rcx_17[1].d)
                            rcx_17[1].d = 0
                            z_3 = true
                        else
                            result = zx.q(rcx_17[1].d)
                            z_3 = false
                        
                        if (not(z_3))
                            *(rcx_17 + 0xc) = 0
                        else
                            data_143f0f1e0 = rcx_17
                            
                            if (rcx_17 != 0)
                                result = (**rcx_17)(rcx_17, 1)
                            
                            data_143f0f1e0 = 0
                        
                        rbx_3 = &rbx_3[1]
                        i_1 = i_10
                        i_10 -= 1
                    while (i_1 != 1)
                    rbx_3 = var_48
                
                if (rbx_3 != 0)
                    result = sub_140a74f90(rbx_3)
        else
            int64_t rbx_1 = sx.q(data_143f02420)
            int32_t rax_1 = (rbx_1 + 1).d
            bool cond:1_1 = rax_1 s<= data_143f02424
            data_143f02420 = rax_1
            
            if (not(cond:1_1))
                sub_1405a4df0(&data_143f02418)
            
            int64_t rax_2 = data_143f02418
            int64_t rcx_4 = rbx_1 * 3
            *(rax_2 + (rcx_4 << 3)) = 0
            *(rax_2 + (rcx_4 << 3) + 8) = 0
            *(rax_2 + (rcx_4 << 3) + 0x10) = 0
            int64_t* r14_1 = data_143f02418 + (rcx_4 << 3)
            r14_1[2].d = data_143f0f1f0
            result = 0
            
            if (0 == data_143f023d0.q)
                data_143f023d0.q = 0
            else
                result = data_143f023d0.q
            
            uint64_t result_1 = result
            int32_t i_2
            
            for (i_2 = result.d & 0x3ffffff; i_2 != 0; i_2 = result.d & 0x3ffffff)
                if ((((result_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                        u< (result_1 & 0xfffffffffc000000))
                    sub_140a2c900()
                
                result = result_1
                bool z_1
                
                if (result == data_143f023d0.q)
                    data_143f023d0.q = (result_1 & 0xfffffffffc000000) + 0x4000000
                    z_1 = true
                else
                    result = data_143f023d0.q
                    z_1 = false
                
                if (z_1)
                    break
                
                result = 0
                
                if (0 == data_143f023d0.q)
                    data_143f023d0.q = 0
                else
                    result = data_143f023d0.q
                
                result_1 = result
            
            while (i_2 != 0)
                int64_t rbx_2 = sx.q(r14_1[1].d)
                uint64_t rcx_9 = (zx.q(i_2) & 0x3fff) * 3
                int64_t rax_9 = *((zx.q(i_2) u>> 0xe << 3) + &data_143cf0bf8)
                int64_t rbp_1 = *(rax_9 + (rcx_9 << 3) + 8)
                int32_t rax_10 = (rbx_2 + 1).d
                r14_1[1].d = rax_10
                
                if (rax_10 s> *(r14_1 + 0xc))
                    sub_1405a4d70(r14_1)
                
                int32_t i_7 = i_2
                *(*r14_1 + (rbx_2 << 3)) = rbp_1
                i_2 = *(rax_9 + (rcx_9 << 3) + 0x10)
                result = sub_140a24050(i_7)
    while ((data_143f023d0 & 0x3ffffff) != 0)
    
    r12 = arg1

int32_t rdx_9 = data_143f02420

if (rdx_9 != 0)
    if (r12 == 0)
        int32_t i_12 = 0
        
        if (rdx_9 s> 0)
            int64_t* rsi_7 = data_143f02418
            int64_t* r14_4 = nullptr
            
            do
                result = zx.q(*(r14_4 + rsi_7 + 0x10) + 3)
                
                if (result.d u>= data_143f0f1f0 && data_143f0f19c != 0)
                    break
                
                int32_t i_3 = 0
                
                if (*(r14_4 + rsi_7 + 8) s> 0)
                    int64_t** rdi_8 = nullptr
                    
                    do
                        result = 0
                        int64_t* rcx_26 = *(rdi_8 + *(r14_4 + rsi_7))
                        bool z_5
                        
                        if (0 == rcx_26[1].d)
                            rcx_26[1].d = 0
                            z_5 = true
                        else
                            result = zx.q(rcx_26[1].d)
                            z_5 = false
                        
                        if (not(z_5))
                            *(rcx_26 + 0xc) = 0
                        else
                            data_143f0f1e0 = rcx_26
                            
                            if (rcx_26 != 0)
                                result = (**rcx_26)(rcx_26, 1)
                            
                            data_143f0f1e0 = 0
                        
                        i_3 += 1
                        rdi_8 = &rdi_8[1]
                    while (i_3 s< *(r14_4 + rsi_7 + 8))
                    
                    rdx_9 = data_143f02420
                    rsi_7 = data_143f02418
                
                i_12 += 1
                r14_4 = &r14_4[3]
            while (i_12 s< rdx_9)
            
            if (i_12 != 0)
                int32_t i_9 = i_12
                int32_t i_4
                
                do
                    int64_t rcx_27 = *rsi_7
                    
                    if (rcx_27 != 0)
                        sub_140a74f90(rcx_27)
                    
                    rsi_7 = &rsi_7[3]
                    i_4 = i_9
                    i_9 -= 1
                while (i_4 != 1)
                int32_t rax_23 = data_143f02420
                
                if (rax_23 != i_12)
                    int64_t rcx_30 = data_143f02418
                    memmove(rcx_30, rcx_30 + sx.q(i_12) * 0x18, (rax_23 - i_12) * 0x18)
                    rax_23 = data_143f02420
                
                data_143f02420 = rax_23 - i_12
                result = sub_1405fde90(&data_143f02418)
    else
        int32_t rbx_4 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rbx_4)
        
        if (data_143f02bac u> 0)
            sub_14196ef60(&data_143f02b88, &data_143f02b98, entry_zmm2, entry_zmm3)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_7
        rdx_7.b = 1
        sub_14198b7d0()
        sub_140b38680("FlushRHIThreadTotal", rbx_4)
        int64_t* rcx_22 = data_143f0f180
        result = (*(*rcx_22 + 0x3e8))(rcx_22)
        int32_t i_11 = data_143f02420
        int32_t rbp_2 = 0
        
        if (i_11 s> 0)
            int64_t r14_3 = 0
            
            do
                int64_t* rsi_6 = data_143f02418
                int32_t i_5 = 0
                
                if (*(rsi_6 + r14_3 + 8) s> 0)
                    int64_t* rdi_7 = nullptr
                    
                    do
                        int64_t* rcx_23 = *(rdi_7 + *(rsi_6 + r14_3))
                        result = 0
                        bool z_4
                        
                        if (0 == rcx_23[1].d)
                            rcx_23[1].d = 0
                            z_4 = true
                        else
                            result = zx.q(rcx_23[1].d)
                            z_4 = false
                        
                        if (not(z_4))
                            *(rcx_23 + 0xc) = 0
                        else
                            data_143f0f1e0 = rcx_23
                            
                            if (rcx_23 != 0)
                                result = (**rcx_23)(rcx_23, 1)
                            
                            data_143f0f1e0 = 0
                        
                        i_5 += 1
                        rdi_7 = &rdi_7[1]
                    while (i_5 s< *(rsi_6 + r14_3 + 8))
                    
                    i_11 = data_143f02420
                
                rbp_2 += 1
                r14_3 += 0x18
            while (rbp_2 s< i_11)
        
        int64_t* rbx_5 = data_143f02418
        
        if (i_11 != 0)
            int32_t i_6
            
            do
                int64_t rcx_24 = *rbx_5
                
                if (rcx_24 != 0)
                    result = sub_140a74f90(rcx_24)
                
                rbx_5 = &rbx_5[3]
                i_6 = i_11
                i_11 -= 1
            while (i_6 != 1)
        
        bool cond:2_1 = data_143f02424 == 0
        data_143f02420 = 0
        
        if (not(cond:2_1))
            result = sub_1405a5130(&data_143f02418, 0)
    
    data_143f0f1f0 += 1

return result
