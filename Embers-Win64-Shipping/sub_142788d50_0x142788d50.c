// 函数: sub_142788d50
// 地址: 0x142788d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
sub_140d21e40(rcx, rcx, arg2)
void* rax_1 = *(*(*arg1 + 0xa0) + 0x130)
int128_t* rax_2

if (rax_1 == 0)
    rax_2 = &data_143dbb0c0
else
    rax_2 = rax_1 + 0x1c0

*(arg2 + 0x80) = *rax_2
*(arg2 + 0x90) = rax_2[1]
*(arg2 + 0xa0) = rax_2[2]
void* rax_3 = *arg1

if (*(rax_3 + 0xcc) == 0)
    arg2[0x16] = *(rax_3 + 0xd0)
    arg2[0x17].d = *(rax_3 + 0xd8)
    void* rax_5 = *arg1
    *(arg2 + 0xbc) = *(rax_5 + 0xdc)
    *(arg2 + 0xc4) = *(rax_5 + 0xe4)
    rax_3 = *arg1

arg2[0x1c].d = *(rax_3 + 0xbc)
arg2[0x19].b = *(*arg1 + 0xba)
*(arg2 + 0xca) = *(*arg1 + 0xb8)
int64_t rax_11 = *(*arg1 + 0x130)
arg2[0x1b] = rax_11
void* rbx = arg1[2]

if (rbx != 0)
    void* rax_12 = sub_142488170()
    void* rdx_1 = *(rbx + 0x10)
    rax_11 = sx.q(*(rax_12 + 0x38))
    
    if (rax_11.d s<= *(rdx_1 + 0x38))
        int64_t rcx_3 = rax_11
        rax_11 = *(rdx_1 + 0x30)
        
        if (*(rax_11 + (rcx_3 << 3)) == rax_12 + 0x30)
            *(arg2 + 0xc9) = 2
            float zmm1[0x4] = *(rbx + 0x1e0)
            float temp0_2[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm1, zmm1, 0x55)[0], zmm1[0])
            float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            temp0_3[0] = temp0_3[0] f* *(rbx + 0x420)
            temp0_2[0] = temp0_2[0] f* *(rbx + 0x424)
            *(arg2 + 0x6c) = temp0_3[0]
            arg2[0xe].d = temp0_2[0]
            return rax_11
    
    void* rbx_1 = arg1[2]
    
    if (rbx_1 != 0)
        void* rax_13 = sub_1424814a0()
        void* rdx_2 = *(rbx_1 + 0x10)
        rax_11 = sx.q(*(rax_13 + 0x38))
        float zmm2_1[0x4]
        
        if (rax_11.d s<= *(rdx_2 + 0x38))
            int64_t rcx_4 = rax_11
            rax_11 = *(rdx_2 + 0x30)
            
            if (*(rax_11 + (rcx_4 << 3)) == rax_13 + 0x30)
                *(arg2 + 0xc9) = 0
                zmm2_1 = *(rbx_1 + 0x1e0)
                zmm2_1[0] = zmm2_1[0] f* *(rbx_1 + 0x420)
                float temp0_4[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                temp0_4[0] = temp0_4[0] f* *(rbx_1 + 0x424)
                float temp0_5[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                temp0_5[0] = temp0_5[0] f* *(rbx_1 + 0x428)
                arg2[0xc] = (_mm_unpacklo_ps(zmm2_1, temp0_4[0].q)).q
                float var_10 = temp0_5[0]
                arg2[0xd].d = var_10
                return var_10
        
        void* rbx_2 = arg1[2]
        
        if (rbx_2 != 0)
            void* rax_15 = sub_1425a4300()
            void* rdx_3 = *(rbx_2 + 0x10)
            rax_11 = sx.q(*(rax_15 + 0x38))
            
            if (rax_11.d s<= *(rdx_3 + 0x38))
                int64_t rcx_5 = rax_11
                rax_11 = *(rdx_3 + 0x30)
                
                if (*(rax_11 + (rcx_5 << 3)) == rax_15 + 0x30)
                    *(arg2 + 0xc9) = 1
                    zmm2_1 = __andps_xmmxud_memxud(*(rbx_2 + 0x1e0), data_143f88580)
                    float temp0_11[0x4] = _mm_min_ps(
                        _mm_min_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)), 
                        _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2))
                    temp0_11[0] = temp0_11[0] f* *(rbx_2 + 0x420)
                    *(arg2 + 0x74) = temp0_11[0]

return rax_11
