// 函数: sub_141907160
// 地址: 0x141907160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff49e0
void* rax = arg1[0x84]

if (rax != 0)
    int64_t i_3 = *(rax - 8)
    void* rdi_3 = (i_3 << 7) + rax
    
    if (i_3 != 0)
        int64_t i
        
        do
            rdi_3 -= 0x80
            sub_14192ba90(rdi_3)
            i = i_3
            i_3 -= 1
        while (i != 1)
        *(rax - 8)
    
    j_sub_140a74f90(rax - 8)

void* rdi_4 = &arg1[0x87]
arg1[0x84] = 0
int64_t i_4 = 6
int64_t i_1

do
    int64_t j_1 = 0xe
    int64_t j
    
    do
        int64_t* rbx_2 = *rdi_4
        *rdi_4 = 0
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                char rax_2
                
                if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                    rax_2 = sub_1405949a0()
                
                if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                    (**rbx_2)(rbx_2, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_2 + 0xc))
                        *(rbx_2 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_2 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, rbx_2)
        
        rdi_4 += 8
        j = j_1
        j_1 -= 1
    while (j != 1)
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
j_sub_140a74f90(arg1[3])
j_sub_140a74f90(arg1[2])
j_sub_140a74f90(arg1[1])
void* rsi_2 = &arg1[0xdb]
int64_t i_2 = 0x54
__builtin_memset(&arg1[1], 0, 0x18)

do
    int64_t* rbx_3 = *(rsi_2 - 8)
    rsi_2 -= 8
    i_2 -= 1
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            char rax_6
            
            if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                rax_6 = sub_1405949a0()
            
            if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
                (**rbx_3)(rbx_3, 1)
            else
                bool z_2
                
                if (0 == *(rbx_3 + 0xc))
                    *(rbx_3 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_3 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rbx_3)
while (i_2 != 0)

sub_1405d1550(&arg1[0x86])
sub_14081c9d0(&arg1[0x85])
int64_t rcx_9 = arg1[3]
*arg1 = &data_142ff49b0
j_sub_140a74f90(rcx_9)
j_sub_140a74f90(arg1[2])
int64_t result = j_sub_140a74f90(arg1[1])
__builtin_memset(&arg1[1], 0, 0x18)
return result
