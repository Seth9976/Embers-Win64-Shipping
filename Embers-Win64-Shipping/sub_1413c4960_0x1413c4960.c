// 函数: sub_1413c4960
// 地址: 0x1413c4960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_3 = 4
int64_t* rbx = &arg1[0xf]
int64_t i_4 = 4
int64_t i

do
    int64_t* rcx = rbx[-8]
    
    if (rcx != 0 && rbx[-9] != 0)
        (*(*rcx + 0x10))(rcx, &rbx[-9])
        rbx[-8] = 0
    
    int64_t* rcx_1 = *rbx
    
    if (rcx_1 != 0 && rbx[-1] != 0)
        (*(*rcx_1 + 0x10))(rcx_1, &rbx[-1])
        *rbx = 0
    
    rbx = &rbx[2]
    i = i_4
    i_4 -= 1
while (i != 1)
int64_t i_1 = 4
void* rdi = &arg1[0x1a]

do
    int64_t* rcx_2 = *(rdi - 8)
    rdi -= 8
    i_1 -= 1
    
    if (rcx_2 != 0)
        rcx_2[9].d -= 1
        
        if (rcx_2[9].d == 1)
            sub_140a2f6e0(rcx_2)
while (i_1 != 0)

int64_t i_2 = 4
void* rbx_1 = &arg1[0x16]

do
    int64_t* rcx_3 = *(rbx_1 - 8)
    rbx_1 -= 0x10
    i_2 -= 1
    
    if (rcx_3 != 0 && *rbx_1 != 0)
        (*(*rcx_3 + 0x10))(rcx_3, rbx_1)
        *(rbx_1 + 8) = 0
    
    sub_14081c9d0(rbx_1)
while (i_2 != 0)

void* rbx_2 = &arg1[0xe]

do
    int64_t* rcx_5 = *(rbx_2 - 8)
    rbx_2 -= 0x10
    i_3 -= 1
    
    if (rcx_5 != 0 && *rbx_2 != 0)
        (*(*rcx_5 + 0x10))(rcx_5, rbx_2)
        *(rbx_2 + 8) = 0
    
    sub_14081c9d0(rbx_2)
while (i_3 != 0)

int64_t rcx_7 = arg1[2]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return sub_1405d1550(arg1) __tailcall
