// 函数: sub_1419948f0
// 地址: 0x1419948f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sub_141993030(&arg1[0xe])
int64_t* rcx_1 = arg1[0xb]

if (rcx_1 != 0)
    rcx_1[9].d -= 1
    
    if (rcx_1[9].d == 1)
        r9 = sub_140a2f6e0(rcx_1)

int64_t rcx_2 = arg1[8]

if (rcx_2 != 0)
    r9 = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[6]

if (rcx_3 != 0)
    r9 = sub_140a74f90(rcx_3)

int32_t i_2 = arg1[5].d
int64_t* rbx = arg1[4]

if (i_2 != 0)
    int32_t i
    
    do
        int64_t* rcx_4 = *rbx
        
        if (rcx_4 != 0)
            r9 = sub_1419aa220(rcx_4)
        
        rbx = &rbx[1]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = arg1[4]

if (rbx != 0)
    r9 = sub_140a74f90(rbx)

int32_t i_3 = arg1[3].d
int64_t* rbx_1 = arg1[2]

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t* rcx_6 = *rbx_1
        
        if (rcx_6 != 0)
            r9 = sub_1419aa220(rcx_6)
        
        rbx_1 = &rbx_1[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[2]

if (rbx_1 != 0)
    r9 = sub_140a74f90(rbx_1)

bool cond:0 = arg1[1].d == 0xffffffff
*arg1 = &data_142d54860

if (cond:0 || data_143de542b != 0)
    return &data_142d54860

sub_140af98a0("Unknown", 0x95, u"A FRenderResource was deleted without being released first!", r9)
return sub_140afbb40()
