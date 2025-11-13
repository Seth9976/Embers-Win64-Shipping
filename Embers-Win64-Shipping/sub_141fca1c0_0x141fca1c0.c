// 函数: sub_141fca1c0
// 地址: 0x141fca1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140d3e110(arg1 + 0x18)

if (result == 0)
    return result

float __saved_zmm6_1[0x4] = arg2
*(arg1 + 0x20) = *(sub_140d3c6e0(arg1 + 0x18) + 0x750)
void* rax_1 = sub_140d3c6e0(arg1 + 0x18)
*(rax_1 + 0x750) = *(arg1 + 0x24)
void* rax_2 = sub_140d3c6e0(arg1 + 0x18)
arg2 = zx.o(0)
int32_t zmm1 = *(sub_140d3c6e0(arg1 + 0x18) + 0x750)

if (not(zmm1 f< 0f))
    float zmm0[0x4] = *(rax_2 + 0x74c)
    zmm0[0] = zmm0[0] - 0.00999999978f
    arg2 = _mm_min_ss(zmm0[0], zmm1)

void* rax_4 = sub_140d3c6e0(arg1 + 0x18)
*(rax_4 + 0x750) = arg2[0]
int32_t var_40_1 = 0
bool rbx_2 = *(sub_140d3c6e0(arg1 + 0x18) + 0xe29)
uint64_t (* var_48)(void* arg1, void* arg2) = sub_141faa2d0
float var_38[0x4] = var_48.o
int64_t* r14_1 = *(sub_140d3c6e0(arg1 + 0x18) + 0x770)
void* rax_7 = sub_140d3c6e0(arg1 + 0x18)
int64_t rsi_1 = *r14_1
int64_t* rax_8 = sub_140dd1ec0(&var_48, arg1, &var_38)
(*(rsi_1 + 0x40))(r14_1, int.q(*(rax_7 + 0x750) * 1000f), rax_8, zx.q(rbx_2 != 0), var_48, 
    var_40_1, var_38, __saved_zmm6_1)
uint64_t (* rax_10)(void* arg1, void* arg2)

if (var_40_1 == 0)
    rax_10 = var_48
label_141fca352:
    
    if (rax_10 != 0)
        sub_140a74f90(rax_10)
else
    uint64_t (* rcx_12)(void* arg1, void* arg2) = var_48
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x38))(rcx_12, 0)
        rax_10 = var_48
        
        if (rax_10 != 0)
            rax_10 = sub_140a84c80(rax_10, 0, 0)
            var_48 = rax_10
        
        int32_t var_40_2 = 0
        goto label_141fca352
return sub_141fbf040(sub_140d3c6e0(arg1 + 0x18), 1)
