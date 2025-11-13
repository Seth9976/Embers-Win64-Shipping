// 函数: sub_141ebd380
// 地址: 0x141ebd380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 8) u>> 4)
void* rbx

if ((result.b & 1) == 0)
    rbx = *(arg1 + 0x20)
else
    rbx = nullptr

int64_t* rbx_1 = *(rbx + 0x250)

if (rbx_1 != 0)
    void* rax_1 = sub_1424890f0()
    int64_t* rdi_1 = rbx_1[2]
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= rdi_1[7].d)
        uint64_t result_1 = result
        result = rdi_1[6]
        
        if (*(result + (result_1 << 3)) == rax_1 + 0x30)
            void* rax_2 = rdi_1[0x23]
            
            if (rax_2 == 0)
                (*(*rdi_1 + 0x390))(rdi_1)
                rax_2 = rdi_1[0x23]
            
            void* rax_4 = *(rax_2 + 0x290)
            int64_t* rcx_1 = rbx_1[0x52]
            float zmm2 = arg2[0] f* *(rax_4 + 0x420)
            arg2[0] = arg2[0] f* *(rax_4 + 0x424)
            sub_141ef53a0(rcx_1, arg2[0], zmm2, 1)
            int64_t* rcx_2 = rbx_1[0x50]
            int64_t var_68
            
            if (rcx_2 != 0)
                float var_44_1 = arg2[0]
                var_68 = (_mm_unpacklo_ps(arg2, arg2[0].q)).q
                float var_60_1 = var_44_1
                sub_141f48ee0(rcx_2, &var_68)
            
            void* rcx_4 = rbx_1[0x26]
            int32_t rax_9
            float zmm0_1[0x4]
            float zmm1[0x4]
            
            if (rcx_4 == 0)
                zmm0_1 = zx.o(data_143dbb208)
                rax_9 = data_143dbb210
            else
                zmm1 = *(rcx_4 + 0x1c0)
                void* rdi_2 = rcx_4 + 0x180
                uint32_t temp0_3 = _mm_movemask_ps(_mm_cmpeq_ps(*rdi_2, zmm1, 4))
                float var_28[0x4] = zmm1
                
                if (temp0_3 != 0)
                    *rdi_2 = zmm1
                    void var_40
                    int32_t* rax_7 = sub_140adf5d0(&var_28, &var_40)
                    *(rdi_2 + 0x10) = *rax_7
                    *(rdi_2 + 0x18) = rax_7[2]
                    rcx_4 = rbx_1[0x26]
                
                zmm0_1 = zx.o(*(rdi_2 + 0x10))
                rax_9 = *(rdi_2 + 0x18)
            
            var_68 = zmm0_1.q
            int64_t var_58 = var_68
            int32_t var_50_1 = rax_9
            float var_60_3
            
            if (rcx_4 == 0)
                float rax_11 = data_143dbb200
                var_68 = data_143dbb1f8.q
                var_60_3 = rax_11
            else
                zmm1 = *(rcx_4 + 0x1d0)
                var_68.d = zmm1[0]
                float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                var_60_3 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                var_68:4.d = temp0_4[0]
            
            float var_44_2 = var_60_3
            int64_t rax_13 = *rbx_1
            int64_t var_4c = var_68
            return (*(rax_13 + 0x4f0))(rbx_1, &var_4c, &var_58, 0, 0)

return result
