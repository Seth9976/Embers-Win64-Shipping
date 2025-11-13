// 函数: sub_142705ca0
// 地址: 0x142705ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d3c6e0(&arg1[0x1e])

if (result != 0)
    result = sub_140d21950(result, sub_1426a0eb0())
    
    if (result != 0)
        int64_t r8_1 = *result
        (*(r8_1 + 0x50))(result, arg1, r8_1)
        arg1[0x1e].d = 0xffffffff
        *(arg1 + 0xf4) = 0

if (*(arg1 + 0x1b9) s< 0 && (*arg2 & 1) != 0)
    void* rdi_1 = arg1[0x1d]
    
    if (rdi_1 != 0)
        int64_t* rbx_1 = arg1[0x20]
        int32_t* rcx_3
        
        if (rbx_1[0xe].d != data_143b580b8)
            rcx_3 = rbx_1[0xf]
            
            if (rcx_3 != 0)
                result = sub_14268a5a0(rcx_3, &data_143b580b8)
        
        if (rbx_1[0xe].d == data_143b580b8 || (rcx_3 != 0 && result.b != 0))
            result.b = 1
        else
            result.b = 0
        
        int64_t* rcx_4 = nullptr
        
        if (result.b != 0)
            rcx_4 = rbx_1
        
        if (rcx_4 != 0)
            void* rax_1 = *(rdi_1 + 0xb0)
            int64_t var_48
            float var_40_1
            
            if (rax_1 == 0)
                var_48 = data_143b58088
                var_40_1 = data_143b58090
            else
                float zmm1[0x4] = *(rax_1 + 0x1d0)
                var_48.d = zmm1[0]
                float zmm2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                zmm2[0] = zmm2[0] f- *(rax_1 + 0x114)
                var_48:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
                var_40_1 = zmm2[0]
            
            float zmm0[0x4] = zx.o(var_48)
            float var_34_1 = var_40_1
            int64_t rax_4 = *rcx_4
            int64_t var_3c = zmm0.q
            result = (*(rax_4 + 0x70))(zmm0, &var_3c, 0)
            
            if (result.b != 0)
                return result

if ((*arg2 & 1) != 0)
    result = arg1[0x20]
    
    if (result == 0 || ((*(result + 0x98) u>> 2).b & 1) == 0)
        result.b = 0
    else
        result.b = 1

if ((*arg2 & 1) == 0 || result.b != 0)
    result.b = 0
else
    result.b = 0x20

*(arg1 + 0x1b9) &= 0xdf
*(arg1 + 0x1b9) |= result.b
int32_t rbx_2 = arg1[0x47].d
(*(*arg1 + 0x4b0))(arg1)
sub_142717810(arg1)

if ((*(arg1 + 0x1b9) & 0x40) != 0)
    int64_t* rcx_7 = arg1[0x1d]
    
    if (rcx_7 != 0 && (*(*rcx_7 + 0x528))(rcx_7) != 0)
        int64_t* rcx_8 = arg1[0x1d]
        
        if ((*(rcx_8 + 0x124) & 2) == 0)
            sub_142714b30(rcx_8)

int64_t r15
r15.b = 0
*(arg1 + 0xe4) += 1
int32_t rax_9 = arg1[0x1b].d
int32_t rcx_9 = *(arg1 + 0xe4)
int64_t rbp_1 = sx.q(rax_9 - 1)

if (rax_9 - 1 s>= 0)
    int64_t rdi_3 = rbp_1 << 4
    int64_t temp1_1
    
    do
        int64_t rcx_10 = arg1[0x1a]
        
        if (*(rdi_3 + rcx_10 + 8) == 0)
            r15.b = 1
        else
            int64_t* rcx_11 = *(rdi_3 + rcx_10)
            
            if (rcx_11 == 0)
                r15.b = 1
            else if ((*(*rcx_11 + 0x50))(rcx_11, zx.q(rbx_2), arg2) == 0)
                r15.b = 1
        
        rdi_3 -= 0x10
        temp1_1 = rbp_1
        rbp_1 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_9 = *(arg1 + 0xe4)

*(arg1 + 0xe4) = rcx_9 - 1

if (r15.b != 0)
    sub_140599630(&arg1[0x1a], 0)

char rdi_4 = *arg2
int64_t var_30 = data_143f721c8
void var_28
sub_140d3a3a0(&var_28, arg1)
int32_t var_20_1 = rbx_2
int64_t* rbx_3 = arg1[0x14]
char var_1c_1 = rdi_4 & 1
char var_1b_1 = *arg2
void* rax_16
int64_t rax_17
void* rdx_5

if (rbx_3 != 0)
    rax_16 = sub_142497110()
    rdx_5 = rbx_3[2]
    rax_17 = sx.q(*(rax_16 + 0x38))

if (rbx_3 == 0 || rax_17.d s> *(rdx_5 + 0x38)
        || *(*(rdx_5 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
    rbx_3 = nullptr

return sub_1426eabb0(rbx_3, &var_30)
