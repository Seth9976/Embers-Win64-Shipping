// 函数: sub_14190a990
// 地址: 0x14190a990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x420)

if (rax != 0)
    int64_t i_2 = *(rax - 8)
    void* rdi_3 = (i_2 << 7) + rax
    
    if (i_2 != 0)
        int64_t i
        
        do
            rdi_3 -= 0x80
            sub_14192ba90(rdi_3)
            i = i_2
            i_2 -= 1
        while (i != 1)
        *(rax - 8)
    
    j_sub_140a74f90(rax - 8)

void* rdi_4 = arg1 + 0x438
*(arg1 + 0x420) = 0
int64_t i_3 = 6
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
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
j_sub_140a74f90(*(arg1 + 0x18))
j_sub_140a74f90(*(arg1 + 0x10))
int64_t result = j_sub_140a74f90(*(arg1 + 8))
__builtin_memset(arg1 + 8, 0, 0x18)
return result
