// 函数: sub_1422f16f0
// 地址: 0x1422f16f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x50)

if (rbx != 0)
    int64_t* rcx = *(rbx + 0xa0)
    char rax_2
    
    if (rcx != 0)
        rax_2 = (*(*rcx + 0x18))(rcx, rbx)
    
    if (rcx != 0 && rax_2 != 0)
        goto label_1422f172a
    
    rbx = *(arg1 + 0x50)
    int64_t* rcx_2 = *(rbx + 0xa0)
    
    if (rcx_2 == 0)
        bool z_1
        
        if (0 == *(rbx + 0x90))
            *(rbx + 0x90) = 0
            z_1 = true
        else
            *(rbx + 0x90)
            z_1 = false
        
        if (not(z_1))
            sub_1422e1ae0(rbx + 0x10)
            *(rbx + 0x90) -= 1
        
        goto label_1422f178c
    
    if ((*(*rcx_2 + 0x18))(rcx_2, rbx) == 0)
    label_1422f178c:
        
        if (*(rbx + 0xa0) != 0)
            int64_t* rcx_5 = *(rbx + 0x98)
            (*(*rcx_5 + 0x20))(rcx_5, 0xffffffff, 0)
            *(rbx + 0xa0) = 0
    else
        sub_1422e1ae0(rbx + 0x10)
    label_1422f172a:
        *(rbx + 0x90) -= 1
        int64_t* rcx_1 = *(rbx + 0x98)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x10))(rcx_1)
        
        *(rbx + 0xa0) = 0
    
    int64_t* rcx_6 = *(arg1 + 0x50)
    
    if (rcx_6 != 0)
        *(arg1 + 0x50) = 0
        (*(*rcx_6 + 0x10))(rcx_6, 1)

void* const result = *(arg1 + 0x28)
*(arg1 + 0x30) = 5

if (result != 0 && *(arg1 + 0x48) == 0)
    int32_t rax_9 = *(result + 0xc)
    
    if (rax_9 s>= data_143e1d9b4)
        result = nullptr
    else
        int16_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rax_9)
        uint32_t rdx_4 = zx.d(temp1_1)
        int32_t rax_11 = temp2_1 + rdx_4
        result =
            *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3)) + sx.q(zx.d(rax_11.w) - rdx_4) * 0x18
    
    *(result + 8) &= 0xbfffffff

*(arg1 + 0x28) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x30) = 0
return result
