// 函数: sub_14204bff0
// 地址: 0x14204bff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x564) = arg4
arg1[0xac].d = 0
arg1[0xb2] = data_143dbb1f8.q
int32_t rax = data_143dbb200
arg1[0xb3].d = rax
*(arg1 + 0x584) = arg1[0xb2]
*(arg1 + 0x58c) = rax
*(arg1 + 0x59c) = 0
arg1[0xb5].d = 0

if (*(arg1 + 0x5ac) != 0)
    sub_1413f6f70(&arg1[0xb4], 0)

int64_t* rax_1 = j_sub_140a82f30(0x10)
int64_t* rsi = rax_1

if (rax_1 == 0)
    rsi = nullptr
else
    *rax_1 = 0
    rax_1[1] = 0

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx = &data_142ee2130
    rbx[2] = rsi

int64_t* var_78 = rsi
void*** var_70 = rbx

if (&arg1[0xa8] != &var_78)
    arg1[0xa8] = rsi
    var_78 = nullptr
    sub_1405aeff0(&arg1[0xa9], &var_70)
    rbx = var_70

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_5 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_5 == 1)
            (*rbx)[1](rbx, 1)

arg1[0x9b].d = 0

if (*(arg1 + 0x4dc) != 0)
    sub_1405dadb0(&arg1[0x9a], 0)

arg1[0xab].d = 0

if (*(arg1 + 0x55c) != 0)
    sub_1405dadb0(&arg1[0xaa], 0)

arg1[0xb7].d = arg3
uint64_t* rax_9
uint128_t zmm0_1

if (arg2[1].d s<= 0)
    int32_t rax_10 = data_143dbb200
    zmm0_1 = zx.o(data_143dbb1f8.q)
    int32_t var_38_1 = rax_10
    int32_t var_44_1 = rax_10
    uint64_t var_4c
    rax_9 = &var_4c
    uint64_t var_40_1 = zmm0_1.q
    var_4c = zmm0_1.q
    char var_34_1 = 0
else
    int64_t* rcx_6 = *arg2
    char var_50_1 = 1
    int32_t var_60_1 = rcx_6[1].d
    int32_t rax_8 = rcx_6[3].d
    uint64_t var_68 = *rcx_6
    int32_t var_54_1 = rax_8
    rax_9 = &var_68
    uint64_t var_5c_1 = rcx_6[2]

zmm0_1 = *rax_9
*(arg1 + 0x5dc) = arg4
int64_t zmm1 = rax_9[2]
int32_t rax_11 = rax_9[3].d
*(arg1 + 0x568) = zmm0_1
arg1[0xaf] = zmm1
arg1[0xb0].d = rax_11

if (*(arg1 + 0x564) s> 0)
    void* rcx_7 = arg1[0x88]
    
    if (rcx_7 != 0 && sub_142368cd0(rcx_7, 1, 0xffffffff) != 0)
        int64_t* rbx_1 = arg1[0xa8]
        
        if (rbx_1 != arg2)
            int64_t rcx_8 = *rbx_1
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            *rbx_1 = *arg2
            *arg2 = 0
            rbx_1[1].d = arg2[1].d
            *(rbx_1 + 0xc) = *(arg2 + 0xc)
            arg2[1] = 0

return sub_141ee8490(arg1) __tailcall
