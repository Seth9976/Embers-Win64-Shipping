// 函数: sub_141418390
// 地址: 0x141418390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg3[4]
void* r12 = nullptr
int64_t* rax_1 = (*(*rcx + 0x248))(rcx)

if (rax_1 != 0)
    void* rax_3 = (*(*rax_1 + 0x240))(rax_1)
    r12 = rax_3
    
    if (rax_3 != 0)
        sub_1420ec790(rax_3)

char rax_4 = sub_140a80f40()

if (rax_4 != 0)
    sub_142134440()
else if (data_143f138f4 != rax_4)
label_141418426:
    void var_a0
    int64_t* rax_6 = sub_14141c360(&var_a0, nullptr, 0xff)
    void* rcx_4 = *rax_6
    int32_t r8 = rax_6[2].d
    int64_t* rdx = rax_6[1]
    int64_t* rbx_1 = *(rcx_4 + 0x18)
    int64_t* arg_20 = rbx_1
    int32_t* rbp_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rbp_1 += 1
        rbx_1 = arg_20
    
    sub_1405a5890(rcx_4, rdx, r8, 1)
    
    if (rbx_1 != 0)
        int32_t rax_7 = *rbp_1
        *rbp_1 -= 1
        
        if (rax_7 == 1)
            sub_140a2f6e0(arg_20)
else if (data_143de5480 == rax_4)
    sub_142134440()
else
    uint32_t rax_5
    rax_5.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_5.b == 0)
        goto label_141418426
    
    sub_142134440()

char rax_8 = sub_140a80f40()

if (rax_8 != 0)
    sub_1414305d0(&data_143ed3360)
else if (data_143f138f4 != rax_8)
label_1414184c7:
    void var_88
    int64_t* rax_10 = sub_14141c4b0(&var_88, nullptr, 0xff)
    void* rcx_7 = *rax_10
    int32_t r8_1 = rax_10[2].d
    int64_t* rdx_1 = rax_10[1]
    int64_t* rbx_2 = *(rcx_7 + 0x18)
    int64_t* var_c8_1 = rbx_2
    int32_t* rbp_2 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rbp_2 += 1
        rbx_2 = var_c8_1
    
    sub_1405a5890(rcx_7, rdx_1, r8_1, 1)
    
    if (rbx_2 != 0)
        int32_t rax_11 = *rbp_2
        *rbp_2 -= 1
        
        if (rax_11 == 1)
            sub_140a2f6e0(var_c8_1)
else if (data_143de5480 == rax_8)
    sub_1414305d0(&data_143ed3360)
else
    uint32_t rax_9
    rax_9.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_9.b == 0)
        goto label_1414184c7
    
    sub_1414305d0(&data_143ed3360)

sub_14240e030(arg2, 0)
int32_t result

if (rax_1 == 0)
    result = data_14399fa50
else
    (*(*rax_1 + 0x2d0))(rax_1)
    result = (*(*rax_1 + 0x2c8))(rax_1)

int32_t i = 0
*(arg3 + 0x3c) = result

if (arg3[0xd].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t* rcx_12 = *(r14_1 + arg3[0xc])
        result = (*(*rcx_12 + 0x28))(rcx_12, arg3)
        i += 1
        r14_1 = &r14_1[2]
    while (i s< arg3[0xd].d)

if (rax_1 != 0)
    if (r12 != 0)
        rax_1[0xc39].d
        *(rax_1 + 0x61c4)
    
    *(arg2 + 0x60)
    void*** rdi_1
    
    if (*(arg3[4] + 8) s< 3)
        void*** rax_19 = j_sub_140a82f30(0x3e0)
        
        if (rax_19 == 0)
            rdi_1 = nullptr
        else
            rdi_1 = sub_14125c940(rax_19, arg3)
    else
        void*** rax_17 = j_sub_140a82f30(0x408)
        
        if (rax_17 == 0)
            rdi_1 = nullptr
        else
            rdi_1 = sub_1410ea3b0(rax_17, arg3)
    
    sub_141f4db00(rax_1)
    void*** var_b0 = rdi_1
    
    if (sub_140a80f40() == 0)
        uint32_t rax_22
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_22.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_22.b == 0))
            void var_70
            void** rax_23 = sub_14141c0c0(&var_70, nullptr, 0xff)
            *(*rax_23 + 0x10) = rdi_1
            void* rcx_21 = *rax_23
            int32_t r8_5 = rax_23[2].d
            int64_t* rdx_6 = rax_23[1]
            int64_t* rbx_4 = *(rcx_21 + 0x20)
            int64_t* var_c0_1 = rbx_4
            int32_t* rsi_1 = &rbx_4[9]
            
            if (rbx_4 != 0)
                *rsi_1 += 1
                rbx_4 = var_c0_1
            
            sub_1405a5630(rcx_21, rdx_6, r8_5, 1)
            
            if (rbx_4 != 0)
                int32_t rax_24 = *rsi_1
                *rsi_1 -= 1
                
                if (rax_24 == 1)
                    sub_140a2f6e0(var_c0_1)
        else
            void*** var_a8 = rdi_1
            sub_1414150b0(&var_a8, &data_143f02b98)
    else
        sub_1414150b0(&var_b0, &data_143f02b98)
    
    int32_t i_1 = 0
    
    if (rdi_1[1][0x205].d s> 0)
        int64_t rbx_5 = 0
        
        do
            int64_t* rcx_23 = rdi_1[1]
            (*(*rcx_23 + 0x110))(rcx_23, *(rcx_23[0x204] + rbx_5), rdi_1)
            rbx_5 += 8
            i_1 += 1
        while (i_1 s< rdi_1[1][0x205].d)
    
    rdi_1[0x10].d = 0
    char rax_28 = sub_140a80f40()
    
    if (rax_28 != 0)
        sub_141427340(&data_143f02b98, rdi_1)
        return sub_1419a2190() __tailcall
    
    if (data_143f138f4 == rax_28)
        if (data_143de5480 == rax_28)
            sub_141427340(&data_143f02b98, rdi_1)
            return sub_1419a2190() __tailcall
        
        uint32_t rax_29
        rax_29.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_29.b != 0)
            sub_141427340(&data_143f02b98, rdi_1)
            return sub_1419a2190() __tailcall
    
    void var_58
    void** rax_31 = sub_14141be20(&var_58, nullptr, 0xff)
    *(*rax_31 + 0x10) = rdi_1
    void* rcx_27 = *rax_31
    int32_t r8_8 = rax_31[2].d
    int64_t* rdx_11 = rax_31[1]
    int64_t* rbx_6 = *(rcx_27 + 0x20)
    int64_t* var_b8_1 = rbx_6
    int32_t* rdi_2 = &rbx_6[9]
    
    if (rbx_6 != 0)
        *rdi_2 += 1
        rbx_6 = var_b8_1
    
    result = sub_1405a5630(rcx_27, rdx_11, r8_8, 1)
    
    if (rbx_6 != 0)
        int32_t r15_1 = *rdi_2
        *rdi_2 -= 1
        
        if (r15_1 == 1)
            return sub_140a2f6e0(var_b8_1)

return result
