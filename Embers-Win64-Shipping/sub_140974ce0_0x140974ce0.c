// 函数: sub_140974ce0
// 地址: 0x140974ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r13_1 = r15_1 * 0x78
void*** rdi_2 = *arg1 + r13_1
int32_t i

do
    remapper::~remapper(&rdi_2[5])
    *rdi_2 = &data_142e259e0
    int64_t rcx_1 = rdi_2[3]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t* rbx_1 = rdi_2[2]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi_2 = &rdi_2[0xf]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rdx = arg1[1].d
int32_t r9_2 = rdx - r15_1.d - arg3

if (arg3 s<= r9_2)
    r9_2 = arg3

if (r9_2 != 0)
    int64_t rcx_4 = *arg1
    memcpy(rcx_4 + r13_1, sx.q(rdx - r9_2) * 0x78 + rcx_4, r9_2 * 0x78)
    rdx = arg1[1].d

arg1[1].d = rdx - arg3

if (arg4 != 0)
    sub_1408096a0(arg1)
