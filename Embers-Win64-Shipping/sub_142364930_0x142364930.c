// 函数: sub_142364930
// 地址: 0x142364930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x438) != 0)
    int64_t* rcx = *(arg1 + 0x430)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x438) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x430)
        
        *(arg1 + 0x420) = (*(*rcx_1 + 0x48))(rcx_1)

void* rbp = *(arg1 + 0x420)
int512_t zmm0

if (rbp != 0)
    int64_t* rax_5
    rax_5, zmm0 = sub_1425b9240()
    void* rdi_1 = rax_5[0x23]
    
    if (rdi_1 == 0)
        int64_t rdx_1 = *rax_5
        (*(rdx_1 + 0x390))(rax_5, rdx_1)
        rdi_1 = rax_5[0x23]
    
    if (rdi_1 != 0)
        int64_t arg_8
        (*(*(rbp + 0xd0) + 0x10))(rbp + 0xd0, &arg_8)
        
        if (*(arg1 + 0x4f8) == 0)
            int128_t zmm4_1
            zmm4_1.d = sub_1424112d0(rdi_1, arg_8).d f/ *(rbp + 0x1f8)
            return zmm4_1
        
        float zmm0_1 = sub_1424112d0(rdi_1, *(arg1 + 0x4f0))
        return _mm_min_ss(float.s(arg_8:4.d) f/ float.s(*(arg1 + 0x4f4)), 
            float.s(arg_8.d) / float.s(*(arg1 + 0x4f0))) * zmm0_1 f/ *(rbp + 0x1f8)

zmm0.o = 0x3f800000
return zmm0
