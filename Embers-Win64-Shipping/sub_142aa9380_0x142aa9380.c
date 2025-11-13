// 函数: sub_142aa9380
// 地址: 0x142aa9380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
sub_142aa9260()
sub_142a860a0(&data_144015fb0)
int64_t* i = data_144015f30
sub_142a7db20(9, sub_142aaa230)

for (; i != 0; i = *i)
    char* rax_1 = arg1
    uint32_t j
    uint32_t rdx_1
    
    do
        rdx_1 = zx.d(*rax_1)
        j = zx.d(*(rax_1 + &i[2] - arg1))
        
        if (rdx_1 != j)
            break
        
        rax_1 = &rax_1[1]
    while (j != 0)
    
    if (rdx_1 - j == 0)
        result = &i[1]
        break

sub_142aa9260()
sub_142a860d0(&data_144015fb0)
return result
