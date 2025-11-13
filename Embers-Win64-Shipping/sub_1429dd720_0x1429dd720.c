// 函数: sub_1429dd720
// 地址: 0x1429dd720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == data_143fed250)
    data_143fed250 = 1
    z = true
else
    data_143fed250
    z = false

if (not(z))
    uint64_t rax_3 = 2
    bool z_1
    
    if (2 == data_143fed250)
        data_143fed250 = 2
        z_1 = true
    else
        rax_3 = zx.q(data_143fed250)
        z_1 = false
    
    if (not(z_1))
        bool z_2
        
        do
            Sleep(0)
            rax_3 = 2
            
            if (2 == data_143fed250)
                data_143fed250 = 2
                z_2 = true
            else
                rax_3 = zx.q(data_143fed250)
                z_2 = false
        while (not(z_2))
    
    return rax_3

int32_t temp0
int32_t temp1
int32_t temp2
int32_t temp3
temp0, temp1, temp2, temp3 = __cpuid(0, 0)
int32_t rax_2 = temp0
int32_t var_38 = rax_2
int32_t r8 = rax_2
int32_t var_34 = temp1
int32_t var_30 = temp2
int32_t var_2c = temp3

if (rax_2 u>= 1)
    int32_t temp0_1
    int32_t temp1_1
    int32_t temp2_1
    int32_t temp3_1
    temp0_1, temp1_1, temp2_1, temp3_1 = __cpuid(1, 0)
    rax_2 = temp0_1
    int32_t var_20_1 = temp2_1
    int32_t var_28_1 = rax_2
    int32_t var_24_1 = temp1_1
    int32_t var_1c_1 = temp3_1
    
    if ((temp2_1 & 0x18000000) == 0x18000000)
        int32_t temp0_2
        int32_t temp1_2
        temp0_2, temp1_2 = _xgetbv(0, arg1)
        rax_2 = temp1_2
        
        if ((((zx.q(temp0_2) << 0x20).b | rax_2.b) & 6) == 6 && r8 u>= 7)
            int32_t temp0_3
            int32_t temp1_3
            int32_t temp2_2
            int32_t temp3_2
            temp0_3, temp1_3, temp2_2, temp3_2 = __cpuid(7, 0)
            rax_2 = temp0_3
            int32_t var_18_1 = rax_2
            int32_t var_14_1 = temp1_3
            int32_t var_10_1 = temp2_2
            int32_t var_c_1 = temp3_2

data_143fed250 += 1
return rax_2
