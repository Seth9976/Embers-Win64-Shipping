// 函数: sub_1406205c0
// 地址: 0x1406205c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = *arg1
int64_t r8 = 3
char arg_8 = rdx << 4 | arg1[1]
char arg_9 = arg1[2]
int64_t* rcx = data_143cdb880
char arg_a = arg1[3]

if (rdx - 0xc u<= 1)
    r8 = 2

return (*(*rcx + 0x50))(rcx, &arg_8, r8)
