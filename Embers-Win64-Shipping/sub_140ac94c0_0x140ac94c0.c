// 函数: sub_140ac94c0
// 地址: 0x140ac94c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 0x14)
int32_t rax = var_20 + 0x14
var_20 = rax

if (rax s> 0)
    sub_140594770(&var_28)

int64_t rbx = var_28
UnDecorator::getReferenceType(rbx, u"LOCGEN_FORMAT_NAMED", 0x28)
void* arg_8 = arg1
int64_t* var_10 = &arg_8
uint64_t (* var_18)(int64_t* arg1, int64_t* arg2) = sub_140aa3a10
sub_140ac9370(arg2, &var_28, arg1 + 0x10, &var_18, arg4)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rbx_1 = *(arg3 + 8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

uint64_t result
result.b = 1
return result
