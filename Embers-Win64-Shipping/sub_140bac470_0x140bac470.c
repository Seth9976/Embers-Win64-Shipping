// 函数: sub_140bac470
// 地址: 0x140bac470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ba9350()
int16_t* var_58
sub_140a1c6a0(&var_58, arg1)
sub_140b21570(&var_58)
int64_t rsi
rsi.b = 0
EnterCriticalSection(&data_143e1a450)
int64_t* i = data_143e1a780

for (void* rdi_2 = &i[sx.q(data_143e1a788) * 4]; i != rdi_2; i = &i[4])
    if (sub_140a32a50(&var_58, i, 1) != 0)
        rsi.b = 1
        break

LeaveCriticalSection(&data_143e1a450)
int32_t rdi_3 = 0
int64_t var_28

if (rsi.b == 0)
    sub_140a464c0()
    int16_t* const r8_1 = &data_142d40450
    int32_t var_50
    
    if (var_50 != 0)
        r8_1 = var_58
    
    char const (* r9_1)[0x4] = data_14399ea08
    int64_t* rax_2 = (*(r9_1 + 0xf0))(&data_14399ea08, &var_28, r8_1, r9_1)
    
    if (&var_58 != rax_2)
        int16_t* rcx_3 = var_58
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        var_58 = *rax_2
        *rax_2 = 0
        var_50 = rax_2[1].d
        int32_t var_4c_1 = *(rax_2 + 0xc)
        rax_2[1] = 0
    
    int64_t rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t rax_5 = sx.q(arg1[1].d)
    
    if (rax_5.d s> 0 && *(*arg1 + (rax_5 << 1) - 2) == 0x2f
            && (var_50 == 0 || var_50 - 1 s<= 0 || var_58[sx.q(var_50 - 1) - 1] != 0x2f))
        sub_140a20ba0(&var_58, &data_142d5a024, 1)

sub_140a1dfc0(&var_58, &var_28)
int64_t var_48
sub_140b3d490(&var_48, &var_28)
EnterCriticalSection(&data_143e1a450)
void* rbx_1 = data_143e1a790
void* rsi_3 = (sx.q(data_143e1a798) << 5) + rbx_1
int64_t result
int32_t var_40

if (rbx_1 == rsi_3)
label_140bac666:
    LeaveCriticalSection(&data_143e1a450)
    int64_t rbx_2 = sx.q(var_40)
    int64_t rcx_14 = arg2[1]
    int64_t rsi_4 = var_48
    int64_t rdi_4 = rbx_2 * 2
    
    if (rcx_14 + rdi_4 u>= arg2[2])
        sub_140b38e20(arg2, rbx_2)
        rcx_14 = arg2[1]
    
    arg2[1] = rcx_14 + (rbx_2 << 1)
    result = memcpy(rcx_14, rsi_4, rdi_4.d)
else
    while (true)
        sub_140a1dfc0(rbx_1 + 0x10, &var_28)
        int32_t var_20
        int32_t rcx_12
        
        if (var_20 s>= 0)
            rcx_12 = var_40
            
            if (var_20 s< rcx_12)
                rcx_12 = var_20
        else
            rcx_12 = 0
        
        int64_t var_38 = var_48
        int32_t var_30_1 = rcx_12
        
        if (var_20 == rcx_12 && sub_140a22710(&var_28, &var_38, 1) == 0)
            int32_t rax_14 = *(rbx_1 + 0x18)
            int64_t r8_3 = sx.q(var_40)
            int32_t rdx_10 = r8_3.d
            int32_t rcx_17 = rax_14 - 1
            
            if (rax_14 == 0)
                rcx_17 = 0
            
            int32_t rdx_11 = rdx_10 - rcx_17
            
            if (rdx_10 - rcx_17 s>= 0)
                rdi_3 = r8_3.d
                
                if (rdx_11 s< r8_3.d)
                    rdi_3 = rdx_11
            
            int64_t rsi_5 = sx.q(rdi_3)
            int64_t r14_1 = var_48 + ((r8_3 - rsi_5) << 1)
            int64_t* rax_16 = sub_140b31040(arg2, rbx_1)
            int64_t rdi_5 = rsi_5 * 2
            int64_t rcx_21 = rax_16[1]
            
            if (rdi_5 + rcx_21 u>= rax_16[2])
                sub_140b38e20(rax_16, rsi_5)
                rcx_21 = rax_16[1]
            
            rax_16[1] = rdi_5 + rcx_21
            memcpy(rcx_21, r14_1, rdi_5.d)
            result = LeaveCriticalSection(&data_143e1a450)
            break
        
        rbx_1 += 0x20
        
        if (rbx_1 == rsi_3)
            goto label_140bac666
int16_t* rcx_16 = var_58

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
