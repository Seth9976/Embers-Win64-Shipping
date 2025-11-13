// 函数: ??1StringCache@NMP@@QEAA@XZ
// 地址: 0x1417621b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x98)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x88)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x78)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x68)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rbx_1 = *(arg1 + 0x38)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t rdi_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))
