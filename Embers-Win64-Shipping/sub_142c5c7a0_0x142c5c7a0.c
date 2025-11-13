// 函数: sub_142c5c7a0
// 地址: 0x142c5c7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
int32_t rax
int512_t zmm2
rax, zmm2 = sub_142c5fdb0(arg1, arg2, arg3, arg5)
int32_t rbx = rax

if (rax != 0)
    goto label_142c5c7f3

int64_t* rcx = *arg2

if (rcx[0x9a] != 0 || rcx[0x9e] != 0)
    *arg4 = 1
else if (*arg3 == rax.b)
    int32_t rax_1
    rax_1, zmm2 = sub_142c5f360(rcx, arg4, zmm2)
    rbx = rax_1
label_142c5c7f3:
    
    if (rbx == 0x59)
        *arg2 = nullptr
        return zx.q(rbx)
    
    if (rbx != 0)
        int64_t* rcx_1 = *arg2
        
        if (rcx_1 != 0)
            sub_142c5c970(rcx_1, 0, zmm2)
            *arg2 = nullptr

return zx.q(rbx)
