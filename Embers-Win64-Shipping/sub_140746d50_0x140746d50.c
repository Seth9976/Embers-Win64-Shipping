// 函数: sub_140746d50
// 地址: 0x140746d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[4]
int64_t rdi = 0
uint64_t rsi_1 = sx.q(arg1[5].d) << 3 u>> 3

if (rbx u> &rbx[arg1[5]])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_1408644a0(rcx)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != rsi_1)

arg1[5].d = 0

if (*(arg1 + 0x2c) != 0)
    sub_1405c5570(&arg1[4], 0)

int64_t rsi_2 = 0
int64_t* rdi_1 = arg1[2]
uint64_t r14_1 = sx.q(arg1[3].d) << 3 u>> 3

if (rdi_1 u> &rdi_1[arg1[3]])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            sub_140752510(rbx_1)
            int64_t rdx_1
            rdx_1.b = 1
            (*(*rbx_1 + 0x268))(rbx_1, rdx_1)
        
        rdi_1 = &rdi_1[1]
        rsi_2 += 1
    while (rsi_2 != r14_1)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405c5570(&arg1[2], 0)

int64_t rdi_2 = 0
int64_t* rbx_2 = *arg1
void* result = &rbx_2[arg1[1]]
uint64_t rsi_4 = sx.q(arg1[1].d) << 3 u>> 3

if (rbx_2 u> result)
    rsi_4 = 0

if (rsi_4 != 0)
    do
        int64_t* rcx_5 = *rbx_2
        
        if (rcx_5 != 0)
            int64_t rdx
            rdx.b = 1
            result, rdx = (*(*rcx_5 + 0x268))(rcx_5, rdx)
        
        rbx_2 = &rbx_2[1]
        rdi_2 += 1
    while (rdi_2 != rsi_4)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    result = sub_1405c5570(arg1, 0)

int64_t rcx_7 = arg1[4]

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[2]

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = *arg1

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
