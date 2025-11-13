// 函数: sub_140b17a00
// 地址: 0x140b17a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38

if (arg3 != &var_38)
    int64_t rcx = *arg3
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg3 = 0
    arg3[1] = 0

int64_t r13
r13.b = 0
int32_t i = 0
int16_t* const rax

if (arg2[1].d == 0)
    rax = &data_142d40450
else
    rax = *arg2

int16_t* const r8

if (arg1[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg1

data_143de69c4
int16_t* const var_48 = rax
sub_140a2e390(&var_38, u"%s%05i.%s", r8)
int16_t* const rdx = &data_142d40450
int16_t* rdi = var_38
int32_t var_30

if (var_30 != 0)
    rdx = rdi

if ((*(*arg4 + 0x48))(arg4, rdx) != 0)
    i = data_143de69c4 + 1

for (; i s< 0x186a0; i += 1)
    int16_t* const rax_4
    
    if (arg2[1].d == 0)
        rax_4 = &data_142d40450
    else
        rax_4 = *arg2
    
    int16_t* const r8_1
    
    if (arg1[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *arg1
    
    int16_t* const var_48_1 = rax_4
    sub_140a2e390(&var_38, u"%s%05i.%s", r8_1)
    
    if (rdi != 0)
        sub_140a74f90(rdi)
    
    rdi = var_38
    int16_t* rdx_1 = &data_142d40450
    var_38 = nullptr
    int32_t rbp_1 = var_30
    var_30.q = 0
    
    if (rbp_1 != 0)
        rdx_1 = rdi
    
    if ((*(*arg4 + 0x48))(arg4, rdx_1) == 0)
        data_143de69c4 = i
        
        if (arg3 != &var_38)
            int32_t r8_2 = *(arg3 + 0xc)
            arg3[1].d = rbp_1
            
            if (rbp_1 != 0 || r8_2 != 0)
                sub_1405a4c70(arg3, rbp_1, r8_2)
                memcpy(*arg3, rdi, rbp_1 * 2)
            else
                *(arg3 + 0xc) = rbp_1
        
        r13.b = 1
        break

if (rdi != 0)
    sub_140a74f90(rdi)

return zx.q(r13.b)
