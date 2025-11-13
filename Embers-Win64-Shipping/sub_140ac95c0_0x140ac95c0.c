// 函数: sub_140ac95c0
// 地址: 0x140ac95c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = 0
char* rax
int512_t zmm1
int512_t zmm2
rax, zmm1, zmm2 = sub_140a752e0()
int64_t* r15 = *(arg1 + 0x60)
int64_t* rbx

if (r15 == 0)
    rbx = *(rax + 0x40)
    r15 = *(rax + 0x38)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rbp = 1
else
    rbx = 0.q

if ((rbp & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t rcx_2 = *(arg1 + 0x10)
int64_t zmm6 = (zx.o(0)).q

if (rcx_2 == 0)
    zmm6 = float.d(*(arg1 + 0x18))
else if (rcx_2 == 1)
    int64_t rax_5 = *(arg1 + 0x18)
    zmm6 = float.d(rax_5)
    
    if (rax_5 s< 0)
        zmm6 = zmm6 f+ 1.8446744073709552e+19
else if (rcx_2 == 2)
    zmm6 = _mm_cvtps_pd(*(arg1 + 0x18)).q
else if (rcx_2 == 3)
    zmm6 = *(arg1 + 0x18)

int64_t rax_7 = sub_140a845c0(*(sub_140a78440(r15, arg1 + 0x70) + 0xa0))
double zmm0 = float.d(rax_7)

if (rax_7 s< 0)
    zmm0 = zmm0 + 1.8446744073709552e+19

sub_140a20ba0(arg2, u"LOCGEN_CURRENCY(", 0x10)
int32_t var_68 = 0
char var_40 = 0
int64_t var_60 = int.q(zmm0 f* zmm6)
sub_140ac5df0(&var_68, arg2, zmm2, zmm1)
sub_140a20ba0(arg2, &data_142e64ed8, 3)
int64_t var_88
int64_t* rax_8 = sub_140a30480(arg1 + 0x70, &var_88, nullptr)
int32_t rcx_11 = rax_8[1].d
int32_t r8 = rcx_11 - 1

if (rcx_11 == 0)
    r8 = 0

sub_140a20ba0(arg2, *rax_8, r8)
int64_t rcx_13 = var_88

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

sub_140a20ba0(arg2, u"", "", 4)
int64_t rcx_15 = *(arg1 + 0x60)

if (rcx_15 != 0)
    int64_t var_78
    int64_t* rax_10 = sub_140a30480(sub_140903440(rcx_15), &var_78, nullptr)
    int32_t rcx_17 = rax_10[1].d
    int32_t r8_1 = rcx_17 - 1
    
    if (rcx_17 == 0)
        r8_1 = 0
    
    sub_140a20ba0(arg2, *rax_10, r8_1)
    int64_t rcx_19 = var_78
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)

sub_140a20ba0(arg2, &data_142e6463c, 2)
int64_t* rbx_2 = *(arg3 + 8)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rsi_1))

uint64_t result
result.b = 1
return result
