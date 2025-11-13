// 函数: sub_1417d82a0
// 地址: 0x1417d82a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x50)
int128_t var_38 = arg5

if (rbx != 0)
    int64_t rbx_1 = *rbx
    void var_48
    int64_t* rax_1 = sub_140596d10(&var_48, arg4)
    
    if ((*(rbx_1 + 0xd0))(*(arg1 + 0x50), arg2, arg3, rax_1, arg6.d) != 0)
        int32_t* rax_3 = *(arg3 + 0xd0)
        int32_t r12
        int32_t r15
        
        if (rax_3 == 0)
            r15 = 0
            r12 = 0
        else
            r15 = *rax_3
            r12 = rax_3[1]
        
        int64_t* rax_4 = sub_140596d10(&var_48, arg4)
        void* rax_5 = sub_140cde0b0()
        sub_140d19010(rax_5, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        int64_t arg_8 = 0
        void* result
        float zmm6
        result, zmm6 = sub_140d2dfc0(sub_1417e5870(), rax_5, 0, 0, 0, 0, 0, 0, 0)
        *(result + 0x30) = arg3
        sub_140597df0(result + 0x38, rax_4)
        *(result + 0x48) = zmm6
        
        if (r15 s<= 1)
            r15 = 1
        
        *(result + 0x50) = 0
        uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(r12))
        *(result + 0x4c) = zmm6 f/ _mm_cvtepi32_ps(zx.o(r15)).d f* zmm1.d
        int64_t rcx_6 = *rax_4
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rdi_2 = sx.q(*(arg2 + 0x50))
        int32_t rax_7 = (rdi_2 + 1).d
        *(arg2 + 0x50) = rax_7
        
        if (rax_7 s> *(arg2 + 0x54))
            sub_1405a4d70(arg2 + 0x48)
        
        *(*(arg2 + 0x48) + (rdi_2 << 3)) = result
        int64_t rcx_8 = *arg4
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        return result

int64_t rcx_9 = *arg4

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return 0
