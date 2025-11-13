// 函数: sub_141d5a5c0
// 地址: 0x141d5a5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eefd40(arg1)

if (data_143f37990 == 0)
    int64_t* rax_1 = sub_142475900()
    void* rdx_1 = rax_1[0x23]
    
    if (rdx_1 == 0)
        int64_t rdx_2 = *rax_1
        (*(rdx_2 + 0x390))(rax_1, rdx_2)
        rdx_1 = rax_1[0x23]
    
    int64_t var_28 = *(rdx_1 + 0x50)
    int64_t var_20
    sub_140596d10(&var_20, rdx_1 + 0x58)
    
    if (var_28 != 0)
        int64_t var_38
        int64_t* rax_3 = sub_140d30800(&var_28, &var_38)
        int16_t* rbx_2
        
        if (rax_3[1].d == 0)
            rbx_2 = &data_142d40450
        else
            rbx_2 = *rax_3
        
        void* rax_5 = sub_140d2f6f0(sub_14259e970(), 0, rbx_2, 0, 0, 0, 1, 0)
        int64_t rcx_4 = var_38
        data_143f37990 = rax_5
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = var_20
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

int64_t result = *(arg1 + 0x5f8)

if (result == data_143f59388 || result == 0)
    result = data_143f37990
    *(arg1 + 0x5f8) = result

return result
