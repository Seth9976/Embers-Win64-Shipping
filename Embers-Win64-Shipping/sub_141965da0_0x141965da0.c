// 函数: sub_141965da0
// 地址: 0x141965da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[3]
*arg1 = &data_143001f00
rdi[1].d -= 1

if (rdi[1].d == 1)
    if (rdi[2].b == 0)
        bool z_1
        
        if (0 == *(rdi + 0xc))
            *(rdi + 0xc) = 1
            z_1 = true
        else
            *(rdi + 0xc)
            z_1 = false
        
        if (z_1)
            int32_t rax_3 = sub_140a20af0()
            uint64_t rdx = zx.q(rax_3)
            void* const rax_4
            
            if (rax_3 != 0)
                rax_4 = *(&data_143cf0bf8 + (rdx u>> 0xe << 3)) + (zx.q(rdx.d) & 0x3fff) * 0x18
            else
                rax_4 = nullptr
            
            *(rax_4 + 8) = rdi
            sub_1405a42f0(&data_143f02390, rdx.d)
    else
        (**rdi)(rdi, 1)

sub_1405d1550(&arg1[4])
*arg1 = &data_143001ef0
int64_t* rcx_5 = arg1[1]

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        sub_140a2f6e0(rcx_5)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
