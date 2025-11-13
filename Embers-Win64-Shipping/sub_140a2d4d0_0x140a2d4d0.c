// 函数: sub_140a2d4d0
// 地址: 0x140a2d4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = 0x3a83126f
void* rdx = arg1
bool z_2

do
    int64_t rax_1 = 0
    
    if (0 == *(rdx + 0x1a0))
        *(rdx + 0x1a0) = 0
    else
        rax_1 = *(rdx + 0x1a0)
    
    int64_t rbp_1 = rax_1
    
    for (int32_t i = 0; i s< 2; i += 1)
        void* r14_2 = sx.q(i) * 0xd0 + rdx
        
        while (true)
            int64_t rax_3 = 0
            
            if (0 == *(r14_2 + 0x40))
                *(r14_2 + 0x40) = 0
            else
                rax_3 = *(r14_2 + 0x40)
            
            int64_t rax_4 = 0
            
            if (0 == *(r14_2 + 0x88))
                *(r14_2 + 0x88) = 0
            else
                rax_4 = *(r14_2 + 0x88)
            
            int32_t r15_2 = rax_3.d & 0x3ffffff
            int64_t* rcx
            
            if (r15_2 != 0)
                rcx =
                    *((zx.q(r15_2) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(r15_2) & 0x3fff) * 0x18
            else
                rcx = nullptr
            
            int32_t rax_8 = 0
            
            if (0 == *rcx)
                *rcx = 0
            else
                rax_8 = (*rcx).d
            
            int64_t rax_9 = 0
            
            if (0 == *(r14_2 + 0x40))
                *(r14_2 + 0x40) = 0
            else
                rax_9 = *(r14_2 + 0x40)
            
            if (rax_3 == rax_9)
                if (r15_2 != (rax_4.d & 0x3ffffff))
                    uint64_t rax_17 = zx.q(rax_8) & 0x3ffffff
                    void* rax_18
                    
                    if (rax_17.d != 0)
                        rax_18 = *((rax_17 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rax_17.d) & 0x3fff) * 0x18
                    else
                        rax_18 = nullptr
                    
                    int64_t result = *(rax_18 + 8)
                    
                    if ((((rax_3 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                            u< (rax_3 & 0xfffffffffc000000))
                        zmm6 = sub_140b73230(zmm6)
                    
                    bool z_1
                    
                    if (rax_3 == *(r14_2 + 0x40))
                        *(r14_2 + 0x40) =
                            (zx.q(rax_8) & 0x3ffffff) | ((rax_3 & 0xfffffffffc000000) + 0x4000000)
                        z_1 = true
                    else
                        *(r14_2 + 0x40)
                        z_1 = false
                    
                    if (z_1)
                        zmm6 = sub_140a24050(r15_2)
                        
                        if (result == 0)
                            break
                        
                        while (true)
                            if ((((rbp_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                                    u< (rbp_1 & 0xfffffffffc000000))
                                zmm6 = sub_140b73230(zmm6)
                            
                            bool z_3
                            
                            if (rbp_1 == *(arg1 + 0x1a0))
                                *(arg1 + 0x1a0) = (zx.q(rbp_1.d) & 0x3ffffff)
                                    | ((rbp_1 & 0xfffffffffc000000) + 0x4000000)
                                z_3 = true
                            else
                                *(arg1 + 0x1a0)
                                z_3 = false
                            
                            if (z_3)
                                break
                            
                            int64_t rax_34 = 0
                            
                            if (0 == *(arg1 + 0x1a0))
                                *(arg1 + 0x1a0) = 0
                            else
                                rax_34 = *(arg1 + 0x1a0)
                            
                            rbp_1 = rax_34
                        
                        return result
                else
                    if ((rax_8 & 0x3ffffff) == 0)
                        break
                    
                    if ((((rax_4 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                            u< (rax_4 & 0xfffffffffc000000))
                        zmm6 = sub_140b73230(zmm6)
                    
                    if (rax_4 == *(r14_2 + 0x88))
                        *(r14_2 + 0x88) =
                            (zx.q(rax_8) & 0x3ffffff) | ((rax_4 & 0xfffffffffc000000) + 0x4000000)
                    else
                        *(r14_2 + 0x88)
        
        rdx = arg1
    
    if (arg3 == 0)
        break
    
    if ((((rbp_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
            u< (rbp_1 & 0xfffffffffc000000))
        zmm6 = sub_140b73230(zmm6)
    
    rdx = arg1
    
    if (rbp_1 == *(rdx + 0x1a0))
        *(rdx + 0x1a0) = (zx.q(rbp_1.d) & 0x3ffffff) | zx.q((1 << (sx.q(arg2) u% 0x40)).d)
            | ((rbp_1 & 0xfffffffffc000000) + 0x4000000)
        z_2 = true
    else
        *(rdx + 0x1a0)
        z_2 = false
while (not(z_2))
return 0
