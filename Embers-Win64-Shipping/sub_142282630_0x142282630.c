// 函数: sub_142282630
// 地址: 0x142282630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1

if (data_143de5480 != 0)
    rax_1.b = GetCurrentThreadId() == data_143de5470

int32_t result

if (data_143de5480 == 0 || rax_1.b != 0)
    void var_28
    void** rax_10 = sub_142265630(&var_28, nullptr, 0xff)
    void* rcx_16 = *rax_10
    *(rcx_16 + 0xa0) = arg1
    *(rcx_16 + 0x10) = arg2
    *(rcx_16 + 0x90) = 0
    *(rcx_16 + 0x94) = 1
    *(rcx_16 + 0x98) = 1
    void* rcx_17 = *rax_10
    int32_t r8_3 = rax_10[2].d
    int64_t* rdx_7 = rax_10[1]
    int64_t* rbx_2 = *(rcx_17 + 0xb0)
    int64_t* var_48_1 = rbx_2
    void* rdi_2 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rdi_2 += 1
        rbx_2 = var_48_1
    
    result = sub_14227af50(rcx_17, rdx_7, r8_3, 1)
    
    if (rbx_2 != 0)
        result = *rdi_2
        *rdi_2 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(var_48_1)
else
    void* rax_2 = TlsGetValue(*(arg1 + 8))
    *(rax_2 + (sx.q(*(rax_2 + 0x84)) << 3)) = arg2
    int32_t rcx_4 = (*(rax_2 + 0x84) + 1) & 0x8000000f
    
    if (rcx_4 s< 0)
        rcx_4 = ((rcx_4 - 1) | 0xfffffff0) + 1
    
    *(rax_2 + 0x88) += 1
    *(rax_2 + 0x84) = rcx_4
    result = data_143a2f2d0 * 2
    
    if (*(rax_2 + 0x88) s>= result)
        void var_40
        int64_t* rax_4
        int32_t r9_1
        rax_4, r9_1 = sub_142265630(&var_40, nullptr, 0xff)
        void* r10_1 = *rax_4
        *(r10_1 + 0xa0) = arg1
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(*(rax_2 + 0x88))
        int32_t rax_8 = (temp2_1 - temp1_1) s>> 1
        int64_t r11_1 = sx.q(rax_8)
        int32_t rdx_2 = *(rax_2 + 0x80) + r11_1.d
        
        if (rax_8 s> 0)
            int64_t r8_1 = 0
            r9_1 = rdx_2
            
            do
                int32_t rcx_9 = r9_1 & 0x8000000f
                
                if (rcx_9 s< 0)
                    rcx_9 = ((rcx_9 - 1) | 0xfffffff0) + 1
                
                r9_1 += 1
                *(r10_1 + (r8_1 << 3) + 0x10) = *(rax_2 + (sx.q(rcx_9) << 3))
                r8_1 += 1
            while (r8_1 s< r11_1)
        
        *(r10_1 + 0x90) = 0
        *(r10_1 + 0x94) = r11_1.d
        *(r10_1 + 0x98) = r11_1.d
        *(rax_2 + 0x88) -= r11_1.d
        int32_t rdx_3 = rdx_2 & 0x8000000f
        
        if (rdx_3 s< 0)
            rdx_3 = ((rdx_3 - 1) | 0xfffffff0) + 1
        
        *(rax_2 + 0x84) = rdx_3
        void* rcx_13 = *rax_4
        int32_t r8_2 = rax_4[2].d
        int64_t* rdx_6 = rax_4[1]
        int64_t* rbx_1 = *(rcx_13 + 0xb0)
        int64_t* arg_20 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_20
        
        r9_1.b = 1
        result = sub_14227af50(rcx_13, rdx_6, r8_2, r9_1.b)
        
        if (rbx_1 != 0)
            result = *rdi_1
            *rdi_1 -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_20)

return result
