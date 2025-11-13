// 函数: sub_1408d44d0
// 地址: 0x1408d44d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int64_t rdi = 0
uint64_t rsi_1 = sx.q(arg1[1].d) << 3 u>> 3

if (rbx u> &rbx[arg1[1]])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        j_sub_140a74f90(*rbx)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405c5570(arg1, 0)

int64_t rdi_1 = 0
int64_t* rbx_1 = arg1[2]
void* result = &rbx_1[arg1[3]]
uint64_t rsi_3 = sx.q(arg1[3].d) << 3 u>> 3

if (rbx_1 u> result)
    rsi_3 = 0

if (rsi_3 != 0)
    do
        result = j_sub_140a74f90(*rbx_1)
        rdi_1 += 1
        rbx_1 = &rbx_1[1]
    while (rdi_1 != rsi_3)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    result = sub_1405c5570(&arg1[2], 0)

int64_t rcx_4 = arg1[2]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *arg1

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
