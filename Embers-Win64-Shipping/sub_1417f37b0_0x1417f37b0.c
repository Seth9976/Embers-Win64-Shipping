// 函数: sub_1417f37b0
// 地址: 0x1417f37b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = data_143ef98ec

if (result == 0)
    return result

int32_t var_48 = arg2
int64_t var_58
sub_140d3a3a0(&var_58, arg1)
int32_t arg_20
sub_1417f0130(&data_1439c2a20, &arg_20, var_58)
int64_t rax = sx.q(arg_20)
void* const rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + data_1439c2a20

int64_t* rax_1 = rcx_3 + 8

if (rcx_3 == 0)
    rax_1 = nullptr

if (rax_1 == 0)
    int64_t* rax_3 = j_sub_140a82f30(0x180)
    void** rsi_1 = rax_3
    
    if (rax_3 == 0)
        rsi_1 = nullptr
    else
        *rax_3 = 0
        rax_3[1] = 0
        sub_1417eab70(&rax_3[2])
        rsi_1[0x2a] = var_48.q
        rsi_1[0x2b].d = arg3:4.d
        __builtin_memset(&rsi_1[0x2c], 0, 0x15)
    
    void*** rax_5 = j_sub_140a82f30(0x18)
    void*** rdi_1 = rax_5
    
    if (rax_5 == 0)
        rdi_1 = nullptr
    else
        rax_5[1].d = 1
        *(rax_5 + 0xc) = 1
        *rdi_1 = &data_142fde718
        rdi_1[2] = rsi_1
    
    void** var_38 = rsi_1
    
    if (rsi_1 != 0)
        if (*rsi_1 == 0)
        label_1417f3950:
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            *rsi_1 = rsi_1
            int64_t* rcx_7 = rsi_1[1]
            
            if (rdi_1 != rcx_7)
                if (rdi_1 != 0)
                    *(rdi_1 + 0xc) += 1
                    rcx_7 = rsi_1[1]
                
                if (rcx_7 != 0)
                    int32_t rax_7 = *(rcx_7 + 0xc)
                    *(rcx_7 + 0xc) -= 1
                    
                    if (rax_7 == 1)
                        (*(*rcx_7 + 8))(rcx_7, 1)
                
                rsi_1[1] = rdi_1
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t rax_11 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (rax_11 == 1)
                        (*rdi_1)[1](rdi_1, 1)
        else
            void* rcx_6 = rsi_1[1]
            
            if (rcx_6 == 0)
                goto label_1417f3950
            
            int32_t rax_6 = 0
            
            if (0 == *(rcx_6 + 8))
                *(rcx_6 + 8) = 0
            else
                rax_6 = *(rcx_6 + 8)
            
            if (rax_6 s<= 0)
                goto label_1417f3950
    
    void var_50
    sub_140d3a3a0(&var_50, arg1)
    int64_t* rax_13 = sub_1417ea360(&data_1439c2a20, &var_50, &var_38)
    int64_t* rsi_2 = rax_13[1]
    void* r15_1 = *rax_13
    
    if (rsi_2 != 0)
        rsi_2[1].d += 1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_16 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_16 == 1)
                (*rdi_1)[1](rdi_1, 1)
    
    int32_t rdx_4 = data_143ef98f0
    
    if (rdx_4 != 0)
        sub_1417f4520(r15_1 + 0x160, rdx_4)
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t rbp_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*rsi_2 + 8))(rsi_2, zx.q(rbp_1))
else
    void* rcx_4 = *rax_1
    
    if (*(rcx_4 + 0x150) != arg2 || *(rcx_4 + 0x154) != arg3)
        *(rcx_4 + 0x150) = var_48.q
        *(rcx_4 + 0x158) = arg3:4.d
        sub_1417f31f0()

if (data_1439c29d8 == data_1439c2a04)
label_1417f3ba4:
    int64_t* rax_45 = sub_1417ea230(&data_1439c29d0, &var_48)
    int32_t rdx_21 = data_143ef98f0
    
    if (rdx_21 != 0)
        sub_1417f4400(rax_45, rdx_21)
else
    int32_t r8_3 = sub_140b5ead0(arg3.d) + arg3:4.d
    int32_t rdx_8 = (arg2 - r8_3) ^ r8_3 u>> 0xd
    int32_t rcx_20 = (0x9e3779b9 - rdx_8 - r8_3) ^ rdx_8 << 8
    int32_t r8_6 = (r8_3 - rcx_20 - rdx_8) ^ rcx_20 u>> 0xd
    int32_t rdx_11 = (rdx_8 - rcx_20 - r8_6) ^ r8_6 u>> 0xc
    int32_t rcx_23 = (rcx_20 - rdx_11 - r8_6) ^ rdx_11 << 0x10
    int32_t r8_9 = (r8_6 - rcx_23 - rdx_11) ^ rcx_23 u>> 5
    int32_t rdx_14 = (rdx_11 - rcx_23 - r8_9) ^ r8_9 u>> 3
    int32_t rcx_26 = (rcx_23 - rdx_14 - r8_9) ^ rdx_14 << 0xa
    void* rcx_27 = data_1439c2a10
    void* rax_43 = &data_1439c2a08
    
    if (rcx_27 != 0)
        rax_43 = rcx_27
    
    int32_t rax_44 = *(rax_43 +
        (((sx.q(r8_9 - rcx_26 - rdx_14) ^ zx.q(rcx_26) u>> 0xf) & (sx.q(data_1439c2a18) - 1)) << 2))
    
    if (rax_44 == 0xffffffff)
        goto label_1417f3ba4
    
    int64_t r8_12 = data_1439c29d0
    
    while (true)
        int64_t rdx_19 = sx.q(rax_44) * 6
        
        if (*(r8_12 + (rdx_19 << 3)) == arg2 && *(r8_12 + (rdx_19 << 3) + 4) == arg3)
            break
        
        rax_44 = *(r8_12 + (rdx_19 << 3) + 0x28)
        
        if (rax_44 == 0xffffffff)
            goto label_1417f3ba4
    
    if (rax_44 == 0xffffffff)
        goto label_1417f3ba4

return data_143ef98ec
