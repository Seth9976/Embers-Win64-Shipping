// 函数: sub_1425f6c80
// 地址: 0x1425f6c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1 + 0x30
double zmm6[0x2] = arg3
int64_t* r12 = arg2
EnterCriticalSection(lpCriticalSection)
void* var_58 = nullptr
int32_t var_4c = 0
void* r13 = nullptr
int32_t i_2 = 0
void** rsi

if (&var_58 != arg1 + 0x20)
    i_2 = *(arg1 + 0x28)
    rsi = *(arg1 + 0x20)
    int32_t i_3 = i_2
    
    if (i_2 != 0)
        sub_140808ed0(&var_58, i_2, 0)
        void* r14_1 = var_58
        rsi -= r14_1
        void* rbx = r14_1 + 0x34
        int32_t i
        
        do
            *(rbx - 0x34) = *(rsi + rbx - 0x34)
            *(rbx - 0x2c) = *(rsi + rbx - 0x2c)
            *(rbx - 0x24) = *(rsi + rbx - 0x24)
            *(rbx - 0x1c) = *(rsi + rbx - 0x1c)
            *(rbx - 0xc) = 0
            uint32_t count = *(rsi + rbx - 4)
            int64_t r13_1 = *(rsi + rbx - 0xc)
            *(rbx - 4) = count
            
            if (count != 0)
                sub_1405da9e0(rbx - 0xc, count, 0)
                memcpy(*(rbx - 0xc), r13_1, count)
            else
                *rbx = 0
            
            *(rbx + 4) = *(rsi + rbx + 4)
            *(rbx + 0x14) = *(rsi + rbx + 0x14)
            rbx += 0x50
            i = i_2
            i_2 -= 1
        while (i != 1)
        i_2 = i_3
        lpCriticalSection = arg1 + 0x30
        r13 = var_58
        r12 = arg2

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

if (i_2 == 0)
label_1425f704e:
    rsi.b = 0
