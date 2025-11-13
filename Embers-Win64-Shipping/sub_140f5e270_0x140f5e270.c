// 函数: sub_140f5e270
// 地址: 0x140f5e270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2 ^= 1

if (*(arg1 + 0x418) == arg2)
    return 

*(arg1 + 0x418) = arg2
int64_t* var_70_1
int64_t var_78
void var_68

if (arg2 != 0)
    sub_140de1590(arg1 + 0x3a0, 
        sub_140d91e10(&var_68, (zx.o(0)).d, *sub_140da4aa0(arg1 + 0x3a0, 0), 4))
    double zmm0_2 = sub_140d952d0(&var_68)
    int64_t* rcx_9 = *(arg1 + 0x10)
    int64_t rdx_5 = 0
    
    if (rcx_9 != 0)
        int32_t rax_6 = rcx_9[1].d
        
        if (rax_6 != 0)
            rcx_9[1].d = rax_6 + 1
            rax_6.b = 1
        
        if (rax_6.b == 0)
            rcx_9 = nullptr
        
        if (rcx_9 != 0)
            rdx_5 = *(arg1 + 8)
    
    var_78 = rdx_5
    var_70_1 = rcx_9
    sub_140db7ab0(arg1 + 0x3a0, &var_78, 0, zx.o(0), zmm0_2, 1)
else
    sub_140de1590(arg1 + 0x3a0, 
        sub_140d91e10(&var_68, (zx.o(0)).d, *sub_140da4aa0(arg1 + 0x3a0, 0), 5))
    double zmm0_1 = sub_140d952d0(&var_68)
    int64_t* rcx_4 = *(arg1 + 0x10)
    int64_t rdx_1 = 0
    
    if (rcx_4 != 0)
        int32_t rax_3 = rcx_4[1].d
        
        if (rax_3 != 0)
            rcx_4[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rcx_4 = nullptr
        
        if (rcx_4 != 0)
            rdx_1 = *(arg1 + 8)
    
    var_78 = rdx_1
    var_70_1 = rcx_4
    sub_140db7a20(arg1 + 0x3a0, &var_78, 0, zx.o(0), zmm0_1, 1)

if (var_70_1 != 0)
    var_70_1[1].d -= 1
    
    if (var_70_1[1].d == 1)
        (**var_70_1)(var_70_1)
        int32_t temp1_1 = *(var_70_1 + 0xc)
        *(var_70_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_70_1 + 8))(var_70_1, 1)

int64_t rdx_3
rdx_3.b = *(arg1 + 0x418) == 0
sub_14095ec70(arg1 + 0x400, rdx_3)
