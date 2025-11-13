// 函数: sub_140d92930
// 地址: 0x140d92930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg2[1] = 0
*arg2 = 0
arg1[3].d = arg5.d
arg1[2].d = arg3
*(arg1 + 0x14) = arg4
*(arg1 + 0x1c) = 0x3f800000
int64_t* rbx = arg1[1]
int64_t* rax_2 = rbx

if (rbx != 0)
    int32_t rax_3 = rbx[1].d
    
    if (rax_3 == 0)
        rbx = nullptr
        rax_2 = nullptr
    else
        rbx[1].d = rax_3 + 1
        rax_2 = rbx

if (rax_2 != 0)
    int64_t* rax_5 = *arg1
    
    if (rax_5 != 0)
        void* rcx = *rax_5
        char rax_6 = (*(rcx + 8)).b
        int32_t rcx_1
        
        if ((rax_6 & 1) == 0 && (rax_6 & 2) != 0)
            rcx_1 = *(*(rcx + 0x80) + 0x1c)
        
        uint128_t zmm0
        
        if ((rax_6 & 1) != 0 || (rax_6 & 2) == 0 || rcx_1 s<= 0x10000)
            zmm0 = 0x3f800000
        else
            zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_1)).d f* 1.52587891e-05f
        
        *(arg1 + 0x1c) = zmm0.d

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rcx_4 = arg2[1]

if (rcx_4 != 0)
    int32_t temp1_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

return arg1
