// 函数: sub_1418d84d0
// 地址: 0x1418d84d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x42]
*arg1 = &data_142fef6a0
rbx[1].d -= 1

if (rbx[1].d == 1)
    char rax_1
    
    if (rbx[2].b == 0 && data_143f0f1d0 == 0)
        rax_1 = sub_1405949a0()
    
    if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_1 != 0))
        (**rbx)(rbx, 1)
    else
        bool z_1
        
        if (0 == *(rbx + 0xc))
            *(rbx + 0xc) = 1
            z_1 = true
        else
            *(rbx + 0xc)
            z_1 = false
        
        if (z_1)
            int32_t rax_3 = sub_140a20af0()
            uint64_t rdx = zx.q(rax_3)
            void* const rax_4
            
            if (rax_3 != 0)
                rax_4 = *(&data_143cf0bf8 + (rdx u>> 0xe << 3)) + (zx.q(rdx.d) & 0x3fff) * 0x18
            else
                rax_4 = nullptr
            
            *(rax_4 + 8) = rbx
            sub_1405a42f0(&data_143f02390, rdx.d)

int64_t i_1 = 5
void* rdi = &arg1[0x38]
int64_t i

do
    rdi -= 0x30
    sub_1418d26c0(rdi)
    i = i_1
    i_1 -= 1
while (i != 1)
sub_1418d2910(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
