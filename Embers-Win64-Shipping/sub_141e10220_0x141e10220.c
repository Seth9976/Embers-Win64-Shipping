// 函数: sub_141e10220
// 地址: 0x141e10220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cea340()
int64_t rax_1
bool rcx

if (*arg1 == 0)
    rcx = true
    rax_1 = 0
else
    bool cond:1_1 = sub_140d3e110(&arg1[1]) == 0
    rax_1 = *arg1
    rcx = cond:1_1

bool cond:2_1

if (rcx == 0 || arg1[3].d == 0)
    cond:2_1 = rax_1 != 0
else
    void* rax_2 = sub_140cd0630(arg1, nullptr, 0)
    
    if (rax_2 != 0 && (data_143e1b828 & *(*(rax_2 + 8) + 0x10)) != 0)
        *arg1 = rax_2
        rax_2.b = rax_2 != 0
        return rax_2
    
    rax_1 = *arg1
    cond:2_1 = rax_1 != 0
    
    if (rax_1 != 0)
        arg1[1].d = 0xffffffff
        *(arg1 + 0xc) = 0
        *arg1 = 0
        cond:2_1 = 0 != 0

rax_1.b = cond:2_1
return rax_1
