// 函数: sub_14231ccd0
// 地址: 0x14231ccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = arg1[0x100]
void* result = &rbx[arg1[0x101]]
uint64_t rsi_1 = sx.q(arg1[0x101].d) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        result = sub_142221980(*rbx, arg2)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

if (arg1[0x101].d s<= 0)
    return result

return (*(*arg1 + 0x818))(arg1, 1)
