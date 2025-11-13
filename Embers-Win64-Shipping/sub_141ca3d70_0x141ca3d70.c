// 函数: sub_141ca3d70
// 地址: 0x141ca3d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* var_38 = nullptr
int32_t var_30 = 0
int64_t arg_10 = 0
int64_t arg_8 = 0
int64_t var_20
__builtin_memset(&var_20, 0, 0x18)
int64_t rax = *arg1
int64_t var_28 = arg2
char rax_1 = (*(rax + 0x88))(arg1, &var_28, &var_38)
int32_t* rbx = var_38
void* rdi

if (rax_1 == 0)
    rdi.b = 0
else
    rdi = &rbx[sx.q(var_30) * 8]
    
    if (rbx != rdi)
        do
            int32_t rcx
            rcx.b = sub_140b5b8a0(*rbx, 0) == 0
            
            if ((rbx[1] != 0 | rcx.b) != 0)
                sub_140664c50(arg3, rbx)
            
            rbx = &rbx[8]
        while (rbx != rdi)
        
        rbx = var_38
    
    rdi.b = 1

if (rbx != 0)
    sub_140a74f90(rbx)

return zx.q(rdi.b)
