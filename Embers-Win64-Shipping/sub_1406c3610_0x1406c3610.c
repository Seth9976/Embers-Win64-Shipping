// 函数: sub_1406c3610
// 地址: 0x1406c3610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rbx = *(arg1 + 8)
void* rax = av_frame_alloc()
arg_10 = rax

if (rax == 0)
    return 0xfffffff4

while (true)
    int32_t rax_2 = sub_1406ba650(*(rbx + 0x668), arg_10, 0)
    
    if (rax_2 s< 0)
        break
    
    if (rax_2 != 0)
        int32_t rdi_1 = *(arg_10 + 0x110)
        int64_t* rax_4 = sub_1406be7c0(rbx + 0x3f0)
        
        if (rax_4 == 0)
            break
        
        int64_t rax_5 = *(arg_10 + 0x88)
        double zmm1_1
        
        if (rax_5 != -0x8000000000000000)
            zmm1_1 = float.d(rax_5) f/ _mm_cvtepi32_pd(zx.q(rdi_1)).q
        else
            zmm1_1 = -0x8000000000000
        
        rax_4[6] = zmm1_1
        rax_4[8] = *(arg_10 + 0x1a0)
        rax_4[5].d = *(*(rbx + 0x668) + 0x18)
        void* rax_8 = arg_10
        int64_t rcx_5 = *rax_4
        rax_4[7] =
            _mm_cvtepi32_pd(zx.q(*(rax_8 + 0x70))).q f/ _mm_cvtepi32_pd(zx.q(*(rax_8 + 0x110))).q
        av_frame_move_ref(rcx_5, arg_10)
        *(rbx + 0x474) += 1
        
        if (*(rbx + 0x474) == *(rbx + 0x47c))
            *(rbx + 0x474) = 0
        
        EnterCriticalSection(rbx + 0x488)
        *(rbx + 0x478) += 1
        int64_t* rcx_7 = *(rbx + 0x4b0)
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x10))(rcx_7)
        
        LeaveCriticalSection(rbx + 0x488)

av_frame_free(&arg_10)
return 0
