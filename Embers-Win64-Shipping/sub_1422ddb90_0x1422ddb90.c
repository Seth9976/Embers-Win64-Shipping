// 函数: sub_1422ddb90
// 地址: 0x1422ddb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg4
void*** rax = j_sub_140a82f30(0x30)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    int32_t rdx = arg3[1].d
    rbx[1].d = 0
    *rbx = &data_1432d78b8
    *(rbx + 0xc) = 0
    *(rbx + 0xe) = 0
    __builtin_memset(&rbx[2], 0, 0x11)
    rbx[5] = arg2
    sub_14084ee30(&rbx[2], rdx)

int32_t i = 0

if (arg3[1].d s> 0)
    void** r14_1 = nullptr
    
    do
        sub_1422dd950(*(r14_1 + *arg3), 0, zx.q(arg1), arg2, &rbx[2])
        i += 1
        r14_1 = &r14_1[1]
    while (i s< arg3[1].d)
    
    rbp = arg4

void*** result_2 = j_sub_140a82f30(0x18)

if (result_2 == 0)
    result_2 = nullptr
else
    result_2[1].d = 1
    *result_2 = &data_142d42ea8
    *(result_2 + 0xc) = 1
    result_2[2] = rbx

uint64_t result_1 = result_2
int64_t rbx_1 = sx.q(rbp[1].d)
int32_t rax_1 = (rbx_1 + 1).d
rbp[1].d = rax_1

if (rax_1 s> *(rbp + 0xc))
    sub_1405a4f90(rbp)

int64_t* rcx_6 = (rbx_1 << 4) + *rbp
*rcx_6 = rbx
rcx_6[1] = result_1
uint64_t result = result_1

if (result != 0)
    *(result + 8) += 1
    int64_t* result_3 = result_1
    
    if (result_3 != 0)
        result = zx.q(result_3[1].d)
        result_3[1].d -= 1
        
        if (result.d == 1)
            result = (**result_3)(result_3)
            int32_t rdi_1 = *(result_3 + 0xc)
            *(result_3 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*result_3 + 8))(result_3, zx.q(rdi_1))

return result
