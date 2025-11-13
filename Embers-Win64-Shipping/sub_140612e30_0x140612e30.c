// 函数: sub_140612e30
// 地址: 0x140612e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = arg4[2] & 0xfffffffffffffffc
uint64_t var_50 = 0
int32_t var_44 = 0
int32_t r15 = 1
uint64_t r14 = 0
int32_t rbp = 0
int32_t r10 = 0

if (rax_1 u> 4)
    char* rdi_1 = 4
    
    do
        int64_t temp0_1 = arg4[3]
        int64_t* rcx = arg4
        
        if (temp0_1 u>= 0x10)
            rcx = *arg4
        
        int64_t* rcx_1 = arg4
        
        if (temp0_1 u>= 0x10)
            rcx_1 = *arg4
        
        char r8 = *(rdi_1 + rcx_1 + 2)
        int64_t* rcx_2 = arg4
        
        if (temp0_1 u>= 0x10)
            rcx_2 = *arg4
        
        int64_t* rcx_3 = arg4
        
        if (temp0_1 u>= 0x10)
            rcx_3 = *arg4
        
        int64_t rsi_1 = sx.q(rbp)
        char var_57_1 = *(rdi_1 + rcx_2 + 1)
        char var_56_1 = *(rdi_1 + rcx_3)
        rbp = (rsi_1 + 1).d
        char var_55_1 = *(rdi_1 + rcx + 3)
        
        if (rbp s> r10)
            sub_1406105e0(&var_50)
            r10 = var_44
            r14 = var_50
        
        r15 += 1
        *(r14 + (rsi_1 << 2)) = r8.d
        rdi_1 = &rdi_1[4]
    while (sx.q(r15) u< arg4[2] u>> 2)

void*** result_1 = j_sub_140a82f30(0x58)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    var_50 = 0
    int32_t var_48_2 = rbp
    uint64_t rbp_1
    
    if (rbp != 0)
        sub_1405c4a90(&var_50, rbp, 0)
        rbp_1 = var_50
        memcpy(rbp_1, r14, rbp << 2)
    else
        int32_t var_44_1 = 0
        rbp_1 = 0
    
    int64_t* rax_5 = arg4
    
    if (arg4[3] u>= 0x10)
        rax_5 = *arg4
    
    char r15_1 = *(rax_5 + 2)
    int32_t* rax_6 = j_sub_140a82f30(0x18)
    int32_t* rsi_2 = rax_6
    
    if (rax_6 == 0)
        rsi_2 = nullptr
    else
        *(rax_6 + 8) = 0
        sub_140615390(rax_6, arg3)
    
    sub_14060ca80(result, arg1, arg2)
    result[3] = rsi_2
    result[1].d = 0xff
    result[5] = 0
    *result = &data_142d63818
    result[6] = 0
    result[9] = 0
    result[7].b = 0
    result[0xa] = 0xf
    result[4].b = r15_1
    sub_14060d9c0(&result[5], &var_50)
    
    if (rbp_1 != 0)
        sub_140a74f90(rbp_1)

if (r14 != 0)
    sub_140a74f90(r14)

int64_t rdx_7 = arg4[3]

if (rdx_7 u>= 0x10)
    void* rcx_14 = *arg4
    
    if (rdx_7 + 1 u>= 0x1000)
        void* r8_4 = *(rcx_14 - 8)
        
        if (rcx_14 - r8_4 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_14 = r8_4
    
    j_sub_140a74f90(rcx_14)

arg4[2] = 0
arg4[3] = 0xf
*arg4 = 0
return result
