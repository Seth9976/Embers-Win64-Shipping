// 函数: sub_140ba7d30
// 地址: 0x140ba7d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t* var_18 = nullptr
int32_t i_2 = 0
sub_140a464c0()
int16_t* const r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

(*(data_14399ea08 + 0x80))(&data_14399ea08, &var_18, r8, &data_142e5ff88, 1, 0, 1)
int32_t i_1 = i_2
int32_t r14 = arg1[1].d

if (i_1 s> 0)
    do
        int64_t* rdi_3 = &var_18[sx.q(rbx) * 2]
        char rax_1 = sub_140a236f0(rdi_3, &data_143e1a410, 1)
        char rax_2
        
        if (rax_1 == 0)
            rax_2 = sub_140a236f0(rdi_3, &data_143e1a420, 1)
        
        if (rax_1 != 0 || rax_2 != 0)
            int64_t rbp_1 = sx.q(arg1[1].d)
            int32_t rax_3 = (rbp_1 + 1).d
            arg1[1].d = rax_3
            
            if (rax_3 s> *(arg1 + 0xc))
                sub_1405a4f90(arg1)
            
            sub_140596d10((rbp_1 << 4) + *arg1, rdi_3)
        
        i_1 = i_2
        rbx += 1
    while (rbx s< i_1)

int64_t* rbx_1 = var_18
int64_t* rsi
rsi.b = arg1[1].d s> r14

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_6 = *rbx_1
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_18

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return zx.q(rsi.b)
