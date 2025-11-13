// 函数: sub_142347ba0
// 地址: 0x142347ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg3)
int64_t* rcx = data_143e29f28
int64_t r9 = 0
uint64_t rbp = zx.q(arg2)
int64_t* rbx = arg1[0x4b]

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        r9 = arg1[0x4a]

int64_t var_18 = r9
int64_t* var_10 = rbx

if (rbx != 0)
    rbx[1].d += 1

void* var_28
int64_t result = (*(*rcx + 0x28))(rcx, &var_28, &var_18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

void* rcx_3 = var_28

if (rcx_3 != 0)
    uint128_t zmm0
    zmm0.d = float.s(rsi)
    *(rcx_3 + 0x7a8) = float.s(rbp)
    *(rcx_3 + 0x7ac) = zmm0.d
    void* rax_5 = var_28
    int64_t* rax_6
    uint64_t arg_8
    
    if (*(rax_5 + 0x779) s>= 0)
        void* rcx_5 = rax_5 + 0x7a8
        
        if (not(zx.o(0).d f!= *rcx_5))
            rcx_5 = rax_5 + 0x7a0
        
        rax_6 = &arg_8
        arg_8 = *rcx_5
    else
        rax_6 = sub_140e173b0(rax_5, &arg_8)
    int32_t zmm1 = *rax_6
    float zmm2 = *(rax_6 + 4)
    zmm0 = var_28.o
    int64_t* rcx_6 = *(data_143e20d08 + 0x20)
    var_18.o = zmm0
    void* rax_8 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    (*(*rcx_6 + 0x30))(rcx_6, &var_18, int.q(zmm1), int.q(zmm2))
    int64_t* rcx_7 = *(var_28 + 0x910)
    result = (*(*arg1 + 0x18))(arg1, zx.q(rbp.d), zx.q(rsi.d), zx.q((*(*rcx_7 + 0x68))(rcx_7)))

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp3_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*var_20 + 8))(var_20, 1)

return result
