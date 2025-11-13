// 函数: sub_1419930a0
// 地址: 0x1419930a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            rbx_1[0x1a].d -= 1
            
            if (rbx_1[0x1a].d == 1)
                sub_1405d16e0(rbx_1, nullptr)
                sub_14081d930(&rbx_1[1], nullptr)
                sub_1405d16e0(&rbx_1[2], nullptr)
                sub_141096260(&rbx_1[3], 0)
                sub_141096040(&rbx_1[0xd], 0)
        
        rdi = &rdi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = *arg1

if (rdi == 0)
    return 

return sub_140a74f90(rdi) __tailcall
