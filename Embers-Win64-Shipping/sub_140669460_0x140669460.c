// 函数: sub_140669460
// 地址: 0x140669460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x55)
arg1[0xb].d = 0
*(arg1 + 0x5c) = 0x3f
sub_1405947f0(arg1, 0x401)

if (*(arg1 + 0x1c) s< 0x1001)
    sub_1405947f0(&arg1[2], 0x1001)

void var_28

if (&arg1[4] != &var_28)
    arg1[4] = 0
    int64_t* rbx_1 = arg1[5]
    
    if (rbx_1 != 0)
        arg1[5] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if (*(arg1 + 0x3c) s< 0x40)
    sub_14061cd70(&arg1[6], 0x40)

int32_t rcx_5 = *(arg1 + 0x4c)

if (rcx_5 s< 0x40)
    sub_140679c00(&arg1[8], 0x40)
    rcx_5 = *(arg1 + 0x4c)

int64_t rbx_2 = sx.q(arg1[9].d)
int32_t rax_3 = (rbx_2 + 1).d
arg1[9].d = rax_3

if (rax_3 s> rcx_5)
    sub_1406105e0(&arg1[8])

*(arg1[8] + (rbx_2 << 2)) = 6
arg1[0xc].d = 0
return arg1
