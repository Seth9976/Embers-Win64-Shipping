// 函数: sub_142a36210
// 地址: 0x142a36210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &mkvparser::Track::`vftable'
j_sub_140a74f90(arg1[9])
int64_t rcx_1 = arg1[0xa]
arg1[9] = 0
j_sub_140a74f90(rcx_1)
int64_t rcx_2 = arg1[0xb]
arg1[0xa] = 0
j_sub_140a74f90(rcx_2)
int64_t rcx_3 = arg1[0xd]
arg1[0xb] = 0
j_sub_140a74f90(rcx_3)
int64_t rcx_4 = arg1[0xc]
arg1[0xd] = 0
arg1[0xe] = 0
j_sub_140a74f90(rcx_4)
arg1[0xc] = 0
int64_t* rbx = arg1[0x15]
int64_t rbp = arg1[0x16]

while (rbx != rbp)
    int64_t* rdi_1 = *rbx
    rbx = &rbx[1]
    
    if (rdi_1 != 0)
        sub_142a35df0(rdi_1)
        j_sub_140a74f90(rdi_1)

j_sub_140a74f90(arg1[0x15])
arg1[0x12] = &mkvparser::BlockEntry::`vftable'
j_sub_140a74f90(arg1[9])
int64_t rcx_9 = arg1[0xa]
arg1[9] = 0
j_sub_140a74f90(rcx_9)
int64_t rcx_10 = arg1[0xb]
arg1[0xa] = 0
j_sub_140a74f90(rcx_10)
int64_t rcx_11 = arg1[0xd]
arg1[0xb] = 0
j_sub_140a74f90(rcx_11)
int64_t rcx_12 = arg1[0xc]
arg1[0xd] = 0
arg1[0xe] = 0
int64_t result = j_sub_140a74f90(rcx_12)
arg1[0xc] = 0
return result
