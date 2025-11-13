// 函数: sub_1410406a0
// 地址: 0x1410406a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f009f8
sub_1405d1550(&arg1[0x32])
sub_1405ae080(&arg1[0x28])
int64_t i = 4
void* rsi = &arg1[0x27]

do
    void* rbx_1 = *(rsi - 8)
    rsi -= 8
    i -= 1
    
    if (rbx_1 != 0)
        int32_t rax_1 = *(rbx_1 + 0x68)
        *(rbx_1 + 0x68) -= 1
        
        if (rax_1 == 1)
            char rax_2
            
            if (*(rbx_1 + 0x70) == 0 && data_143f0f1d0 == 0)
                rax_2 = sub_1405949a0()
            
            if (*(rbx_1 + 0x70) != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                (**(rbx_1 + 0x60))(rbx_1 + 0x60, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0x6c))
                    *(rbx_1 + 0x6c) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0x6c)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_1 + 0x60)
while (i != 0)

sub_1410400d0(&arg1[0x1f])
int512_t zmm0 = sub_1405d1550(&arg1[0x1e])
arg1[0x19] = &data_142efcd90
void* rax_5 = arg1[0x1a]

if (rax_5 != 0)
    int32_t rbp_1 = *(rax_5 + 0x14)
    *(rax_5 + 0x14) -= 1
    
    if (rbp_1 == 1)
        int64_t* rbx_2 = arg1[0x1a]
        
        if (rbx_2 != 0)
            sub_14100eba0(rbx_2)
            zmm0 = j_sub_140a74f90(rbx_2)

int64_t* rcx_7 = arg1[0x17]

if (rcx_7 != 0)
    (*(*rcx_7 + 0x10))(rcx_7)

return sub_14100e880(arg1, zmm0) __tailcall
