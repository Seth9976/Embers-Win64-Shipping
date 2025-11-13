// 函数: sub_1406e32d0
// 地址: 0x1406e32d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140b3db50()
void arg_8
int64_t rbx = *sub_140b58170(&arg_8, "RegularExpressionBlueprints", 1)
j_sub_140b3db50()
void* rax_1 = sub_140b3da90(&data_143de7d78, rbx)
int32_t i_1 = *(rax_1 + 0x10)
int64_t* rbx_1 = *(rax_1 + 8)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(rax_1 + 0x10) = 0

if (*(rax_1 + 0x14) != 0)
    sub_14061cd70(rax_1 + 8, 0)

*(rax_1 + 0x20) = 0

if (*(rax_1 + 0x24) != 0)
    sub_1405dadb0(rax_1 + 0x18, 0)

data_143f5b298
return sub_140594850() __tailcall
