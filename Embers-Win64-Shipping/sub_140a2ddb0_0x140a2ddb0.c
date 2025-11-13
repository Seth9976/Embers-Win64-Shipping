// 函数: sub_140a2ddb0
// 地址: 0x140a2ddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = 0x3a83126f
int32_t result

while (true)
    int64_t rax_1 = 0
    
    if (0 == *(arg1 + 8))
        *(arg1 + 8) = 0
    else
        rax_1 = *(arg1 + 8)
    
    int64_t rax_2 = 0
    
    if (0 == *(arg1 + 0x18))
        *(arg1 + 0x18) = 0
    else
        rax_2 = *(arg1 + 0x18)
    
    int32_t r14_2 = rax_1.d & 0x3ffffff
    int64_t* rcx
    
    if (r14_2 != 0)
        rcx = *((zx.q(r14_2) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(r14_2) & 0x3fff) * 0x18
    else
        rcx = nullptr
    
    int32_t rax_6 = 0
    
    if (0 == *rcx)
        *rcx = 0
    else
        rax_6 = (*rcx).d
    
    int64_t rax_7 = 0
    
    if (0 == *(arg1 + 8))
        *(arg1 + 8) = 0
    else
        rax_7 = *(arg1 + 8)
    
    if (rax_1 == rax_7)
        result = rax_2.d & 0x3ffffff
        
        if (r14_2 != result)
            uint64_t rax_14 = zx.q(rax_6) & 0x3ffffff
            void* rax_15
            
            if (rax_14.d != 0)
                rax_15 =
                    *((rax_14 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rax_14.d) & 0x3fff) * 0x18
            else
                rax_15 = nullptr
            
            int64_t r15_1 = *(rax_15 + 8)
            
            if ((((rax_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                    u< (rax_1 & 0xfffffffffc000000))
                zmm6 = sub_140b73230(zmm6)
            
            bool z_1
            
            if (rax_1 == *(arg1 + 8))
                *(arg1 + 8) = (zx.q(rax_6) & 0x3ffffff) | ((rax_1 & 0xfffffffffc000000) + 0x4000000)
                z_1 = true
            else
                *(arg1 + 8)
                z_1 = false
            
            if (z_1)
                result, zmm6 = sub_140a24050(r14_2)
                
                if (r15_1 == 0)
                    break
                
                int64_t rbx_6 = sx.q(arg2[1].d)
                int32_t rax_22 = (rbx_6 + 1).d
                arg2[1].d = rax_22
                
                if (rax_22 s> *(arg2 + 0xc))
                    sub_1405a4d70(arg2)
                
                *(*arg2 + (rbx_6 << 3)) = r15_1
        else
            if ((rax_6 & 0x3ffffff) == 0)
                break
            
            if ((((rax_2 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                    u< (rax_2 & 0xfffffffffc000000))
                zmm6 = sub_140b73230(zmm6)
            
            if (rax_2 == *(arg1 + 0x18))
                *(arg1 + 0x18) =
                    (zx.q(rax_6) & 0x3ffffff) | ((rax_2 & 0xfffffffffc000000) + 0x4000000)
            else
                *(arg1 + 0x18)

return result
