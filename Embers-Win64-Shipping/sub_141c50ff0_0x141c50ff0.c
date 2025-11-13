// 函数: sub_141c50ff0
// 地址: 0x141c50ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x80)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x58)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t i = 2
void* rdi = arg1 + 0x48

do
    int64_t rcx_2 = *(rdi - 0x10)
    rdi -= 0x10
    i -= 1
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
while (i != 0)

int32_t result = sub_141c4f940(arg1 + 0x18)
int64_t* rbx = *(arg1 + 8)

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
