// 函数: sub_14222bee0
// 地址: 0x14222bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
float var_48 = 1f
int32_t var_44 = 0x3f800000
void* rdi = &arg1[0x24]
int32_t var_40 = 0x3f800000
float zmm1[0x4]

if (arg2 != 0)
label_14222bf49:
    
    if (rbx != 0)
        zmm1 = *(rbx + 0x1e0)
        rdi = &rbx[0x55]
        var_48 = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_40_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        float var_44_1 = temp0_1[0]
        void* rax_4 = sub_1425974e0()
        void* rcx_1 = rbx[2]
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
            void* r8_2
            r8_2.b = 1
            void* rax_8 = (*(*rbx + 0x6a8))(rbx, arg1[0x10], r8_2)
            
            if (rax_8 != 0)
                rdi = rax_8
else
    rbx = arg1[4]
    
    if (rbx != 0)
        void* rax_1 = sub_142577430()
        void* rdx = rbx[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            goto label_14222bf49

if ((*(rdi + 0xc) & 0x20) != 0)
    return *(rdi + 0x5c)

void* rax_9
float zmm0_1[0x4]
rax_9, zmm0_1 = sub_142218330(rdi)
int128_t zmm9 = *(rdi + 0x88)
float zmm6[0x4] = 0x3f800000
float zmm7[0x4] = 0x3f400000

if (rax_9 != 0)
    zmm6 = *(rax_9 + 0x38)
    zmm6[0] = zmm6[0] * 0.00100000005f
    zmm7 = *(rax_9 + 0x3c)
    zmm6 = __maxss_xmmss_memss(zmm6[0], 0x38bcbe62)

(*(*arg1 + 0x268))(arg1, &var_48)
zmm1 = 0x38d1b717
bool cond:1 = zmm7[0] < 9.99999975e-05f
float temp0_4[0x4] = _mm_max_ss(zmm0_1[0], 0)
temp0_4[0] = temp0_4[0] * zmm6[0]

if (not(cond:1))
    zmm1 = __minss_xmmss_memss(zmm7[0], 0x3f800000)

return powf(temp0_4[0], zmm1[0]) f* zmm9.d
