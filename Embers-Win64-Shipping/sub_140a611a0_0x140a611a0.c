// 函数: sub_140a611a0
// 地址: 0x140a611a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg3
*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[1].w = 2
arg3.b = 1
sub_140a6db10(r12, arg1, arg3.b)
int64_t* rsi = arg2[1]
int64_t* rax = rsi

if (rsi != 0)
    int32_t rax_1 = rsi[1].d
    
    if (rax_1 == 0)
        rsi = nullptr
        rax = nullptr
    else
        rsi[1].d = rax_1 + 1
        rax = rsi

void* rcx_1 = nullptr

if (rax != 0)
    rcx_1 = *arg2

void* r15 = data_143db7a50
int128_t var_50 = zx.o(0)
struct icu_64::UObject::icu_64::RegexMatcher::VTable** rbp
void*** rdi

if (rcx_1 == 0)
    rdi = var_50:8.q
    rbp = var_50.q
else
    int32_t var_58 = 0
    rbp = sub_142a74210(rcx_1, arg1, &var_58, arg4)
    void*** rax_4 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_4
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        rax_4[1].d = 1
        *(rax_4 + 0xc) = 1
        *rbx_1 = &data_142e63330
        rbx_1[2] = rbp
    
    rdi = var_50:8.q
    var_50.q = rbp
    
    if (rbx_1 != 0)
        rdi = rbx_1
    
    var_50:8.q = rdi
    
    if (rbp != 0)
        EnterCriticalSection(r15 + 0x78)
        sub_140a5bdd0(r15 + 0xa0, &var_58, &var_50, nullptr)
        
        if (r15 != -0x78)
            LeaveCriticalSection(r15 + 0x78)

arg1[8] = rbp
arg1[9] = rdi

if (rdi != 0)
    *(rdi + 0xc) += 1
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rdi)[1](rdi, 1)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp3_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_3 = *rsi
            (*(r8_3 + 8))(rsi, 1, r8_3)

sub_140596d10(&arg1[0xa], r12)
return arg1
