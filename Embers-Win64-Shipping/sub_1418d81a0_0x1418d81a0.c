// 函数: sub_1418d81a0
// 地址: 0x1418d81a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[7]
*arg1 = &data_142fef650
arg1[4] = &data_142fef658

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        char rax_2
        
        if (rdi[2].b == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (rdi[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
            (**rdi)(rdi, 1)
        else
            bool z_1
            
            if (0 == *(rdi + 0xc))
                *(rdi + 0xc) = 1
                z_1 = true
            else
                *(rdi + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_4 = sub_140a20af0()
                uint64_t rdx = zx.q(rax_4)
                void* const rax_5
                
                if (rax_4 != 0)
                    rax_5 = *(&data_143cf0bf8 + (rdx u>> 0xe << 3)) + (zx.q(rdx.d) & 0x3fff) * 0x18
                else
                    rax_5 = nullptr
                
                *(rax_5 + 8) = rdi
                sub_1405a42f0(&data_143f02390, rdx.d)

sub_1418c2c30(arg1[1], arg1)
int64_t r8 = arg1[2]
arg1[4] = &data_142d3ff08
*arg1 = &data_142fef648

if (r8 != 0)
    sub_1418be030(&arg1[1][0x76], 5, r8)
    arg1[2] = 0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
