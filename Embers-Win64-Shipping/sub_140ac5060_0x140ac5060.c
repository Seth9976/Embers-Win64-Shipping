// 函数: sub_140ac5060
// 地址: 0x140ac5060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (arg2 s> rbx.d)
    int32_t i_1 = arg2 - rbx.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405c4f50(arg1)
    
    int32_t* rdi_3 = rbx * 0x30 + *arg1
    
    if (i_1 != 0)
        void* rbx_1 = &rdi_3[8]
        int32_t i
        
        do
            *rdi_3 = 4
            sub_1405d9400()
            *(rbx_1 - 0x10) = data_143cd6fd8
            void* rcx_1 = data_143cd6fe0
            *(rbx_1 - 8) = rcx_1
            
            if (rcx_1 != 0)
                *(rcx_1 + 8) += 1
            
            rdi_3 = &rdi_3[0xc]
            *rbx_1 = data_143cd6fe8
            *(rbx_1 + 8) = 1
            rbx_1 += 0x30
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rbx.d)
    return sub_140abffa0(arg1, arg2, rbx.d - arg2, arg3) __tailcall
