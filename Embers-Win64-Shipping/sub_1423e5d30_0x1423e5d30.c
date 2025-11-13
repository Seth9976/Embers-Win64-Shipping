// 函数: sub_1423e5d30
// 地址: 0x1423e5d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143db18d0

if (rbx == 0)
    sub_140a53c40()
    rbx = data_143db18d0

void*** var_18 = nullptr
void*** rax = sub_140a84c80(0, 0x20, 0)
var_18 = rax
int32_t var_10 = 2

if (rax != 0)
    *rax = &data_142d40dc0
    rax[1] = sub_1423ebba0
    rax[3] = sub_140a387b0()
    *rax = &data_142d40e18

void arg_8
data_143f5b420 = *(*(*rbx + 0x58))(rbx, &arg_8, &var_18)
void*** rax_5

if (var_10 == 0)
    rax_5 = var_18
label_1423e5e07:
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)
else
    void*** rcx_2 = var_18
    
    if (rcx_2 != 0)
        (*rcx_2)[7](rcx_2, 0)
        rax_5 = var_18
        
        if (rax_5 != 0)
            rax_5 = sub_140a84c80(rax_5, 0, 0)
            var_18 = rax_5
        
        int32_t var_10_1 = 0
        goto label_1423e5e07
data_143a30368:0xc.d = 3
sub_1423f2170()
return sub_1423eeaf0() __tailcall
