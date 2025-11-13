// 函数: sub_140954f20
// 地址: 0x140954f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_20 = nullptr
int64_t var_18 = 0
char var_28 = arg2

if (&var_20 != arg3)
    int32_t i_1 = arg3[1].d
    void* rdi_1 = *arg3
    var_18.d = i_1
    
    if (i_1 != 0)
        sub_1405a4b40(&var_20, i_1, 0)
        int64_t* rbx_2 = var_20 + 0x20
        void* rdi_2 = rdi_1 + 0x20
        int32_t i
        
        do
            sub_140596d10(&rbx_2[-4], rdi_2 - 0x20)
            sub_140596d10(&rbx_2[-2], rdi_2 - 0x10)
            sub_140596d10(rbx_2, rdi_2)
            rbx_2 = &rbx_2[6]
            rdi_2 += 0x30
            i = i_1
            i_1 -= 1
        while (i != 1)

sub_1405a9f90(arg1, &var_28)
return sub_14094ac80(&var_20)
