// 函数: sub_142345610
// 地址: 0x142345610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint64_t r14_1 = zx.q(arg3)
uint64_t r15_1 = zx.q(arg2)

if (arg3 == 0)
    return 

uint64_t r10_1 = zx.q(data_1439c7a78)
float zmm0

if (r15_1.d u> r10_1.d || r14_1.d u> r10_1.d)
    float zmm1 = float.s(r15_1) / float.s(r14_1)
    zmm0 = float.s(r10_1)
    
    if (r15_1.d u<= r14_1.d)
        r14_1 = zx.q(r10_1.d)
        r15_1 = int.q(zmm0 * zmm1)
    else
        r15_1 = zx.q(r10_1.d)
        r14_1 = int.q(zmm0 / zmm1)

int64_t rax_1 = *(arg1 + 8)
int64_t* r12_1 = nullptr
*(arg1 + 0x289) = 1
(*(rax_1 + 0x1a8))(arg1 + 8, 0, zx.q(r15_1.d), zx.q(r14_1.d), arg4, 0)
int64_t rsi
rsi.b = 0
int32_t rdx = data_14399fb70
int32_t rcx_2 = data_14399fb7c + 1
data_14399fb7c = rcx_2
void* const* rax = zx.q(rdx - 1)
int64_t rdi_1 = sx.q(rax.d)

if (rax.d s>= 0)
    int64_t rbx_2 = rdi_1 << 4
    int64_t temp0_1
    
    do
        int64_t rcx_3 = data_14399fb68
        
        if (*(rbx_2 + rcx_3 + 8) == 0)
            rsi.b = 1
        else
            int64_t* rcx_4 = *(rbx_2 + rcx_3)
            
            if (rcx_4 == 0)
                rsi.b = 1
            else if ((*(*rcx_4 + 0x50))(rcx_4).b == 0)
                rsi.b = 1
        
        rbx_2 -= 0x10
        temp0_1 = rdi_1
        rdi_1 -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_2 = data_14399fb7c
    rdx = data_14399fb70

data_14399fb7c = rcx_2 - 1

if (rsi.b != 0 && rcx_2 - 1 s<= 0)
    int32_t rsi_1 = rdx
    int32_t rdi_2 = 0
    
    if (rdx s> 0)
        int64_t* rbx_3 = nullptr
        
        do
            int64_t rcx_6 = data_14399fb68
            
            if (*(rbx_3 + rcx_6 + 8) == 0)
                sub_1405a4880(&data_14399fb68, rdi_2, 1, 1)
            else
                int64_t* rcx_7 = *(rbx_3 + rcx_6)
                
                if (rcx_7 == 0)
                    sub_1405a4880(&data_14399fb68, rdi_2, 1, 1)
                else if ((*(*rcx_7 + 0x20))(rcx_7) != 0)
                    sub_1405a4880(&data_14399fb68, rdi_2, 1, 1)
                else
                    rdi_2 += 1
                    rbx_3 = &rbx_3[2]
            
            rdx = data_14399fb70
        while (rdi_2 s< rdx)
    
    rax = zx.q(rdx * 2)
    
    if (rax.d s<= 2)
        rax = 2
    
    data_14399fb78 = rax.d
    
    if (rsi_1 s> rax.d && data_14399fb74 != rdx)
        sub_1405a5410(&data_14399fb68, rdx)

if (*(arg1 + 0x38) != 0)
    zmm0 = sub_1423e66c0(arg1 + 8)
    int64_t* rcx_9 = *(arg1 + 0x38)
    
    if ((*(*rcx_9 + 0x30))(rcx_9) != 0)
        sub_1423d88f0(arg1 + 8, 1, zmm0)

if (*(arg1 + 0x298) != 0)
    int64_t* rcx_11 = *(arg1 + 0x290)
    
    if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11).b != 0)
        float var_34_1 = float.s(zx.q(r14_1.d))
        
        if (*(arg1 + 0x298) != 0)
            r12_1 = *(arg1 + 0x290)
        
        (*(*r12_1 + 0x48))(r12_1, float.s(zx.q(r15_1.d)).q)

*(arg1 + 0x289) = 0
