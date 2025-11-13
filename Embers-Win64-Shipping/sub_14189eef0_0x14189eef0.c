// 函数: sub_14189eef0
// 地址: 0x14189eef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143ddb400
int16_t** rax_1 = *arg1 + 8
int64_t* var_18 = nullptr
int32_t i_2 = 0
sub_140af2c50(rcx, u"Portal.BuildPatch", u"InstalledPrereqs", &var_18, rax_1)
*arg2 = 0
void* rcx_1 = &arg2[2]
arg2[1] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
arg2[8] = 0
arg2[9].d = 0
sub_141813e70(arg2, &var_18)
int32_t i_1 = i_2
int64_t* rbx = var_18

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = var_18

if (rbx != 0)
    sub_140a74f90(rbx)

return arg2
