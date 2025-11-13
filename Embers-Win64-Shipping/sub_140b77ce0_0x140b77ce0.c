// 函数: sub_140b77ce0
// 地址: 0x140b77ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[3]
int64_t rbx = -1
*arg1 = &data_142e80238
arg1[1] = 0
arg1[2] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 0
arg1[9] = 0
arg1[0xa].d = 0
__builtin_memset(&arg1[0xb], 0, 0x1c)
arg1[0xf].w = 0
void* rcx = &arg1[0x12]
arg1[0x10] = 0
arg1[0x11] = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

__builtin_memset(rcx, 0, 0x1c)
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 2
arg1[0x1d] = 0
arg1[0x1e] = 0
arg1[0x1f] = 2
void var_48
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_48)

do
    rbx += 1
while ((*u"PLUGIN=")[rbx] != 0)

sub_140af2b60()

for (int16_t* i = &data_143dbb3f0; i != 0; )
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    void* rax_2 = sub_140b28470(i, u"PLUGIN=", 0)
    
    if (sub_140b2acc0(rax_2, u"PLUGIN=", &var_68, 1) == 0)
        int64_t rcx_9 = var_68
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        break
    
    int64_t var_58
    sub_140b1a780(&var_58, &var_68)
    void arg_8
    sub_1406b3860(&arg1[0x10], &arg_8, &var_58, nullptr)
    int32_t rax_5
    
    if (var_60_1 == 0)
        rax_5 = 0
    else
        rax_5 = var_60_1 - 1
    
    i = rax_2 + (sx.q(rax_5 + rbx.d) << 1)
    int64_t rcx_7 = var_58
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = var_68
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

sub_140b86a20(&arg1[1], &arg1[0x10])
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_48)
return arg1
