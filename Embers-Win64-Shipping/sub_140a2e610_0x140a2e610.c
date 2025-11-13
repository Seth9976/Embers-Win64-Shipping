// 函数: sub_140a2e610
// 地址: 0x140a2e610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_58 = zmm6
int64_t rsi = sx.q(arg2) * 0x1f8
int64_t result = 0

if (*(rsi + arg1 + 0x224) != 0)
    return 0

zmm6 = 0x3a83126f
void* rbx_2 = arg1 + 0x38 + rsi
void* var_78_1 = rbx_2

while (true)
    int64_t rax_1 = 0
    
    if (0 == *(rbx_2 + 0x1a0))
        *(rbx_2 + 0x1a0) = 0
    else
        rax_1 = *(rbx_2 + 0x1a0)
    
    int64_t rbp_1 = rax_1
    int32_t r13_1 = 0
    
    while (true)
        void* r14_2 = sx.q(r13_1) * 0xd0 + rbx_2
        int64_t* r12_1
        int32_t r15_2
        
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
            
            r15_2 = rax_3.d & 0x3ffffff
            int64_t* rcx_1
            
            if (r15_2 != 0)
                rcx_1 =
                    *((zx.q(r15_2) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(r15_2) & 0x3fff) * 0x18
            else
                rcx_1 = nullptr
            
            int32_t rax_8 = 0
            
            if (0 == *rcx_1)
                *rcx_1 = 0
            else
                rax_8 = (*rcx_1).d
            
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
                    
                    r12_1 = *(rax_18 + 8)
                    
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
                        break
                else
                    if ((rax_8 & 0x3ffffff) == 0)
                        goto label_140a2e800
                    
                    if ((((rax_4 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                            u< (rax_4 & 0xfffffffffc000000))
                        zmm6 = sub_140b73230(zmm6)
                    
                    if (rax_4 == *(r14_2 + 0x88))
                        *(r14_2 + 0x88) =
                            (zx.q(rax_8) & 0x3ffffff) | ((rax_4 & 0xfffffffffc000000) + 0x4000000)
                    else
                        *(r14_2 + 0x88)
        
        zmm6 = sub_140a24050(r15_2)
        int64_t rsi_5
        void* rdi_5
        
        if (r12_1 != 0)
            while (true)
                if ((((rbp_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                        u< (rbp_1 & 0xfffffffffc000000))
                    zmm6 = sub_140b73230(zmm6)
                
                rbx_2 = var_78_1
                bool z_3
                
                if (rbp_1 == *(rbx_2 + 0x1a0))
                    *(rbx_2 + 0x1a0) =
                        (zx.q(rbp_1.d) & 0x3ffffff) | ((rbp_1 & 0xfffffffffc000000) + 0x4000000)
                    z_3 = true
                else
                    *(rbx_2 + 0x1a0)
                    z_3 = false
                
                if (z_3)
                    break
                
                int64_t rax_35 = 0
                
                if (0 == *(rbx_2 + 0x1a0))
                    *(rbx_2 + 0x1a0) = 0
                else
                    rax_35 = *(rbx_2 + 0x1a0)
                
                rbp_1 = rax_35
            
            rdi_5 = arg1
            (*(*r12_1 + 8))(r12_1, rdi_5 + 0x20, zx.q(arg2 << 8) | zx.q(*(rdi_5 + 0x10)))
            result += 1
            rsi_5 = rsi
            goto label_140a2e973
        
    label_140a2e800:
        rbx_2 = var_78_1
        r13_1 += 1
        
        if (r13_1 s< 2)
            continue
        else
            char r8 = arg3
            
            if (r8 != 0)
                if ((((rbp_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                        u< (rbp_1 & 0xfffffffffc000000))
                    zmm6 = sub_140b73230(zmm6)
                    r8 = arg3
                
                rbx_2 = var_78_1
                bool z_2
                
                if (rbp_1 == *(rbx_2 + 0x1a0))
                    *(rbx_2 + 0x1a0) =
                        (zx.q(rbp_1.d) & 0x3fffffe) | 1 | ((rbp_1 & 0xfffffffffc000000) + 0x4000000)
                    z_2 = true
                else
                    *(rbx_2 + 0x1a0)
                    z_2 = false
                
                if (not(z_2))
                    break
                
                if (r8 != 0)
                    rdi_5 = arg1
                    rsi_5 = rsi
                    int64_t* rcx_19 = *(rsi_5 + rdi_5 + 0x228)
                    (*(*rcx_19 + 0x20))(rcx_19, 0xffffffff, 0)
                    
                    if (*(rsi_5 + rdi_5 + 0x225) != 0)
                        return result
                    
                label_140a2e973:
                    
                    if (*(rsi_5 + rdi_5 + 0x224) == 0)
                        break
        
        return result
