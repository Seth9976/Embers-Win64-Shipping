// 函数: sub_141b95620
// 地址: 0x141b95620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_40 = 0
int64_t* rcx = *(arg1 + 0x30)
void** (* var_60)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
uint128_t var_50
int32_t rsi

if (rcx != 0)
    char var_68 = 0
    char* var_58_1 = &var_68
    var_60 = sub_141b970e0
    sub_141befea0(rcx, &var_50, &var_60)
    rsi = 2
else
    uint128_t zmm0 = data_143e244b0.o
    var_50 = zmm0
    void* rax_1 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    rsi = 1

uint32_t rdi = zx.d(*(arg1 + 0x39))
uint32_t rbx = zx.d(*(arg1 + 0x38))
void*** rax_2 = sub_140f2aab0(*arg2, *(arg1 + 0x40), *(arg1 + 0x3c))
rax_2[4].d = rbx
*(rax_2 + 0x24) = rdi
int64_t* rdi_1 = rax_2[3]

if (rdi_1 != 0)
    rdi_1[1].d += 1

sub_140e0dfc0(rax_2)
int64_t* rbx_1 = var_50:8.q
var_60 = var_50.q

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_60 != &rax_2[2])
    var_60.o = *(rax_2 + 0x10)
    *(rax_2 + 0x10) = var_60.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t result = sub_140de7bf0(rax_2)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        result = (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rdi_1 + 8))(rdi_1, 1)

*(arg1 + 0x48) = rax_2

if ((rsi.b & 2) != 0)
    int64_t* rbx_2 = var_50:8.q
    rsi &= 0xfffffffd
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*rbx_2 + 8))(rbx_2, 1)

if ((rsi.b & 1) != 0)
    int64_t* rbx_3 = var_50:8.q
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            result = (**rbx_3)(rbx_3)
            int32_t temp9_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp9_1 == 1)
                result = (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp8_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp8_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
