// 函数: sub_14123de20
// 地址: 0x14123de20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
int64_t* rax = sub_141223af0(&var_28, nullptr, 0xff)
void* rdx = *rax
*(rdx + 0x18) = arg2
int64_t* arg_28
void** rdi_1 = arg_28
*(rdx + 0x10) = arg1
*(rdx + 0x20) = arg3
*(rdx + 0x40) = arg4
*(rdx + 0x28) = &rdi_1[1]
*(rdx + 0x30) = &rdi_1[0xb]
*(rdx + 0x38) = &rdi_1[0xd]
void* rcx_4 = *rax
int32_t r8 = rax[2].d
int64_t* rdx_1 = rax[1]
int64_t* rbx_1 = *(rcx_4 + 0x50)
arg_28 = rbx_1

if (rbx_1 != 0)
    rbx_1[9].d += 1

sub_14123d190(rcx_4, rdx_1, r8, 1)
int32_t result = &arg_28

if (rdi_1 != &arg_28)
    int64_t* rcx_5 = *rdi_1
    *rdi_1 = rbx_1
    
    if (rcx_5 != 0)
        result = rcx_5[9].d
        rcx_5[9].d -= 1
        
        if (result == 1)
            return sub_140a2f6e0(rcx_5)
else if (rbx_1 != 0)
    result = rbx_1[9].d
    rbx_1[9].d -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_28)

return result
