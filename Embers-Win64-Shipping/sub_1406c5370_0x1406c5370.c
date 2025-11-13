// 函数: sub_1406c5370
// 地址: 0x1406c5370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1406c5230(&arg1[0x98])
int64_t rcx_1 = arg1[0x95]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rdx = arg1[0x94]

if (rdx u>= 0x10)
    void* rcx_2 = arg1[0x91]
    
    if (rdx + 1 u>= 0x1000)
        void* r8_1 = *(rcx_2 - 8)
        
        if (rcx_2 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_2 = r8_1
    
    j_sub_140a74f90(rcx_2)

arg1[0x93] = 0
arg1[0x94] = 0xf
arg1[0x91].b = 0
int64_t rcx_4 = arg1[0x71]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x6f]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x6d]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x68]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x66]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_14201a8c0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
