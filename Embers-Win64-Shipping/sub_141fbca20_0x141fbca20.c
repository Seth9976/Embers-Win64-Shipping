// 函数: sub_141fbca20
// 地址: 0x141fbca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i
int64_t result = (*(*arg2 + 0x168))(arg2, &i)

while (i != 0)
    int64_t rax_1 = *arg2
    int32_t arg_20 = 0
    (*(rax_1 + 0x168))(arg2, &arg_20)
    int32_t i_1 = i
    void** var_f8
    sub_140b4c3a0(&var_f8, 0, zx.q(i_1))
    int64_t var_68
    (*(*arg2 + 0x150))(arg2, var_68, zx.q(i_1 + 7) u>> 3)
    var_f8[0x1f](&var_f8, zx.q(*(*(arg1 + 0x88) + 0x1358)))
    var_f8[0x20](&var_f8, zx.q(*(*(arg1 + 0x88) + 0x135c)))
    int64_t rdx_5 = sx.q(arg_20)
    void* rdi_1
    
    if (*(arg1 + 0xa10) == *(arg1 + 0xa3c))
    label_141fbcb68:
        rdi_1 = sub_141fa2140(arg1 + 0xa08, rdx_5.d, &arg_20)
    else
        void* rcx_6 = *(arg1 + 0xa48)
        void* r9_1 = arg1 + 0xa40
        
        if (rcx_6 != 0)
            r9_1 = rcx_6
        
        int32_t rax_8 = *(r9_1 + (((sx.q(*(arg1 + 0xa50)) - 1) & rdx_5) << 2))
        
        if (rax_8 == 0xffffffff)
        label_141fbcb68_1:
            rdi_1 = sub_141fa2140(arg1 + 0xa08, rdx_5.d, &arg_20)
        else
            int32_t* r8_9
            
            while (true)
                r8_9 = (sx.q(rax_8) << 5) + *(arg1 + 0xa08)
                
                if (*r8_9 == rdx_5.d)
                    break
                
                rax_8 = r8_9[6]
                
                if (rax_8 == 0xffffffff)
                    goto label_141fbcb68_2
            
            if (rax_8 == 0xffffffff || r8_9 == 0)
            label_141fbcb68_2:
                rdi_1 = sub_141fa2140(arg1 + 0xa08, rdx_5.d, &arg_20)
            else
                rdi_1 = &r8_9[2]
    
    int64_t* rax_10 = j_sub_140a82f30(0xb8)
    int64_t* rbx_2 = rax_10
    
    if (rax_10 == 0)
        rbx_2 = nullptr
    else
        sub_140b4c3a0(rax_10, 0, 0)
        rbx_2[0x16].d = arg3.d
        sub_140b4cc40(rbx_2, &var_f8)
        
        if (&rbx_2[0x12] != &var_68)
            int64_t rcx_10 = rbx_2[0x12]
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            rbx_2[0x12] = var_68
            var_68 = 0
            int32_t var_60
            rbx_2[0x13].d = var_60
            int32_t var_5c
            *(rbx_2 + 0x9c) = var_5c
            var_60.q = 0
        
        int64_t var_58
        rbx_2[0x14] = var_58
        int64_t var_50
        rbx_2[0x15] = var_50
    
    int64_t rsi_2 = sx.q(*(rdi_1 + 8))
    int32_t rax_16 = (rsi_2 + 1).d
    *(rdi_1 + 8) = rax_16
    
    if (rax_16 s> *(rdi_1 + 0xc))
        sub_140638870(rdi_1)
    
    *(*rdi_1 + (rsi_2 << 3)) = rbx_2
    int64_t rcx_12 = var_68
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    sub_140b4cb40(&var_f8)
    result = (*(*arg2 + 0x168))(arg2, &i)

return result
