// 函数: sub_14203db00
// 地址: 0x14203db00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1424aec80(arg1)
int64_t* rcx = arg1[9]

if (rcx != 0)
    (*(*rcx + 0x268))(rcx)
    arg1[9] = 0

int32_t rax_2 = arg1[8].d
int64_t rdi = sx.q(rax_2 - 1)

if (rax_2 - 1 s>= 0)
    int64_t temp1_1
    
    do
        int64_t rdx_1 = *(arg1[7] + (rdi << 3))
        
        if (rdx_1 != 0)
            (*(*arg1 + 0x2d8))(arg1, rdx_1)
        
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)

void* result = sub_1423ac800(&arg1[0x1a])

if (data_143f4cf70 != 0)
    int64_t* rcx_3 = data_143f4cf68
    
    if (rcx_3 != 0)
        result = (*(*rcx_3 + 0x38))(rcx_3, 0)
        int64_t rcx_4 = data_143f4cf68
        
        if (rcx_4 != 0)
            result = sub_140a84c80(rcx_4, 0, 0)
            data_143f4cf68 = result
        
        data_143f4cf70 = 0

if (data_143f4cf80 != 0)
    int64_t* rcx_5 = data_143f4cf78
    
    if (rcx_5 != 0)
        result = (*(*rcx_5 + 0x38))(rcx_5, 0)
        int64_t rcx_6 = data_143f4cf78
        
        if (rcx_6 != 0)
            result = sub_140a84c80(rcx_6, 0, 0)
            data_143f4cf78 = result
        
        data_143f4cf80 = 0

arg1[6] = 0
return result
