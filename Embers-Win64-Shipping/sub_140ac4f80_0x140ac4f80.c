// 函数: sub_140ac4f80
// 地址: 0x140ac4f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (arg2 s> rbx.d)
    int32_t i_1 = arg2 - rbx.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405c4fe0(arg1)
    
    void* rdi_3 = (rbx << 6) + *arg1
    
    if (i_1 != 0)
        void* rbx_1 = rdi_3 + 0x28
        int32_t i
        
        do
            *rdi_3 = 0
            *(rbx_1 - 0x20) = 0
            sub_1405d9400()
            *(rbx_1 - 0x10) = data_143cd6fd8
            void* rdx_2 = data_143cd6fe0
            *(rbx_1 - 8) = rdx_2
            
            if (rdx_2 != 0)
                *(rdx_2 + 8) += 1
            
            *rbx_1 = 0
            *(rbx_1 - 0x18) = 4
            sub_1405d9400()
            sub_14065da90(rbx_1 - 0x10, &data_143cd6fd8)
            *(rbx_1 + 8) = 0
            rdi_3 += 0x40
            *(rbx_1 + 0x10) = 0
            rbx_1 += 0x40
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rbx.d)
    return sub_140abfea0(arg1, arg2, rbx.d - arg2, arg3) __tailcall
