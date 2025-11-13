// 函数: sub_141d691b0
// 地址: 0x141d691b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
arg1[0x115] = 0
sub_140d3a3a0(&arg1[0x113], *(arg3 + 0xb8))
int512_t zmm1 = sub_140d3a3a0(&arg1[0x114], arg3)
int16_t* arg_28
arg1[0x116].w = *arg_28
void* rax_1 = sub_1420e3ab0(arg3)
int16_t* const var_38

if (rax_1 != 0)
    int32_t rcx_4
    rcx_4.b = *(rax_1 + 0x54) == 0
    int64_t* rax_3
    
    if ((rcx_4.b & sub_140b5b8a0(*(rax_1 + 0x50), 0)) == 0)
        arg_28 = *(rax_1 + 0x50)
        rax_3 = &arg_28
    else
        rax_3 = sub_1420e4d10(rax_1, &arg_8)
    
    int16_t* var_48
    zmm1 = sub_140b63b70(rax_3, &var_48)
    int16_t* rdx_4 = var_48
    int32_t var_40
    int16_t* rcx_7 = &rdx_4[sx.q(var_40)]
    
    while (rcx_7 != rdx_4)
        rcx_7 -= 2
        
        if (*rcx_7 == 0x2f)
            int32_t rcx_9 = ((rcx_7 - rdx_4) s>> 1).d
            
            if (rcx_9 != 0xffffffff)
                int32_t rax_6 = var_40 - 1
                
                if (var_40 == 0)
                    rax_6 = 0
                
                if (rcx_9 s< rax_6 - 1)
                    int16_t* rsi_1 = &data_142d40450
                    int16_t* var_58 = nullptr
                    int32_t var_50_1 = 0
                    int16_t* const rax_8 = &data_142d40450
                    int16_t* const* i = &var_38
                    
                    if (var_40 != 0)
                        rax_8 = rdx_4
                    
                    void* rdi
                    rdi.b = 1
                    var_38 = rax_8
                    void* var_30_1 = &rdx_4[sx.q(rcx_9 + 1)]
                    int64_t __saved_r15
                    
                    do
                        if (rdi.b == 0)
                            sub_140a20ba0(&var_58, &data_142d404c4, 1)
                        else
                            rdi.b = 0
                        
                        int16_t* const rdx_5 = *i
                        int64_t r8_1 = -1
                        
                        do
                            r8_1 += 1
                        while (rdx_5[r8_1] != 0)
                        
                        sub_140a20ba0(&var_58, rdx_5, r8_1.d)
                        i = &i[1]
                    while (i != &__saved_r15)
                    
                    if (var_50_1 != 0)
                        rsi_1 = var_58
                    
                    zmm1 = sub_140b58260(&arg_28, rsi_1, 1)
                    int16_t* rcx_14 = var_58
                    arg1[0x115] = arg_28
                    
                    if (rcx_14 != 0)
                        zmm1 = sub_140a74f90(rcx_14)
                    
                    rdx_4 = var_48
            
            break
    
    if (rdx_4 != 0)
        zmm1 = sub_140a74f90(rdx_4)

void*** rax_12 = j_sub_140a82f30(0x78)
void*** rsi_2

if (rax_12 == 0)
    rsi_2 = nullptr
else
    void*** rax_13
    rax_13, zmm1 = sub_141d65b60(rax_12)
    rsi_2 = rax_13

void*** rax_14 = j_sub_140a82f30(0x18)
void*** rbx_2 = rax_14

if (rax_14 == 0)
    rbx_2 = nullptr
else
    rax_14[1].d = 1
    *(rax_14 + 0xc) = 1
    *rbx_2 = &data_142d42ea8
    rbx_2[2] = rsi_2

void**** rdi_1 = &rsi_2[1]

if (rsi_2 == 0)
    rdi_1 = nullptr

if (rdi_1 != 0)
    void* rax_15
    
    if (*rdi_1 != 0)
        rax_15 = rdi_1[1]
    
    if (*rdi_1 == 0 || rax_15 == 0 || *(rax_15 + 8) s<= 0)
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        *rdi_1 = rsi_2
        int64_t* rcx_17 = rdi_1[1]
        
        if (rbx_2 != rcx_17)
            if (rbx_2 != 0)
                *(rbx_2 + 0xc) += 1
                rcx_17 = rdi_1[1]
            
            if (rcx_17 != 0)
                int32_t temp6_1 = *(rcx_17 + 0xc)
                *(rcx_17 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rcx_17 + 8))(rcx_17, 1)
            
            rdi_1[1] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rbx_2)[1](rbx_2, 1)

if (&arg1[0x103] == &var_38)
label_141d694a2:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
else
    arg1[0x103] = rsi_2
    void*** rdi_2 = arg1[0x104]
    
    if (rbx_2 == rdi_2)
        goto label_141d694a2
    
    arg1[0x104] = rbx_2
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp3_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rdi_2)[1](rdi_2, 1)

return sub_141a545f0(arg1, arg2, arg4, zmm1) __tailcall
