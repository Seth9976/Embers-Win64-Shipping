// 函数: sub_14288d550
// 地址: 0x14288d550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (*arg1 != 0x300)
    int32_t* rax_1 = sub_14284fa00(arg1)
    int32_t rax_2 = sub_142898c70(rax_1)
    int32_t rbx_1 = 0
    
    if (rax_2 s> 0)
        do
            void* rax_3 = sub_142898ea0(rax_1, rbx_1)
            
            if ((*(rax_3 + 0x1c) & 0x84) != 0 || (*(rax_3 + 0x20) & 8) != 0
                    || *(rax_3 + 0x2c) s>= 0x304)
                return 1
            
            rbx_1 += 1
        while (rbx_1 s< rax_2)

return 0
