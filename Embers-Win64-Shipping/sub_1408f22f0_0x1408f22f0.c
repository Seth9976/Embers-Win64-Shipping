// 函数: sub_1408f22f0
// 地址: 0x1408f22f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18

if (*sub_1408f1b50(&data_143986580, &arg_18, arg1) == 0xffffffff)
    int16_t* const r8_1
    
    if (arg1[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *arg1
    
    int64_t var_38
    sub_140a2e390(&var_38, Tried to remove GameplayScreenshotInstance "%s", but it did not exist!", 
        r8_1)
    sub_140b19e60()
    sub_140b1f680(&data_1439a8bd0, 2, &var_38)
    int64_t rcx_1 = var_38
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t rcx_2 = *arg1
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t rax_1
    rax_1.b = 0
    return rax_1

int32_t arg_10
sub_1408f1b50(&data_143986580, &arg_10, arg1)
int64_t rax_2 = sx.q(arg_10)
void* const rbx_2

if (rax_2.d == 0xffffffff)
    rbx_2 = nullptr
else
    rbx_2 = (rax_2 << 5) + data_143986580

int64_t* rbx_3 = *(rbx_2 + 0x10)

if (rbx_3 != 0)
    void* rax_3 = data_143f5b298
    
    if (rax_3 != 0 && *(rax_3 + 0x788) != 0)
        sub_1405a46b0(&data_143a2e078, rbx_3)
    
    sub_1405a46b0(&data_143a30728, rbx_3)
    int64_t* rsi_1 = rbx_3[0xa]
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t rbp_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, zx.q(rbp_1))
    
    int64_t rcx_5 = rbx_3[6]
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t rcx_6 = rbx_3[4]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t rcx_7 = rbx_3[2]
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = *rbx_3
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    j_sub_140a74f90(rbx_3)

sub_1408f2170(&data_143986580, arg1)
int16_t* const r8_4

if (arg1[1].d == 0)
    r8_4 = &data_142d40450
else
    r8_4 = *arg1

int64_t var_28
sub_140a2e390(&var_28, u"Removed GameplayScreenshotInstance "%s"", r8_4)
sub_140b19e60()
sub_140b1f5f0(&data_1439a8bd0, &var_28)
int64_t rcx_11 = var_28

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = *arg1

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rax_7
rax_7.b = 1
return rax_7
