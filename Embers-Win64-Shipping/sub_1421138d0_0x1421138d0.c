// 函数: sub_1421138d0
// 地址: 0x1421138d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142113760(arg1)
int64_t rdi = 0
int64_t* rbx = arg1[0xe]
int64_t rsi = 0
uint64_t r14_1 = sx.q(arg1[0xf].d) << 3 u>> 3

if (rbx u> &rbx[arg1[0xf]])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            sub_140cd85e0(rcx)
        
        rbx = &rbx[1]
        rsi += 1
    while (rsi != r14_1)

int64_t* rbx_1 = arg1[0x10]
void* result = &rbx_1[arg1[0x11]]
uint64_t rsi_2 = sx.q(arg1[0x11].d) << 3 u>> 3

if (rbx_1 u> result)
    rsi_2 = 0

if (rsi_2 != 0)
    do
        int64_t* rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            result = sub_140cd85e0(rcx_1)
        
        rbx_1 = &rbx_1[1]
        rdi += 1
    while (rdi != rsi_2)

return result
