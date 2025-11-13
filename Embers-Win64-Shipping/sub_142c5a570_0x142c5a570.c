// 函数: sub_142c5a570
// 地址: 0x142c5a570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t rdi = -1
char* arg_20 = nullptr
*arg4 = 0

if (*(rbx + 0xd0) != 0)
    sub_142c52530(rbx, 3, 2)

char* rax
int512_t zmm2
rax, zmm2 = sub_142c5a780(arg1, arg2, arg5)
arg_20 = rax

if (rax != 0)
    zmm2 = sub_142c64850(rbx, "Hostname %s was found in DNS cache\n", arg2, zmm2)
    char* rax_1 = arg_20
    *(rax_1 + 0x10) += 1
    rdi = 0

if (*(rbx + 0xd0) != 0)
    sub_142c52570(rbx, 3)

if (arg_20 == 0)
    if (sub_142c5a950(arg1) == 0)
        return 0xffffffff
    
    int32_t arg_8
    void* rax_3
    int512_t zmm2_1
    rax_3, zmm2_1 = j_sub_142c59660(arg1, arg2, arg3, &arg_8, zmm2)
    
    if (rax_3 != 0)
        if (*(rbx + 0xd0) != 0)
            sub_142c52530(rbx, 3, 2)
        
        arg_20 = sub_142c59e80(rbx, rax_3, arg2, arg3, zmm2_1)
        
        if (*(rbx + 0xd0) != 0)
            sub_142c52570(rbx, 3)
        
        if (arg_20 != 0)
            rdi = 0
        else
            sub_142c710d0(rax_3)
    else if (arg_8 != rax_3.d)
        if (sub_142c59820(arg1, &arg_20, zmm2_1) != 0)
            return 0xffffffff
        
        rdi.b = arg_20 == 0

*arg4 = arg_20
return zx.q(rdi)
