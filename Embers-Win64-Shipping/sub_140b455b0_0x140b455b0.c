// 函数: sub_140b455b0
// 地址: 0x140b455b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg1, arg2)

for (wchar32 const (** i)[0x6] = &data_1439a91f0; i s< &data_1439a9250; i = &i[2])
    int64_t var_18
    int64_t* rax_1 = sub_140a300d0(arg1, &var_18, *i, i[1], 1)
    
    if (arg1 != rax_1)
        int64_t rcx_1 = *arg1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        *arg1 = *rax_1
        *rax_1 = 0
        arg1[1].d = rax_1[1].d
        *(arg1 + 0xc) = *(rax_1 + 0xc)
        rax_1[1] = 0
    
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return arg1
