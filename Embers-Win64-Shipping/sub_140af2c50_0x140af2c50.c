// 函数: sub_140af2c50
// 地址: 0x140af2c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t** r15 = arg5
int16_t* const r12 = &data_142d40450
int16_t* rbx

if (r15[1].d == 0)
    rbx = &data_142d40450
else
    rbx = *r15

sub_140b3ac40(&data_1439a90f0, rbx)
int32_t i_2 = arg4[1].d
int64_t* rbx_1 = *arg4

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1 = &rbx_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

arg4[1].d = 0

if (*(arg4 + 0xc) != 0)
    sub_14061cd70(arg4, 0)

int64_t* rax = sub_140aefb30(arg1, r15, 0)

if (rax != 0)
    int32_t i_3 = arg4[1].d
    int64_t* rbx_2 = *arg4
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx_3 = *rbx_2
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_2 = &rbx_2[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    arg4[1].d = 0
    
    if (*(arg4 + 0xc) != 0)
        sub_14061cd70(arg4, 0)
    
    int64_t var_38 = 0
    int64_t rdi = 0
    int64_t var_30_1 = 0
    int32_t rdx_2 = 0
    int32_t rcx_5 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_3 = -1
        
        do
            rbx_3 += 1
        while (arg2[rbx_3] != 0)
        
        if (rbx_3.d + 1 s> 0)
            sub_1405947f0(&var_38, rbx_3.d + 1)
            rcx_5 = var_30_1:4.d
            rdx_2 = var_30_1.d
            rdi = var_38
        
        int32_t rax_1 = rbx_3.d + 1 + rdx_2
        var_30_1.d = rax_1
        
        if (rax_1 s> rcx_5)
            sub_140594770(&var_38)
            rdi = var_38
        
        UnDecorator::getReferenceType(rdi, arg2, (rbx_3.d + 1) * 2)
    
    sub_140a452d0(rax, &arg5, &var_38)
    int64_t rax_2 = sx.q(arg5.d)
    void* const rax_4
    
    if (rax_2.d == 0xffffffff)
        rax_4 = nullptr
    else
        rax_4 = rax_2 * 0xb8 + *rax
    
    int64_t* rbx_5 = rax_4 + 0x10
    
    if (rax_4 == 0)
        rbx_5 = nullptr
    
    if (rdi != 0)
        sub_140a74f90(rdi)
    
    if (rbx_5 != 0)
        sub_140ae6000(rbx_5, *sub_140b58260(&arg5, arg3, 1), arg4, 1)

int32_t result = arg4[1].d

if (result == 0)
    return result

if (r15[1].d != 0)
    r12 = *r15

sub_140aeb480(&data_14399feb0, r12, arg2, arg3)
return arg4[1].d
