// 函数: sub_142c49460
// 地址: 0x142c49460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142c48130()
EnterCriticalSection(&data_14401a840)
data_144019c64 += 1
int32_t rdi = data_144019ce0
int32_t rsi = data_144019c60
int32_t rax = sub_142c48400(0, 0)
int32_t rbx = rax

if (rax == 0)
    if (data_144019c68 == 1)
        data_144019ce0 = rdi + 1
        data_144019c60 = rsi + 1
    else
        int64_t rax_1 = data_144019c80
        
        if (rax_1 == 0)
            rbx = -1
        else
            int32_t rax_2 = rax_1()
            rbx = rax_2
            
            if (rax_2 == 0)
                data_144019c68 = 1
                data_144019ce0 = rdi + 1
                data_144019c60 = rsi + 1

data_144019c64 -= 1
sub_142c48130()
LeaveCriticalSection(&data_14401a840)
return zx.q(rbx)
