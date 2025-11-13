// 函数: sub_141ddfb40
// 地址: 0x141ddfb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = &arg1[0x29]

for (int64_t i = 3; i != 0; )
    int64_t rcx = *(rdi - 0x20)
    rdi -= 0x20
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x1b]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x19]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x16]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xe]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xc]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[6] = &data_14323d4c8
arg1[5] = &data_142d44da8
return sub_140d163b0(arg1) __tailcall
