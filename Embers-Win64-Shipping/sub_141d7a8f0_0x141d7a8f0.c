// 函数: sub_141d7a8f0
// 地址: 0x141d7a8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x18)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_143232d08
    rbx[1] = 0
    rbx[2] = 0

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

int32_t rcx = sx.d(arg1[0xd].b)
int16_t* const rbp = &data_142d40450
int16_t* const r9 = &data_142d40450

if (rcx == 0)
    r9 = u".png"
else if (rcx == 1)
    r9 = u".jpg"
else if (rcx == 3)
    r9 = u".bmp"
else if (rcx == 5)
    r9 = u".exr"

int64_t var_38
int64_t* rax_3 = (*(*arg1 + 0x2d0))(arg1, &var_38, arg3, r9, 0)

if (&rbx[1] != rax_3)
    int64_t rcx_4 = rbx[1]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rbx[1] = *rax_3
    *rax_3 = 0
    rbx[2].d = rax_3[1].d
    *(rbx + 0x14) = *(rax_3 + 0xc)
    rax_3[1] = 0

int64_t rcx_6 = var_38

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_141d782c0(arg1, &rbx[1])

if (rbx[2].d != 0)
    rbp = rbx[1]

int64_t var_28
int64_t* rax_6 = sub_140b3b600(&var_28, rbp, &arg1[0xe])

if (&rbx[1] != rax_6)
    int64_t rcx_9 = rbx[1]
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    rbx[1] = *rax_6
    *rax_6 = 0
    rbx[2].d = rax_6[1].d
    *(rbx + 0x14) = *(rax_6 + 0xc)
    rax_6[1] = 0

int64_t rcx_11 = var_28

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

*arg2 = rbx
arg2[1] = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1
    
    if (rax_1 != 0)
        rax_1[1].d -= 1
        
        if (rax_1[1].d == 1)
            (**rax_1)(rax_1)
            int32_t rdi_1 = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*rax_1)[1](rax_1, zx.q(rdi_1))

return arg2
