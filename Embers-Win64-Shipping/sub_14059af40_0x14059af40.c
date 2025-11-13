// 函数: sub_14059af40
// 地址: 0x14059af40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = *arg2
int32_t var_40 = arg2[1].d
char var_3c = *(arg2 + 0xc)
char var_3b = *(arg2 + 0xd)
int64_t var_38 = arg2[2]
void* rax_5 = arg2[3]
void* var_30 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int32_t var_28 = arg2[4].d
void var_20
sub_140596d10(&var_20, &arg2[5])
int32_t result = (*(arg1 + 8))(&var_48, zx.q(*(arg1 + 0x10)), zx.q(*(arg1 + 0x11)), 
    zx.q(*(arg1 + 0x12)), *(arg1 + 0x13))
int64_t rcx_2 = arg2[5]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t* rbx = arg2[3]

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        result = (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx + 8))(rbx, zx.q(rdi_1))

return result
