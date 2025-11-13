// 函数: sub_1408f41c0
// 地址: 0x1408f41c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) == 0)
    void arg_8
    int64_t rax_2 = sub_140b3dbe0(*sub_140b58170(&arg_8, "PlatformCrypto", 1))
    
    if (rax_2 == 0)
        void arg_10
        int64_t rbx_1 = *sub_140b58170(&arg_10, "PlatformCrypto", (rax_2 + 1).d)
        j_sub_140b3db50()
        j_sub_140b407e0(&data_143de7d78, rbx_1)
    
    int64_t rbx_2 = j_sub_140a82f30(1)
    void arg_18
    
    if (arg1 + 8 != &arg_18)
        int64_t rcx_3 = *(arg1 + 8)
        *(arg1 + 8) = rbx_2
        rbx_2 = 0
        j_sub_140a74f90(rcx_3)
    
    j_sub_140a74f90(rbx_2)

return arg1 + 8
