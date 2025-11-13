// 函数: sub_141d7da10
// 地址: 0x141d7da10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void*** rax_2 = j_sub_140a82f30(0x90)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    *rbx = &data_142d56fb8
    rbx[1] = 0
    rbx[2] = 0
    rbx[3].b = 3
    *(rbx + 0x1c) = 0
    rbx[4].b = 1
    rbx[6] = 0
    rbx[8] = 0
    __builtin_memset(&rbx[0xe], 0, 0x18)

int64_t rbp = *arg2
*arg2 = 0
int64_t r15 = sx.q(arg2[1].d)
int64_t r12 = sx.q(*(arg2 + 0xc))
arg2[1] = 0
void*** rax_3 = j_sub_140a82f30(0x40)

if (rax_3 == 0)
    rax_3 = nullptr
else
    *rax_3 = &data_142d56f80
    rax_3[1] = arg2[2]
    rax_3[2].d = 0
    *(rax_3 + 0x14) = 0x801
    *(rax_3 + 0x16) = 4
    rax_3[3] = 0
    rax_3[4] = 0
    *rax_3 = &data_142d56fd0
    rax_3[5] = rbp
    rbp = 0
    rax_3[6] = r15
    rax_3[7] = r12

int64_t* rcx_1 = rbx[0xe]
rbx[0xe] = rax_3

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

if (rbp != 0)
    sub_140a74f90(rbp)

if (arg1[0xd].b == 0)
    int64_t rbp_1 = sx.q(rbx[0x10].d)
    void** const var_58 = &data_142e52180
    void* (* rdx)(char* arg1, int64_t* arg2) = sub_1413969b0
    void*** var_68_1 = nullptr
    char var_50_1 = 0xff
    int32_t rax_5 = (rbp_1 + 1).d
    void* (* var_78_1)(char* arg1, int64_t* arg2) = sub_1413969b0
    rbx[0x10].d = rax_5
    
    if (rax_5 s> *(rbx + 0x84))
        sub_1405c4fe0(&rbx[0xf])
        rdx = var_78_1
    
    void* (** rcx_6)(char* arg1, int64_t* arg2) = &rbx[0xf][rbp_1 * 8]
    *rcx_6 = rdx
    rcx_6[2] = var_68_1
    *(rcx_6 + 0x20) = var_58.o
    int128_t var_48
    *(rcx_6 + 0x30) = var_48
    
    if (*rcx_6 == 0 && var_78_1 != 0)
        void** const* rcx_7 = &var_58
        
        if (var_68_1 != 0)
            rcx_7 = var_68_1
        
        (*rcx_7)[2](rcx_7)

char rcx_8 = arg1[0xd].b

if (rcx_8 u<= 5 && test_bit(0x2b, zx.d(rcx_8)))
    rbx[3].b = rcx_8

*(rbx + 0x1c) = (*(*arg1 + 0x2e8))(arg1)
sub_140597df0(&rbx[1], arg2[3] + 8)
int64_t* rcx_11 = arg1[0x18]
void*** var_98 = rbx
int64_t r9
r9.b = 1
void var_90
(*(*rcx_11 + 8))(rcx_11, &var_90, &var_98, r9, var_98)
int64_t* var_88

if (var_88 != 0)
    var_88[1].d -= 1
    
    if (var_88[1].d == 1)
        (**var_88)(var_88)
        int32_t rdi_1 = *(var_88 + 0xc)
        *(var_88 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_88 + 8))(var_88, zx.q(rdi_1))

void*** rcx_14 = var_98

if (rcx_14 != 0)
    (**rcx_14)(rcx_14, 1)

int64_t result = sub_141d75370(arg2)
__security_check_cookie(rax_1 ^ &var_b8)
return result
