// 函数: sub_14186c290
// 地址: 0x14186c290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe7218
*(arg1 + 0x8c)
*(arg1 + 0x8c) = 1
int64_t* i = arg1[0xf]

for (void* rsi_2 = &i[sx.q(arg1[0x10].d) * 2]; i != rsi_2; i = &i[2])
    if (*i != 0)
        while (true)
            int64_t rax_1 = *i
            
            if (rax_1 != 0)
                int64_t* rcx = *(rax_1 + 0x70)
                
                if ((*(*rcx + 0x20))(rcx, 0xffffffff, 0) != 0)
                    break

sub_14084ee30(&arg1[0xf], 0)
sub_141821a30(&arg1[0x37])
sub_1405ae100(&arg1[0x2d])
sub_1405ae100(&arg1[0x23])

while (arg1[0x21] != 0)
    int64_t* rcx_5 = arg1[0x21]
    arg1[0x21] = *rcx_5
    j_sub_140a74f90(rcx_5)

while (arg1[0x1f] != 0)
    int64_t* rcx_6 = arg1[0x1f]
    arg1[0x1f] = *rcx_6
    j_sub_140a74f90(rcx_6)

while (arg1[0x1d] != 0)
    int64_t* rcx_7 = arg1[0x1d]
    arg1[0x1d] = *rcx_7
    j_sub_140a74f90(rcx_7)

sub_141865fc0(&arg1[0x18])
DeleteCriticalSection(&arg1[0x12])
sub_140596e10(&arg1[0xf])
int64_t rcx_11 = arg1[3]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

*arg1 = &data_142d56fa0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
