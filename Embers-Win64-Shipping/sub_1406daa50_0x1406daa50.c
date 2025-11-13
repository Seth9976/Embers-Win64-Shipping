// 函数: sub_1406daa50
// 地址: 0x1406daa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = *arg1
int64_t* rbx = rbp
void* rsi_2 = &rbp[sx.q(arg1[1].d) * 2]

if (rbp != rsi_2)
    do
        int16_t* rdx
        
        if (arg2[1].d == 0)
            rdx = &data_142d40450
        else
            rdx = *arg2
        
        int16_t* const rcx
        
        if (rbx[1].d == 0)
            rcx = &data_142d40450
        else
            rcx = *rbx
        
        if (sub_140a54510(rcx, rdx) == 0)
            return zx.q(((rbx - rbp) s>> 4).d)
        
        rbx = &rbx[2]
    while (rbx != rsi_2)

return 0xffffffff
