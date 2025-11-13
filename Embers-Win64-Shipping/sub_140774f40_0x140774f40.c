// 函数: sub_140774f40
// 地址: 0x140774f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
float zmm7[0x4] = __maxss_xmmss_memss(arg2[0], 0x41a00000)
float zmm6[0x4] = _mm_max_ss(__minss_xmmss_memss(arg3[0], 0x469c4000)[0], zmm7[0])
int32_t rdi

if (arg4 s>= 1)
    rdi = 0x4000
    
    if (arg4 s< 0x4000)
        rdi = arg4
else
    rdi = 1

char rdx

if (zmm7[0] f== *(arg1 + 0x1e0))
    rdx = 0
else
    rdx = 1

if (zmm6[0] f== *(arg1 + 0x1e4))
    arg1.b = 0
else
    arg1.b = 1

int32_t result_1 = 0
int32_t result = 0

if (0 == *(rbx + 0x1e8))
    *(rbx + 0x1e8) = 0
else
    result = *(rbx + 0x1e8)

int64_t rbp

if (rdx != 0 || arg1.b != 0 || rdi != result)
    rbp.b = 1
else
    rbp.b = 0

if (rdi != result)
    result = sub_140775a20(rbx, *(rbx + 0x1f0), rdi)

if (rbp.b != 0)
    int64_t* rcx_1 = *(rbx + 0x230)
    int32_t rbp_1
    
    if (rcx_1 == 0)
        rbp_1 = 0
    else
        rbp_1 = (*(*rcx_1 + 8))(rcx_1)
    
    result, zmm6, zmm7 = sub_140774a30(rbx, zmm7, zmm6, *(rbx + 0x1f4), rdi)
    int64_t* rcx_3 = *(rbx + 0x230)
    
    if (rcx_3 != 0)
        result = (*(*rcx_3 + 8))(rcx_3)
        result_1 = result
    
    if (result_1 != rbp_1)
        result, zmm6, zmm7 = sub_140775dd0(rbx, *(rbx + 0x1f0), result_1)

*(rbx + 0x1e0) = zmm7[0]
*(rbx + 0x1e4) = zmm6[0]
*(rbx + 0x1e8) = rdi
return result
