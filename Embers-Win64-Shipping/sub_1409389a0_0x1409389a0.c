// 函数: sub_1409389a0
// 地址: 0x1409389a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
EnterCriticalSection(arg1 + 0x2e8)
int64_t r14
r14.b = 0
int32_t i = 0

if (*(arg1 + 0x318) s> 0)
    do
        if (sub_14092b860(arg1, sx.q(i) * 0xe8 + *(arg1 + 0x310)) != 0)
            r14.b = 1
            break
        
        i += 1
    while (i s< *(arg1 + 0x318))

if (arg1 != -0x2e8)
    LeaveCriticalSection(arg1 + 0x2e8)

int32_t rax_3 = *(arg1 + 0x218)

if (r14.b == 0)
    if (rax_3 != 2)
        sub_140944100(arg1 + 0x1f0)
else if (rax_3 == 0)
    void*** var_18 = nullptr
    void*** rax_4 = sub_140a84c80(0, zx.q(rax_3 + 0x30), 0)
    var_18 = rax_4
    int32_t var_10_1 = 3
    
    if (rax_4 != 0)
        rax_4[1] = arg1
        *rax_4 = &data_142d3fe58
        rax_4[2] = sub_14092baa0
        rax_4[4] = sub_140a387b0()
        *rax_4 = &data_142d3feb0
    
    if (sub_140940f90(arg1 + 0x1f0, &var_18) == 0)
        rbp = -1
        sub_140944100(arg1 + 0x1f0)
    
    void*** rax_8
    
    if (var_10_1 == 0)
        rax_8 = var_18
    label_140938aee:
        
        if (rax_8 != 0)
            sub_140a74f90(rax_8)
    else
        void*** rcx_5 = var_18
        
        if (rcx_5 != 0)
            (*rcx_5)[7](rcx_5, 0)
            rax_8 = var_18
            
            if (rax_8 != 0)
                rax_8 = sub_140a84c80(rax_8, 0, 0)
                var_18 = rax_8
            
            int32_t var_10_2 = 0
            goto label_140938aee

return zx.q(rbp)
