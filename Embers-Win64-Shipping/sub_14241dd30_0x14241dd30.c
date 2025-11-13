// 函数: sub_14241dd30
// 地址: 0x14241dd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r13_1 = r15_1 * 0xc8
void* rdi_3 = *arg1 + 0x70 + r13_1
int32_t i

do
    sub_140e53610(rdi_3 + 0x30)
    sub_140e53610(rdi_3)
    int64_t* rbx_1 = *(rdi_3 - 0x18)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    sub_141b84450(rdi_3 - 0x68)
    rdi_3 += 0xc8
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rdx = arg1[1].d
int32_t r9_2 = rdx - r15_1.d - arg3

if (arg3 s<= r9_2)
    r9_2 = arg3

if (r9_2 != 0)
    int64_t rcx_5 = *arg1
    memcpy(rcx_5 + r13_1, sx.q(rdx - r9_2) * 0xc8 + rcx_5, r9_2 * 0xc8)
    rdx = arg1[1].d

arg1[1].d = rdx - arg3

if (arg4 != 0)
    sub_141cac580(arg1)
