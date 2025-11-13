// 函数: sub_14244b380
// 地址: 0x14244b380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1419ca2d0(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t rbp = sx.q(arg1[9].d)

if (rbp.d != 0)
    int32_t rax = arg2[1].d
    int16_t* rdx_2
    
    if (rax == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *arg2
    
    void* rbx_1 = arg1[8]
    int32_t rcx = rax - 1
    void* rdi_1 = &arg1[7]
    
    if (rax == 0)
        rcx = 0
    
    result = rbp - 1
    int64_t rcx_2 = sx.q(sub_1405969c0(rcx, rdx_2)) & result
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    int32_t i = *(rdi_1 + (rcx_2 << 2))
    int32_t i_1 = i
    
    while (i != 0xffffffff)
        int64_t rax_3 = *arg1
        int64_t rcx_4 = sx.q(i_1) * 6
        i = *(rax_3 + (rcx_4 << 3) + 0x28)
        int16_t* rdx_3
        
        if (arg2[1].d == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *arg2
        
        int16_t* const rcx_5
        
        if (*(rax_3 + (rcx_4 << 3) + 8) == 0)
            rcx_5 = &data_142d40450
        else
            rcx_5 = *(rax_3 + (rcx_4 << 3))
        
        result = sub_140a54510(rcx_5, rdx_3)
        
        if (result.d == 0)
            break
        
        i_1 = i
    
    while (i_1 != 0xffffffff)
        int64_t rbp_1 = sx.q(arg3[1].d)
        int32_t rax_4 = (rbp_1 + 1).d
        arg3[1].d = rax_4
        
        if (rax_4 s> *(arg3 + 0xc))
            sub_1405a4df0(arg3)
        
        result = *arg3
        int64_t* rbp_2 = result + rbp_1 * 0x18
        
        if (rbp_2 != 0)
            void* rdi_4 = sx.q(i_1) * 0x30 + *arg1
            sub_140596d10(rbp_2, rdi_4 + 0x10)
            result = zx.q(*(rdi_4 + 0x20))
            rbp_2[2].d = result.d
        
        i_1 = i
        
        if (i == 0xffffffff)
            break
        
        do
            int64_t rax_7 = *arg1
            int64_t rcx_11 = sx.q(i_1) * 6
            i = *(rax_7 + (rcx_11 << 3) + 0x28)
            int16_t* rdx_6
            
            if (arg2[1].d == 0)
                rdx_6 = &data_142d40450
            else
                rdx_6 = *arg2
            
            int16_t* const rcx_12
            
            if (*(rax_7 + (rcx_11 << 3) + 8) == 0)
                rcx_12 = &data_142d40450
            else
                rcx_12 = *(rax_7 + (rcx_11 << 3))
            
            result = sub_140a54510(rcx_12, rdx_6)
            
            if (result.d == 0)
                break
            
            i_1 = i
        while (i != 0xffffffff)

if (arg4 != 0)
    int32_t rax_8 = arg3[1].d
    int128_t* r10_1 = *arg3
    int32_t r8 = rax_8 - 1
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_8)
    result = zx.q((temp1_1 - temp0_1) s>> 1)
    
    if (result.d s> 0)
        int128_t* rdx_8 = r10_1
        uint64_t i_3 = zx.q(result.d)
        uint64_t i_2
        
        do
            result = r10_1 + sx.q(r8) * 0x18
            
            if (rdx_8 != result)
                int128_t zmm3 = *rdx_8
                int64_t zmm2 = rdx_8[1].q
                *rdx_8 = *result
                rdx_8[1].q = *(result + 0x10)
                *result = zmm3
                *(result + 0x10) = zmm2
            
            rdx_8 += 0x18
            r8 -= 1
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)

return result
