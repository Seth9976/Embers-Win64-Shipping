// 函数: sub_141806ce0
// 地址: 0x141806ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
void* r15 = nullptr

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        r15 = *(arg1 + 8)

void* var_48 = r15
int64_t* var_40 = rbx

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    rbx[1].d = rax_2
    
    if (rax_2 == 0)
        (**rbx)(rbx)
        int32_t temp0_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rcx_2 = *(arg1 + 0x58)
int64_t (* var_58)(int64_t* arg1, void* arg2, int32_t arg3, int32_t arg4)
int64_t* rax_6 = (**rcx_2)(rcx_2, &var_58)

if (arg1 + 0x140 != rax_6)
    int64_t rcx_3 = *(arg1 + 0x140)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *(arg1 + 0x140) = *rax_6
    *rax_6 = 0
    *(arg1 + 0x148) = rax_6[1].d
    *(arg1 + 0x14c) = *(rax_6 + 0xc)
    rax_6[1] = 0

int64_t (* rcx_5)(int64_t* arg1, void* arg2, int32_t arg3, int32_t arg4) = var_58

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (*(arg1 + 0x128) != 0)
    sub_1418084f0(arg1)

int64_t* rcx_7 = *(arg1 + 0x58)
var_58 = sub_1418048b0
int32_t var_50 = 0
int128_t zmm0 = var_58.o
var_58.o = zmm0
sub_1417fdc40((*(*rcx_7 + 0x98))(zmm0), &var_48, &var_58)
int64_t* rcx_9 = *(r15 + 0x58)
void* rsi_1 = *(arg1 + 0x150)
char rax_12 = (*(*rcx_9 + 0x88))(rcx_9)

if (rax_12 == 0)
label_141806ee8:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int128_t zmm6
    zmm6.q = float.d(performanceCount)
    zmm6.q = zmm6.q f* data_143d796f8
    zmm6.q = zmm6.q f+ 16777216.0
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t rbp_1 = sx.q(*(rsi_1 + 0x30))
    int32_t rax_13 = (rbp_1 + 1).d
    *(rsi_1 + 0x30) = rax_13
    
    if (rax_13 s> *(rsi_1 + 0x34))
        sub_1405c4ec0(rsi_1 + 0x28)
    
    int64_t rax_14 = *(rsi_1 + 0x28)
    int64_t rcx_13 = rbp_1 * 5
    *(rax_14 + (rcx_13 << 3) + 8) = zmm6.q
    *(rax_14 + (rcx_13 << 3)) = 0
    *(rax_14 + (rcx_13 << 3) + 4) = 0
    *(rax_14 + (rcx_13 << 3) + 0x10) = performanceCount
    *(rax_14 + (rcx_13 << 3) + 0x18) = r15
    *(rax_14 + (rcx_13 << 3) + 0x20) = rbx
    
    if (rbx != 0)
        int32_t rax_15 = rbx[1].d
        rbx[1].d = rax_15
        
        if (rax_15 == 0)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)
        
        goto label_141806ee8

return zx.q(rax_12)
