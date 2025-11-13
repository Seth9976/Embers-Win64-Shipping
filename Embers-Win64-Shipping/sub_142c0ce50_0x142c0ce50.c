// 函数: sub_142c0ce50
// 地址: 0x142c0ce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t r14 = *(arg1 + 0x24)

if (r14 - 4 u>= r14)
    *(arg1 + 0x20) = 1

int128_t* rsi = &data_144017550
int128_t* rax_3

if (r14 - 4 u< *(arg1 + 0x28))
    rax_3 = *(arg1 + 0x30) + (zx.q(r14 - 4) << 3)
else
    data_144017550.q = 0
    rax_3 = &data_144017550

double var_98 = *rax_3

if (r14 - 3 u>= *(arg1 + 0x24))
    *(arg1 + 0x20) = 1

int128_t* rax_6

if (r14 - 3 u< *(arg1 + 0x28))
    rax_6 = *(arg1 + 0x30) + (zx.q(r14 - 3) << 3)
else
    data_144017550.q = 0
    rax_6 = &data_144017550

double zmm0 = *rax_6

if (r14 - 2 u>= *(arg1 + 0x24))
    *(arg1 + 0x20) = 1

uint64_t result

if (r14 - 2 u< *(arg1 + 0x28))
    result = *(arg1 + 0x30) + (zx.q(r14 - 2) << 3)
else
    data_144017550.q = 0
    result = &data_144017550

int32_t result_1 = int.d(fconvert.t(*result))
void* r8 = *(arg2 + 0x28)
uint32_t rbp_1
int64_t r9

if (result_1 u>= 0x100)
    rbp_1 = 0
else
    result = zx.q(result_1)
    rbp_1 = zx.d(*(result + &data_14369f9c0))
    
    if (rbp_1 == 0xffffffff)
        rbp_1 = 0
    else
        char* rcx_3 = *(r8 + 0x40)
        
        if (rcx_3 != &data_14369a5d0)
            result, r9 = sub_142c0b5f0(rcx_3, rbp_1, *(r8 + 0x118))
            rbp_1 = result.d
        else if (*(r8 + 0xe4) != 0 || result_1 u> 0xe4)
            rbp_1 = 0

uint64_t r14_1 = zx.q(r14 - 1)

if (r14_1.d u>= *(arg1 + 0x24))
    *(arg1 + 0x20) = 1

if (r14_1.d u< *(arg1 + 0x28))
    result = *(arg1 + 0x30)
    rsi = result + (r14_1 << 3)
else
    data_144017550.q = 0

int32_t result_2 = int.d(fconvert.t(*rsi))
int64_t* rsi_1 = *(arg2 + 0x28)
uint32_t rbx_1

if (result_2 u>= 0x100)
    rbx_1 = 0
else
    result = zx.q(result_2)
    rbx_1 = zx.d(*(result + &data_14369f9c0))
    
    if (rbx_1 == 0xffffffff)
        rbx_1 = 0
    else
        char* rcx_4 = rsi_1[8]
        
        if (rcx_4 != &data_14369a5d0)
            result, r9 = sub_142c0b5f0(rcx_4, rbx_1, rsi_1[0x23].d)
            rbx_1 = result.d
        else if (*(rsi_1 + 0xe4) != 0 || result_2 u> 0xe4)
            rbx_1 = 0

if (*(arg1 + 0xd0) != 0 || rbp_1 == 0 || rbx_1 == 0)
    *(arg1 + 0x38) = 1
else
    r9.b = 1
    void var_68
    int64_t r9_1
    result, r9_1 = sub_142c0a4a0(rsi_1, rbp_1, &var_68)
    
    if (result.b == 0)
        *(arg1 + 0x38) = 1
    else
        r9_1.b = 1
        double var_88
        result = sub_142c0a4a0(*(arg2 + 0x28), rbx_1, &var_88)
        
        if (result.b == 0)
            *(arg1 + 0x38) = 1
        else
            sub_142c0c860(arg2 + 8, &var_68)
            double zmm0_1 = var_88
            double var_80
            double var_78
            double var_70
            
            if (not(var_78 <= zmm0_1) && not(var_70 <= var_80))
                var_88 = zmm0_1 + var_98
                double var_80_1 = var_80 + zmm0
                double var_78_1 = var_78 + var_98
                double var_70_1 = var_70 + zmm0
            
            sub_142c0c860(arg2 + 8, &var_88)

__security_check_cookie(rax_1 ^ &var_b8)
return result
