// 函数: sub_1423097f0
// 地址: 0x1423097f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x40].d = 0
int64_t rcx = arg1[0x3f]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x38].d = 0

if (*(arg1 + 0x1c4) != 0)
    sub_1405a5410(&arg1[0x37], 0)

arg1[0x3d].d = 0xffffffff
*(arg1 + 0x1ec) = 0
sub_14059a8e0(&arg1[0x39], 0)
int64_t rcx_3 = arg1[0x3b]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x37]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x35]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x33]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int32_t i_1 = arg1[0x32].d
int64_t* rbx_1 = arg1[0x31]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_7 = *rbx_1
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = arg1[0x31]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

sub_142289fd0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
