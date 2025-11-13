// 函数: sub_141802080
// 地址: 0x141802080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x11].d = 2
int64_t rsi = 0
int64_t* rbx = arg1[2]

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        int32_t rax_2 = rbx[1].d
        rsi = arg1[1]
        rbx[1].d = rax_2
        
        if (rax_2 == 0)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)

int64_t var_28 = rsi
int64_t* var_20 = rbx

if (rbx != 0)
    int32_t rax_5 = rbx[1].d
    rbx[1].d = rax_5
    
    if (rax_5 == 0)
        (**rbx)(rbx)
        int32_t temp0_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void* rbx_1 = data_143ef9cf8

if (rbx_1 == 0)
    void arg_8
    int64_t rbx_2 = *sub_140b58170(&arg_8, "HTTP", (rbx_1 + 1).d)
    j_sub_140b3db50()
    j_sub_140b407e0(&data_143de7d78, rbx_2)
    rbx_1 = data_143ef9cf8

void* rbx_3 = *(rbx_1 + 0x10)
EnterCriticalSection(&data_143ef9d10)
sub_140dba5f0(rbx_3 + 0x18, &var_28)
LeaveCriticalSection(&data_143ef9d10)
uint128_t zmm1 = var_28.o
var_28.o = zmm1
int64_t* rbx_4 = _mm_bsrli_si128(zmm1, 8).q
int128_t var_18 = zx.o(0)

if (rbx_4 != 0)
    rbx_4[1].d += 1

int64_t result = sub_141801670((*(*arg1 + 0x90))(arg1), &var_28, &var_18, 0)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp3_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
