// 函数: sub_14203bd10
// 地址: 0x14203bd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int32_t var_10 = 0
int64_t* rbx

if (sub_14203bb50(arg1) == 0)
    rbx.b = 0
else
    void*** rax_1 = sub_1420278a0()
    void** rdx = *rax_1
    int64_t* rax_2 = rdx[8](rax_1, rdx)
    
    if (rax_2 == 0 || var_10 s<= 0)
        rbx.b = 0
    else
        int32_t rdx_1 = arg2[1].d
        int32_t rcx_1 = rdx_1 - 1
        
        if (rdx_1 == 0)
            rcx_1 = 0
        
        if (rcx_1 s<= 0)
            rbx.b = 0
        else
            int16_t* const r8
            
            if (rdx_1 == 0)
                r8 = &data_142d40450
            else
                r8 = *arg2
            
            rbx = zx.q((*(*rax_2 + 0x18))(rax_2, 0, r8, zx.q(arg3), &var_18))

int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return zx.q(rbx.b)
