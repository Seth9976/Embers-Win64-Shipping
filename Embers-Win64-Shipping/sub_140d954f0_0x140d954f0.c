// 函数: sub_140d954f0
// 地址: 0x140d954f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx != 0)
    sub_142b917e0(rcx)
    *(arg1 + 0x18) = zx.o(0)

arg1[0x1f].d = 0
int64_t rcx_1 = arg1[0x1e]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x17].d = 0

if (*(arg1 + 0xbc) != 0)
    sub_1405a5410(&arg1[0x16], 0)

*(arg1 + 0xe4) = 0
arg1[0x1c].d = 0xffffffff
int32_t result = sub_14059a8e0(&arg1[0x18], 0)
int64_t rcx_4 = arg1[0x1a]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x16]

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t* rbx_1 = arg1[2]

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result
