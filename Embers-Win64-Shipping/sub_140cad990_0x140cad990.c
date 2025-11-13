// 函数: sub_140cad990
// 地址: 0x140cad990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x11].d = 0
int64_t rcx = arg1[0x10]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_140cb92f0(&arg1[8], 0)
int64_t rcx_2 = arg1[0xc]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[8]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[6]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int32_t i_1 = arg1[5].d
int64_t* rbx = arg1[4]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_5 = *rbx
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[4]

if (rbx != 0)
    result = sub_140a74f90(rbx)

int64_t rcx_7 = arg1[2]

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = *arg1

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
