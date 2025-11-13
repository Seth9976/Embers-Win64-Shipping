// 函数: sub_14209c4b0
// 地址: 0x14209c4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x15].b != 0)
    if (arg3 != 0)
        void* rax_1 = sub_1424cffe0()
        void* rdx = arg3[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            sub_14209e6b0(arg3, arg1)
    
    arg1[0x15].b = 0

jump(*(*arg1 + 0x2e8))
