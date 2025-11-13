// 函数: sub_14238f270
// 地址: 0x14238f270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1 + 0x68)
    int32_t i_4 = arg2[1].d
    
    if (i_4 != 0)
        int64_t* rbx_2 = *arg2 + 8
        int32_t i
        
        do
            int64_t rcx = *rbx_2
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_2 = &rbx_2[3]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    int32_t i_3 = *(arg1 + 0x70)
    int64_t* rbx_3 = *(arg1 + 0x68)
    int32_t r8_1 = *(arg2 + 0xc)
    arg2[1].d = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_140808f70(arg2, i_3, r8_1)
        void* rdi_1 = *arg2
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                *rdi_1 = *rbx_3
                sub_140596d10(rdi_1 + 8, &rbx_3[1])
                rdi_1 += 0x18
                rbx_3 = &rbx_3[3]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg2 + 0xc) = 0

int64_t* i_2 = *(arg1 + 0x78)

for (void* rbp_3 = &i_2[sx.q(*(arg1 + 0x80)) * 2]; i_2 != rbp_3; i_2 = &i_2[2])
    int64_t rcx_3 = *i_2
    int64_t* var_28 = nullptr
    int32_t var_20_1 = 0
    sub_14238f270(rcx_3, &var_28)
    int64_t* rbx_4 = var_28
    int64_t rdi_2 = sx.q(var_20_1)
    void* rsi_1 = &rbx_4[rdi_2 * 3]
    
    if (rbx_4 != rsi_1)
        do
            sub_141c8ef70(arg2, rbx_4)
            rbx_4 = &rbx_4[3]
        while (rbx_4 != rsi_1)
        
        rdi_2 = zx.q(var_20_1)
        rbx_4 = var_28
    
    if (rdi_2.d != 0)
        void* rbx_5 = &rbx_4[1]
        int32_t j
        
        do
            int64_t rcx_6 = *rbx_5
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_5 += 0x18
            j = rdi_2.d
            rdi_2 = zx.q(rdi_2.d - 1)
        while (j != 1)
        rbx_4 = var_28
    
    if (rbx_4 != 0)
        sub_140a74f90(rbx_4)
