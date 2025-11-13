// 函数: sub_142abee10
// 地址: 0x142abee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x1a8)
uint32_t result

while (true)
    void* rcx = *(arg1 + 0x198)
    int16_t rax_1 = *(rcx + 8)
    int32_t rax_3
    
    if (rax_1 s< 0)
        rax_3 = *(rcx + 0xc)
    else
        rax_3 = sx.d(rax_1) s>> 5
    
    int32_t rdx = *(arg1 + 0x1a0)
    
    if (rdx == rax_3)
    label_142abefc1:
        result = zx.d(*(rbx + 2))
        
        if (*rbx == 0 && result.w != 0xffff)
            *arg2 = 0x10100
            break
        
        if (result.w != 0)
            break
        
        if (*(rbx + 4) != 0xffff)
            *arg2 = 0x10107
        
        break
    
    result = sub_142a486d0(rcx, rdx)
    
    if (result == 0x23)
        if (rbx[2].d s> 0)
            *arg2 = 0x10100
            break
        
        *(rbx + 0x2c) += 1
        *rbx += 1
        
        if (*(rbx + 0x14) s<= 0)
            rbx[1].d += 1
        else
            *(rbx + 0xc) += 1
        
        goto label_142abef6d
    
    if (result != 0x2c)
        if (result s<= 0x2f)
            goto label_142abefc1
        
        if (result s> 0x39)
            if (result != 0x40)
                goto label_142abefc1
            
            if (rbx[2].d s> 0 || *(rbx + 0xc) s> 0)
                *arg2 = 0x10100
                break
            
            *(rbx + 0x2c) += 1
            *rbx += 1
            *(rbx + 0x14) += 1
        label_142abef6d:
            rbx[3].d += 1
            goto label_142abef70
        
        if (*(rbx + 0x14) s> 0)
            *arg2 = 0x10100
            break
        
        *(rbx + 0x2c) += 1
        *rbx += 1
        rbx[2].d += 1
        rbx[3].d += 1
        
        if (std::ios_base::good(&rbx[7]) == 0)
        label_142abef07:
            void* rcx_3 = *(arg1 + 0x198)
            int16_t rax_9 = *(rcx_3 + 8)
            int32_t rax_11
            
            if (rax_9 s< 0)
                rax_11 = *(rcx_3 + 0xc)
            else
                rax_11 = sx.d(rax_9) s>> 5
            
            int32_t rdx_2 = *(arg1 + 0x1a0)
            char rax_12
            
            if (rdx_2 != rax_11)
                rax_12 = sub_142a486d0(rcx_3, rdx_2)
            else
                rax_12 = -1
            
            sub_142ab3100(&rbx[7], rax_12 - 0x30, 0, 1)
        else
            void* rcx_2 = *(arg1 + 0x198)
            int16_t rax_5 = *(rcx_2 + 8)
            int32_t rax_7
            
            if (rax_5 s< 0)
                rax_7 = *(rcx_2 + 0xc)
            else
                rax_7 = sx.d(rax_5) s>> 5
            
            int32_t rdx_1 = *(arg1 + 0x1a0)
            
            if (rdx_1 == rax_7)
                goto label_142abef07
            
            if (sub_142a486d0(rcx_2, rdx_1) != 0x30)
                goto label_142abef07
        
        goto label_142abef70
    
    *(rbx + 0x2c) += 1
    *rbx <<= 0x10
label_142abef70:
    void* rcx_5 = *(arg1 + 0x198)
    int16_t rax_13 = *(rcx_5 + 8)
    int32_t rax_15
    
    if (rax_13 s< 0)
        rax_15 = *(rcx_5 + 0xc)
    else
        rax_15 = sx.d(rax_13) s>> 5
    
    int32_t rdx_4 = *(arg1 + 0x1a0)
    int32_t rax_16
    
    if (rdx_4 != rax_15)
        rax_16 = sub_142a486d0(rcx_5, rdx_4)
    else
        rax_16 = -1
    
    int32_t rcx_6
    rcx_6.b = rax_16 u> 0xffff
    *(arg1 + 0x1a0) += rcx_6 + 1

return result
