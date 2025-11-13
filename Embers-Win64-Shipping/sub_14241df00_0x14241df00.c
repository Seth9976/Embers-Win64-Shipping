// 函数: sub_14241df00
// 地址: 0x14241df00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || *arg2 == 0)
    return 

int32_t r15_1 = *(arg1 + 0x50)
int32_t r15_2 = r15_1 - 1

if (r15_1 - 1 s< 0)
    return 

int64_t rdx_1 = sx.q(r15_2) << 4
int64_t arg_10 = sx.q(r15_2 + 1) << 4
int64_t var_58_1 = rdx_1
int64_t r13_1 = rdx_1
int32_t temp1_1

do
    int64_t rax_4 = -1
    
    do
        rax_4 += 1
    while (arg2[rax_4] != 0)
    
    int64_t* rdx_2 = rdx_1 + *(arg1 + 0x48)
    int32_t rcx = rdx_2[1].d
    int16_t* rbp_1
    
    if (rcx == 0)
        rbp_1 = &data_142d40450
    else
        rbp_1 = *rdx_2
    
    int32_t rbx_1 = rcx - 1
    
    if (rcx == 0)
        rbx_1 = 0
    
    if (rax_4.d s< 0)
        rbx_1 = 0
    else if (rax_4.d s< rbx_1)
        rbx_1 = rax_4.d
    
    int16_t* var_48 = nullptr
    int32_t rdx_3 = 0
    int32_t var_40_1 = 0
    int32_t rax_5 = 0
    int32_t var_3c_1 = 0
    int16_t* rdi_1 = nullptr
    int16_t* const rcx_5
    int32_t rsi_2
    
    if (rbp_1 != 0 && *rbp_1 != 0 && rbx_1 s> 0)
        if (rbx_1 + 1 s> 0)
            sub_1405947f0(&var_48, rbx_1 + 1)
            rax_5 = var_3c_1
            rdx_3 = var_40_1
            rdi_1 = var_48
        
        rsi_2 = rdx_3 + 1 + rbx_1
        
        if (rsi_2 s> rax_5)
            sub_140594770(&var_48)
            rdi_1 = var_48
        
        UnDecorator::getReferenceType(rdi_1, rbp_1, rbx_1 * 2)
        rdi_1[sx.q(rsi_2) - 1] = 0
        rcx_5 = rdi_1
    
    if (rbp_1 == 0 || *rbp_1 == 0 || rbx_1 s<= 0 || rsi_2 == 0)
        rcx_5 = &data_142d40450
    
    rbx_1.b = sub_140a54510(rcx_5, arg2) == 0
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx_1.b != 0)
        wchar16 const* const rdx_7 = u"DefaultPlayer"
        
        if (arg3 != 0)
            rdx_7 = arg3
        
        int64_t* rax_7 = sub_140af5690(data_143ddb400, rdx_7, 0, 0, arg4)
        void var_50
        
        if (rax_7 != 0 && sub_140a4f230(rax_7, *sub_140b58260(&var_50, arg2, 1)) s> 0)
            sub_140af04f0(data_143ddb400, 0, arg4)
        
        int64_t rcx_11 = *(*(arg1 + 0x48) + r13_1)
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int32_t rax_12 = *(arg1 + 0x50)
        int32_t rcx_13 = rax_12 - r15_2
        
        if (rcx_13 != 1)
            int64_t rax_11 = *(arg1 + 0x48)
            memmove(rax_11 + r13_1, arg_10 + rax_11, (rcx_13 - 1) << 4)
            rax_12 = *(arg1 + 0x50)
        
        *(arg1 + 0x50) = rax_12 - 1
        sub_140638bc0(arg1 + 0x48)
    
    r13_1 -= 0x10
    arg_10 -= 0x10
    rdx_1 = var_58_1 - 0x10
    temp1_1 = r15_2
    r15_2 -= 1
    var_58_1 = rdx_1
while (temp1_1 - 1 s>= 0)
