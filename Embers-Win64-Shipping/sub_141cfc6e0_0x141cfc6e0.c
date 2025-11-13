// 函数: sub_141cfc6e0
// 地址: 0x141cfc6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d04dd0()
EnterCriticalSection(&data_143f36890)
data_143f368c0:0xc.d += 1
int64_t rbp
rbp.b = 0
int32_t rdx = data_143f368c0.d
int32_t rax = data_143f368c0:0xc.d
int64_t rdi = sx.q(rdx - 1)

if (rdx - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_1 = data_143f368b8
        
        if (*(rbx_2 + rax_1 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx = *(rbx_2 + rax_1)
            
            if (rcx == 0)
                rbp.b = 1
            else if ((*(*rcx + 0x50))(rcx, arg1) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rax = data_143f368c0:0xc.d

data_143f368c0:0xc.d = rax - 1

if (rbp.b != 0)
    sub_140599630(&data_143f368b8, 0)

return LeaveCriticalSection(&data_143f36890) __tailcall
