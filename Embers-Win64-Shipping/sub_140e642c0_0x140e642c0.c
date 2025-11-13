// 函数: sub_140e642c0
// 地址: 0x140e642c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143e20d18
uint128_t zmm0
zmm0.q = *(arg1 + 0x358) f- *(arg1 + 0x360)
int64_t r14 = *(rbx + 8)
float temp0[0x4] = _mm_cvtpd_ps(zmm0)

if (r14 != 0)
    int64_t* rbx_1 = *(rbx + 0x10)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    char r15_1 = *(arg1 + 0x598)
    *(arg1 + 0x598) = 1
    int64_t* i = *(arg1 + 0x588)
    
    for (void* rbp_3 = &i[sx.q(*(arg1 + 0x590)) * 2]; i != rbp_3; i = &i[2])
        int64_t* rcx = *i
        
        if (rcx != 0)
            int64_t var_38 = r14
            int64_t* var_30_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int512_t zmm1
            zmm1.o = temp0
            (*(*rcx + 8))(rcx, zmm1, arg1, &var_38)
    
    *(arg1 + 0x598) = r15_1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg1 + 0x2b8)
uint64_t result = sx.q(*(arg1 + 0x2c0))
void* rdi_3 = &rbx_2[result * 2]
char arg_8 = 0

if (rbx_2 != rdi_3)
    do
        void* rdx_1 = *rbx_2
        
        if (rdx_1 != 0 && *(rdx_1 + 0x20) != 0)
            j_sub_140e55560(&arg_8, rdx_1)
        
        rbx_2 = &rbx_2[2]
    while (rbx_2 != rdi_3)
    
    result = zx.q(*(arg1 + 0x2c0))

int64_t* rbx_3 = *(arg1 + 0x2b8)
void* rdi_6 = &rbx_3[sx.q(result.d) * 2]
arg_8 = 0

if (rbx_3 != rdi_6)
    do
        void* rdx_2 = *rbx_3
        
        if (rdx_2 != 0 && *(rdx_2 + 0x20) != 0)
            j_sub_140e55490(&arg_8, rdx_2)
        
        rbx_3 = &rbx_3[2]
    while (rbx_3 != rdi_6)
    
    result = zx.q(*(arg1 + 0x2c0))

void** i_1 = *(arg1 + 0x2b8)
void* rdi_9 = &i_1[sx.q(result.d) * 2]
arg_8 = 0

for (; i_1 != rdi_9; i_1 = &i_1[2])
    void* rdx_3 = *i_1
    
    if (rdx_3 != 0 && *(rdx_3 + 0x20) != 0)
        result = sub_140e5a2c0(&arg_8, rdx_3)

return result
