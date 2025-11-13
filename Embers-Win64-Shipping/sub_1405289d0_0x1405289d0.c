// 函数: sub_1405289d0
// 地址: 0x1405289d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405c5570(&data_143a2ee60, 0x200)
int64_t rbx = sx.q(data_143a2ee68)
int64_t rdi = sx.q(data_143a2ee80)
int32_t rax = (rbx + rdi).d
bool cond:0 = rax s<= data_143a2ee6c
data_143a2ee68 = rax

if (not(cond:0))
    sub_1405a4d70(&data_143a2ee60)

memset(data_143a2ee60 + (rbx << 3), 0, rdi << 3)
int32_t i = 0

if (data_143a2ee80 s> 0)
    int64_t** rbx_1 = nullptr
    
    do
        int64_t* rax_2 = data_143a2ee70
        
        if (rax_2 == 0)
            data_143a2ee78 += 1
            rax_2 = sub_140a82f30(0x10, 0)
        else
            data_143a2ee70 = *rax_2
        
        *rax_2 = 0
        i += 1
        rax_2[1].w = 0
        *(rax_2 + 0xa) = data_143a2ee7c
        *(rbx_1 + data_143a2ee60) = rax_2
        rbx_1 = &rbx_1[1]
    while (i s< data_143a2ee80)

data_143a2ee88 = 0
data_143a2ee40 = &data_1432e9f48
data_143a2ee90 = 0

if (sub_140a80f40() == 0)
    sub_141997e80(&data_143a2ee40)
else
    (*(data_143a2ee40 + 0x28))(&data_143a2ee40)

return atexit(sub_142d07a10) __tailcall
