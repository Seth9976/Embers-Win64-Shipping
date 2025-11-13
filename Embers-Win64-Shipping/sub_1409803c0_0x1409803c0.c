// 函数: sub_1409803c0
// 地址: 0x1409803c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* result
int512_t zmm2
int128_t zmm6_1
result, zmm2, zmm6_1 = sub_140d2dfc0(sub_140981170(), rax, 0, 0, 0, 0, 0, 0, 0)
void*** rax_2 = j_sub_140a82f30(0x60)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    int64_t* rcx_2 = &rdi[3]
    *rdi = &data_142e226e0
    rdi[1] = 0
    rdi[2] = 0
    rcx_2[2] = 0
    rcx_2[3].d = 0
    *(rcx_2 + 0x1c) = 0x80
    int64_t* rax_3 = rcx_2[2]
    
    if (rax_3 != 0)
        rcx_2 = rax_3
    
    *rcx_2 = 0
    rcx_2[1] = 0
    rdi[7].d = 0xffffffff
    *(rdi + 0x3c) = 0
    rdi[9] = 0
    rdi[0xa].d = 0
    *rdi = &data_142e22750
    rdi[0xb].d = 0

void*** rax_4 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_4

if (rax_4 == 0)
    rbx_1 = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rbx_1 = &data_142e22f48
    rbx_1[2] = rdi

void*** var_58 = rdi
void*** var_50 = rbx_1

if (result + 0x58 != &var_58)
    *(result + 0x58) = rdi
    var_58 = nullptr
    sub_1405aeff0(result + 0x60, &var_50)
    rbx_1 = var_50

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*rbx_1)[1](rbx_1, zx.q(rsi_1))

void*** rcx_6 = *(result + 0x58)
zmm2.o = zmm6_1
(**rcx_6)(rcx_6, &arg_18, zmm2)
sub_140d3a3a0(result + 0x50, arg2)
*(result + 0x68) = arg_18
*(result + 0x74) = arg4
*(result + 0x70) = zmm6_1.d
*(result + 0x78) = arg1
return result
