// 函数: sub_14100e9e0
// 地址: 0x14100e9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142efd308
sub_1410177f0(arg1)
int64_t rcx = arg1[0x13a4]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x119c] = &data_142efcde8
arg1[0xf94] = &data_142efcde8
arg1[0xd8c] = &data_142efcde8
arg1[0xb84] = &data_142efcde8
arg1[0x97c] = &data_142efcde8
arg1[0x774] = &data_142efcde8
sub_14081c9d0(&arg1[0x76e])
int64_t i = 0x60
void* r14 = &arg1[0x76c]

do
    int64_t* rbx_1 = *(r14 - 8)
    r14 -= 8
    i -= 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_2
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_2 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_4 = sub_140a20af0()
                    uint64_t rdx_1 = zx.q(rax_4)
                    void* const rax_5
                    
                    if (rax_4 != 0)
                        rax_5 = *(&data_143cf0bf8 + (rdx_1 u>> 0xe << 3))
                            + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                    else
                        rax_5 = nullptr
                    
                    *(rax_5 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rdx_1.d)
while (i != 0)

sub_14100fec0(&arg1[0x4a])
int64_t rcx_7 = arg1[0x48]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int512_t zmm0 = sub_14100e910(&arg1[0x3c])
arg1[0x38] = &data_142efcd90
void* rax_10 = arg1[0x39]

if (rax_10 != 0)
    int32_t rbp_1 = *(rax_10 + 0x14)
    *(rax_10 + 0x14) -= 1
    
    if (rbp_1 == 1)
        int64_t* rcx_9 = arg1[0x39]
        
        if (rcx_9 != 0)
            zmm0 = sub_141011360(rcx_9, 1)

j_sub_141059a80(&arg1[0x2a], zmm0)
*arg1 = &data_142ef2bd8
return sub_1405d1550(&arg1[0x22]) __tailcall