else
    int64_t* arg_8
    QueryPerformanceCounter(&arg_8)
    arg3 = 0x416312d000000000
    double zmm0[0x2] = zx.o(0)
    zmm0[0] = float.d(arg_8)
    zmm0[0] = zmm0[0] f* data_143d796f8
    zmm0[0] = zmm0[0] f* arg3.q
    zmm0[0] = zmm0[0] + 167772160000000.5
    int64_t rcx_6 = int.q(zmm0[0])
    
    if (rcx_6 != -0x8000000000000000 && not(float.d(rcx_6) f== zmm0[0]))
        uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
        zmm0 = zx.o(0)
        zmm0[0] = float.d(rcx_6 - (zx.q(temp0_2) & 1))
    
    int64_t rax_7 = int.q(zmm0[0])
    zmm6[0] = zmm6[0] f* arg3.q
    int64_t rax_9 = rax_7 - *(arg1 + 0x78) - *(arg1 + 0x68)
    zmm6[0] = zmm6[0] + 0.5
    int64_t rdx_3 = int.q(zmm6[0])
    
    if (rdx_3 != -0x8000000000000000)
        zmm0 = zx.o(0)
        zmm0[0] = float.d(rdx_3)
        
        if (not(zmm0[0] == zmm6[0]))
            uint32_t temp0_4 = _mm_movemask_pd(_mm_unpacklo_pd(zmm6, zmm6[0]))
            zmm6 = zx.o(0)
            zmm6[0] = float.d(rdx_3 - (zx.q(temp0_4) & 1))
    
    int64_t rbx_1 = *(r13 + 8)
    int32_t r14_2 = 0
    int64_t rax_10 = rax_9 - int.q(zmm6[0])
    
    if (rbx_1 s<= rax_10)
        void* rcx_11 = r13 + 0x38
        
        while (true)
            rbx_1 = *(rcx_11 - 0x30)
            
            if (rbx_1 s>= rax_10 && *(rcx_11 - 0x38) == 1 && *rcx_11 != 0)
                break
            
            r14_2 += 1
            rcx_11 += 0x50
            
            if (r14_2 == i_2)
                goto label_1425f704e_2
    
    char r8_2 = 0
    int32_t rdx_5 = r14_2
    
    if (r14_2 != i_2)
        void* rcx_14 = sx.q(r14_2) * 0x50 + r13
        
        do
            if (*rcx_14 == 0)
                r8_2 = 1
                break
            
            rdx_5 += 1
            rcx_14 += 0x50
        while (rdx_5 != i_2)
    
    if (sub_1425f5700(arg1, r12, r8_2) == 0 || r14_2 == i_2)
    label_1425f704e_1:
        rsi.b = 0
    else
        rsi = r13 + 0x30 + sx.q(r14_2) * 0x50
        int32_t rax_29
        
        while (true)
            rsi[-5] -= rbx_1
            int32_t rax_14 = rsi[-6].d
            int32_t r12_1
            
            if (rax_14 != 0)
                r12_1 = *(arg1 + 0xd8)
            else
                r12_1 = *(arg1 + 0xd4)
            
            int64_t* r13_2 = *(arg1 + 0x10)
            int32_t var_68 = rax_14
            int64_t* var_60_1 = nullptr
            
            if (sub_1425eda40(&var_68) != 0)
                uint32_t cbMaxLength = *rsi
                arg_8 = nullptr
                HRESULT rax_16 = MFCreateAlignedMemoryBuffer(cbMaxLength, 0, &arg_8)
                int64_t* rcx_19 = arg_8
                
                if (rax_16 s>= 0)
                    int64_t arg_20 = 0
                    
                    if ((*(*rcx_19 + 0x18))(rcx_19, &arg_20, 0, 0) s< 0)
                        rcx_19 = arg_8
                    else
                        memcpy(arg_20, rsi[-1], *rsi)
                        int64_t* rcx_21 = arg_8
                        int32_t rax_20 = (*(*rcx_21 + 0x20))(rcx_21)
                        rcx_19 = arg_8
                        
                        if (rax_20 s>= 0)
                            (*(*rcx_19 + 0x30))(rcx_19, zx.q(*rsi))
                            (*(*var_60_1 + 0x150))(var_60_1, arg_8)
                            sub_140a8bac0(&var_68, rsi[-5])
                            sub_14083bfa0(&var_68, rsi[-4])
                            int64_t* rcx_25 = *r13_2
                            int32_t rax_24 = (*(*rcx_25 + 0x30))(rcx_25, zx.q(r12_1), var_60_1)
                            rcx_19 = arg_8
                            
                            if (rax_24 s>= 0)
                                if (rcx_19 != 0)
                                    (*(*rcx_19 + 0x10))(rcx_19)
                                
                                if (var_60_1 != 0)
                                    (*(*var_60_1 + 0x10))(var_60_1)
                                
                                r14_2 += 1
                                rsi = &rsi[0xa]
                                
                                if (r14_2 != i_2)
                                    continue
                                
                                int64_t* rcx_27 = **(arg1 + 0x10)
                                rax_29 = (*(*rcx_27 + 0x58))(rcx_27)
                                break
                
                if (rcx_19 != 0)
                    (*(*rcx_19 + 0x10))(rcx_19)
            
            if (var_60_1 == 0)
                goto label_1425f704e_2
            
            (*(*var_60_1 + 0x10))(var_60_1)
            goto label_1425f704e_2
        
        if (rax_29 s< 0)
        label_1425f704e_2:
            rsi.b = 0
        else
            rsi.b = 1

void* r14_3 = var_58

if (i_2 != 0)
    void* rbx_2 = r14_3 + 0x28
    int32_t i_1
    
    do
        int64_t rcx_29 = *rbx_2
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        rbx_2 += 0x50
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r14_3 != 0)
    sub_140a74f90(r14_3)

return zx.q(rsi.b)
