// 函数: sub_141e33920
// 地址: 0x141e33920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e1eab0(sub_141e23160(arg1), arg2)
void* result
int512_t zmm0
result, zmm0 = sub_141df1e90(arg1)

if (result != 0 && arg1[0x11] != 0)
    void* rbp_1 = *(result + 0x20)
    
    if (rbp_1 != 0)
        void* rax_1
        rax_1, zmm0 = sub_142591550()
        void* rdx_1 = *(rbp_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            uint32_t rax_4
            void* r8_1
            
            if (data_143de5480 != 0)
                rax_4, r8_1 = GetCurrentThreadId()
                rax_4.b = rax_4 == data_143de5470
            
            if (data_143de5480 == 0 || rax_4.b != 0)
                r8_1.b = 1
                sub_141f3e990(*(result + 0x20), 1, r8_1.b)
    
    int64_t* rbp_2 = *(result + 0x240)
    
    if (rbp_2 == 0)
        int64_t* rax_6 = (*(*result + 0x300))(result)
        *(result + 0x240) = rax_6
        rbp_2 = rax_6
    
    void* rcx_5 = *arg2
    rbp_2[0x84].w = *(rcx_5 + 0x420)
    rbp_2[0x83] = *(rcx_5 + 0x418)
    *(rbp_2 + 0x422) = *(rcx_5 + 0x422)
    (*(*arg1 + 0xd8))(arg1, *(*arg2 + 0xa0))
    zmm0.o = arg2[2].d
    int64_t var_20_1 = arg2[1]
    int64_t rax_12 = *arg1
    int32_t var_18_1 = zmm0.d
    zmm0.o = arg2[3].d
    int32_t var_14_1 = *(arg2 + 0x14)
    int32_t var_10_1 = zmm0.d
    int64_t* var_28 = rbp_2
    void arg_8
    int64_t* rax_13 = (*(rax_12 + 0xe8))(arg1, &arg_8)
    int64_t r14
    int64_t r15
    result, zmm0 = sub_141e0f600(rbp_2, &var_28, arg1[0x11], *rax_13, r14, r15, zmm0)
else if (arg1[0xc].d s> 0)
    result = arg1[0xb]
    int64_t* rcx_9 = *(result + 8)
    
    if (rcx_9 != 0)
        result = (*(*rcx_9 + 0x10))(rcx_9, arg2)

zmm0.o = zx.o(0)

if (not(zmm0.d f> *(arg1 + 0x94)))
    if (arg1[0xc].d s> 0)
        int512_t zmm1_2
        result, zmm1_2 = sub_141e10ce0(arg2)
        
        if (result != 0)
            zmm1_2.o = *(arg1 + 0x94)
            result = (*(*result + 0xd0))(result, zmm1_2)
    
    *(arg1 + 0x94) = 0xbf800000

return result
