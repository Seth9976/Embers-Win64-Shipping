// 函数: sub_140b12b80
// 地址: 0x140b12b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t rdi = 0
int64_t* var_178 = nullptr
int32_t i_2 = 0
uint64_t result = sub_140a2ccb0(arg1, &var_178, U":\t", 1)

if (i_2 == 5)
    void var_158
    sub_140ae6a10(&var_158)
    int64_t* rax_2 = var_178
    int16_t* const rsi_1 = &data_142d40450
    int16_t* r9_1
    
    if (rax_2[5].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = rax_2[4]
    
    int16_t* rdx_2
    
    if (rax_2[3].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = rax_2[2]
    
    int512_t entry_zmm2
    sub_140af9680(&var_158, rdx_2, 1, r9_1, entry_zmm2, 0)
    int64_t* rax_3 = var_178
    uint64_t var_168 = 0
    int32_t var_160_1 = 0
    int16_t* r8_2
    
    if (rax_3[9].d == 0)
        r8_2 = &data_142d40450
    else
        r8_2 = rax_3[8]
    
    if (rax_3[7].d != 0)
        rsi_1 = rax_3[6]
    
    sub_140af5d90(&var_158, rsi_1, r8_2, &var_168)
    uint64_t rsi_2 = var_168
    
    if (arg1 != &var_168)
        int32_t r8_3 = *(arg1 + 0xc)
        arg1[1].d = var_160_1
        
        if (var_160_1 != 0 || r8_3 != 0)
            sub_1405a4c70(arg1, var_160_1, r8_3)
            memcpy(*arg1, rsi_2, var_160_1 * 2)
            rsi_2 = var_168
        else
            *(arg1 + 0xc) = 0
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    result = sub_140ae7280(&var_158)
else if (*arg1 != &data_142d40450)
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != 0)
        result = sub_1405947f0(arg1, 0)
        rdi = arg1[1].d
    
    arg1[1].d = rdi
    
    if (rdi s> *(arg1 + 0xc))
        result = sub_140594770(arg1)

int32_t i_1 = i_2
int64_t* rbx_1 = var_178

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_9 = *rbx_1
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_178

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
