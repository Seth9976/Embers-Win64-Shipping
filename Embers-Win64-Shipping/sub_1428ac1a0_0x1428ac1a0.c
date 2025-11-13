// 函数: sub_1428ac1a0
// 地址: 0x1428ac1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = 0
int32_t rbx = 0

if (sub_142898c70(arg1) s> 0)
    int32_t rax_3
    
    do
        int64_t arg_8 = sub_142898ea0(arg1, rbx)
        int32_t rax_2 = sub_1428c6210(&arg_8, arg2, &data_143504aa0, 0xffffffff, 0xffffffff)
        
        if (rax_2 s< 0)
            return rax_2
        
        rdi += rax_2
        rbx += 1
        rax_3 = sub_142898c70(arg1)
    while (rbx s< rax_3)

return rdi
