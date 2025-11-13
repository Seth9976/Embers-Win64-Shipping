// 函数: sub_140923450
// 地址: 0x140923450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140918a50()
void* var_68 = &rax[2]
sub_140597df0(var_68 + 8, arg2)
void* rbx = var_68
void var_48
int64_t* rax_1 = sub_140aae420(&var_48, arg3)
int64_t rdx_3 = *(rbx + 0x18)
*(rbx + 0x18) = *rax_1
*rax_1 = rdx_3
int64_t rdx_4 = *(rbx + 0x20)
*(rbx + 0x20) = rax_1[1]
rax_1[1] = rdx_4
*(rbx + 0x28) = rax_1[2].d
int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t rax_5 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_40 + 8))(var_40, 1)

void* rbx_2 = var_68
void var_30
int64_t* rax_7 = sub_140aae420(&var_30, arg4)
int64_t rdx_6 = *(rbx_2 + 0x30)
*(rbx_2 + 0x30) = *rax_7
*rax_7 = rdx_6
int64_t rdx_7 = *(rbx_2 + 0x38)
*(rbx_2 + 0x38) = rax_7[1]
rax_7[1] = rdx_7
*(rbx_2 + 0x40) = rax_7[2].d
int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t rdi_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_28 + 8))(var_28, zx.q(rdi_1))

*(var_68 + 0x98) = arg5
*(var_68 + 0x78) = arg5
void* rbx_5 = var_68 + 0xa0

if (*rbx_5 != &data_142e217a8)
    int32_t rdx_9 = 0
    bool cond:0_1 = *(rbx_5 + 0xc) == 4
    *(rbx_5 + 8) = 0
    
    if (not(cond:0_1))
        sub_1405947f0(rbx_5, 4)
        rdx_9 = *(rbx_5 + 8)
    
    *(rbx_5 + 8) = rdx_9 + 4
    
    if (rdx_9 + 4 s> *(rbx_5 + 0xc))
        sub_140594770(rbx_5)
    
    **rbx_5 = 0x4400530055

int64_t* var_58 = arg2
void** var_50 = &var_68
void arg_8
int32_t* result = sub_140918170(arg1 + 0x38, &arg_8, &var_58, nullptr)

if (rax != 0)
    rax[1].d -= 1
    
    if (rax[1].d == 1)
        result = (**rax)(rax)
        int32_t temp2_1 = *(rax + 0xc)
        *(rax + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*rax)[1](rax, 1)

return result
