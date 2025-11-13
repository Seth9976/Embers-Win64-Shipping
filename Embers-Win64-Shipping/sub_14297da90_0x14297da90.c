// 函数: sub_14297da90
// 地址: 0x14297da90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** r11 = *arg1
void** rbx = r11
void** r8 = r11[1]

while (*(r8 + 0x19) == 0)
    void* rax_1 = &r8[4]
    void* r9_2 = arg2 - rax_1
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*rax_1)
        i = zx.d(*(rax_1 + r9_2))
        
        if (rdx != i)
            break
        
        rax_1 += 1
    while (i != 0)
    
    if (rdx - i s>= 0)
        rbx = r8
        r8 = *r8
    else
        r8 = r8[2]

if (rbx != r11)
    char* rax_2 = arg2
    uint32_t i_1
    uint32_t rdx_2
    
    do
        rdx_2 = zx.d(*rax_2)
        i_1 = zx.d(*(rax_2 + &rbx[4] - arg2))
        
        if (rdx_2 != i_1)
            break
        
        rax_2 = &rax_2[1]
    while (i_1 != 0)
    
    if (rdx_2 - i_1 s>= 0)
        return &rbx[0x24]

char* arg_10 = arg2
int64_t* rax_4 = sub_14297c450(arg1, &data_143552141, &arg_10)
void* arg_8
sub_14297c7d0(arg1, &arg_8, rbx, &rax_4[4], rax_4)
return arg_8 + 0x120
