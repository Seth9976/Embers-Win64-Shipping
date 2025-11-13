// 函数: sub_1414f6700
// 地址: 0x1414f6700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg4 + 0x20)
int128_t zmm6 = 0x3f800000
char rbx = *(rcx + 0x13c)
int32_t zmm1

if (rbx != 2)
    arg5 = 1f
    
    if (rbx != 1)
        zmm1 = (zx.o(0)).d
    else
        zmm1 = 0x3f800000
else
    (*(*rcx + 0x20))()
    arg5 = tanf(arg5)
    zmm1 = (zx.o(0)).d

if (rbx != 2)
    zmm6 = zx.o(0)

uint64_t rsi = zx.q(arg1[2])
void** const result = 0x10
float var_48 = arg5

if (rsi.d u>= 0x10)
    rsi = 0x10

int32_t var_40 = zmm6.d
float var_44 = arg6
int32_t var_3c = zmm1

if (rsi.d != 0)
    uint32_t r12_1 = zx.d(*arg1)
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    uint32_t r15_1 = zx.d(arg1[1])
    int64_t rax_2 = rsi + rbx_3
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rsi + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_2 = rsi + rbx_3
    
    *(arg2 + 0x30) = rax_2
    memcpy(rbx_3, &var_48, rsi.d)
    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_5[6]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_5[6]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_5
    *(arg2 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    result = &data_142d549d8
    rcx_5[4].d = r12_1
    *(rcx_5 + 0x24) = r15_1
    *rcx_5 = &data_142d549d8
    rcx_5[2] = arg3
    rcx_5[3] = rbx_3
    rcx_5[5].d = rsi.d

return result
