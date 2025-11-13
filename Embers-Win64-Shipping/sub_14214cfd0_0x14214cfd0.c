// 函数: sub_14214cfd0
// 地址: 0x14214cfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q((arg1[0x14].d << 3) - arg1[0x26].d)

if (rdx != arg1[0xbd])
    void** var_d8
    void*** rax_4 = sub_140b4c4f0(&var_d8, rdx, 0)
    sub_140b4cc40(&arg1[0xa8], rax_4)
    
    if (&arg1[0xba] != &rax_4[0x12])
        int64_t rcx_3 = arg1[0xba]
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        arg1[0xba] = rax_4[0x12]
        rax_4[0x12] = 0
        arg1[0xbb].d = rax_4[0x13].d
        *(arg1 + 0x5dc) = *(rax_4 + 0x9c)
        rax_4[0x13] = 0
    
    arg1[0xbc] = rax_4[0x14]
    arg1[0xbd] = rax_4[0x15]
    arg1[0xbe].b = rax_4[0x16].b
    *(arg1 + 0x5f1) = *(rax_4 + 0xb1)
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    sub_140b4cb40(&var_d8)
else
    (*(arg1[0xa8] + 0x98))(&arg1[0xa8], rdx)

arg1[0x46].b = 0
arg1[0x47] = 0
int64_t rax_12 = *arg1
arg1[0x24] = 0
arg1[0x25] = 0
jump(*(rax_12 + 0x290))
