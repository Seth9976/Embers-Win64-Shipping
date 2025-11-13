// 函数: sub_141dd1680
// 地址: 0x141dd1680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x130)
int64_t rsi

if (rbx == 0)
    rsi = 0
else
    rsi = *(rbx + 0xc0)

uint64_t var_78
int32_t r12
int32_t r14
int32_t r15
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8

if (rbx == 0)
    int32_t var_70
    r14 = var_70
    zmm6 = zx.o(var_78)
    r15 = var_70
    zmm7 = zx.o(var_78)
    r12 = var_70
    zmm8 = zx.o(var_78)
else
    zmm6 = zx.o(*(rbx + 0x128))
    r14 = *(rbx + 0x130)
    zmm7 = zx.o(*(rbx + 0x11c))
    r15 = *(rbx + 0x124)
    zmm8 = zx.o(*(rbx + 0x134))
    r12 = *(rbx + 0x13c)

sub_140ce32d0(arg1)
sub_141dd5990(arg1)
void* result = *(arg1 + 0x130)

if (result != 0 && rbx != 0 && rbx != result)
    result = sub_140d23d40(rbx, arg1)
    
    if (result.b != 0)
        void* rcx_2 = *(arg1 + 0x130)
        var_78 = zmm6.q
        int32_t var_70_1 = r14
        sub_141f48ec0(rcx_2, &var_78)
        void* rcx_3 = *(arg1 + 0x130)
        var_78 = zmm7.q
        int32_t var_70_2 = r15
        sub_141f48c60(rcx_3, &var_78)
        void* rcx_4 = *(arg1 + 0x130)
        var_78 = zmm8.q
        int32_t var_70_3 = r12
        sub_141f49070(rcx_4, &var_78)
        void* rdx_5 = *(rbx + 0xc0)
        void* rax = rdx_5
        int64_t arg_8
        
        if (rdx_5 != 0)
            void* rcx_5 = *(arg1 + 0x130)
            
            if (rdx_5 != rcx_5)
                arg_8 = 0
                sub_141f4a650(rcx_5, rdx_5, 0)
                rax = *(rbx + 0xc0)
        
        if (rax == rsi)
            void* rdx_6 = *(arg1 + 0x130)
            
            if (rax != rdx_6)
                arg_8 = 0
                sub_141f4a650(rbx, rdx_6, 0)
        
        int32_t rax_1 = data_143dbb210
        var_78 = data_143dbb208
        int32_t var_70_4 = rax_1
        sub_141f48ec0(rbx, &var_78)
        int32_t rax_2 = data_143dbb200
        var_78 = data_143dbb1f8.q
        int32_t var_70_5 = rax_2
        sub_141f48c60(rbx, &var_78)
        int32_t var_60_1 = 0x3f800000
        var_78 = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
        int32_t var_70_6 = 0x3f800000
        return sub_141f49070(rbx, &var_78)

return result
