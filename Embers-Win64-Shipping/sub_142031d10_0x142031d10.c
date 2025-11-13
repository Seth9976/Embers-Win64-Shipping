// 函数: sub_142031d10
// 地址: 0x142031d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18 = nullptr
int64_t var_10 = 0

if (arg4 != 0)
    var_10.d = 2
    sub_140594770(&var_18)
    *var_18 = arg4
    var_18[1] = 0

int64_t* rcx_1 = arg1[3]
uint16_t rbx

if (rcx_1 == 0)
    rbx.b = 0
else
    rbx = zx.w((*(*rcx_1 + 0x310))(rcx_1, zx.q(arg3), &var_18))

if ((*(*arg1 + 0x178))(arg1) == 0 && rbx.b == 0)
    rbx = zx.w(rbx.b)
    
    if ((*(arg2 + 0xb8) & 0x18) == 0x18)
        rbx = 1

int16_t* rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return zx.q(rbx.b)
