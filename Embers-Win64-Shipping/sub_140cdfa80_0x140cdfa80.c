// 函数: sub_140cdfa80
// 地址: 0x140cdfa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_30 = nullptr
int32_t var_28 = 0
void* rax = sub_140ce37a0(*arg2, &var_30, 1)
int16_t* rdx_1 = var_30
uint64_t rbx

if (rax != 0)
    int16_t* rsi_1
    int32_t rdi_2
    
    if (var_28 == 0)
        rdi_2 = 0
        rsi_1 = &data_142d40450
    else
        rdi_2 = var_28 - 1
        rsi_1 = rdx_1
    
    rbx = 0
    uint64_t rax_2
    uint64_t rcx_1
    uint64_t var_40
    
    if (rdi_2 == 0)
    label_140cdfb10:
        var_40 = 0
        rcx_1 = 0
        int64_t var_38_1 = 0
        rax_2 = 0
    else
        int16_t* rax_1 = rsi_1
        
        while (*rax_1 != 0x3a)
            rbx = zx.q(rbx.d + 1)
            rax_1 = &rax_1[1]
            
            if (rbx.d u>= rdi_2)
                goto label_140cdfb10
        
        uint64_t var_48
        sub_140b580e0(&var_48, rbx.d, rsi_1, 1)
        sub_140b580e0(&var_40, rdi_2 - rbx.d - 1, &rsi_1[zx.q(rbx.d) + 1], 1)
        rax_2 = var_48
        rcx_1 = var_40
        rdx_1 = var_30
    rbx.b = 1
    *arg1 = rax_2
    arg1[1] = rcx_1
    *arg2 = rax
else
    rbx.b = 0

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

return zx.q(rbx.b)
