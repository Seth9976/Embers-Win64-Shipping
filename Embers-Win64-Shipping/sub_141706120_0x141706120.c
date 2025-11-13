// 函数: sub_141706120
// 地址: 0x141706120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fc5448
arg1[0x9f] = &data_142fc5418
int32_t i_1 = arg1[0xa1].d
int64_t* rdi = arg1[0xa0]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rdi
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rdi = &rdi[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = arg1[0xa0]

if (rdi != 0)
    sub_140a74f90(rdi)

arg1[0x9c] = &data_142fc4548
int64_t rcx_2 = arg1[0x9d]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x99] = &data_142fc4548
int64_t rcx_3 = arg1[0x9a]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1417058e0(&arg1[0x96])
arg1[0x93] = &data_142fc40a0
int64_t rcx_5 = arg1[0x94]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_141705950(&arg1[0x90])
arg1[0x8d] = &data_142fc4160
int64_t rcx_7 = arg1[0x8e]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

arg1[0x8a] = &data_142fc41f0
int64_t rcx_8 = arg1[0x8b]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

arg1[0x87] = &data_142fc53b8
int64_t rcx_9 = arg1[0x88]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

arg1[0x84] = &data_142fc45c8
int64_t rcx_10 = arg1[0x85]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return sub_141706290(arg1) __tailcall
