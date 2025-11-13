// 函数: sub_141b3d230
// 地址: 0x141b3d230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_140cea340()
void* rax_2
bool rcx

if (arg2[1] == 0)
    rcx = true
    rax_2 = nullptr
else
    bool cond:1_1 = sub_140d3e110(&arg2[2]) == 0
    rax_2 = arg2[1]
    rcx = cond:1_1

if (rcx != 0 && arg2[4].d != 0)
    rax_2 = sub_140cd0630(&arg2[1], nullptr, 0)
    
    if (rax_2 == 0 || (data_143e1b828 & *(*(rax_2 + 8) + 0x10)) == 0)
        rax_2 = arg2[1]
        
        if (rax_2 != 0)
            arg2[2].d = 0xffffffff
            rax_2 = nullptr
            *(arg2 + 0x14) = 0
            arg2[1] = 0
    else
        arg2[1] = rax_2

arg1[1] = rax_2
arg1[2] = arg2[2]
sub_140780c40(&arg1[3], &arg2[3])
return arg1
