// 函数: sub_14243f910
// 地址: 0x14243f910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg4)
int64_t* rbp_2 = (r15 << 6) + *(*(arg1 + 8) + 0x28)
int64_t rax_1 = sub_140bc7eb0(rbp_2)

if (sub_140bc7f20(rbp_2) != 0)
    int64_t rax_8 = *(arg1 + 0x10)
    int64_t* r11_1 = *(rax_8 + (r15 << 3))
    int64_t* rsi_1 = rax_8 + (r15 << 3)
    
    if (r11_1 != 0)
    label_14243fa2e:
        int32_t rcx_12
        
        if (arg7 != 0)
            rcx_12 = data_143a30564
        
        if (arg7 == 0 || arg7 != 1)
            rcx_12 = data_143a30560
        
        int64_t* arg_8
        (*(*r11_1 + 8))(r11_1, &arg_8, arg3, arg5 + rax_1, arg6, rcx_12 | 0x200)
        int64_t* rax_18 = arg_8
        
        if (rax_18 != 0)
            *arg2 = rax_18
            rax_18[1].d += 1
            int64_t* rcx_15 = arg_8
            arg2[1].d = 2
            
            if (rcx_15 != 0)
                rcx_15[1].d -= 1
                
                if (rcx_15[1].d == 1 && rcx_15 != 0)
                    (*(*rcx_15 + 0x18))(rcx_15, 1)
        else
            *arg2 = rax_18
            arg2[1].d = 1
    else
        int64_t* rax_10 = sub_140a38210(sub_140bcc960(rbp_2))
        r11_1 = *rsi_1
        int64_t* rcx_7 = r11_1
        
        if (r11_1 != rax_10)
            *rsi_1 = rax_10
            r11_1 = rax_10
            
            if (rcx_7 != 0)
                (**rcx_7)(rcx_7, 1)
                r11_1 = *rsi_1
        
        if (r11_1 != 0)
            goto label_14243fa2e
        
        void* rdx_3 = *(arg1 + 0x40)
        void* r8_1 = arg1 + 0x30
        int32_t rdi_3 = 1 << (r15.b & 0x1f)
        
        if (rdx_3 != 0)
            r8_1 = rdx_3
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r15.d)
        int64_t rcx_10 = sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5)
        int32_t rax_16 = *(r8_1 + (rcx_10 << 2))
        
        if ((rax_16 & rdi_3) == 0)
            *(r8_1 + (rcx_10 << 2)) = rdi_3 | rax_16
        
        *arg2 = 0
        arg2[1].d = 0
else
    void* rdx = *(arg1 + 0x40)
    void* r8 = arg1 + 0x30
    int32_t rdi_1 = 1 << (r15.b & 0x1f)
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r15.d)
    int64_t rcx_4 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
    int32_t rax_7 = *(r8 + (rcx_4 << 2))
    
    if ((rax_7 & rdi_1) == 0)
        *(r8 + (rcx_4 << 2)) = rdi_1 | rax_7
    
    *arg2 = 0
    arg2[1].d = 0

return arg2
