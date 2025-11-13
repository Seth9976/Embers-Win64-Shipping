// 函数: sub_141ee8490
// 地址: 0x141ee8490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = arg1[0x11].b
uint64_t result
result.b = rcx & 3

if (result.b == 3)
    if ((rcx & 0x20) != 0)
        result = sub_1405be820(arg1)
    
    if ((rcx & 0x20) == 0 || result == 0)
        arg1[0x11].b |= 0x20
        int32_t rbx_1 = 0
        
        if ((*(arg1 + 0x89) & 0x10) == 0)
            void* rax = sub_1405be820(arg1)
            
            if (rax == 0)
                int32_t rax_2 = *(arg1 + 0xc)
                void* const rax_9
                
                if (rax_2 s>= data_143e1d9b4)
                    rax_9 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax_2)
                    uint32_t rdx_4 = zx.d(temp0_1)
                    int32_t rax_4 = temp1_1 + rdx_4
                    rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_4.w) - rdx_4) * 0x18
                
                if (((*(rax_9 + 8) u>> 0x1c).b & 1) == 0)
                    sub_141ee03d0(arg1)
            else
                int64_t rdx_1 = *arg1
                sub_1420e7350(rax, arg1, (*(rdx_1 + 0x378))(arg1, rdx_1))
        
        int64_t rbp
        rbp.b = 0
        int32_t rdx_6 = data_143a2d6d0
        int32_t rcx_11 = data_143a2d6dc + 1
        data_143a2d6dc = rcx_11
        result = zx.q(rdx_6 - 1)
        int64_t rdi_2 = sx.q(result.d)
        
        if (result.d s>= 0)
            int64_t rsi_2 = rdi_2 << 4
            int64_t temp2_1
            
            do
                result = data_143a2d6c8
                
                if (*(rsi_2 + result + 8) == 0)
                    rbp.b = 1
                else
                    int64_t* rcx_12 = *(rsi_2 + result)
                    
                    if (rcx_12 == 0)
                        rbp.b = 1
                    else
                        result = (*(*rcx_12 + 0x50))(rcx_12, arg1)
                        
                        if (result.b == 0)
                            rbp.b = 1
                
                rsi_2 -= 0x10
                temp2_1 = rdi_2
                rdi_2 -= 1
            while (temp2_1 - 1 s>= 0)
            rcx_11 = data_143a2d6dc
            rdx_6 = data_143a2d6d0
        
        data_143a2d6dc = rcx_11 - 1
        
        if (rbp.b != 0 && rcx_11 - 1 s<= 0)
            int32_t rsi_3 = rdx_6
            
            if (rdx_6 s> 0)
                int64_t* rdi_3 = nullptr
                
                do
                    int64_t rax_13 = data_143a2d6c8
                    
                    if (*(rdi_3 + rax_13 + 8) == 0)
                        sub_1405a4880(&data_143a2d6c8, rbx_1, 1, 1)
                    else
                        int64_t* rcx_14 = *(rdi_3 + rax_13)
                        
                        if (rcx_14 == 0)
                            sub_1405a4880(&data_143a2d6c8, rbx_1, 1, 1)
                        else if ((*(*rcx_14 + 0x20))(rcx_14) != 0)
                            sub_1405a4880(&data_143a2d6c8, rbx_1, 1, 1)
                        else
                            rbx_1 += 1
                            rdi_3 = &rdi_3[2]
                    
                    rdx_6 = data_143a2d6d0
                while (rbx_1 s< rdx_6)
            
            result = zx.q(rdx_6 * 2)
            
            if (result.d s<= 2)
                result = 2
            
            data_143a2d6d8 = result.d
            
            if (rsi_3 s> result.d && data_143a2d6d4 != rdx_6)
                return sub_1405a5410(&data_143a2d6c8, rdx_6)

return result
