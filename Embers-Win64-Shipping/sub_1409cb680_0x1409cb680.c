// 函数: sub_1409cb680
// 地址: 0x1409cb680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
sub_140a387e0()
void arg_8
int32_t rax_1 =
    (*(data_14399e720 + 8))(&data_14399e720, *sub_140b58170(&arg_8, "EditableMeshFormat", 1))
int32_t rbp = 0

if (rax_1 s> 0)
    do
        sub_140a387e0()
        void* rax_3 = (*(data_14399e720 + 0x10))(&data_14399e720, 
            *sub_140b58170(&arg_8, "EditableMeshFormat", 1), zx.q(rbp))
        int64_t* rdi_1 = rax_3 - 8
        
        if (rax_3 == 0)
            rdi_1 = nullptr
        
        if ((*(*rdi_1 + 0x10))(rdi_1, arg2) != 0)
            *arg1 = zx.o(0)
            arg1[1].q = 0
            *arg1 = 0
            *(arg1 + 8) = rdi_1
            *(arg1 + 0x14) = arg3
            (**rdi_1)(rdi_1, arg2, arg1)
            
            if (*arg1 != 0)
                break
            
            __builtin_memset(arg1, 0, 0x18)
        
        rbp += 1
    while (rbp s< rax_1)

return arg1
