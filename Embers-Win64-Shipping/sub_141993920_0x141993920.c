// 函数: sub_141993920
// 地址: 0x141993920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int64_t i = 0; i s< 2; i += 1)
    int64_t* rdi_1 = *(arg1 + (i << 3))
    
    if (rdi_1 != 0)
        int64_t rbp_1 = sx.q(rdi_1[1].d)
        int64_t rbx_1 = 0
        
        if (rbp_1 s> 0)
            do
                int64_t* rcx = *(*rdi_1 + (rbx_1 << 3))
                (*(*rcx + 0x30))(rcx)
                rbx_1 += 1
            while (rbx_1 s< rbp_1)
        
        sub_140dde9c0(rdi_1)
        j_sub_140a74f90(rdi_1)
    
    *(arg1 + (i << 3)) = 0
