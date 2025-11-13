// 函数: sub_1426bf1b0
// 地址: 0x1426bf1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (arg2 s> rbx.d)
    int32_t i_1 = arg2 - rbx.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405c4d20(arg1)
    
    int32_t* rdi_1 = *arg1 + rbx * 0x14
    
    if (i_1 != 0)
        void* rbx_1 = &rdi_1[2]
        int32_t i
        
        do
            *rdi_1 = 0xffffffff
            *(rbx_1 - 4) = 0
            int64_t arg_8
            sub_140d3a3a0(&arg_8, nullptr)
            rbx_1 += 0x14
            *rdi_1 = arg_8
            rdi_1 = &rdi_1[5]
            *(rbx_1 - 0x14) = data_143b57f80
            *(rbx_1 - 0xc) = data_143b57f88
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rbx.d)
    return sub_142174b40(arg1, arg2, rbx.d - arg2, arg3) __tailcall
