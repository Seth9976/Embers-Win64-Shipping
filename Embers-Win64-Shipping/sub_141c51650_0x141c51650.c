// 函数: sub_141c51650
// 地址: 0x141c51650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x6a].d
int64_t* rcx
int64_t* r8

if (rax == 0)
    r8 = arg1[0x69]
    rcx = nullptr
else
    rcx = arg1[0x69]
    r8 = rcx

int64_t rax_1

if (rcx != 0)
    rax_1 = *rcx
label_141c5169a:
    (*(rax_1 + 0x38))(rcx, 0)
    int64_t rcx_1 = arg1[0x69]
    
    if (rcx_1 != 0)
        arg1[0x69] = sub_140a84c80(rcx_1, 0, 0)
    
    arg1[0x6a].d = 0
else if (rax != 0 && r8 != 0)
    rax_1 = *r8
    rcx = r8
    goto label_141c5169a
int64_t rcx_2 = arg1[0x69]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x65]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

for (void* i = arg1[0x63]; i != 0; i = arg1[0x63])
    arg1[0x63] = *arg1[0x63]
    
    if (i != 0)
        int64_t rcx_4 = *(i + 8)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        j_sub_140a74f90(i)

return sub_1406240b0(arg1) __tailcall
