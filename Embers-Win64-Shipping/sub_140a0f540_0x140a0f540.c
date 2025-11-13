// 函数: sub_140a0f540
// 地址: 0x140a0f540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rcx = arg2[2]

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0)
        sub_1405a6220(sub_140a242a0(), &arg2[2])

int64_t rcx_2 = arg2[6]

if (rcx_2 != 0)
    opus_decoder_destroy(rcx_2)

int64_t rcx_3 = arg2[3]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rcx_4 = arg2[2]

if (rcx_4 != 0)
    rcx_4[9].d -= 1
    
    if (rcx_4[9].d == 1)
        sub_140a2f6e0(rcx_4)

j_sub_140a74f90(arg2[1])
sub_140a0f600(arg2, *arg2)
j_sub_140a74f90(arg2)
