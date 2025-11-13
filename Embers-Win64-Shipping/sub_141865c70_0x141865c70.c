// 函数: sub_141865c70
// 地址: 0x141865c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = arg1[1]
void** const rax = &data_142fe6b60
*arg1 = &data_142fe6b60

if (i_1 != 0)
    void* i
    
    do
        i = *(i_1 + 0x70)
        *(i_1 + 0x60) = 0
        int64_t rcx = *(i_1 + 0x58)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        sub_14059ad90(i_1 + 0x18, 0)
        int64_t rcx_2 = *(i_1 + 0x38)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(i_1 + 0x18)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        j_sub_140a74f90(i_1)
        arg1[1] = i
        i_1 = i
    while (i != 0)
    rax = *arg1

arg1[2] = 0
arg1[1] = 0
jump(*(rax + 8))
